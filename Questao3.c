#include <stdio.h>
#include <string.h>

int main(){
   int a[4][4];
   int b[4][4];
   int resultado[4][4];
   char operacao[3];
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
         scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
          scanf("%d", &b[i][j]);
       }
    }
     scanf("%s", operacao);
  
    if (strcmp(operacao, "soma") == 0){
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++){
              resultado[i][j] = a[i][j] + b[i][j];
          }
        }
    } else if(strcmp(operacao, "sub") == 0){
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++){
            resultado[i][j] = a[i][j] - b[i][j];
            }
        }
    } else if(strcmp(operacao, "mult") == 0){
        for (int i = 0; i < 4; i++){
           for (int j = 0; j < 4; j++){
                resultado[i][j] = 0;
                for (int k = 0; k < 4; k++){
                 resultado[i][j] += a[i][k] * b[k][j];
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