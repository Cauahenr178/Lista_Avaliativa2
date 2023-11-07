#include <stdio.h>

int main(){
    int valores[10];
    int nova_fileira[10];
    
    for (int i = 0; i < 10; i++){
        scanf("%d", &valores[i]);
    }
    
    int tamanho_novo = 10; 
    int num_iteracoes = 9;

    for (int iteracao = 0; iteracao <= num_iteracoes; iteracao++){
        for (int i = 0; i < tamanho_novo; i++){
           printf("%d", valores[i]);
          if (i < tamanho_novo - 1){
                printf(" ");
            }
        }
        printf("\n");
        
        if (iteracao == num_iteracoes){
            break;  
        }
        
        for (int i = 0; i < tamanho_novo - 1; i++){
            nova_fileira[i] = valores[i] + valores[i + 1];
        }
         tamanho_novo--;

        for (int i = 0; i < tamanho_novo; i++){
            valores[i] = nova_fileira[i];
        }
    }
    
    return 0;
}