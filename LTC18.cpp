#include"stdio.h"
int main(){
	int n,t;
	printf("\n Nhap t = \t");
	scanf("%d",&t);
	
	switch(t){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		     printf("\n Thang  %d co 31 ngay",t);
			 break;
		case 4:
		case 6:
		case 9:
		case 11:
		     printf("\n Thang %d co 30 ngay",t);
			 break;
		case 2:
		     printf("\n Vui long nhap n = \t");
			 scanf("%d",&n);
			 if((n%400==0) || (n%4==0 && n%100!=0)){
			 	printf("\n Thang %d co 29 ngay",t);
			 	
			 }else{
			 	printf("\n Thang %d co 28 ngay",t);
			 }
			 break;
		default:
			 	printf("\n Khong hop le",t);
	}
}
