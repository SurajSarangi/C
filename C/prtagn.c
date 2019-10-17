#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long int
# define  bool int

bool getParity(unsigned int n) 
{ 
    bool parity = 0; 
    while (n) 
    { 
        parity = !parity; 
        n      = n & (n - 1); 
    }         
    return parity; 
} 

int main()
{
    //define a hash table and a hash function
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll q,i,ce=0,co=0,A[1000000000],ind=0;
        scanf("%lld",&q);
        for(i=0;i<q;i++)
        {
            ll x;
            scanf("%lld",&x);
            if(i==0)
            {
                A[ind++]=x;
                bool p=getParity(x);
                if(p==1)
                    co++;
                else
                    ce++;
            }
            else
            {
                //check if x is there in the hash table
                A[ind++]=x;
                bool p=getParity(x);
                if(p==1)
                    co++;
                else
                    ce++;
                ll ind2=ind -1;
                for(int j=0;j<ind2;j++)
                {
                    ll r= A[j]^x;
                    /* check if r is in there in the hash table and then do A[ind++]
                    bool p=getParity(r);
                    if(p==1)
                        co++;
                    else
                        ce++;*/
                }
            }
            printf("%d %d\n",ce,co); 
        }
    }
    return 0;
}