#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = NULL;
    return newNode;
}
int main(){
    Node *first = createNode(10);
    first->next = createNode(20);

    first->next->next = createNode(30);
    printf("LinkedList: ");
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return 0;
}