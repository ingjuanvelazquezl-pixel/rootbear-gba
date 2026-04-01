#include <gba.h>
#include <stdio.h>
#include "title.h"

void showTitle(void) {
consoleDemoInit();

iprintf("\\x1b[10;8HROOT BEAR");
iprintf("\\x1b[12;4HPresiona START");

while (1) {
    scanKeys();
    if (keysDown() & KEY_START) break;
    VBlankIntrWait();
}

} 
