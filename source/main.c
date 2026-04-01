#include <gba.h>
#include "game.h"
#include "title.h"

int main(void) {
irqInit();
irqEnable(IRQ_VBLANK);

showTitle();

while (1) {
    gameLoop();
}

return 0;

} 
