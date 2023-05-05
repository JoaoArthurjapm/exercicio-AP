#include <stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int num, i;
    
    // lê o número positivo
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    
    // verifica e exibe todos os divisores do número
    printf("Divisores de %d:\n", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }
    system("pause");
    return 0;
}

