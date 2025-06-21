#include <stdio.h>
int main(void){
    int i;
    float a;
    float b;
    char r;
    r = 's'; 
    do // Esse primeiro loop ocorre sempre que a resposta final do programa é 's'
    {
    printf("===============================\n   Calculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");
    do{scanf("%d", &i);       
    if (i != 1 && i != 2 && i != 3 && i != 4 && i != 5)
    {
        printf("Por favor, digite apenas números entre 1 e 5: ");
    }
    }
    while(i != 1 && i != 2 && i != 3 && i != 4 && i != 5);
        
    if(i == 1)
    {
        printf("Digite o primeiro número: ");
        scanf("%f", &a);
        printf("Digite o segundo número: ");
        scanf("%f", &b);
        printf("Resultado: %f + %f = %f\n", a, b, a+b);
        printf("\nDeseja realizar outra operação? (s/n):");
        scanf(" %c", &r);
        if(r == 'S'){r = 's';}
        if (r == 'N'){r = 'n';}
        while (r != 's' && r != 'n'){
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");
            scanf(" %c", &r);}

    }
    else if (i == 2)
    {
        printf("Digite o primeiro número: ");
        scanf("%f", &a);
        printf("Digite o segundo número: ");
        scanf("%f", &b);
        printf("Resultado: %f - %f = %f", a, b, a-b);
        printf("\nDeseja realizar outra operação? (s/n):");
        scanf(" %c", &r);
        if(r == 'S'){r = 's';}
        if (r == 'N'){r = 'n';}
        while (r != 's' && r != 'n'){
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");
            scanf(" %c", &r);}
        
    }
    else if (i == 3)
    {
        printf("Digite o primeiro número: ");
        scanf("%f", &a);
        printf("Digite o segundo número: ");
        scanf("%f", &b);
        printf("Resultado: %f * %f = %f", a, b, a*b);
        printf("\nDeseja realizar outra operação? (s/n):");
        scanf(" %c", &r);
        if(r == 'S'){r = 's';}
        if (r == 'N'){r = 'n';}
        while (r != 's' && r != 'n'){
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");
            scanf(" %c", &r);}
    }
    else if (i == 4)
    {
        printf("Digite o primeiro número: ");
        scanf("%f", &a);
        printf("Digite o segundo número: ");
        scanf("%f", &b);
        if (b == 0)
        {
            printf("Erro: Divisão por zero não é permitida.\n");
            printf("Deseja realizar outra operação? (s/n):");
        scanf(" %c", &r);
        if(r == 'S'){r = 's';}
        if (r == 'N'){r = 'n';}
        while (r != 's' && r != 'n'){
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");
            scanf(" %c", &r);}
        }
        else{
        printf("Resultado: %f / %f = %f", a, b, a/b);
        printf("\nDeseja realizar outra operação? (s/n):");
        scanf(" %c", &r);
        if(r == 'S'){r = 's';}
        if (r == 'N'){r = 'n';}
        while (r != 's' && r != 'n'){
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");
            scanf(" %c", &r);
            if(r == 'S'){r = 's';}
            if (r == 'N'){r = 'n';}
        }
        }
    }
    else if (i == 5)
    {
        r = 'n';
    }
    } while (r == 's');
    
    if (r == 'n')
        {
            printf("Obrigado por usar a calculadora! Até a próxima.");
        }
}