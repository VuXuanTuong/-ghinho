#include <stdio.h>
 void nhap( int a[], int n)
 {
 	
 	 for( int i=0 ; i<n ; i++)
 	 {
 	 	 printf("\n\t nhap a[%d]=",i);
 	 	 scanf("%d",&a[i]);
	  }
 }
  void xuat( int a[], int n)
  {
  	 for( int i =0 ; i< n ; i++)
  	 { 
  	 printf("\t%d",a[i]);
	   }
  }
   int swap( int &a, int &b)
   {
   	 int t=a; 
		a=b;
		b=t;
   }
   
void sapxep(int a[], int n)
	{
		 for( int i=0 ; i<n-1; i++)
		 { 
			  for( int j=i+1; j<n; j++)
			  {
			  	 if(a[i]>a[j])
			  	 swap(a[i],a[j]);
			  }
		 }
}
 int  timx( int a[], int n , int &x)
 {
 	 for( int i=0 ; i<n ;i++)
 	 {
 	 	 if( a[i]==x)
 	 	 return 1;	
	  }
	  return 0;
 }

 void chen(int a[], int &n, int &x)
 {
 	 int t;
 	 if( timx(a,n,x)==0)
 	 {
 	 	for( int i=0 ; i<n ; i++)
 	 	{
 	 		if(a[i]>x)
 	 		{
 	 			for(int j=n; j>i; j--)
	 	 			 {
	 	 				a[j]=a[j-1];
				  	 }
				a[i]=x;
			  }
			  else 
			  {
			  	a[n]=x;
			  }
			  xuat(a,n+1);
			  break;
		  }
		} 
		else 
		{
			for( int i=0 ; i< n; i ++)
			{
				 if(a[i]==x)
				 printf("\n\t phan tu bang x tai vi tri a[%d]",i);	
			}
		}
		
	 
}
	   	
	  
 
  int main()
  { 
  	 	int a[100],n,x;
  	 	printf("\n\t nhap vao n :");
 		scanf("%d",&n);
  	 	nhap(a,n);
  	 	printf("\n\t mang sua nhap la");
  	 	xuat(a,n);
  	 	printf("\n\t day sua khi sao xep la");
  	 	sapxep(a,n);
  	 	xuat(a,n);
  	 	printf("\n\t nhap vao x:");
  	 	scanf("%d",&x);
  	 	printf("\n\t  day sau check index is  ");
  	 	chen(a,n,x);
  	 	
  	 	
  }
