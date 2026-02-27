//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
     char CorrectPass[50] = "secure123";

     do {
        printf("Enter Password: ");
        scanf("%s", password);
    
     } while(strcmp(password, CorrectPass) != 0);

     printf("Password Correct!");
	 
	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here
	
    return 0;
}