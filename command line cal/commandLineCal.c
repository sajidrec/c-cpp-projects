#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    
    char symbol[10],numberOne[32],numberTwo[32];
    int i = 0;

    printf("Supported commands are -> quit,plus,minus,divide,multiply,modulo,square,cube.\n\n");

    do{
        printf("Enter what you wanna perform : ");

        gets(symbol);

        while(symbol[i] != '\0'){
            symbol[i] = tolower(symbol[i]);
            i++;
        }

        i = 0;

        if(strcmp(symbol,"quit") == 0){break;}

        printf("Enter first number : ");
        gets(numberOne);

        if(strcmp(symbol,"square") != 0 && strcmp(symbol,"cube") != 0){
            printf("Enter second number : ");
            gets(numberTwo);
        }

        int num1,num2;

        num1 = atoi(numberOne), num2 = atoi(numberTwo);

        if(strcmp(symbol,"plus") == 0){
            printf("The sum is : %d\n",num1+num2);
        }
        else if(strcmp(symbol,"minus") == 0){
            printf("Absolute value is : %d\n",num1-num2);
        }
        else if(strcmp(symbol,"divide") == 0){
            printf("Division is : %d\n",num1/num2);
        }
        else if(strcmp(symbol,"multiply") == 0){
            printf("The multiplication is : %d\n",num1*num2);
        }
        else if(strcmp(symbol,"modulo") == 0){
            printf("Modulo is : %d\n",num1%num2);
        }
        else if(strcmp(symbol,"square") == 0){
            printf("Square is : %d\n",num1*num1);
        }
        else if(strcmp(symbol,"cube") == 0){
            printf("Cube is : %d\n",num1*num1*num1);
        }

        else{
            printf("\nCommand not found please.\n");
        }

    }while(true);

    return 0;
}
