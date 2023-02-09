#include"math.h"
#include"stdio.h"
//void NhapMang(int a[],int n){
//	do{
//		printf("Nhap n:");
//		scanf("%d",&n);
//	}while(n<=0 || n>=100);
//	for(int i=0; i<n; i++)
//	{
//		printf("a[%d]",i);
//		scanf("",&a[i]);
//	}
//	return 0;
//}
//void XuatMang(int a[],int n){
//	
//}
//// tcb cac so snt
//float TBC(int a[],int n)
//{
//	int
//}
typedef struct sinhvien{
	char MSSV [15];
	char Ten [12];
	float Toan;
}SV;
void Nhap (SV &x)
{
	printf ("Nhap MSSV: ");
	gets ("x.MSSV");
	printf ("Nhap Ten: ");
	gets ("x.Ten");
	printf ("Nhap diem Toan: ");
	scanf ("%f", &x.Toan);
}


int main(){
	SV x;
	Nhap(x);	
}
