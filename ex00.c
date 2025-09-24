#include <stdio.h>

int main()
{
    char c, Conver;
    int key;

    printf("Por favor, introduce un numero (entre 1 y 5): ");
    scanf("%d", &key);
    printf("Por favor, introduce un caracter: ");
    scanf("\n%c", &c);

    if (!(((int)(c) + key) <= (int)'z' && (((int)(c) + key) >= (int)'a')))
        Conver = (char)((((int)'a') - 1) + key);
    else if (!(((int)(c) + key) <= (int)'Z' && (((int)(c) + key) >= (int)'A')))
        Conver = (char)((((int)'A') - 1) + key);
    else if (!(((int)(c) + key) <= (int)'9' && (((int)(c) + key) >= (int)'0')))
        Conver = (char)((((int)'0') - 1) + key);
    else
        key = 0;

    printf("El caracter %c con codigo ASCII %d, si se cifra con el numero %d se convertiria en el caracter %c con el codigo ASCII %d\n", c, (int)c, key, Conver, (int)Conver);
    return (0);
}