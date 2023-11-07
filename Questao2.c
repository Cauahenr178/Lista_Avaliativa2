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

float calcularForcaPonderada(struct Jogador jogador){
    float forca = 0;
switch (jogador.posicao){
        case 'G':
            forca = 8 * jogador.forca;
            break;
        case 'L':
            forca = 10 * jogador.forca;
            break;
        case 'Z':
            forca = 5 * jogador.forca;
            break;
        case 'V':
            forca = 8 * jogador.forca;
            break;
        case 'M':
            forca = 11 * jogador.forca;
            break;
        case 'A':
            forca = 12 * jogador.forca;
            break;
    }

    return forca / 100;
}

void LerDadosTime(struct Time *time){
    scanf(" %30[^\n]", time->nome);
    for (int j = 0; j < numero_jogadores; j++){
        scanf(" %30[^;];%c;%d", time->jogadores[j].nome, &time->jogadores[j].posicao, &time->jogadores[j].forca);
 }
}

void ExibirResultados(struct Time time1, struct Time time2){
    float forcaTime1 = 0, forcaTime2 = 0;

    for (int i = 0; i < numero_jogadores; i++){
        forcaTime1 += calcularForcaPonderada(time1.jogadores[i]);
        forcaTime2 += calcularForcaPonderada(time2.jogadores[i]);
    }

    printf("%s: %.2f de forca\n", time1.nome, forcaTime1);
    printf("%s: %.2f de forca\n", time2.nome, forcaTime2);

    if (forcaTime1 > forcaTime2){
        printf("%s eh mais forte\n", time1.nome);
    } else if (forcaTime2 > forcaTime1) {
        printf("%s eh mais forte\n", time2.nome);
    }
}

int main(){
    struct Time times[2];

    for (int i = 0; i < 2; i++){
        LerDadosTime(&times[i]);
    }
     ExibirResultados(times[0], times[1]);

    return 0;
}
