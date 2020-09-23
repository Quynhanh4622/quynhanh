#include<stdio.h>
int main(){
	int i,n;
	printf("nhap n =");
	scanf("%d",&n);
	
	for(int i=2;i<n;i++){
		if(n<2){
			printf("khong co so nguyen to nho hon"); 
		}else{
			int uoc=0;
			for(int j=2;j<i;j++){
				if(i%j==0){
					uoc++;
					break; 
				} 
			}
			if(uoc==0){
				printf("%d la so nguyen to \n"); 
			}else{
				printf("%d khong phai là so nguyen to \n"); 
			} 
		} 
} 
printf("cac so nguyen to nho hon la \n",i); 
}
