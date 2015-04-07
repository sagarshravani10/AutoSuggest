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

void insertWord(Node *root, char word[])
{
    int i, idx;
    Node *tmp = root;
    for(i=0; word[i]!='\0';i++)
    {
        idx = word[i] - 'a'; //to get the array index of alphabet in word[i]
        if(tmp->next[idx] == NULL) //if char points to nothing
            tmp->next[idx] = createNode(); //init the node
        tmp = tmp->next[idx]; //move tmp to the next one
    }
    tmp->isEOW = true; //word ends, set isEOW to true
    printf("\nInserted %s", word);
    //return true;
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
    Node *root = createNode();
    char word[100];
    while(1)
    {
        choice  = showMenu();
        switch (choice)
        {
        case 1:
            printf("\nEnter word: ");
            scanf("%s", word); //array name points to first element of array
            insertWord(root, word);
            break;
        case 4:
            return 0;
        default:
            printf("\nBad choice...");
        }
    }
    return 0;
}
