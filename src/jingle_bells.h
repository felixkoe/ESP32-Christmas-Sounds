#ifndef JINGLE_BELLS_H
#define JINGLE_BELLS_H

#include "notes.h"

// jingle bells refrain
int melody_jingle[] = {
    NOTE_E5, NOTE_E5, NOTE_E5,
    NOTE_E5, NOTE_E5, NOTE_E5,
    NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5, NOTE_E5,
    NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,
    NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,
    NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_G5
};

// 8 = quarter, 4 = half, 2 = whole

int tempo_jingle[] = {
    4, 4, 2,
    4, 4, 2,
    4, 4, 4, 4, 2,
    4, 4, 4, 4, 4,
    4, 4, 8, 8,
    4, 4, 4, 2, 4
};

const int size_jingle = sizeof(melody_jingle) / sizeof(int);

#endif
