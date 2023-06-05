#include <stdio.h>
#include <stdlib.h>
//variables que son las mismas en todas las funciones
#define ALUMNOS 23
#define PROGRESOS 3

void obtener_promedio_alumnos(int calificaciones[][PROGRESOS], float promedios_alumnos[]);
float obtener_promedio_progreso(int calificaciones[][PROGRESOS], int progreso);
int obtener_alumno_mayor_promedio(float promedios_alumnos[]);

int main() {
    // Definición de los valores de cada estudiante divididos en progresos
    int calificaciones[ALUMNOS][PROGRESOS] = {
        {1, 10, 8}, {2, 9, 7}, {3, 8, 9}, {4, 10, 9}, {5, 7, 7}, {6, 8, 9}, {7, 4, 5}, {8, 4, 6},
        {9, 3, 4}, {10, 10, 9}, {11, 8, 9}, {12, 5, 6}, {13, 9, 10}, {14, 7, 8}, {15, 5, 7},
        {16, 7, 7}, {17, 6, 6}, {18, 8, 8}, {19, 9, 9}, {20, 10, 10}, {21, 7, 8}, {22, 5, 7}, {23, 3, 4}
    };
    float promedios_alumnos[ALUMNOS];
    float promedios_progresos[PROGRESOS];
    int alumno_mayor_promedio;

    // Obtener promedio de calificaciones de cada alumno durante el semestre
    obtener_promedio_alumnos(calificaciones, promedios_alumnos);

    // Obtener la nota promedio del grupo de estudiantes para cada progreso
    for (int i = 0; i < PROGRESOS; i++) {
        promedios_progresos[i] = obtener_promedio_progreso(calificaciones, i);
    }

    // Obtener el alumno que obtuvo el mayor promedio de calificación durante el semestre
    alumno_mayor_promedio = obtener_alumno_mayor_promedio(promedios_alumnos);

    // Imprimir lo requerido
    printf("Promedio de calificaciones de cada alumno:\n");
    for (int i = 0; i < ALUMNOS; i++) {
        printf("Alumno %d: %.2f\n", i + 1, promedios_alumnos[i]);
    }

    printf("\nPromedio del grupo de estudiantes para cada progreso:\n");
    for (int i = 0; i < PROGRESOS; i++) {
        printf("Progreso %d: %.2f\n", i + 1, promedios_progresos[i]);
    }

    printf("\nAlumno con el mayor promedio de calificacion durante el semestre: Alumno %d\n", alumno_mayor_promedio + 1);

    return 0;
}

void obtener_promedio_alumnos(int calificaciones[][PROGRESOS], float promedios_alumnos[]) {
    for (int i = 0; i < ALUMNOS; i++) {
        float suma = 0.0;
        for (int j = 0; j < PROGRESOS; j++) {
            suma += calificaciones[i][j];
        }
        //se supone que con esto el promedio no deberia dar mayor de 10 T_T
        promedios_alumnos[i] = (suma / PROGRESOS);
    }
}

float obtener_promedio_progreso(int calificaciones[][PROGRESOS], int progreso) {
    float suma = 0.0;
    for (int i = 0; i < ALUMNOS; i++) {
        suma += calificaciones[i][progreso];
    }
    return suma / ALUMNOS;
}

int obtener_alumno_mayor_promedio(float promedios_alumnos[]) {
    //comparacion entre las notas de cada estudiante para saber cual es el que tiene mejor nota
    float mayor_promedio = promedios_alumnos[0];
    int indice_alumno_mayor_promedio = 0;
    for (int i = 1; i < ALUMNOS; i++) {
        if (promedios_alumnos[i] > mayor_promedio) {
            mayor_promedio = promedios_alumnos[i];
            indice_alumno_mayor_promedio = i;
        }
    }
    return indice_alumno_mayor_promedio;
}
