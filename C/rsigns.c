#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long int

 ll power(ll x, ll y) 
{ 
    ll p= 1000000007;
    ll res = 1;    
    x = x % p; 
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x)%p;
        y = y/2;
        x = (x*x)%p ;   
    } 
    res=(5*res)%p;
    return res; 
} 

int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll k; unsigned long long res;
        scanf("%lld",&k);
        res=power(2,k);
        printf("%lld\n",res);
    }
    return 0;
}