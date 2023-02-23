#include <stdio.h>

int wide,long1;
float rectangle;

main(){
	printf("Enter wide :");
	scanf("%d",&wide);
	printf("Enter long1:");
	scanf("%d",&long1);
	rectangle =wide*long1;
	printf("wide=%d \n long1=%d \n rectangle= %.3f",wide,long1,rectangle);
	
	
}
