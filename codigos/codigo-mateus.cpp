#include<stdio.h>

int fat (int x)
{
	if (x == 0 || x == 1)
		return 1;
	else 
		return x * fat(x-1);
}


int main() {
	printf("Tchira Tchuru");

	printf("Hello Word!");
  
	printf("Bomba!");

	printf("A Bomba está caindo");

	printf("A Bomba Caiu");

	printf("Ola mundo!Ola mundoOla mundoOla mundoOla mundoOla mundoOla mundoOla mundoOla mundoOla mundoOla mundoOla mundo");

	printf("-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-\n");
	printf("Ola mundo!\n");

  int n;
	printf("Ola mundo!");

	printf("1 + 1 = 11");	


	printf ("Victor Hugo");

	printf("\nHello World");
	printf("Numero Fatorial:");
	scanf("%d", &n);
	printf("%d", fat(n));
	
  return 0;
}



