#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,i,j,tr,dr,ts,ds,a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&tr);
        int t1[tr];
        for(i=0;i<tr;i++)
            scanf("%d",&t1[i]);

        scanf("%d",&dr);
        int d1[dr];
        for(i=0;i<dr;i++)
            scanf("%d",&d1[i]);
        
        scanf("%d",&ts);
        int t2[ts];
        for(i=0;i<ts;i++)
            scanf("%d",&t2[i]);
        
        scanf("%d",&ds);
        int d2[ds];
        for(i=0;i<ds;i++)
            scanf("%d",&d2[i]);
        
        for(i=0;i<ts;i++)
        {
            a=0,b=0;
            for(j=0;j<tr;j++)
            {
                if(t2[i]==t1[j])
                {
                    a=1;
                    break;
                }
            }
            if(a!=1)
            {
                b=1;
                break;
            }
        }
        if(b!=1)
        {
            for(i=0;i<ds;i++)
            {
                c=0,d=0;
                for(j=0;j<dr;j++)
                {
                    if(d2[i]==d1[j])
                    {
                        c=1;
                        break;
                    }
                }
                if(c!=1)
                {
                    d=1;
                    break;
                }
            }
        }
        if(d==1)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}
