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
	printf("mang sau khi nhap vao:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]); \
	}
	int S = 0;
	int uoc = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			uoc++;
			S += arr[i];
		}
	}
	printf("\nTrung binh cong = %d",S/n );
}
	
