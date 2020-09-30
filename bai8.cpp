#include <stdio.h>
 
 int chuvi(int a, int b, int c){ 
 	int C;
 	
 	C=a+b+c;
 	
 	return C;
 	
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
		
 	printf("Chu vi tam giac la: %d ",chuvi(a,b,c));
 	
 }
