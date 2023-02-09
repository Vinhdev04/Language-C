#include<stdio.h>
int main()
{
    //Khai bao bien
    //Phuong trinh bac 1: ax+b=0;
    float a,b,x;

    //Nhap du lieu
    printf("Nhap he so phuong trinh ax+b=0");
    printf("\n a=");
    scanf("%f",&a);
    printf("\n b=");
    scanf("%f",&b);

    //Xu ly bai toan
    x = -b/a;

    //Xuat du lieu
    printf("x = %.2f",x);
    
    
}