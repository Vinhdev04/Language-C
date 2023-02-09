#include"stdio.h"
#include"math.h"
struct PhanSo{
    int tuSo;
    int mauSo;

};
void rutGon(PhanSo *ps){
    // tim USCLN
    int a = ps->tuSo;
    int b = ps->mauSo;
    int USCLN = 1;


    a = abs(a);
    b = abs(b);

    int uscln =1;
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
     if(ps.mauSo==1){
     	printf("%d",ps.tuSo);
	 }else{
     printf("%d/%d",ps.tuSo,ps.mauSo);
     }
}
PhanSo congHaiPhanSo(PhanSo ps1,PhanSo ps2){
    PhanSo ketQua;
    // a/b + c/d =>(a*d+c*b)/(b*d)
    ketQua.tuSo = ps1.tuSo*ps2.mauSo + ps2.tuSo*ps1.mauSo;
    ketQua.mauSo = ps1.mauSo*ps2.mauSo;
    return ketQua;
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
    
    printf("\n Cac phep tinh:\n");
    xuatPhanSo(ps1); printf("+"); xuatPhanSo(ps2); printf("="); xuatPhanSo(congHaiPhanSo(ps1,ps2));
    printf("\n");
    
}

