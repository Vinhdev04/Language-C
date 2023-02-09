#include "stdio.h"
#include "math.h"
struct PhanSo{
    int tuSo;
    int mauSo;

};
void rutGon(PhanSo *ps){
    // tim USCLN
    int a = ps->tuSo;
    int b = ps->mauSo;
    int uscln = 1;


    a = abs(a);
    b = abs(b);

    int USCLN =1;
    // TH1
    if(a==0 || b==0){
        USCLN = (a+b);
    }else{
        // TH2
        while(a!=b){
            if(a>b){
                a = a-b;
            }else{
                b = b-a;
            }
        }
        USCLN = a;
    }
    ps->tuSo/=USCLN;
    ps->mauSo/=USCLN;

}
void nhapPhanSo(PhanSo *ps){
    printf("\n Nhap vao tu so:");
    scanf("%d",&ps->tuSo);
    do{
        printf("\n Nhap vao mau so:");
        scanf("%d",&ps->mauSo);

    }while(ps->mauSo==0);

}
void xuatPhanSo(PhanSo ps){
     if(ps.mauSo<0){
        ps.mauSo*=-1;
        ps.tuSo*=-1;
     }
     rutGon(&ps);
     printf("%d/%d",ps.tuSo,ps.mauSo);
}

int main(){
    PhanSo ps1, ps2;
    printf("\n Nhap phan so thu nhat:");
    nhapPhanSo(&ps1);
    printf("\n Phan so thu hai:");
    nhapPhanSo(&ps2);
    printf("\n Phan so vua nhap la:");
    xuatPhanSo(ps1);
    printf("\t");
    xuatPhanSo(ps2);

}