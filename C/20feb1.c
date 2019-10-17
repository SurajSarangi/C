#include<stdio.h>
#include<stdlib.h>

struct node
{
    float coeff;
    int power;
    struct node *next;
}*h1,*h2,*h3;

typedef struct node NODE;

void disp(NODE *h)
{
    NODE *p=h;
    while(p!=NULL)
    {
        if(p->coeff!=0)
            printf("%.1fx^%d",p->coeff,p->power);
        if(p->power!=0)
            printf(" +");
        p=p->next;
    }
}

void insert(NODE *q,float c,int p,int k)
{
    NODE *r,*last=q;
    r=(NODE*)malloc(sizeof(NODE));
    r->coeff=c;
    r->power=p;
    r->next=NULL;
    if(q==NULL)
    {
        if(k==1)
        {
            q=r;h1=r;
        }
        else if(k==2)
        {
            q=r;h2=r;
        }
        else
        {
            q=r;h3=r;
        }
        
    }
    else
    {
        while(last->next!=NULL)
            last=last->next;
        last->next=r;
    }
}

void add()
{
    NODE *p,*q;
    float tcoeff; int tpower;
    p=h1;q=h2;
    while(p!=NULL||q!=NULL)
    {
        if(p->power==q->power)
        {
            tcoeff=p->coeff+q->coeff;
            tpower=p->power;
            insert(h3,tcoeff,tpower,3);
            p=p->next;
            q=q->next;
        }
        else if(p->power>q->power)
        {
            insert(h3,p->coeff,p->power,3);
            p=p->next;
        }
        else
        {
            insert(h3,q->coeff,q->power,3);
            q=q->next;
        }
    }
    disp(h3);
}

int main()
{
    int d1,d2;
    printf("Enter maximum power of both\n");
    scanf("%d %d",&d1,&d2);
    while(d1>=0)
    {
        float c;
        printf("Enter coeff of x^%d\n",d1);
        scanf("%f",&c);
        insert(h1,c,d1,1);
        d1--;
    }
    disp(h1);
    printf("\n2nd list\n");
    while(d2>=0)
    {
        float c;
        printf("Enter coeff of x^%d\n",d2);
        scanf("%f",&c);
        insert(h2,c,d2,2);
        d2--;
    }
    disp(h2);
    printf("\n");
    add();
    return 0;
}