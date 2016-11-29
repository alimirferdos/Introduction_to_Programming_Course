/*
	Finding the error between Maclaurin Series of e^x :
	
	It will get x , k
	and will output |e^x-taylor(i)| from i = 0 to i = k
	
*/

#include<stdio.h>
#include<math.h>
int factorial(int n){
	int i = 1 , sum = 1;
	for(i ; i <= n ; i++)
		sum *= i;
	return sum;
}

int main(){
	double x , taylor = 1;
	int k , i = 1;
	scanf("%lf %d" , &x , &k);
	double e = exp(x);
	for(i ; i <= k+1 ; i++){ // it is going to k+1 because the print function is the first line and if we go to k the k' th one wouldn't be printed!
		printf("%.10lf\n" , fabs(e-taylor));
		taylor += pow(x , (double) i) / (double) factorial(i);
	}
	return 0;
}
