#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    char info;
    struct tree *left,*right;
}TREE;

char a[100];

TREE* maketree(char x)
{
    TREE *p=(TREE*)malloc(sizeof(TREE));
    p->info=x;
    p->left=p->right=NULL;
    return(p);
}


void preorder(TREE *q)
{
    if(q)
    {
        printf("%c->",q->info);
        preorder(q->left);
        preorder(q->right);
    }
}

void inorder(TREE *q)
{
    if(q)
    {
        inorder(q->left);
        printf("%c->",q->info);
        inorder(q->right);
    }
}

void postorder(TREE *q)
{
    if(q)
    {
        postorder(q->left);
        postorder(q->right);
        printf("%c->",q->info);
    }
}
TREE* form(TREE *p,int n, int i)
{
    if(i<n)
    {
        p=maketree(a[i]);
        p->left=form(p->left,n,2*i+1);
        p->right=form(p->right,n,2*i+2);
    }
    return p;
}

int main()
{
    TREE *r=NULL;
    int n,i;
    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
        getchar();
    }
    r=form(r,n,0);
    printf("\nPre-order:\n");
    preorder(r);
    printf("\nPost-order\n");
    postorder(r);
    printf("\nIn-order\n");
    inorder(r);
    return 0;
}