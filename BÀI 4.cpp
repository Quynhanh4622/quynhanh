#include <stdio.h>
int main(){
	float a,b,c,p,S,chuvi;
	do{
		printf("nhap a=");
		scanf("%f",&a);
		printf("nhap b=");
		scanf("%f",&b);
		printf("nhap c");
		scanf("%f",&c); 
	} while (a + b > c && b + c > a && a + c >b);
	chuvi = a + b + c;
	p = (a + b + c)/2;
	S = sqrt( p * (p - a) * (p - b) * (p - c) );
	printf("chu vi tam giac la : %f",chuvi);
	printf("dien tich tam giac la : %f",S); 
} 
