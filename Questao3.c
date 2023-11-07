#include <stdio.h>
#include <string.h>

int main(){
   int Matriz_A[4][4];
   int Matriz_B[4][4];
   int resultado[4][4];
   char operacao[3];
    
    for (int i = 0; i < 4; i++){
      for (int j = 0; j < 4; j++){
         scanf("%d", &Matriz_A[i][j]);
        }
    }
    for (int i = 0; i < 4; i++){
      for (int j = 0; j < 4; j++){
          scanf("%d", &Matriz_B[i][j]);
       }
    }
     scanf("%s", operacao);
  
    if (strcmp(operacao, "soma") == 0){
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++){
              resultado[i][j] = Matriz_A[i][j] + Matriz_B[i][j];
          }
        }
    } else if(strcmp(operacao, "sub") == 0){
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++){
            resultado[i][j] = Matriz_A[i][j] - Matriz_B[i][j];
          }
        }
    } else if(strcmp(operacao, "mult") == 0){
        for (int i = 0; i < 4; i++){
           for (int j = 0; j < 4; j++){
                resultado[i][j] = 0;
                for (int k = 0; k < 4; k++){
                 resultado[i][j] += Matriz_A[i][k] * Matriz_B[k][j];
              }
          }
        }
    }
    for (int i = 0; i < 4; i++){
       for (int j = 0; j < 4; j++){
            printf("%4d", resultado[i][j]);
      }
       printf("\n");
   }
    return 0;
}