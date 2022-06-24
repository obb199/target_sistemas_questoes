#include <stdio.h>

int calcular_tamanho_string(char *);
void inverter_string(char *);

int main(){
    char a[100];
    printf("Digite uma palavra ou frase para ser invertida: ");
    scanf("%100[^\n]", a);
    inverter_string(a);
    printf("\nPalavra/frase invertida: ");
    printf("%s", a);

    return 0;
}

int calcular_tamanho_string(char * string){
    /*
    Função que recebe uma string e retorna seu tamanho.
    */
    int tamanho = 0;
    while (string[tamanho] != '\0'){
        tamanho += 1;
    }
    return tamanho;
}

void inverter_string(char * string){
    /*
    função que inverte uma string. recebe o ponteiro para a primeira posição.
    */
    int tamanho_string = calcular_tamanho_string(string);
    char aux;
    for(int i = 0; i < tamanho_string/2; i++){
        aux = string[i];
        string[i] = string[tamanho_string - i - 1];
        string[tamanho_string - i - 1] = aux;
    }
}
