#include <stdio.h>

int main(){
	printf("Segundos restantes: %i\n", days(180000));
	return 0;
}

int days (int a) {
	int b = 86400;
	int dias = a / b;

	printf("Son %i dias\n", dias);
	return a - dias*b;
}
