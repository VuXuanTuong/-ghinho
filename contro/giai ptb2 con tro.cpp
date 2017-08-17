#include <stdio.h>
#include <math.h>
// fuction gptb2
void gptb2( float *a, float *b, float *c)
{
	 float x1,x2;
	 float delta=((*b)*(*b)-4*(*a)*(*c));
	  if( delta<0)
	   printf("\n\t PTVN ");
	else if( delta ==0)
	{
		 x1=-(*b)/2*(*a);
		 printf("\n\t PT co nghiem x1= %.2f",x1);
	}
	 else 
	  {
	  	 x1=(sqrt(delta)-(*b))/2*(*a);
	  	 x2=-(sqrt(delta)-(*b))/2*(*a);
	  	  printf("\n\t pt co 2 nghiem la x1= %.2f va x2= %.2f",x1,x2);
	  }
}
 // main chose 
  int main() 
  {
  	 float a,b,c;
  	 printf("\n\t Enter a,b,c :\n");
  	 scanf("%f%f%f",&a,&b,&c);
  	 gptb2(&a,&b,&c);
  	 return 0 ;
  }
