#ifndef TANNENBAUM_H
#define TANNENBAUM_H

#include "notes.h"

// O Tannenbaum 
int melody_tannenbaum[] = {

    NOTE_C5, NOTE_F5, NOTE_F5, NOTE_F5,
    NOTE_G5, NOTE_A5, NOTE_A5, NOTE_A5,
    NOTE_A5, NOTE_G5, NOTE_A5, NOTE_AS5, NOTE_E5, NOTE_G5, NOTE_F5,
    NOTE_C6, NOTE_C6, NOTE_A5, NOTE_D6, NOTE_C6, NOTE_C6, NOTE_AS5, NOTE_AS5,
    NOTE_AS5, NOTE_AS5, NOTE_G5, NOTE_C6, NOTE_AS5, NOTE_AS5, NOTE_A5, NOTE_A5,
    NOTE_C4, NOTE_F5, NOTE_F5, NOTE_F5,
    NOTE_G5, NOTE_A5, NOTE_A5, NOTE_A5,
    NOTE_A5, NOTE_G5, NOTE_A5, NOTE_AS5, NOTE_E5, NOTE_G5, NOTE_F5
};

// 8 = quarter, 4 = half, 2 = whole
int tempo_tannenbaum[] = {
    2,4,8,2,    
    2,4,8,2,    
    4,4,4,2,2,2,2,   
    4,4,4,2,4,4,4,2, 
    4,4,4,2,4,4,4,2, 
    2,4,8,2,  
    2,4,8,2,  
    4,4,4,2,2,2,2
};

const int size_tannenbaum = sizeof(melody_tannenbaum) / sizeof(int);

#endif
