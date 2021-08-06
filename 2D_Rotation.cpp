/*
	Rotating point (x,y) by teta degrees: 
	(';' in matrices = \n) 
	
	[x' ; y'] = [cos(teta) -sin(teta) ; sin(teta) + cos(teta)][x ; y]
*/

#include<stdio.h>
#include<math.h>
double DegToRad(double degree){ // sin and cos use Radians not Degree!
	double radians = (degree / 360) * (2.0 * M_PI);
	return radians;
}

int main(){
	double x, y, teta;
	scanf("%lf %lf %lf" , &x , &y, &teta);
	teta = DegToRad(teta);
	printf("%lf\n%lf", cos(teta)*x-sin(teta)*y , sin(teta)*x+cos(teta)*y);
	return 0;
}
