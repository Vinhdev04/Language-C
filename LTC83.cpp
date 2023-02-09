#include<stdio.h>
#include<math.h>
#define MAX 100
typedef struct PHANSO
{
	int tu,mau;
}PS;
// nhap 1 phan so
void Nhap1ps(PS &x)
{
	printf("Nhap tu so:");
	scanf("%d",&x.tu);
	//nhap mau so khac 0, sai nhap lai
	do
	{
		printf("Nhap mau so:");
		scanf("%d",&x.mau);
		if(x.mau == 0)
			printf("sai nhap lai.");
	}
	while(x.tu == 0);
	//mau am thi chuan hoa
	if(x.mau < 0)
	{
		x.tu = -x.tu;
		x.mau= - x.mau;
	}
}
// xuat 1 phan so
void Xuat1ps(PS x)
{
	printf("%d/%d",x.tu,x.mau);
}
// tim UCLN
int UCLN(int a, int b)
{
	a =abs(a); b=abs(b); // lay gia tri tuyet doi
	while (a!=0)
	{
		if ( a>b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
//rut gon phan so
void Rutgon(PS x)
{
	int a=abs(x.tu),b=abs(x.mau),s;
 	if(a==0) 
		return;
	else
	{
		if(a > b)
		{
			for(int i = b; i <= b; i++)
   			{
				if(a %i==0 && b %i==0)
    				i=s;
   				else
    				printf("phan so toi gian");
    		}
    	}
 		else
  		{
			for(int i = a; i <= a; i++)
   			{
				if(a %i==0 && b%i==0)
    				i=s;
   				else
    			printf("phan so toi gian");
   			}
 		printf(" %d/%d",a/s,b/s);
		}
	}
}
//tong hai phan so
PS CONG(PS x,PS y)
{
	PS tong;
	int tongtu, tongmau;
	tongtu = x.tu*y.mau + x.mau*y.tu;
	tongmau = x.mau*y.mau;
	Rutgon(tong);
	return tong;
}
// so sanh phan so
int SoSanh(PS x, PS y)
{
	return x.tu*y.mau - y.tu*x.mau;
}
//================//
int main()
{
	PS x,y;
	printf("nhap phan so thu nhat:\n");
	Nhap1ps(x);
	printf("nhap phan so thu hai: \n");
	Nhap1ps(y);
	//tinh tong xuat ra man hinh
	PS tong= CONG(x,y);
	printf("Tong cua hai phan so la: ");
	Xuat1ps(tong);
	//so sanh hai phan so
	int kq = SoSanh(x,y);
	if(kq == 0)
		printf("ps1 bang ps2");
	else
	{
		if(kq>0)
			printf("ps1 lon hon ps2");
		else
			printf("ps1 nho hon ps2");
	}
	return 0;
}

