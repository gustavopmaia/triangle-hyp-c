#include <stdio.h>
#include <math.h>

int main(){
	double A, B, C;

	printf("Enter side A: ");
	scanf("%lf", &A);

	printf("enter side B: ");
	scanf("%lf", &B);

	C = sqrt(A*A + B*B);

	printf("Side C: %lf", C);
}
