#include <stdio.h>
#include "mp3.h"
#include <stdlib.h>


/*
    Author: Gabriel Corella
    CISC 361: Programming in C

 */

node_t *head, *tail;
#define SIZE 128

int main(){

    void insert(char *title, char *artist, int num, int time);
    void delete(char *name);
    void log();
    void removeList();

    char render[SIZE];
    char slct;
    
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
char title[SIZE];
char artist[SIZE];
char removeArtist[SIZE];
int titleLen, artistLen;

        if(scanf("%d%c",&i, slct) <= 0){
            printf("Error: Please enter a Number ");
            exit(1);
        }else{
            switch (i)
            {
                case 1:
                        printf("Enter in a Song Title: \n");
                        if(fgets(title,SIZE, stdin) != NULL){
                            titleLen = strlen(title);
                            title[i - 1] = '\0';
                        }
                        printf("Enter in the Song's Artist Name; \n");
                        if(fgets(artist,SIZE,stdin) != NULL){
                            artistLen = strlen(artist);
                            artist[l]

                        }
        default:
            break;
        }
    }



// Add the correct amount of buffer to character buffers


    // Free at the End
    free(mp3->artist);
    free(mp3);
    return 0;
}