#include <gba.h>
#include <stdlib.h>
#include <stdio.h>
#include "game.h"

int cupX = 100;
int fill = 0;
int target = 60;
int score = 0;
int combo = 0;

void gameLoop(void) {
consoleDemoInit();

while (1) {
    scanKeys();
    u16 keys = keysHeld();

    if (keys & KEY_LEFT) cupX -= 2;
    if (keys & KEY_RIGHT) cupX += 2;

    if (keys & KEY_A) {
        fill += 2;
    } else if (fill > 0) {
        int diff = abs(fill - target);

        if (diff < 5) {
            score += 100;
            combo++;
        } else if (diff < 15) {
            score += 70;
            combo = 0;
        } else {
            score += 40;
            combo = 0;
        }

        fill = 0;
        target = 50 + rand() % 40;
    }

    if (fill > 100) {
        score -= 50;
        combo = 0;
        fill = 0;
    }

    iprintf("\\x1b[2;2HScore: %d  ", score);
    iprintf("\\x1b[3;2HCombo: %d  ", combo);
    iprintf("\\x1b[5;2HFill: %d   ", fill);
    iprintf("\\x1b[6;2HTarget: %d ", target);

    VBlankIntrWait();
}

} 
