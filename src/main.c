#include <stdio.h> 
#include <math.h> 

int main() { 
	double a, b, c, d, x1, x2, flah; 
	printf("Input a, b, c:\n"); 
	scanf("%lf %lf %lf", &a, &b, &c); 
	flag = sqr(a, b, c, &x1, &x2);
	if (flag == 1) { 
		printf ("Error! There is no solution\n"); 
		return 0; 
	} 
	printf("Answer: x1 = %.1lf, x2 = %.1lf\n", x1, x2); 
	return 0; 	
}
