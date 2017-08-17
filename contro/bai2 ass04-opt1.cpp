#include < stdio.h>
#include <stdlib.h>
#include <string.h>
int strcmp( char * str1, char * str2)
{
	int len1=strlen(str1);
	int len2=strlen(str2);
	int i, len ;
	if( len1 < len2 );
	len=len1;
	else
	len=len2;
	for( int i =0 ; i<len ; i++)
	{
		 if( *(str1+i)<*(str2+i))
		 retrun -1;
		 if( *(str1+i)>*(str2+i))
		 retrun 1;
	}
	if( len1 ==len2)
	return 0;
	if(len1<len 2)
	return -1;
	else 
	 return 0;
	
}
 void strcpy(char * str1, char *str2)
 {
 	int len2=strlen(len2);
 	str1=(char*)relloc(str 1, len +1);
 	for( int i =0 ; i < =len2; i++)
 	{
 		 *(str1+i)=*(str2+i);
	 }
	  return ;
 }
  void  strcat( char *str1, char *str2)
  {
  	int len1=strlen( str1);
  	int len2=strlen(str2);
  	 str1=(char *)relloc(str1 , (len1 +len2)sizeof(char))
  	  int i ;
  	for(i=len1; i<len1+len2; i++)
  		*(str1+i)=*(str2+i-len1);
  	*(str1+len1+len2)= '\0';
  	return ;
  		
	 
  }
   int main()
   {
   	 int maxlen
		char *str1,*str2;
		printf("Max len : ");
		scanf("%d",&maxlen);
		str1=(char*)malloc((maxlen+1)*sizeof(char))
		str2=(char *)malloc((maxlen+1)*sizeof(char))
		printf("str1 : "); fflush(stdin);
		gets(str1);
		printf("str2 : ");fflush (stdin);
		gets(str2);
		strcat(str1,str2);
		printf("str1 : %s, str2 :%s ",str1,str2);
		return 0;
   }
