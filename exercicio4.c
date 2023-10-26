
#include <stdio.h>
#include "exercicio4.h"
#define PII 3.1415


struct circulo
{
    float raio;
};

struct triangulo
{
    float base;
    float altura;
};

struct retangulo
{
    float comprimento;
    float largura;
};

void leiaNumero_Terreno(int N){

    int i;
    char c;

    if(N>1 && N<100){
        //printf("Digite uma letra correspondente ao tipo de Terreno!\n");

        for(i = 0; i<N; i++){
            scanf(" %c\n", &c);
            if(c == 'C'){
                calcula_Circulo();
            } else if(c == 'R')
                    calcula_Retangulo();
                else if(c == 'T')
                        calcula_Triangulo();
        }
    }
    
}

//funcao que calcula a multa da area de triangulo
void calcula_Circulo()
{
    tCirculo c;
    float areaPor_metroQuadrado;
    float area_convertida, multa = 6000.00;
    float hetares = 10000.00;

    //printf("Digite valor de raio do circulo!\n");
    scanf("%f", &c.raio);

    areaPor_metroQuadrado = (PII*(c.raio*c.raio));
    area_convertida = areaPor_metroQuadrado/hetares;
    area_convertida = area_convertida*multa;

    printf("Preco: %.2f\n", area_convertida);

}

//funcao que calcula a multa da area de retangulo
void calcula_Triangulo()
{
    tTriangulo t ;
    float multa = 7000.00, hectares = 10000.00;
    float areaPor_metroQuadrado, area_convertida; 

    //printf("Digite base e altura de triangulo!\n");
    scanf("%f%f", &t.base, &t.altura);

    areaPor_metroQuadrado = (t.base*t.altura)/2.00;
    area_convertida = areaPor_metroQuadrado/hectares;
    area_convertida = area_convertida*multa;
    
    printf("Preco: %.2f\n", area_convertida);

}

//funcao que calcula a multa da area desflorestamento
void calcula_Retangulo()
{
    tRetangulo r;
    float multa=8000.00, hectares = 10000.00;
    float areaPor_metroQuadrado, area_convertida;

    //printf("Digite o valor de comprimento e altura do Retangulo!\n");
    scanf("%f%f", &r.comprimento, &r.largura);

    areaPor_metroQuadrado = r.comprimento*r.largura;
    area_convertida = areaPor_metroQuadrado/hectares;
    area_convertida = area_convertida*multa;

    printf("Preco: %.2f\n", area_convertida);

}

