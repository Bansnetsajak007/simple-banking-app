// banking application

#include<stdio.h>
#include<stdlib.h>



int main(){
	
	int choice, input_pin, pin=2580;
	int newInput_pin;   //new variable creation
	int balance=98000,new_bal,withdraw_amt,deposite_amt;	
	
	printf("\tWELCOME\n");
	printf("\tWhat yould you like to do?\n");
	printf("\t1.get details\n");
	printf("\t2.withdraw cash\n");
	printf("\t3.Deposite cash\n");
	printf("\t4.change password\n");
	printf("\t5.Exit\n");
	
	while(1){
	
		
	printf("Enter your choice:\n");
	scanf("%d", &choice);
	
	if(choice ==1){
		printf("Enter your pin to get access\n");
		scanf("%d", &input_pin);
		
		if(input_pin ==pin){
		
		printf("your details are...... \n");
		printf("Your a/c number is 01233232248\n");
		printf("Your current balance is 98000\n");
		
		}
	else;	
		while(input_pin!=pin){
			printf("Incorrect pin!!!\n");
			printf("Enter your pin again to get access\n");
			scanf("%d", &newInput_pin);
			
			if(newInput_pin==pin){
				
				//printf("correct pin\n");
				printf("your details are...... \n");
				printf("Your a/c number is 01233232248\n");
				printf("Your current balance is 98000\n");
				break;
			}
			
			else;
			
				printf("Try again!!\n");
		}
}
	
	if(choice==2){
		printf("Enter your pin to get access\n");
		scanf("%d", &input_pin);
		if(input_pin==pin){
			printf("Enter amount to with draw\n");		
			scanf("%d", &withdraw_amt);
			if(withdraw_amt>balance){
				
				printf("you dont have sufficient balance\n");
				exit(0);
			}
			
			else;
				new_bal=balance-withdraw_amt;			
				printf("Your new balance is %d", new_bal);
		}
	else;	
		while(input_pin!=pin){
			
			//newInput_pin
			printf("Enter your pin again\n");
			scanf("%d", &newInput_pin);
			
			if(newInput_pin==pin){
			printf("Enter amount to with draw\n");		
			scanf("%d", &withdraw_amt);
			if(withdraw_amt>balance){
				
				printf("you dont have sufficient balance\n");
				exit(0);
			}
			
			else;
				new_bal=balance-withdraw_amt;			
				printf("Your new balance is %d", new_bal);
				break;
		}
			
		}
		
			
	}
	
	
	
	if(choice==3){
		printf("Enter your pin to get access\n");
		scanf("%d", &input_pin);
		if(input_pin==pin){
			printf("Enter amount to deposite\n");		
			scanf("%d", &deposite_amt);

			new_bal=balance+deposite_amt;			
			printf("Your new balance is %d", new_bal);
		}
		
		else;
			while(input_pin!=pin){
				//newInput_pin		
				printf("Incorrect pin Enter again\n");
				scanf("%d", &newInput_pin);
				
				if (newInput_pin==pin){
				
				
					printf("Enter amount to deposite\n");		
					scanf("%d", &deposite_amt);
		
			
			
					new_bal=balance+deposite_amt;			
					printf("Your new balance is %d", new_bal);
					break;		
				
			}
			
	}
	
}
	
	
	//over writing the pin variable
	
	if(choice==4){
		
		printf("Enter your new pin\n");
		scanf("%d", &pin);
		
		
		printf("Your new pin is %d/n",pin);
		
	}
	
	
	if(choice==5){
		break;
		
	}
	
	
	
	
}
		printf("Thanks\n");
	  	printf("Visit again\n");	
	return 0;
}
