#include <stdio.h>
#include <stdlib.h>
void nhap( int *mang , int n )
{
	 
	 for( int i=0 ; i<n; i++)
	 {
	 	 printf("\n\t enter a[%d]=",i);
	 	 scanf("%d",mang+i);
	 }
}
 void xuat( int *mang, int n)
 {
 	 for( int i=0 ; i<n; i++)
 	 {
 	 	 printf("\t %d",*(mang+i));
	  }
 }
  int swap( int *a, int *b)
  {
  	 int t=*a; 
  	 *a=*b;
  	 *b=t;
  }
  // sap xep
   void sapxep( int *mang, int n )
   {
   	 for( int i=0 ; i<n-1; i++)
   	 {
   	 	 for( int j=i+1; j<n; j++)
   	 	{
   	 	 if( *(mang+i)>*(mang+j))
   	 	 swap(mang+i, mang +j);
		}
	}
}
   // tim xem co phan tu  nao bang x
  int  timx(int *mang, int n, int x)
  {
  
  	 for( int i=0 ; i< n ; i++)
  	 {
  	 	 if( *(mang +i)==x)
  	 	 return 1;
	   }
	   return 0;
  }
  // chen x vao mang 
   void chenx( int *mang, int n, int x)
   {
   		int t;
   	mang=(int *)realloc(mang,(n+1)*sizeof(int ));
   	if(timx(mang,n,x)==0)
   	{
   		 for( int i=0; i<n; i++)
   		 {
   		 	 if(*(mang+i)>x)
   		 	 {
   		 	 	 for( int j=n ; j>i; j--)
   		 	 	{
   		 	 	 *(mang +j)=*(mang +j-1);
				 }
				 *(mang +i)=x;
				 	
			}
			else 
			{
			*(mang +n)=x;
			
			}
			xuat(mang,n+1);
			break;
		}
	   
	}
	    else 
	    {
	    	 for( int i=0 ; i<n ; i++)
	    	 {
	    	 	if(*(mang +i)==x)
	    	 	t=i;
			 }
			 printf("\n\t phan tu da ton tai trong mag tai vi tri a[%d]",x,t);
		}
   }
   
    int main()
    {
    	 int n=0, *mang,x;
    	 printf("\n\t Enter  numbers element : ");
    	 scanf("%d",&n);
    	 mang=(int *)malloc(n*sizeof(int));
    	 nhap(mang,n);
    	 printf("\n\t mang sua khi nhap la ");
    	 xuat(mang,n);
    	 printf("\n\t mang sau khi sap xep la  ");
    	 sapxep(mang,n);
    	 xuat(mang,n);
    	 printf("\n\t nhap voa phan tu x muon chen : ");
    	 scanf("%d",&x);
    	 printf("\n\t mang sau khi chen la ");
    	 chenx(mang,n,x);
    	 return 0;
    	 
	}
