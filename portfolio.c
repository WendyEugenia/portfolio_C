#include <stdio.h>
#include <string.h>

int main() {
    char tipo[50];
    int quantidade;
    float custo_por_kilo;

    printf("Dados de entrada:\n");
    printf(" - Tipo de Animal: ");
    scanf("%s", tipo);
    printf(" - Quantidade de animais: ");
    scanf("%d", &quantidade);
    printf(" - Custo estimado por kilo de comida: ");
    scanf("%f", &custo_por_kilo);


    float consumo_por_dia_por_animal = 0;
    if (strcmp(tipo, "Leopardo") == 0) 
        consumo_por_dia_por_animal = 5;
    else if (strcmp(tipo, "Elefante") == 0)
        consumo_por_dia_por_animal = 3;
    else if (strcmp(tipo, "Zebra") == 0) 
        consumo_por_dia_por_animal = 2;
    else if (strcmp(tipo, "Girafa") == 0)
        consumo_por_dia_por_animal = 4;
    else if (strcmp(tipo, "Macaco") == 0)
        consumo_por_dia_por_animal = 6;

    float quantidade_por_dia = consumo_por_dia_por_animal * quantidade; // Calculando quantidade por dia e mês
    float quantidade_por_mes = quantidade_por_dia * 30;


    float custo_por_mes = quantidade_por_mes * custo_por_kilo;   // Calculando custo estimado por mês

    // Exibindo resultados
    printf("\nDados de Saída:\n");
    printf("- Quantidade por kilo por animal: %.2f\n", consumo_por_dia_por_animal);
    printf("- Quantidade por dia para todos os animais: %.2f\n", quantidade_por_dia);
    printf("- Quantidade por mês para todos os animais: %.2f\n", quantidade_por_mes);
    printf("- Custo estimado por mês: %.2f\n", custo_por_mes);

    return 0;
}
