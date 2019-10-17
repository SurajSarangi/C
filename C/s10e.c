#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long int

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	int i,n,c=0;
    	scanf("%d",&n);
    	int p[n];
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&p[i]);
    		if(i<5)
    		{
    			int flag=1;
    			for(int j=0;j<i;j++)
    			{
    				if(p[i]>p[j])
					{
    					flag=2;
    					break;
					}
    			}
    			if(flag==1)
    				c++;
    		}
    		else
    		{
    			int flag=1;
    			for(int j=i-5;j<i;j++)
    			{
    				if(p[i]>p[j])
					{
						flag=2;
						break;
					}				
    			}
    			if(flag==1)
    				c++;
    		}
    	}
    	printf("%d\n",c);
    }
    return 0;
}