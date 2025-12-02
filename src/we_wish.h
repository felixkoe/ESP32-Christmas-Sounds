#ifndef WE_WISH_H
#define WE_WISH_H

#include "notes.h"

// We Wish You a Merry Christmas
int melody_wewish[] = {

    // Zeile 1
    NOTE_G4, NOTE_C5, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_A4,
    // Zeile 2
    NOTE_A4, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_G4,
    //Zeile 3
    NOTE_G4, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_A4,
    NOTE_G4, NOTE_G4, NOTE_A4, NOTE_D5, NOTE_B4, NOTE_C5
};

// 8 = quarter, 4 = half, 2 = whole
int tempo_wewish[] = {
    // Zeile 1
    4,4,8,8,8,8,4,4,

    // Zeile 2
    4,4,8,8,8,8,4,4,

    // Zeile 3
    4,4,8,8,8,8,4,4,
    8,8,4,4,4,2
};

const int size_wewish = sizeof(melody_wewish) / sizeof(int);

#endif

