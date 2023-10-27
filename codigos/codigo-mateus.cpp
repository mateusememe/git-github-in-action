#include<stdio.h>

int fat (int x)
{
	if (x == 0 || x == 1)
		return 1;
	else 
		return x * fat(x-1);
}


int main() {
  int n;
	printf("Ola mundo!");
	printf("Numero Fatorial:");
	scanf("%d", &n);
	printf("%d", fat(n));
	
return 0;
}



