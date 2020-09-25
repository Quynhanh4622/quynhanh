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
	int x;
	printf("nhap so can tim kiem: ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(x==arr[i]){
			printf("x nam trong mang\n");
			break; 
		}else{
			printf("x khong nam trong mang\n"); 
		}
	}
}
