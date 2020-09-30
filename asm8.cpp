#include <stdio.h>
int main (){
	int n; 
	int S=0; 
	int SoTachRa; 
	printf("nhap so nguyen n = ");
	scanf("%d\n",&n);
	for (;n!=0;){
		SoTachRa = n%10;
		S+= SoTachRa;
		 n /=10; 
	} 
	printf("tong =%d",S);
}
