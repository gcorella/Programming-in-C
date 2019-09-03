#include <stdio.h>
#include "mp3.h"

extern node_t *head, *tail, *head2, *tail2;

void delete(char *name)
{
    node_t *temp, *temp2 = NULL;
    temp = head;


    while (temp != NULL)
    {
         temp2 = temp->next;
        if(strcmp(temp->artist,name) == 0){
            if(temp == head){
                head = temp->next;
            }
            if(temp->next != NULL){
                temp->next->prev = temp->prev;
            }

        free(temp->artist);
        free(temp->title);
        free(temp);
        }
        temp = temp2;
    }
}

void removeList(){
    int i = 0;
    node_t *temp;

    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp->artist);
        free(temp->title);
        free(temp);

        ++i;
    }
    printf("free %d MP3 records...\n", i);
}
