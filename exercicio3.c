#include<stdio.h>
#include<locale.h>
#include<math.h>
#define PI 3.14159

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float r, volume, area;
	
	printf("Descubra a �rea e o volume de uma esfera (em cent�metros).\n\nInforme o raio da esfera:");
	scanf("%f", &r);
	
	area = 4.0*PI* pow(r,2);
	volume = 4.0/3*PI* pow(r,3);
	
	printf("�rea = %.4f\nVolume = %.4f\n", area, volume);
	
	system("pause");
	
}
