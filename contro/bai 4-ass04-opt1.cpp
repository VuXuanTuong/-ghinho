#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void nhap(int *a , int n)
{
	 for( int i=0 ; i<n; i++)
	 {
	 	 printf("\n\t Enter element array a[%d]= ",i);
	 	 scanf("%d",a+i);

	 }
}
 void xuat( int *a, int n )
 {
 	 for( int i=0 ; i<n ; i++)
 	 {
 	 	 printf("\t%d",*(a+i));
	  }
 }
  int swap( int *a, int *b)
  {
  	 int t=*a;
  	 *a=*b;
  	 *b=t;
  }
 // sapxep mang
void sapxep(int *a, int n )
{
	for( int i=0 ; i<n-1; i++)
	{
		 for( int j=i+1; j<n; j++)
		 {
		 	 if(*(a+i)>*(a+j))
		 	 {
		 	 	swap((a+i),(a+j));
			  }
		 	 
		 }
	}
}
 // tim phan tu am min !!!!
  void timammin(int *a, int n)
  {
  	 int min =0 ,dem=0;
	   for( int i=0 ; i< n ; i++)
	   {
	   	 if(*(a+i)<min)
	   	 {
	   	 	 min=*(a+i);
	   	 	 dem++;
			}
		} 
		 if( dem !=0)
		 	 printf("\n\n\t Element min <0 in array is %d  ",min);
		 
		  else 
		  
		  	 printf("\n\n\t Khong co phan tu am ");
		  
  }
  // tim phan tu duong max 
  void timduongmax(int *a, int n )
   {
   	 int max=*a,temp=0;
   	 for( int i=0 ; i<n; i++)
   	 {
   	 	 if(*(a+i)>=max &&*(a+i)>0)
   	 	 {
   	 	 	 max=*(a+i);
   	 	 	 temp++;
			 }
		}
		if( temp !=0)
	    printf("\n\n\t Element MAX >0 in array is %d  ",max);
	    else 
	    printf("\n\n\t Mang ko co phan tu duong ");
   }
// ham ktsnt 
 int ktnt(int n )
 {
 	 if( n<2)
 	 return 0;
 	 else 
 	 {
 	 	for( int i=2; i<sqrt(n); i++)
 	 	{
 	 		if(n%i==0)
 	 		return 0;
		  }
		   return 1;
	  }
 }
  void insnt(int *a, int n )
  {
  	 printf("\n\n\t Danh sach cac snt in mang is \n");
	   int temp=0;
  	 for( int i=0 ; i<n; i++)
  	 {
  	 	 if(ktnt(*(a+i))==1)
  	 	 {
  	 	 	printf("\t %d",*(a+i));
  	 	 	temp++;
			}
	   }
	    if( temp==0)
	    {
	    	printf("\n\t Array isn't so nguyen to ");
		}
  }
  // main chose 
  int main()
  {
  	int *a,n;
  	a=(int *)malloc(n*sizeof(int));
  	printf("\n\t Enter  numbers element : ");
  	scanf("%d",&n);
  	nhap(a,n);
  	xuat(a,n);
  	sapxep(a,n);
  	printf("\n\n\t mang sau khi sap xep la\n ");
  	xuat(a,n);
  	timammin(a,n);
  	timduongmax(a,n);
  	insnt(a,n);
  	return 0;
  }
