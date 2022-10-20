//Prova Algoritimo

#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
    printf("Disciplina: Algoritmo e Programacao\n");
    printf("Professora: Joyce Siqueira\n");
    printf("Aluno: Nicolas Almeida Medeiros\n");
    printf("Matricula: uc221031171\n");  //terminar
    printf("Curso: Engenharia de Software\n");
    printf("Repositorio: https://github.com/nicolasamedeiros/Prova_algoritimo_ucb\n"); //terminar
    printf("Software utilizado: VScode\n");

    char quest;
    printf("Digite a letra da questao que deseja (obs: a, b,): ");
    scanf("%c", &quest);
    
    switch (quest)
    {
    case 'a':
        float a, b, c, seno;
        
        printf("Digite o Valor do cateto oposto: ");
        scanf("%f", &b);
        printf("Digite o valor do cateto adjacente: ");
        scanf("%f", &c);
        
        a =  sqrt(pow(b, 2) + pow(c, 2));
        seno = b / a;
        
        printf("Hipotenusa: %.3f\n", a);
        printf("Seno: %.3f\n", seno);  
        break;
    
    case 'b':
        char nome[35];
        int ano;
        
        printf("Digite seu nome: ");
        scanf("%s", &nome);
        printf("Digite o ano do seu nascimento: ");
        scanf("%d", &ano);
        
        
        if ((ano % 4) == 0 && (ano % 100) == 0 && (ano % 400) == 0) {
            printf("%s, %d e um ano bissexto", nome, ano);
            return 0;
        }
        else {
                printf("%s, %d nao e ano bissexto", nome, ano);
                return 0;
        }
        break;
    
    default:
        printf("Opcao invalida");
        break;
    }
}
