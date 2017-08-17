#include <stdio.h>
#include <stdlib.h>
int main()
{
	 float *calloc1, *calloc2;
	 int i;
	  calloc1=(float*) calloc(3,sizeof(float));// dau ","  khac vs * trong malloc nghia la o day n cu nhat mot th clear xong den th tip , nghia la lay ra n o nho roi lam cho n0 ==0 r ms thao tac  
	  calloc2=(float*) calloc(3,sizeof(float));
	   if( calloc1!= NULL && calloc2!=NULL)
	   {
	   	 for( i=0 ; i<3; i++)
	   	 {
	   	 	 printf("\n calloc [%d] holds %0.5f %d",i,calloc1[i],&calloc1[i]);
	   	 	 printf("\n calloc [%d] holds %0.5f %d",i,*(calloc2+i),(calloc2+i));
			}
			free (calloc1);
			free(calloc2);
			return 0;
			
	   }
	  else 
	  {
	  	 printf("not enough memory \n");
	  	 return 1;
	  }
}
