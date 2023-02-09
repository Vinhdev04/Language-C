#include<stdio.h>
int main()
{
    // Khai bao bien
    int a,b;
    //Nhap du lieu
    printf("Nhap a = ");
    scanf("%d",&a);
    printf("Nhap b =");
    scanf("%d",&b);



    float ketqua = (float)a/b ;
    float ketqua2 = (int) ketqua ;
    
    printf("%d/%d=%.2f",a,b,ketqua);
    printf("\n ketqua2= %d",ketqua2);

}
