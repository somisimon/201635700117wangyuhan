#include<stdio.h>
 
double P(int n,double x) {
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else {
		return ((2.0 * n - 1) * x - P(n - 1,x) - (n - 1) * P(n - 2,x)) / n;
	}
}
 
int main() {
	int n;
	double x,value;
	printf("Input n and x : ");
	scanf("%d %lf", &n,&x);
	value=P(n,x);
	printf("%lf",value);
	return 0;
}

