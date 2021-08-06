/*
	Finding the angle between two given vertex v1(x1 , y1) & v2(x2 , y2):
	
	teta = |teta(v1)-teta(v2)| = |arctan(v1)-arctan(v2)|
	
	NOTE 1 : arctan2 is used because 
			 it's domain is bigger
	
	NOTE 2 : We could also solve this problem 
			 by "Dot Product" 
			 where cos(teta) = v1.v2/(|v1||v2|)
*/

#include<stdio.h>
#include<math.h>

double RadToDeg(double radians){ // atan2 returns Radians not Degree!
	double degrees = (radians* 360) / (2.0 * M_PI);
	return degrees;
}

int main(){
	double x1, y1, x2, y2;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("%lf", RadToDeg(fabs(atan2(y1, x1) - atan2(y2, x2))));
	return 0;
}
