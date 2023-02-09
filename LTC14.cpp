#include<stdio.h>
int main()
{
    //Khai bao du lieu
    float a,b,x;
    //Nhap du lieu
    printf("Nhap a=");
    scanf("%f",&a);
    printf("Nhap b=");
    scanf("%f",&b);


    if(a!=0){
        x=-b/a;
        printf("\n Phuong trinh co nghiem x=%.2f",x);
    }else{
        if(b==0){
            printf("\n Phuong trinh co vo so nghiem");
        }else{
            printf("\n Phuong trinh vo nghiem");
        }
    }
}