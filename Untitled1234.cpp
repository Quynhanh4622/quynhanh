#include <stdio.h>
int main(){
	int n; 
	printf("nhap n =");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri :");
		scanf("%d",&arr[i]); 
	}
		printf("mang sau khi nhap la :\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]); 
	}
	
	int Min = arr[0]; 
    for(int i=1;i>n;i++){
    	if(Min>arr[i]);
		Min=arr[i]; 
	} 
	printf("\n so nguyen duong nho nhat la:%d",Min);
}
