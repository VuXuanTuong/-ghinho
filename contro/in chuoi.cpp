#include <stdio.h>
#include <string.h>
int main()
{
	 char a, str[81],*ptr;
	 printf("\n enter a sentence: ");
	 gets(str);
	 printf("\n enter character to serch for : ");
	 a=getchar ();// nhap ki tu tu ban phim nhap vao
	 ptr=strchr(str,a);//gan dia chi o nho chua ki tu a trong chuoi string
	 printf("\n string starts at address : %u", str);// in ra dia chi bat dau cua chuoi day
	 printf("\n First occurrence of the character is at address : %u",ptr);
	 printf("\n position of first occurrence (starting from 0)is : %d",ptr-str);// co bn o nho giua ptr va str hay khoang cach gi
}
