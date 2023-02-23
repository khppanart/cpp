#include <stdio.h>

int base,high;
float triangle;

main(){
	printf("Enter base:");
	scanf("%d",&base);
	printf("Enter high:");
	scanf("%d",&high);
	triangle =0.5*base*high;
	printf("base=%d \n high=%d \n triangle= %.3f",base,high,triangle);
	
	
}
