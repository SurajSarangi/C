#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};
typedef struct node NODE ;

NODE *head,*end;

void insert(int n)
{
    int i=0;
    while(i<n)
    {
        int k;
        printf("Enter number\n");
        scanf("%d",&k);
        NODE *temp;
        temp=(NODE*)malloc(sizeof(NODE));
        temp->info=k;
        temp->next=NULL;
        if(end==NULL)
            head=end=temp;
        else
        {
            end->next=temp;
            end=temp;
        }
        i++;
    }
}

void delete(int n)
{
    NODE *p, *q;
    p=head;
    while(p->info!=n)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    free(p);
}

void disp()
{
    NODE *p;
    p=head;
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->next;
    }
}

void sort()
{
    NODE *p=head,*q;
    int min=p->info,a;

    while(p!=NULL)
    {
        min=p->info;
        q=p->next;
        while(q!=NULL)
        {
            if(q->info<min)
            {
                min=q->info;
                a=q->info;
                q->info=p->info;
                p->info=a;
            }
            q=q->next;
        }
        p=p->next;
    }
    disp();
}

int main()
{
    while(1)
    {
        int ch,n;
        printf("1.Insert\n2.Delete\n3.Display\n4.Sort\n5.exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                printf("enter no of elements\n");
                scanf("%d",&n);
                insert(n);
                break;
            case 2:
                printf("Enter number to delete\n");
                scanf("%d",&n);
                delete(n);
                break;
            case 3:
                disp();
                break;
            case 4:
                sort();
                break;
            case 5:
                exit(1);
        }
    }
    return 0;
}
