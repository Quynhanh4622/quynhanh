#include <iostream>
 using namespace std;
 
int main() {
	
	string thu[7] = {"chu nhat", "thu 2", "thu 3", "thu 4", "thu 5", "thu 6", "thu 7"};
	int thang[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
	int a , b ;
	int tongngay = 0 ;
    printf("Nhap ngay thang :" );
    scanf("%d%d",&a,&b);
    for(int i = 1 ; i < b  ; i++)
	{
    tongngay += thang[i];
    }
    tongngay += b;
    printf(" tông so ngay là:", b );
    int c = tongngay % 7 ;
    cout << thu[c] ;
    return  0;
}
    
    
