#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    //This program will copy maximum 500 words.
    //Though you can modify max number of words in this source code.
    //This program take two arguments from user in cli first which file to copy from and
    //second argument to which it should copy.
    //!!important notice you must type correct file name with extention.
    //example filecopier from.txt to.txt

    int i = 0;
    char *from = argv[1], *to = argv[2];
    printf(from);
    char w[500];

    printf(from);
    printf("\n");
    printf(to);

    FILE *fp;

    fp = fopen(from,"r");

    if(fp == NULL){
        printf("Can't read the text file\n");
        return 0;
    }

    while(1){
        w[i] = fgetc(fp);
        if(feof(fp)){
            w[i] = '\0';
            break;
        }
        i++;
    }

    printf("text copy done In clipboard.\n");

    i = 0;

    fclose(fp);

    fp = fopen(to,"w");

    if(fp == NULL){
        printf("Can't modify or create targeted file./n");
        return 0;
    }

    while(w[i] != '\0'){
        fputc(w[i],fp);
        i++;
    }

    printf("copy done.");

    fclose(fp);

    return 0;
}
