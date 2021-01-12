#include <stdio.h>
int main(){
    char name[30];
	int old,year;
	int multiply;
	int num1,num2;
	
	printf("what is you name ? :");
	scanf("%s",&name);
	printf("%s",name);
	
	printf("\nHow old are you");
	scanf("%d",&old);
	printf("%d",old);
	
	printf("\nwhat year was born ? :");
	scanf("%d",&year);
	printf("%d",year);
	
	printf("enter number 1 :");
	scanf("%d",&num1);
	
    printf("enter number 2 :");
	scanf("%d",&num2);

	multiply = num1*num2;
	printf("%d",multiply);
	return 0;
	 

	
	
	
}
    
    