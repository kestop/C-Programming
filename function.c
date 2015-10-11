#include "header.h"

double mc_pi(int n)
{
	double x, y, pi;
	int hc = 0, ha = 0;
	int i;

	for (i = 0; i < n; i++) {
		x = ((double)rand() / (double)(RAND_MAX));
		y = ((double)rand() / (double)(RAND_MAX));

		/*printf("Result is %f\n", x*x + y*y);
		printf("x:%f y:%f\n", x, y);*/

		if ((x*x + y*y) <= 1.0) {
			hc = hc + 1;
			/*printf("hc=%d.\n", hc);
			printf("hc++.\n");*/
		}

		if ((x <= 1) && (y <= 1.0)) {
			ha = ha + 1;
			/*printf("ha=%d.\n", ha);
			printf("ha++.\n");*/
		}

	}
	pi = (4.0 * hc) / ha;
	printf("The PI approximates %f and hc =%d , ha =%d .\n\n", pi, hc, ha);
}