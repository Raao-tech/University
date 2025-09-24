#include <stdio.h>

int main()
{
    double note;

    printf("Introduce una calificacion numerica entre 0 y 10: ");
    scanf("%lf", &note);

    int key = (int)note;

    switch (key)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        printf("La calificacion es Suspenso.");
        break;
    case 5:
    case 6:
        printf("La calificacion es Aprobado.");
        break;
    case 7:
    case 8:
        printf("La calificacion es Notable.");
        break;
    case 9:
    case 10:
        printf("La calificacion es Sobresaliente.");
        break;
    default:
        printf("La calificacion es incorrecta.");
        break;
    }

    return (0);
}