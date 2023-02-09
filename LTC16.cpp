//Giai pt bac 2: ax^2+bx+c
#include<stdio.h>
#include<math.h>
int main()
{
    //Khai bao du lieu
    float a,b,c,x1,x2,delta;
    //Nhap du lieu
    printf("\n Nhap vao he so a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    //Tinh toan pt bac 2
    if(a==0){
        printf("Nhap a khac 0");
    }else{
        //a!=0
        delta = pow(b,2)-4*a*c;

        if(delta>0){
            x1 = (-b-sqrt(delta)/2*a);
            x2 = (-b+sqrt(delta)/2*a);
            printf("\n Phuong trinh co 2 nghiem phan biet : x1=%.2f va x2=%.2f",x1,x2);
        }else if(delta==0){
            x1=-b/2*a;
            printf("\n Phuong trinh co nghiem kep: x1=x2=%.2f",x1);
        }else{
            printf("\n Phuong trinh vo nghiem ");
        }
    }
}