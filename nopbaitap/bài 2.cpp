#include <stdio.h>

int main() 
{
	int a, b;
	printf("nhap vao hai so nguyen a,b:  ");
	scanf("%d%d", &a, &b);
	int tich = a*b;
	float thuong = 0;
	if (a >= b)
	{
		if (b=0)
		{
			printf ("khong chia duoc");
		}
		else 
		{ 
			thuong= (float)a/b;
			printf("thuong cua a va b là:", thuong);
		}
	}
	else
	{
	tich = a*b;
	printf("tich cua 2 so la", tich);
	}
	return 0;
}
