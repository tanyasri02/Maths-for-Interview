#include<bits/stdc++.h>
using namespace std;

#define fi() ios_base::sync_with_stdio;cin.tie(NULL);cout.tie(NULL);
#define ll long long int
int MAX=500;

void sieve_of_eratosthenes(ll n)
{
    bool prime[MAX]={false};
    
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(int i=2;i<=n;i++)
    if(prime[i]==false)
    cout<<i<<" ";
    
    cout<<endl;
}
int main()
{
    ll n;cin>>n;
    sieve_of_eratosthenes(n);
}
