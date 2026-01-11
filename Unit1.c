#include <stdio.h>
#include <string.h>
#include <math.h>

float calc(float *z, float *o)
{
    float y, g;
    g = (*o * 3.1415926535897932384) / 180;
    y = pow(pow(*z,5)*(1/cos(g))/((3 - 2 * *z) * pow(*z,1.0/3)),2);
    return y;
}

// Función para limpiar pantalla usando ANSI escape codes
void limpiarPantalla() {
    printf("\033[2J\033[H"); // limpia pantalla y mueve cursor a 0,0
}

int main()
{
    float F = 0, z = 0, o = 0;
    char opc;
    do {
        limpiarPantalla();
        printf("\n          Menu\n");
        printf("A- Ingresar valores de la raiz a calcular\n");
        printf("B- Ver resultado de la raiz\n");
        printf("C- Salir\n");
        printf("\nSeleccione una opcion: ");
        opc = getchar();
        while(getchar() != '\n'); // limpiar buffer

        limpiarPantalla();
        switch(opc)
        {
            case 'A':
            case 'a':
                printf("Ingrese el valor de Z: ");
                scanf("%f", &z);
                printf("Ingrese el valor de tita: ");
                scanf("%f", &o);
                F = calc(&z, &o);
                printf("\nCalculo realizado. Presione Enter para continuar...");
                while(getchar() != '\n'); // limpiar buffer
                getchar();
                break;

            case 'B':
            case 'b':
                printf("El valor de Y es %.2f\n", F);
                printf("\nPresione Enter para continuar...");
                getchar();
                break;

            case 'C':
            case 'c':
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida. Presione Enter para continuar...");
                getchar();
        }

    } while(opc != 'C' && opc != 'c');

    return 0;
}
