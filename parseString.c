#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// "Preloaded Code" (do NOT modify!)
typedef struct node {
  int data;
  struct node *next;
} Node;

Node *parse(char *string) {
    //TODO: return the linked list represented by the provided string
    char *tmp;
    Node *head;
    Node *iter;
    
    tmp = string;
    while(isspace(*tmp))
      tmp++;
    if (!isdigit(*tmp))
      return (NULL);
    head = (Node *)malloc(sizeof(Node));
    head->data = atoi(tmp);
    head->next = NULL;
    iter = head;
    while(*tmp != '\0')
    {
      while(*tmp != '>' && *tmp != '\0')
        tmp++;
      while(!isdigit(*tmp) && *tmp != '\0')
        tmp++;
      if (*tmp != '\0' && isdigit(*tmp))
      {
        iter->next = (Node *)malloc(sizeof(Node));
        iter = iter->next;
        iter->data = atoi(tmp);
        iter->next = NULL;
      }
    }
  return head;
}