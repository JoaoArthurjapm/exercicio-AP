#include <stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int num, i;
    
    // l� o n�mero positivo
    printf("Digite um n�mero positivo: ");
    scanf("%d", &num);
    
    // verifica e exibe todos os divisores do n�mero
    printf("Divisores de %d:\n", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }
    system("pause");
    return 0;
}

