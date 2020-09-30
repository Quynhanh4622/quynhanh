#include <stdio.h>
 
 int chuvi(int a, int b, int c){ 
 	int p;
 	
 	p=chuvi(a,b,c)/2;
 	
 	return sqrt(p*(p-a)*(p-b)*(p-c));
 	
 }
 
 
 int main(){
 	int a,b,c;
 	do{
 	  printf("Nhap do dai canh thu nhat:");
 	  scanf("%d",&a);
 	  printf("Nhap do dai canh thu hai:");
 	  scanf("%d",&b);
 	  printf("Nhap do dai canh thu ba:");
 	  scanf("%d",&c);
	   	
    }while(!((a+b)>c&&(a+c)>b&&(b+c)>a));
		
 	printf("Dien tich cua tam giac la: %d ",dientich(a,b,c));
 	
 }
