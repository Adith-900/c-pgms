#include <stdio.h>
#include <math.h>

int main(void){
	int choice,i,a,b;
	float X,Y,result;
	
	do{
		printf("\nSelect your operation (0 to exit):\n ");
		printf(" 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n ");
		printf(" 5. Square root\n 6. X ^ Y\n 7. X ^ 2\n 8. X ^ 3\n");
		printf("choice: ");
		scanf("%d", &choice);
		if(choice==0) 
		break;
		
		switch(choice)
		{
			case 1:
				printf("Enter X: ");
				scanf("%f", &X);
				printf("\n Enter Y:");
				scanf("%f" , &Y);
				result = X+Y;
				printf("\nResult: %f\n", result);
				break;
				
			   case 2:
				printf("Enter X: ");
				scanf("%f", &X);
				printf("\n Enter Y");
				scanf("%f" , &Y);
				result = X-Y;
				printf("\nResult: %f\n", result);
				break;
				
			   case 3:
				printf("Enter X: ");
				scanf("%f", &X);
				printf("\n Enter Y");
				scanf("%f" , &Y);
				result = X*Y;
				printf("\nResult: %f\n", result);
				break;
				
			   case 4:
				printf("Enter X: ");
				scanf("%f", &X);
				printf("\n Enter Y");
				scanf("%f" , &Y);
				result = X/Y;
				printf("\nResult: %f\n", result);
				break;
						
			   case 5:
				printf("Enter X: ");
				scanf("%f", &X);
				result = sqrt(X);
				printf("\nResult: %f\n", result);
				break;
				
			   case 6:
				printf("Enter X: ");
				scanf("%f", &X);
				printf("\n Enter Y");
				scanf("%f" , &Y);
				result = pow(X,Y);
				printf("\nResult: %f\n", result);
				break;
				
			   case 7:
				printf("Enter X: ");
				scanf("%f", &X);
				result = pow(X,2);
				printf("\nResult: %f\n", result);
				break;
				
			   case 8:
				printf("Enter X: ");
				scanf("%f", &X);
				result = pow(X,3);
				printf("\nResult: %f\n", result);
				break;	
				default:
					printf("\nInvalid Choice!");
					
						
		}
	}while (choice);
	getch();
	return 0;
} 
