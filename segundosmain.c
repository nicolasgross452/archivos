#include <stdio.h>

int main(){
	printf("Segundos restantes: %i\n", days(180000));
	printf("segundos restantes: %i\n", horas(180000));
	printf("segundos restantes: %i\n", minutos(180000));
	printf("segundos restantes: %i\n", segundos(180000));
	return 0;
}

int days (int a) {
	int b = 86400;
	int dias = a / b;

	printf("Son %i dias\n", dias);
	return a - dias*b;
}

int horas (int a) {
	int b = 3600;
	int horas = a / b;

	printf("Son %i horas\n", horas);
	return a - horas*b;
}

int minutos (int a) {
	int b = 60;
	int minutos = a / b;

	printf("Son %i minutos\n", minutos);
	return a - minutos*b;
}


int segundos (int a) {
	int b = 1;
	int segundos = a / b;

	printf("Son %i segundos\n", segundos);
	return a - segundos*b;
}



int total (int a) {
	

