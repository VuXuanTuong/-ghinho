#include <stdio.h>
int main()
{
	 static int array[10]={1,2,3,4,5,6,7,8,9,10};
	 int i;
	 for( i=0 ; i<10; i++)
	 {
	 	 printf("\n i=%d, array[i]=%d, *(array+i)=%d",i,array[i],*(array+i));
	 	 printf("&array[i]=%X,array+i=%X",&array[i],array+i);
	 }
}
