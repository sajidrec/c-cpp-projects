#include <stdio.h>
#include <string.h>

int main(void){

    int attempt = 3,tries = 3;
    char userName[50], pass[50], *realUserName, *realPassword;

    realUserName = "sajid";
    realPassword = "test";

    printf("Fun with C. User name is sajid and password is test.\nFeel free to modify source code with you're own username and password happy coding ;) \n\n");

    while(attempt){

        printf("\nEnter username : ");

        scanf("%s", userName);

        printf("\nEnter password : ");

        scanf("%s", pass);

        if((strcmp(userName,realUserName) == 0) && (strcmp(pass,realPassword) == 0)){
            printf("\a\nAccess granted\n");
            attempt = 1;
        }

        else{

            tries--;

            if(tries == 0){
                printf("\a\nAccess Denied\n");
            }
            else{
                printf("\nWrong username or password. You've %d attempt left\n",attempt-1);
            }

        }

        attempt--;
    }

    return 0;
}

//This is a fun project just practicing to create some basic program using C.
