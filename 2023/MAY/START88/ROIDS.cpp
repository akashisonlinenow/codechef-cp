#include<bits/stdc++.h>
using namespace std;

long long calculate(long long p,
                    long long q,long long mod)
{
    long long  expo;
    expo = mod - 2;
 
    // Loop to find the value
    // until the expo is not zero
    while (expo) {
 
        // Multiply p with q
        // if expo is odd
        if (expo & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
 
        // Reduce the value of
        // expo by 2
        expo >>= 1;
    }
    return p;
}

int main(){
    int t;
  //  cin>>t;
    t = 1;
    
    long long mod = 1e9+7;
    int lim = 1e5+1;
    long long fact[lim];
    fact[1] = 1;
    for(long long i=2;i<lim;++i){
        fact[i] = i * fact[i-1];
        fact[i] %=mod ;
    }
    
    while(t--){
       int n;
       cin>>n;
       
       map<long long,long long>count;
       for(int i=0;i<n;++i){
           long long x,y;
           cin>>x>>y;
           count[x]++;
       }
        
       long long ans = 1;
       
       for(auto&x:count){
           ans *= fact[x.second];
           ans %= mod;
       }
       
       ans = calculate(ans,fact[n],mod);
       cout<<ans<<"\n";
    }
}