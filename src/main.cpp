#include <Arduino.h>
#include "jingle_bells.h"
#include "tannenbaum.h"
#include "we_wish.h"
#include "mario.h"
#include "tetris.h"

#define BUZZER_PIN 25
#define LED_PIN_1 33
#define LED_PIN_2 5
#define BUTTON_PIN 26

#define LEDC_CHANNEL 0
#define LEDC_TIMER   0

// change this to control total song speed
const int baseDuration = 1200;

int led_col = 0;
int song_Status = 0;

const unsigned long debounceDelay = 30;      
const unsigned long multiClickTimeout = 400; 

int lastButtonState = LOW;
int stableState = LOW;
unsigned long lastDebounceTime = 0;

unsigned int clickCount = 0;
unsigned long lastClickTime = 0;

void playTone(int freq, int duration_ms) {
    if (freq == 0) {
        ledcWriteTone(LEDC_CHANNEL, 0);
        delay(duration_ms);
        return;
    }

    if (led_col == 0) {
        digitalWrite(LED_PIN_1, HIGH);
        led_col = 1;
    } else {
        digitalWrite(LED_PIN_2, HIGH);
        led_col = 0;
    }
    ledcWriteTone(LEDC_CHANNEL, freq);
    delay(duration_ms);
    ledcWriteTone(LEDC_CHANNEL, 0);
    digitalWrite(LED_PIN_2, LOW);
    digitalWrite(LED_PIN_1, LOW);
}

void playSong(int* melody, int* tempo, int length) {

    for (int i = 0; i < length; i++) {
        int noteDuration = baseDuration / tempo[i];
        playTone(melody[i], noteDuration);
        delay(noteDuration * 0.1);
    }
}

void setup() {
    pinMode(LED_PIN_1, OUTPUT);
    pinMode(LED_PIN_2, OUTPUT);
    pinMode(BUTTON_PIN, INPUT);
    ledcSetup(LEDC_CHANNEL, 5000, 8);
    ledcAttachPin(BUZZER_PIN, LEDC_CHANNEL);
}

void loop() {
    int reading = digitalRead(BUTTON_PIN);
    unsigned long now = millis();

    if (reading != lastButtonState) {
        lastDebounceTime = now;
    }

    if ((now - lastDebounceTime) > debounceDelay) {
        if (reading != stableState) {
            stableState = reading;

            if (stableState == HIGH) {
                clickCount++;
                lastClickTime = now;
            }
        }
    }

    lastButtonState = reading;

    int selectedSong = 0;

    if (clickCount > 0 && (now - lastClickTime) > multiClickTimeout) {
        if (clickCount == 1) {
            selectedSong = 1;
        } else if (clickCount == 2) {
            selectedSong = 2;
        } else if (clickCount == 3) {
            selectedSong = 3;
        } else if (clickCount == 4) {
            selectedSong = 4;
        } else {
            selectedSong = 5;
        }

        clickCount = 0;
    }


    if (selectedSong == 1) {
        playSong(melody_jingle, tempo_jingle, size_jingle);
    } else if (selectedSong == 2) {
        playSong(melody_wewish, tempo_wewish, size_wewish);
    } else if (selectedSong == 3) {
        playSong(melody_tannenbaum, tempo_tannenbaum, size_tannenbaum);
    } else if (selectedSong == 4) {
        playSong(melody_generated, tempo_generated, size_generated);
    } else if (selectedSong == 5) {
        playSong(melody_tetris, tempo_tetris, size_tetris);
    }

    delay(5);
}

