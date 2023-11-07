#include <stdio.h>
#include <string.h>
#define numero_jogadores 11

struct Jogador{
    char nome[30];
    char posicao;
    int forca;
};

struct Time{
    char nome[30];
    struct Jogador jogadores[numero_jogadores];
};

float calcularForcaPonderada(struct Time time){
    float forca = 0;
    for (int i = 0; i < numero_jogadores; i++){
        switch (time.jogadores[i].posicao){
            case 'G':
                forca += 8 * time.jogadores[i].forca;
               break;
            case 'L':
                forca += 10 * time.jogadores[i].forca;
                break;
            case 'Z':
                forca += 5 * time.jogadores[i].forca;
                break;
            case 'V':
                forca += 8 * time.jogadores[i].forca;
                break;
            case 'M':
                forca += 11 * time.jogadores[i].forca;
                break;
            case 'A':
                forca += 12 * time.jogadores[i].forca;
                break;
        }
    }
    return forca / 100;
}
 
 int main(){
    struct Time times[2];

    for (int i = 0; i < 2; i++){
       scanf(" %30[^\n]", times[i].nome);
       for (int j = 0; j < numero_jogadores; j++){
       scanf(" %30[^;];%c;%d", times[i].jogadores[j].nome, &times[i].jogadores[j].posicao, &times[i].jogadores[j].forca);
     }
    }
    float forcaTime1 = calcularForcaPonderada(times[0]);
    float forcaTime2 = calcularForcaPonderada(times[1]);

    printf("%s: %.2f de forca\n", times[0].nome, forcaTime1);
    printf("%s: %.2f de forca\n", times[1].nome, forcaTime2);

    if (forcaTime1 > forcaTime2){
        printf("%s eh mais forte\n", times[0].nome);
    } else if (forcaTime2 > forcaTime1){
        printf("%s eh mais forte\n", times[1].nome);
    }

    return 0;
}