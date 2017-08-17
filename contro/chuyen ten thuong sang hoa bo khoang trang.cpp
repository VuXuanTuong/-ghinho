#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chuyenvaxoabokhoangtrang(char *p,char *s)
{
    char *temp=(char*)malloc(strlen(s)+1);
    int k=0;
    s=strupr(p);
    for(int i=0;i<strlen(s);i++)
        if (s[i]!=32) temp[k++]=s[i];
    temp[k]=0;
    strcpy(s,temp);
    free(temp);
    puts(s);
}  
 int main()
 {
 	 char p[255], s;
 	 printf("\n\t nhap vao ten : ");
 	 gets(p);
 	chuyenvaxoabokhoangtrang(p,&s);
 	 return 0;
 }
