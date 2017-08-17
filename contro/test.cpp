#include <stdio.h>
#include <conio.h>
#define SIZE 4
void add(int *, int, int);
void  add(int *ptr, int inum, int ia)
{
	int ij;
	for (ij = 0; ij < inum; ij++)
	//*(ptr) = *(ptr++) + ia;
	*(ptr+ij) = *(ptr+ij) + ia;
}
int  main()
{
	int iarray[] = {2, 5, 6, 9};
	int i, ix = 10;
	add(iarray, SIZE, ix);
	for (i = 0; i < SIZE; i++)
	printf("%d ", *(iarray + i));
	getch();
}

