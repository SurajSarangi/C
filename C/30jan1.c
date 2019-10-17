#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX 100

char a[MAX];int top=-1;

#define SWAP(T, a, b) \
    do { T save = (a); (a) = (b); (b) = save; } while (0)
char *strrev(char *s)
{
    size_t len = strlen(s);
    if (len > 1) {
        char *a = s;
        char *b = s + len - 1;
        for (; a < b; ++a, --b)
            SWAP(char, *a, *b);
    }
    return s;
}

void push(char c)
{
    a[++top]=c;
}

char pop()
{
    return(a[top--]);
}

int priority(char c)
{
    switch (c)
    {
        case'#':
            return 0;
        case'(':
            return 1;
        case'-':
        case'+':
            return 2;
        case'*':
        case'/':
            return 3;
    }
}

int main()
{
    char in[50],out[50],ch,x;
    int i=0,k=0;
    printf("Enter Infix Expression:");
    scanf("%s",in);
    strrev(in);   
    while( (ch=in[i++]) != '\0')
    {
        if( ch == ')')
            push(ch);
        else
            if(isalnum(ch))
                out[k++]=ch;
            else
                if( ch == '(')
                {
                    while( a[top] != ')')
                        out[k++]=pop();
                    x=pop();
                }
                else
                {   
                    while( priority(a[top]) >= priority(ch) )
                        out[k++]=pop();
                    push(ch);
                }
    }
    while(top!=-1) 
        out[k++]=pop();

    out[k]='\0';        
    strrev(out);
    printf("Prefix Expn: %s\n",out);
    return 0;
}
