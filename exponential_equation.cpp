/*
	Solving a^x = b:
	
	x = log(a^x , a) = log(b , a) = log(b , 2) / log(a , 2)
*/

#include<stdio.h>
#include<math.h>

int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%lf", log(b) / log(a));
	return 0;
}
