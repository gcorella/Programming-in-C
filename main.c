#include <stdio.h>
#include "mp3.h"
#include <stdlib.h>


/*
    Author: Gabriel Corella
    CISC 361: Programming in C

 */

node_t *head, *tail;
#define BUFFERSIZE 128

int main(){

    void insert(char *title, char *artist, int num, int time);
    void delete(char *name);
    void log();
    void removeList();

    char buffer[BUFFERSIZE];
    char slct;
    int len, i;
    node_t *mp3;
            // Print Function Definitions
            printf("---Welcome---\n");
            printf("_____________\n");
            printf("Press a Number for Selection..\n");
            printf("(1) Insert \n");
            printf("(2) Delete \n");
            printf("(3) Display \n");
            printf("(4) Exit \n");
    head = NULL;
// IF given a number < 0, then print an error message 

        if(scanf("%d%c",&i,slct <0)){
            printf("Error: Please")
        }; 
        switch (i)
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }






    // Free at the End
    free(mp3->artist);
    free(mp3);
    return 0;
}