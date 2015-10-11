#include "header.h"

extern double mc_pi(int n);

int main(void)
{   
	int n;

	srand(time(NULL));
	printf("Enter simulation times.\n");
	scanf_s("%d", &n);

	mc_pi(n);

	return 0;
}