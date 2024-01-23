#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *archivo;
    char nombreArchivo[] = "ejemplo.txt";

    archivo = fopen(nombreArchivo, "r"); // "r" es para leer ("read")

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        exit(1);
    }

    // Aquí puedes leer o procesar el archivo como necesites
    // Por ejemplo, leer línea por línea:
    char linea[100]; // Asumiendo que cada línea tiene menos de 100 caracteres
    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);
    }

    // No olvides cerrar el archivo al final
    fclose(archivo);

    return 0;
}

