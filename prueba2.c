#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void variable(float matriz1[23][2], float matriz2[23][2], float matriz3[23][2]);
int main(){
    int i=0, j=0;
    int opcion;
    float matriz1[23][2];
    float matriz2[23][2];
    float matriz3[23][2];
    srand(time(NULL));
     do {
        printf("---- Men\xFA ----\n 1.   ");
        scanf("%d", &opcion);
//system ("cls") para borrar los mensajes mostrados anteriormente
        switch (opcion) {
            case 1:
                system("cls");
                opcion1(matriz1[23][2],matriz2[23][2], matriz3[23][2]);
                break;
            case 2:
                system("cls");
                opcion2();
                break;
            case 3:
                system("cls");
                opcion3();
                break;
            case 4:
                system("cls");
                printf("Saliendo...\n");
                break;
            default:
                system("cls");
                printf("Opcion invalida. Intente nuevamente.\n");
                break;
        }
        printf("\n");

    } while (opcion != 4);
}




void opcion1(float matriz1[23][2], float matriz2[23][2], float matriz3[23][2]){
    srand(time(NULL));
    int suma[3]={0};
    int i=0, j=0;
    for(i=0;i<23;i++){
        for (j=0;j<2;j++){
            matriz1[0][j]= ((float) rand()/RAND_MAX) *11.0;
            printf("%f ", matriz1[i][j]);
            suma[0]+=matriz1[i][j];
        }
        printf("\n");

    }
    for(i=0;i<23;i++){
        for (j=0;j<2;j++){
            matriz1[0][j]= ((float) rand()/RAND_MAX) *11.0;
            printf("%f ", matriz2[i][j]);
            suma[1]+=matriz2[i][j];
        }
        printf("\n");
    }
    for(i=0;i<23;i++){
        for (j=0;j<2;j++){
            matriz1[0][j]= ((float) rand()/RAND_MAX) *11.0;
            printf("%f ", matriz3[i][j]);
            suma[2]+=matriz3[i][j];
        }
        printf("\n");

    }
    printf("sumass %d  %d   %d  ", suma[0],suma[1],suma[3]);


    
}