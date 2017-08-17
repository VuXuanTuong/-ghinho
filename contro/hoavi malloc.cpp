#include <stdio.h>
#include <malloc.h>
 int swap( int *a, int *b)
 {
 	 int t=*a;
 	 *a=*b;
 	 *b=t;
 }
 int main()
 {
 	 int *p,n, i,j,temp;
 	 printf("\n Enter numbers of element  in th array : ");
 	 scanf("%d",&n);
 	 p=(int*)malloc(n*sizeof(int));
 	 p=(int*)malloc(n*sizeof(int));
 	 for(i=0 ; i< n ; ++i)
 	 {
 	 	 printf("\n Enter  element no.%d:",i+1);
 	 	 scanf("%d",p+i);
	  }
	   for( i=0 ; i< n-1; i++)
	   for( j=i+1; j<n; ++j)
	   if(*(p+i)>*(p+j))
	   {
	   	 swap(p+i,p+j);// vi p la con tro roi nen p+i cung la con tro nen ko ca &(p+i)... 
	   }
	   for( i=0; i<n; ++i)
	   printf(" \t %d",*(p+i));
 }
