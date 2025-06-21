#include <stdio.h>
int main(void){
    int i;
    float a;
    float b;
    char r;
    int resultado_scanf; // variável para verificar se o scanf funcionou: se resultado_scanf == 0 => falhou e se resultado_scanf == 1 => deu certo
    r = 's'; 

    do // Esse primeiro loop ocorre sempre que a resposta final do programa é 's'
    {
    printf("===============================\n   Calculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");
    do
    {// esse loop só acaba quando i pertence ao intervalo [1,5]
    
    resultado_scanf = scanf("%d", &i); // esse comando lê um inteiro, joga pro i e atribui 0 ou 1 para o resultado

    if (resultado_scanf == 0)
    { // se o scanf falhou, ou seja, não leu nenhum número
        do{
        while (getchar() != '\n'); // Limpa os caracteres errados
        printf("Erro. Digite apenas números entre 1 e 5: ");
        resultado_scanf = scanf("%d", &i);
        }
        while(resultado_scanf == 0);
    }
    
    if (i != 1 && i != 2 && i != 3 && i != 4 && i != 5)
    {
        printf("Por favor, digite apenas números entre 1 e 5: ");
    }
    }
    while(i != 1 && i != 2 && i != 3 && i != 4 && i != 5);
        
    if(i == 1)
    {
        printf("Digite o primeiro número: ");
        resultado_scanf = scanf("%f", &a); // nas próximas linhas eu irei implementar o mesmo algoritmo das linhas 18 a 26, a fim de bloquear entradas não numéricas para o valor de a.
        if (resultado_scanf == 0)
        { // se o scanf falhou, ou seja, não leu nenhum número
        do{
        while (getchar() != '\n'); // Limpa os caracteres errados
        printf("Erro. Digite apenas números reais: ");
        resultado_scanf = scanf("%f", &a);
        }
        while(resultado_scanf == 0);
        }
        
        printf("Digite o segundo número: "); 
        resultado_scanf = scanf("%f", &b); // nas próximas linhas eu irei implementar o mesmo algoritmo das linhas 18 a 26, a fim de bloquear entradas não numéricas para o valor de b.
        if (resultado_scanf == 0)
        { // se o scanf falhou, ou seja, não leu nenhum número
        do{
        while (getchar() != '\n'); // Limpa os caracteres errados
        printf("Erro. Digite apenas números reais: ");
        resultado_scanf = scanf("%f", &b);
        }
        while(resultado_scanf == 0);
        }
        
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
        resultado_scanf = scanf("%f", &a); // nas próximas linhas eu irei implementar o mesmo algoritmo das linhas 18 a 26, a fim de bloquear entradas não numéricas para o valor de a.
        if (resultado_scanf == 0)
        { // se o scanf falhou, ou seja, não leu nenhum número
        do{
        while (getchar() != '\n'); // Limpa os caracteres errados
        printf("Erro. Digite apenas números reais: ");
        resultado_scanf = scanf("%f", &a);
        }
        while(resultado_scanf == 0);
        }
        
        printf("Digite o segundo número: "); 
        resultado_scanf = scanf("%f", &b); // nas próximas linhas eu irei implementar o mesmo algoritmo das linhas 18 a 26, a fim de bloquear entradas não numéricas para o valor de b.
        if (resultado_scanf == 0)
        { // se o scanf falhou, ou seja, não leu nenhum número
        do{
        while (getchar() != '\n'); // Limpa os caracteres errados
        printf("Erro. Digite apenas números reais: ");
        resultado_scanf = scanf("%f", &b);
        }
        while(resultado_scanf == 0);
        }
        
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
        resultado_scanf = scanf("%f", &a); // nas próximas linhas eu irei implementar o mesmo algoritmo das linhas 18 a 26, a fim de bloquear entradas não numéricas para o valor de a.
        if (resultado_scanf == 0)
        { // se o scanf falhou, ou seja, não leu nenhum número
        do{
        while (getchar() != '\n'); // Limpa os caracteres errados
        printf("Erro. Digite apenas números reais: ");
        resultado_scanf = scanf("%f", &a);
        }
        while(resultado_scanf == 0);
        }
        
        printf("Digite o segundo número: "); 
        resultado_scanf = scanf("%f", &b); // nas próximas linhas eu irei implementar o mesmo algoritmo das linhas 18 a 26, a fim de bloquear entradas não numéricas para o valor de b.
        if (resultado_scanf == 0)
        { // se o scanf falhou, ou seja, não leu nenhum número
        do{
        while (getchar() != '\n'); // Limpa os caracteres errados
        printf("Erro. Digite apenas números reais: ");
        resultado_scanf = scanf("%f", &b);
        }
        while(resultado_scanf == 0);
        }
        
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
        resultado_scanf = scanf("%f", &a); // nas próximas linhas eu irei implementar o mesmo algoritmo das linhas 18 a 26, a fim de bloquear entradas não numéricas para o valor de a.
        if (resultado_scanf == 0)
        { // se o scanf falhou, ou seja, não leu nenhum número
        do{
        while (getchar() != '\n'); // Limpa os caracteres errados
        printf("Erro. Digite apenas números reais: ");
        resultado_scanf = scanf("%f", &a);
        }
        while(resultado_scanf == 0);
        }
        
        printf("Digite o segundo número: "); 
        resultado_scanf = scanf("%f", &b); // nas próximas linhas eu irei implementar o mesmo algoritmo das linhas 18 a 26, a fim de bloquear entradas não numéricas para o valor de b.
        if (resultado_scanf == 0)
        { // se o scanf falhou, ou seja, não leu nenhum número
        do{
        while (getchar() != '\n'); // Limpa os caracteres errados
        printf("Erro. Digite apenas números reais: ");
        resultado_scanf = scanf("%f", &b);
        }
        while(resultado_scanf == 0);
        }
        
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
