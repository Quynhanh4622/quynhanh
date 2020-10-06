#include <stdio.h>
#include <math.h> 
	int main(){
		float a,b,c,S,CV,p; 
		printf("nhap a =");
		scanf("%f",&a); 
		printf("nhap b =");
		scanf("%f",&b); 
		printf("nhap c =");
		scanf("%f",&c); 
		if(a>=b+c,b>=a+c,c>=a+b){
			printf("ba canh vua roi khong la mot tam giac\n");
		}else{
			printf("ba canh vua roi  la mot tam giac\n ");
		}	
		
		CV=a+b+c;
		printf("chu vi cua tam giac la :%f\n",CV); 
		p=CV/2;
		
		S= sqrt(p*(p-a)*(p-b)*(p-c));
		printf("dien tich cua tam giac la :%f\n",S);
	}
	
