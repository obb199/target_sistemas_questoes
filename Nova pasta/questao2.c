#include <stdio.h>
#include <stdbool.h>

bool pertence(int);


int main(){
    int teste;
    printf("Digite um valor inteiro para ser verificado: ");
    scanf("%d", &teste);

    if (pertence(teste)){
        printf("O valor digitado pertence a sequencia.");
    }else{
        printf("O valor digitado nao pertence a sequencia.");
    }


    return 0;
}

bool pertence(int teste){
    /*
    Fun��o que verifica se um valor inteiro pertence � sequ�ncia de fibonacci.
    Retorna verdadeiro para o caso do valor estar presente e falso caso contr�rio.
    */
    if (teste == 0 || teste == 1) return true;
    if (teste < 0) return false;

    int a=0, b=1, c=1; //vari�veis auxiliares

    while(c < teste){
        a = b;
        b = c;
        c = a + b;
        if (teste == c) return true;
    };

    return false;
}
