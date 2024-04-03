#include <stdio.h>
#include <string.h>

typedef struct uniPark{
    char nome[50];
    char placa[8];
    int tempoPermanencia;
    int clienteEspecial;
} Cliente;



int main(){

    Cliente Cliente1, Cliente2, Cliente3, Cliente4, Cliente5;

    strcpy(Cliente1.nome, "Santiago Trellez");
    strcpy(Cliente1.placa, "ZX5W12");
    Cliente1.tempoPermanencia = 0;
    Cliente1.clienteEspecial = 1;

    strcpy(Cliente2.nome, "Edson Arantes");
    strcpy(Cliente2.placa, "KI9N68");
    Cliente2.tempoPermanencia = 0;
    Cliente2.clienteEspecial = 1;

    strcpy(Cliente3.nome, "Gabriel Nascimento");
    strcpy(Cliente3.placa, "VB4T54");
    Cliente3.tempoPermanencia = 0;
    Cliente3.clienteEspecial = 0;

    strcpy(Cliente4.nome, "Raphael Veiga");
    strcpy(Cliente4.placa, "CN5Q65");
    Cliente4.tempoPermanencia = 0;
    Cliente4.clienteEspecial = 1;

    strcpy(Cliente5.nome, "Beraldo Santos");
    strcpy(Cliente5.placa, "AB1D11");
    Cliente5.tempoPermanencia = 0;
    Cliente5.clienteEspecial = 0;

    char placa[8];
    int permanencia = 0;
    printf("Olá, bem-vindo ao UniPARKING!\nInforme a placa do seu carro: ");
    scanf("%s", placa);

    printf("E quanto tempo você permaneceu no shopping? (Em minutos): ");
    scanf("%d", &permanencia);


    float pagamentoValor;
    float horaExcedente = (permanencia - 60) / 60;
    if(permanencia <= 15){
         pagamentoValor = 0.0;
        printf("Como a sua permanencia foi de %d minutos, logo, o valor a pagar é de R$ %.2f. Volte sempre!", permanencia, pagamentoValor);
    }else if(permanencia > 15 && permanencia <= 60){
         pagamentoValor = 10.0;
        printf("Como o seu tempo de permanencia foi de %d minutos, logo, o valor a pagar é de R$ %.2f. Volte em breve", permanencia, pagamentoValor);
    }else if(permanencia > 60 && permanencia <= 1440){
        pagamentoValor = 10.0 + 5 * horaExcedente;
        printf("Como o seu tempo de permanencia foi de %d minutos, logo, o valor a pagar é de R$ %.2f. Volte em breve", permanencia, pagamentoValor);
    }else{
        printf("Dirija-se à administração para realizar o pagamento");
    }

    int clienteEspecial;


    Cliente baseDeDados[] = { Cliente1, Cliente2, Cliente3, Cliente4, Cliente5 };
    for(int i = 0; i < 5; i++){
        if(strcmp(baseDeDados[i].placa, placa) == 0){
            clienteEspecial = baseDeDados[i].clienteEspecial;
            printf("\nOlá %s, identificamos que você já é nosso(a) cliente. Temos um desconto especial da metade do valor para você!\n", baseDeDados[i].nome);
            float valor = pagamentoValor * 50/100;
            printf("O valor agorá que você pagara será de R$ %.2f", valor);
            
            return clienteEspecial;
        }
    }
}