#include <stdio.h>

int main()
{
    int a, b;

    printf("Introduce un numero: ");
    scanf("%d", &a);
    printf("Introduce otro numero: ");
    scanf("%d", &b);

    if (!(a % 2) && !(b % 2))
        printf("Los numeros %d y %d son pares", a, b);
    else if ((a % 2) && (b % 2))
        printf("Los numeros %d y %d son imapres", a, b);
    else if (!(a % 2))
        printf("Los numeros %d es par y el numero %d es impar", a, b);
    else
        printf("Los numeros %d es par y el numero %d es impar", b, a);

    return (0);
}