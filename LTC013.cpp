#include<stdio.h>
int main()
{
    //nhap n,kiem tra n la chan hay le
    int n;
    printf("Nhap n = ");
    scanf("%d",&n);
    if(n%2==0) {
        printf("\n n la so chan");
    }else if(n%2==1){
        printf("\n n la so le");
    }

}