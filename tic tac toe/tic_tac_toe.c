#include <stdio.h>
#include <stdbool.h>

void dp(char *court);

int main(void){
    int player,i,inpHolder;
    bool gameOver = false, draw = false;
    char court[9];

    player = 1;
    inpHolder = 0;

    for(i = 0; i < 9; i++){
        court[i] = i+20;
    }

    while(!gameOver && !draw){

        printf("\nPlayer %d : Enter you're court number : ",player);
        scanf("%d",&inpHolder);

        inpHolder--;

        if(player == 1){

            if( (court[inpHolder] != 'X') && (court[inpHolder] != 'O') ){
                court[inpHolder] = 'X';
                player = 2;

            }

        }
        else if(player == 2){

            if( (court[inpHolder] != 'X') && (court[inpHolder] != 'O') ){
                court[inpHolder] = 'O';
                player = 1;

            }

        }

        dp(&court);


        // logic checkers

        if(court[0] == court[1] && court[1] == court[2]){gameOver = true;}
        else if(court[3] == court[4] && court[4] == court[5]){gameOver = true;}
        else if(court[6] == court[7] && court[7] == court[8]){gameOver = true;}

        else if(court[0] == court[3] && court[3] == court[6]){gameOver = true;}
        else if(court[1] == court[4] && court[4] == court[7]){gameOver = true;}
        else if(court[2] == court[5] && court[5] == court[8]){gameOver = true;}

        else if(court[0] == court[4] && court[4] == court[8]){gameOver = true;}
        else if(court[2] == court[4] && court[4] == court[6]){gameOver = true;}

        // draw checking logic

        for(i = 0; i < 9; i++){

            if(court[i] == 'X' || court[i] == 'O'){
                draw = true;
            }
            else{
                draw = false;
                break;
            }

        }

    }

    if(!draw){

        switch(player){
        case 1:
            printf("\a");
            printf("\nPlayer 2 has won\n");
            break;
        case 2:
            printf("\a");
            printf("\nPlayer 1 has won\n");
        }

    }

    else{
        printf("\a");
        printf("\nIt's a draw\n");
    }



    return 0;
}

void dp(char *court){

    int i;

    printf("\n");

    for(i = 0; i < 9; i++){
        if(i%3==0 && i != 0){
            printf("\n");
        }
        printf(" %c ",court[i]);

    }

    printf("\n");

}
