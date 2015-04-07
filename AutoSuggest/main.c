#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define ALPHA_SIZE 26

typedef struct node //simplified linked list to implement the word data structure
{
    bool isEOW;
    struct node *next[ALPHA_SIZE];
}Node;

Node *createNode() //function to init the node
{
    int i;
    Node *newNode = malloc(sizeof(Node));
    newNode->isEOW = false;
    for(i=0; i<ALPHA_SIZE; i++)
        newNode->next[i] = NULL;
    return newNode;
}

int showMenu() //function to show the user the menu
{
    int choice;
    printf("\nMenu\n----\n");
    printf("1. Insert word\n2. Auto Suggest Word\n3. Print All Words\n4. Exit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int choice;
    while(1)
    {
        choice  = showMenu();
        switch (choice)
        {
        case 4:
            return 0;
        default:
            printf("\nBad choice...");
        }
    }
    return 0;
}

