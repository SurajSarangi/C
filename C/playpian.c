#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char c[100];
        scanf("%s",c);
        fflush(stdin);
        int i,flag=0;
        for(i=0;i<strlen(c);i+=2)
        {
            if(c[i]==c[i+1])
                flag=1;
        }
        if(flag==0)
            printf("yes\n");
        else
            printf("no\n");
    }
}