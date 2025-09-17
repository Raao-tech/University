/* 
   Some  common Mistake
   
   Bell effect
    signed      char; == char; 
    unsigned    char;  

    Both save eigth bits, but signed save a bit to signed.  for It when we push a one unit, 
    they plus in binary, 11111111 + 1 = 1 00000000 but just save eigth bits for it leaves to 1 next
*/
#include <stdio.h>

int main(void)
{
    unsigned char u=255;
    u+=0;
    printf("u: %u\n",u);

    return (0);
}