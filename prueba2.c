#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void variable(float matriz1[23][2], float matriz2[23][2], float matriz3[23][2]);
int main(){
    int i=0, j=0;
    float matriz1[23][2];
    float matriz2[23][2];
    float matriz3[23][2];
    srand(time(NULL));


}

void opcion1(float matriz1[23][2], float matriz2[23][2], float matriz3[23][2]){
    srand(time(NULL));
    int suma[3]={0};
    int i=0, j=0;
    for(i=0;i<23;i++){
        for (j=0;j<2;j++){
            matriz1[0][j]= (float rand()/RAND_MAX) 11;
            printf("%d ", matriz1[i][j]);
        }
        printf("\n")

    }
    for(i=0;i<23;i++){
        for (j=0;j<2;j++){
            matriz1[0][j]= ((float) rand()/RAND_MAX) *11.0;
            printf("%d ", matriz2[i][j]);
        }
        printf("\n")
    }
    for(i=0;i<23;i++){
        for (j=0;j<2;j++){
            matriz1[0][j]= (float rand()/RAND_MAX) 11;
            printf("%d ", matriz3[i][j]);
        }
        printf("\n")

    }



    
}