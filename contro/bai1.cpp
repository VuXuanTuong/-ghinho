#include <stdio.h>
int main()
{
	int *a,  *b;// khai bao hai bien con tro a,b tro ts vung nho  a,b luu gia tri nguyen hay *a la noi dung a , *b la noidung b
	int ix=4,iy=7;
	printf("\n ix=%d , iy=%d", ix, iy);
	a=&ix;// gia tri vung nho a bang gia tri dia chi ix
	b=&iy;//tt
	*a+=10;// thay doi gia tri noi dung cua hai bien con tro  
	*b+=10;//tt
	printf("\n ix=%d , iy=%d",ix,iy); // vi ta da gan o dong 7 va 8 nen khi lam thay doi gt cua hai bien con tro o dong 9,10 thi dong nghia gia tri cua hai o nho &ix &iy cung thay doi khi do ix va iy thay doi  
	return 0;
}
 
