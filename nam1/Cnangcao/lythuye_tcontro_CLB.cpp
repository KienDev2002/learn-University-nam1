#include"stdio.h"
#include"stdlib.h"
#include"math.h"
#include"string.h"
/*
Ly thuyet:
    Con tro: ki hieu *
Cong dung 1: Dung de quan ly cac gia tri dau vao neu nhu ham co chuc nang thay doi gia tri dau vao:
            + Nhap
            + Cap phat (bien con tro tro thanh mang mot chieu)
            + Giai phong ( nguoc lai cua cap phat)
        Cach dung:
            + Ham: cho nao co con tro thi phai ghi them dau *
            + Main: cho nao can truyen con tro thi phai them dau & */


/*Ham nhap so nguyen
    Dau vao: con tro de quan ly mot so nguyen(ko co gia tri)
    Thuc hien:  thuc hien nhap so nguyen ma minh truyen vao
    Dau ra:    thu duoc so nguyen sau khi da nhap ( co gia tri )
*/
 
void nhapSoNguyen(int *x){    //*x nghia la con tro de quan ly bien x
    printf("Nhap so nguyen: ");
    scanf("%d", &(*x));   //scanf("%d",x)    &+* = ko can ghi
}
//void tanglendonvi (int *n){
//	(*n)+=10;
//	printf("\n%d",*n);
//}
void tanglendonvibidaanh (int &n){
	n+=10;
}
int main(){
    int x;
    //Goi ham nhapSoNguyen;
    nhapSoNguyen(&x);
    printf("X = %d",x); 
	// goi ham tang len 5 don vi   
   // tanglendonvi(&x);
    tanglendonvibidaanh(x);
    printf("\n%d",x);
}

