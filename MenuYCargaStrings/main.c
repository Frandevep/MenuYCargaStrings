#include <stdio.h>
#include <stdlib.h>

struct datos {
    char nombre[50];
};

int main() {
    struct datos nombres[5]; // arreglo de estructuras para almacenar 5 nombres
    int opcion;
    int nombresCargados = 0; // bandera para verificar si ya se cargaron los nombres

    do {
        printf("----- Menu -----\n");
        printf("1. Cargar nombres\n");
        printf("2. Mostrar nombres cargados\n");
        printf("3. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Cargando nombres:\n");
                for (int i=0;i<5;i++) {
                    printf("Ingrese el nombre %d: ",i+1);
                    scanf("%s", nombres[i].nombre); // leer un nombre sin espacios (maximo 49 caracteres)
                }
                nombresCargados = 1; // cambiar la bandera a verdadero
                printf("Nombres cargados exitosamente\n");
                break;

            case 2:
                if (nombresCargados) {
                    printf("\nNombres cargados:\n");
                    for (int i=0;i<5;i++) {
                        printf("%s\n", nombres[i].nombre); // imprimir cada nombre desde el arreglo de estructuras
                    }
                } else {
                    printf("\nPrimero debes cargar los nombres (opcion 1).\n");
                }
                break;

            case 3:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Intenta de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}
