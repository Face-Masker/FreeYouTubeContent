#include<stdio.h> // input output

void main()
{
	// if
	//if - else
	//if - else if - else
	//switch case
	
	int number;
	
	printf("Enter your Age: ");
	scanf("%d", &number);
	
	if(number > 18){
		printf("\nHello Friend");
	}
	
	if(number >= 18){
		printf("\nYour Age above 18 or equal");
	} else {
		printf("\nYour Under 18 restricted area");
	}
	
	if(number == 1){
		printf("\nHello Friends");
	} else if(number == 2){
		printf("\nHello uncle");
	}else{
		printf("\nHello World, Your not in choice");
	}
	
	switch(number){ 
		case 1: //number == 1
			printf("\nEntered Value is One: %d", number);
			break;
		case 2: //number == 2
			printf("\nEntered Value is Two: %d", number);
			break;
		default: // else
			printf("\nNot Match with above value: %d", number);
	}
}
