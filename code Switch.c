#include <stdio.h>

int soma(int a, int b){
    //a = valor1
    int operacao;

    operacao = a + b;

    printf("\nO valor da soma: %d",operacao);
}

int soma2(int a, int b,int c){
    //a = valor1
    int operacao;

    operacao = a + b + c;

    printf("\nO valor da soma: %d",operacao);
}

int mult(intx, int y){
    int operacao;

    operacao = x * y;

    printf("\nO valor da multiplicacao: %d",operacao);
}

int sub(int numero1, int numero2){
    int matematica;

    matematica = numero1 - numero2;

    printf("\nO valor da subtracao: %d", matematica);
}

int divisao(int a, int b){
int conta;
conta= a/b;

printf("\n O valor da divisão: %d", conta);
}



int m(){
int l,n;
l=n<10;
printf("\n O valor é menor que 10");
}

int main(){
    int i,valor1 = 10,valor2 = 5,valor3=4;

    printf("Menu de Selecao");
    printf("\n1 - Soma");
    printf("\n2 - Multiplicacao");
    printf("\n3 - Subtracao");
    printf("\n4- Divisão");
    printf("\n5 -soma de 3\n-->");
    scanf("%d",&i);

    switch(i){
        case 1:{
            soma(valor1, valor2);
            break;
        }
        case 2:{
            mult(valor1, valor2);
            break;
        }
        case 3:{
            sub(valor1, valor2);
            break;
        }
        case 4:{
            divisao(valor1,valor2);
            break;
        }
        case 5:{
            soma2(valor1,valor2,valor3);
            break;
        }
       
        
        
        }
     
       
       
    }
    return 0;
}


