#include <stdio.h>
/* 
   Exceder el espacio de infroamción que pued eocupar una variable

   char ==> 1 byte == 8 bits == 2↑8 == 256 posibles combinaciones de 0 y 1 en las 8 casillas
   short ==> 2 bytes == 16 bits == 2↑16 == 65536 posibles combinaciones
      Unsigned shor represetna esta cantidad menos uno porque va de 0 a 65535
      pero el short normal, es cortado a la mitad y usa desde -32766 -1 hasta 32762
    
*/
int main(void)
{
    short   first = 2, second = 32766, third;

    third = second + first + 27000;

    printf("Your number is %hd\n", third);
    
    return (0);
}
