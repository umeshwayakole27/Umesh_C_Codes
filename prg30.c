// 7:  program to implement doubly linked list.

#include <stdio.h>
#include <stdlib.h>
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
struct Node
{
    int e;
    Position previous;
    Position next;
};

void Insert(int x, List l, Position p)
{
    Position TmpCell;
    TmpCell = (struct Node *)malloc(sizeof(struct Node));
    if (TmpCell == NULL)
        printf("Memory out of space\n");
    else
    {
        TmpCell->e = x;
        TmpCell->previous = p;
        TmpCell->next = p->next;
        p->next = TmpCell;
    }
}

int isLast(Position p)
{
    return (p->next == NULL);
}

Position Find(int x, List l)
{
    Position p = l->next;
    while (p != NULL && p->e != x)
        p = p->next;
    return p;
}

void Delete(int x, List l)
{
    Position p, p1, p2;
    p = Find(x, l);
    If(p != NULL)
    {
        p1 = p->previous;
        p2 = p->next;
        p1->next = p->next;
        if (p2 != NULL)
            p2->previous = p->previous;
    }
    else printf("Element does not exist!!!\n");
}

void Display(List l)
{
    printf("The list elements are :: ");
    Position->p = l->next;
    while (p != NULL)
    {
        printf("%d->", p->e);
        p = p->next;
    }
}

void main()
{
    int x, pos, ch, i;
    List l, l1, p;
    l = (struct Node *)malloc(sizeof(struct Node));
    l->previous = NULL;
    l->next = NULL;
    p = l;
    printf("DOUBLY LINKED LIST IMPLEMENTATION OF LIST \n");
    do
    {
            printf("\n1.INSERT\t2. DELETE\t3. FIND\t4. PRINT\t5. QUIT\n  Enter the choice ::"); 
         scanf("%d", &ch);
switch(ch)
{
        case 1:
            p = l;
            printf("Enter the element to be inserted :: ");
            scanf("%d", &x);
            printf("Enter the position of the element :: ");
            scanf("%d", &pos);
            for (i = 1; i < pos; i++)
            {
                p = p->next;
            }
            insert(x, l, p);
            break;

        case 2:
            p = l;
            printf("Enter the element to be deleted :: ");
            scanf("%d", &x);
            Delete(x, p);
            break;

        case 3:
            p = l;
            printf("Enter the element to be searched :: ");
            scanf("%d", &x);
            p = Find(x, p);
            if (p == NULL)
                printf("Element does not exist!!!\n");
            else
                printf("Element exist!!!\n");
            break;

        case 4:
            Display(l);
            break;
}
    } while (ch < 5);
    return 0;
}
