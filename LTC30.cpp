#include"stdio.h"
#include"math.h"
//Tim so ngay trong thang ,ngay ke tiep,ngay truoc do,ngay thu bao nhieu trong nam
//Viet chuong trinh  dung ham nhap ngay ,thang, nam
//a.Hay cho biet thang do co bao nhieu ngay
//b.Tinh xem ngay do la ngay thu bao nhieu trong nam
//c.Tim ngay truoc ngay vua nhap(ngay,thang,nam)
//d.Tim ngay ke ngay vua nhap(ngay,thang ,nam)

int songaycuaThang(int thang,int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		    return 31;
		case 4:
		case 6:
		case 9:
		case 11:
		    return 30;
		case 2:
			return((nam%400==0) || (nam%4==0 && nam %100 !=0)) ? 29:28;
		default:
			return -1; 
					
	
	}
}
int ngaytrongNam(int ngay,int thang,int nam){
	int ntn=0;
	for(int i=1; i<thang; i++){
		ntn += songaycuaThang(i,nam);
	}
	ntn += ngay;
	return ntn;
}
void inngayTruocDo(int ngay,int thang,int nam){
	if(ngay==1){
		if(thang==1){
			ngay = 31 ;
			thang = 12 ;
			nam-- ;
		}else{
			thang-- ;
			ngay = songaycuaThang(thang,nam);
		
		  }
		}else{
			ngay-- ;		
	}
	printf("\n Ngay truoc do : %d/%d/%d",ngay,thang,nam);
} 

void inngayKeDo(int ngay,int thang,int nam){
	int nct = songaycuaThang(thang,nam);
	if(ngay==nct){
		if(thang==12){
			ngay = 1;
			thang = 1;
			nam++ ;
		}else{
			ngay = 1;
			thang ++ ;
		}
	
		}else{
			ngay++ ;
		}
		printf("\n Ngay ke do: %d/%d/%d",ngay,thang,nam);
	}

int main(){
	int ngay,thang,nam;
	do{
		printf("Nhap vao ngay thang nam:");
	    scanf("%d%d%d",&ngay,&thang,&nam);
	}while(ngay<1 || ngay>31 || thang<1 || thang>12 || nam<1);
	
	// Cau a,Tim ra so ngay trong thang
	printf("\n So ngay cua thang:%d",songaycuaThang(thang,nam));
	//Cau b,Tim ngay trong nam
	printf("\n Ngay trong nam:%d",ngaytrongNam(ngay,thang,nam));
	//Cau c,Tim ngay truoc do
	inngayTruocDo(ngay,thang,nam);
	//Cau d,Tim ngay ke do
	inngayKeDo(ngay,thang,nam);
}

