

#include "mp3.h"
extern node_t *head, *tail;

void insert(char *title, char *artist, int num, int time){
    node_t *mp3, *temp;

    mp3 = (node_t *) malloc(sizeof(node_t));
    mp3->artist = (char *) malloc(strlen(artist) + 1);
    strcpy(mp3->artist, artist);
    mp3->title = (char *) malloc(strlen(title) + 1);
    strcpy(mp3->title, title);

    mp3->data = num;
    mp3->time = time;
    mp3->next = NULL;
    mp3->prev = NULL;

    if(head == NULL){
        head = mp3;
    } else {
        temp = head;
        while (mp3->next != NULL)
        {
            temp = mp3->next;
        }
// Linked List 
        temp->next = mp3;
        tail = mp3;
        temp->prev = temp;
    }
}