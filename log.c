#include "mp3.h"

extern node_t *head, *tail;

void log(){
    char x;
    int i = 0;
    node_t *temp;
    head = temp;

        printf("Print items in order, or reverse order");
        scanf(" &c", &x);
        switch (x)
        {
        case 'Y': 
            temp = head;
            while(temp != NULL){
                printf("(%d)--%s--%s--%d--%d)",++i, temp->artist, temp->title, temp->data, temp->time);
                temp = temp->next;
            }
            break;
        case 'N':
            temp = tail;
            while(temp != NULL){
                printf("(%d)--%s--%s--%d--%d)",++i, temp->artist, temp->title, temp->data, temp->time);
                temp = temp->prev;
            }break;
        default: printf("NOT VALID");
                exit(-1);
        }
}