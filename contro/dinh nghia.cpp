#include <stdio.h>
int main()
{
	 int var=500, *ptr_var;
	 ptr_var=&var;//gia tri cua con tro gan cho dia chi cua oo nho &var
	 printf("th value %d is stored at address %u: ",var,&var);
	 printf("\n the value %u is stored at address : %u",ptr_var,&ptr_var);//%u(so nguyen)=%h(hexa);
	 printf("\n the value %d is stored at address : %u",*ptr_var,ptr_var);
}
