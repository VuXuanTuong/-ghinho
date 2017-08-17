#include <stdio.h>
itn main()
{
	 int n;
	  char *word;
	  scanf("%d",&n);
	  ffush(stdin);// neu ko co fflush thi se ko nhap duok ro n luu  dau enter cua lan nhap n !!!
	  word=(char*) malloc(n* sizeof(char *));
	  printf("\n\t chuoi la ");
	  gets(word);
}
