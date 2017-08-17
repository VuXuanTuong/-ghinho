// relloc tao ra cung ho moi gan vao con tro da ton tai va ngay ke tip
#include <stdio.h>
#include <stdlib.h>
int main()
{
	 int *ptr, i;
	 ptr=(int*)calloc(5,sizeof(int *));
	 if(ptr !=NULL)
	 {
	 	 *ptr=1;//= ptr[0];
	 	 *(ptr+1)=2;//=ptr[1]
	 	 ptr[2]=4;
	 	 ptr[3]=8;
	 	 ptr[4]=16;
	 	 ptr=(int *)realloc(ptr,7*sizeof(int));
	 
		 if(ptr!=NULL)
		 {
		 	 printf("Now allocating more memory ...\n");
		 	 ptr[5]=32;
		 	 ptr[6]=64;
		 	 for( i=0 ; i<7; i++)
		 	 {
		 	 	 printf("ptr[%d] holds %d\n", i, ptr[i]);
			  }
			   realloc(ptr,0);
		   return 0;
		}
		 else 
		 {
		 	printf("not enough memory -realloc failed .\n");
		 	return 1;
		 }
		}
		
	else 
		{
			 printf("\n not enough memory -calloc failed ,\n");
			 return 1;
		}
}

