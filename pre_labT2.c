#include<stdio.h>
#include<conio.h>
int main(void){
	printf("pointer :: Demonstrate the use of & and * operator : ");
	printf("\n---------------------------------------------------");
	int m=300;
	float fx=300.600006;
	char cht='z';
	//simly printing the values of variable ;;;
	printf("\nm= %d",m);
	printf("\nfx= %f",fx);
	printf("\ncht= %c\n",cht);
	int *ptr1=&m;
	float *ptr2=&fx;
	char *ptr3=&cht;
	printf("\nUsing & of operator:: ");
	//using adress operator to reach its address
	printf("\n\nAddress of m :: %p",&m);
	printf("\nAddress of fx :: %p",&fx);
	printf("\nAddress of cht :: %p",&cht);
	
	printf("\n\nUsing  * operator:: ");
		//using asterik operator to print the values :: 
	printf("\n\nValue at Address m :: %d",*ptr1);
	printf("\nValue at Address of fx :: %f",*ptr2);
	printf("\nValue at Address of cht :: %c",*ptr3);
	
	
	//using only pointer variable ::
	printf("\n\nusing only pointer variable ::");
	printf("\n\nValue at Address m :: %p",ptr1);
	printf("\nValue at Address of fx :: %p",ptr2);
	printf("\nValue at Address of cht :: %p",ptr3);
	
	//using only pointer operator:: 
	printf("\n\nUsing only pointer * operator:: ");
		
	printf("\n\nValue at Address m :: %d",*ptr1);
	printf("\nValue at Address of fx :: %f",*ptr2);
	printf("\nValue at Address of cht :: %c",*ptr3);
	
}