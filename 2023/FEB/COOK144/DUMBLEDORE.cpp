#include <iostream>
#include<vector>
#define ll long long int
using namespace std;

int main() {
        ios_base::sync_with_stdio(false);
    cin.tie(0);
	    ll n, m;
    cin >> n >> m;
    vector<ll> participant(n+1, 0);
    ll ans = 0;
    for(ll i=0; i < m; i++){
        ll p, t;
        cin >> p >> t;
        participant[p] += t;
        ans += participant[p];
        cout << ans << endl;
    }// your code goes here
	return 0;
}