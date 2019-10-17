#include<stdio.h>
#include<stdlib.h>

struct dLL
{
    int info;
    struct dLL *next;
    struct dLL *prev;
};
typedef struct dLL NODE;

NODE *h=NULL;
void insert()
{
    NODE *p,*q;int i=0;
    while(i<10)
    {
        q=h;
        p=(NODE*)malloc(sizeof(NODE));
        printf("Enter info\n");
        scanf("%d",&p->info);
        p->next=NULL;
        if(h==NULL)
        {
            p->prev=NULL;
            h=p;
        }
        else
        {
            while(q->next!=NULL)
                q=q->next;
            q->next=p;
            p->prev=q;
        }
        i++;
    }
}

void disp1()
{
    NODE *p=h;
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->next;
    }
}

void disp2()
{
    NODE *p=h;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->prev;
    }
}

void sort()
{
    NODE *p=h,*q;
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
    disp1();
    printf("\n");
    disp2();
}

void delete(int x)
{
    NODE *p=h,*q=p->next;
    while(p->info!=x)
    {
        p=p->next;
        q=q->next;
    }
    if(p->prev==NULL)
    {
        q->prev=NULL;
        h=q;
        free(p);
    }
    else
    {
        NODE *r=p->prev;
        q->prev=r;
        r->next=q;
        free(p);
    }
    disp1();
}

int main()
{
    insert();
    disp1();
    printf("\n");
    sort();
    int n;
    printf("\nEnter no to delete\n");
    scanf("%d",&n);
    delete(n);
    printf("\n");
    return 0;
}
