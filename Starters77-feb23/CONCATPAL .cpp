#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    long long n,m;
    
    while(t--){
        string a,b;
        cin>>n>>m>>a>>b;
        
        
        if(n>m){
            swap(n,m); // by this we have made big string as 'a' and small string as 'b' always
            swap(a,b);
        }
        
        int a_cnt[26]={0}; // array of a string count
        int b_cnt[26]={0}; // array of b string count
        
        for(int i=0;i<n;i++)
            a_cnt[a[i]-'a']++;
            
        for(int i=0;i<m;i++){
            b_cnt[b[i]-'a']++;
        }
        
        int odd = 0;
        bool ans = true;
        
        // agar choti string me odd count wala char aaya toh seedha no
        
        for(int i=0;i<26;i++){
            if(a_cnt[i]>b_cnt[i]){
                ans = false;
            }
            odd+= (b_cnt[i]-a_cnt[i])%2;
        }
        
        if(odd<=1 && ans==true)
            std::cout << "YES" << std::endl;
            
        else
        std::cout << "NO" << std::endl;
    }
	// your code goes here
	return 0;
}
