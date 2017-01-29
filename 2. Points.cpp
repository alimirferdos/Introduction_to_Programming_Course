/*
	In the name of God
	
	Seyed Ali Mirferdos
	Advanced Programming course
	Winter 1395
*/

#include<stdio.h>
#include<math.h>

// You can enter at last 20 points
#define max_number 20

typedef struct point{
	int color;
	double x , y , r;
} Point;

int main(){
	Point p[max_number];
	int n; // n is the number of points you want to enter
	
	printf("How many points do you wish to enter: ");
	scanf("%d" , &n);
	
	printf("\nPlease enter color, x , y of points correspondingly:\n");
	for(int i = 0; i < n; i++){
		printf("Point number %d: " , i + 1);
		scanf("%d %lf %lf" , &p[i].color , &p[i].x , &p[i].y);
		p[i].r = sqrt(p[i].x*p[i].x + p[i].y*p[i].y);
	}
	
	int max = 0 , min = 0;
	int maxpos = 0 , minpos = 0;
	for(int i = 0; i < n; i++){
		if(p[i].r > max){
			max = p[i].r;
			maxpos = i;
		}
		if(p[i].r < min){
			min = p[i].r;
			minpos = i;
		}
	}
	
	printf("\nMax :%d\n", p[maxpos].color);
	printf("Min :%d\n", p[minpos].color);
	return 0;
}
