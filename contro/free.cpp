#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number;
	int *ptr,*ptr2;
	int i;
	printf(" how many ints woud you like stores?");
	scanf("%d",&number);
	ptr=(int *) malloc (number * sizeof(int)); //  number * so byte vd 10*sizeof(int)=20 byte // dau * la om mot luc ma ko clear 
	if(ptr !=NULL)
	{
		 for(i=0 ; i<number; i++)
		 {
		 	 *(ptr+i)=i;
		 }
		 ptr2=ptr;
		 for ( i=number ; i>0; i--)
		 {
		 
		 	printf(" \t %d",*(ptr+(i-1)));
		 }
		 //free (ptr);
		 printf("\n");
		 for ( i=number ; i>0; i--)
		 {
		 	printf(" \t %d",*(ptr2+(i-1)));
		 }
		 	
		 
		 return 1;
	}
	else 
	{
		 printf("\n Memmory allocation failed -not enought memory .\n");
		 return 0;
	}
}
