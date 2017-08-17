#include <stdio.h>
#include <string.h>
 int main()
{
	 char *ptr,tu[50];
	 printf("\n\t Enter words: ");
	 gets(tu);
	 puts(tu);
	 int i, temp=0;
	 ptr=&tu[0];
	 for( i=1; i<=strlen(tu);i++)
	 {
	 	 if(*(ptr+i)=='u'||*(ptr+i)=='e'||*(ptr+i)=='o'||*(ptr+i)=='a'||*(ptr+i)=='i')
	 	 temp++;
	 	 
	 }
	 printf("\n%d",temp);
	 
}
