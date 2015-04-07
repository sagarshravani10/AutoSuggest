#include <stdio.h>
#include <stdlib.h>
#define ALPHABET_SIZE = 26;

typedef struct node
{
    bool isEndOfWord;
    struct node* next[ALPHABET_SIZE];
}node1;

Node *createNode()
{
    
}
int showMenu()
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

