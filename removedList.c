
#include "mp3.h"

extern node_t *head, *tail;

void removedList(){
    node_t *temp;
    int i = 0;
    while (head != NULL)
    {
        temp = head;
        head = temp->next;
        free(temp->artist);
        free(temp->title);
        free(temp);
        i++;
    }    
}