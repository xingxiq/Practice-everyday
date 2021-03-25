#include "stdio.h"

int main()
{
    unsigned char led = 0x00;//0000 0000
    led = led | 0x55;//0101 0101
    printf("%#x\n",led);
    //led = led & 0xef;//0100 0101
    led = led & ~(1 << 4);
    printf("%#x\n",led);
    //led = led | 0x8;//0100 1101
    //led = led & 0x8;//0100 1000
    led = led | (1 << 3);
    led = led & (1 << 3);
    printf("%#x\n",led);
    
    return 0;
}
