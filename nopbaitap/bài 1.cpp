#include<stdio.h>
int main()
{
	int a;
	printf("nhap vao so nguyen a:");
	scanf("%d",&a);
	if(1<a<8)
	{
		printf("hom nay la thu:%d",a);
	}
		else if (a==8)
	{
		printf("hôm nay la chu nhat");
	}
	 	else
	{ 
		printf("khong phai ngay trong tuan");
	}
return  0 ;
}
