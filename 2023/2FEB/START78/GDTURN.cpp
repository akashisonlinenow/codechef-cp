#include <iostream>
using namespace std;

int main() {
    int t; std::cin >> t;
    while(t--){
        int x,y;
        std::cin >> x>>y;
        if(x+y>6) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
	// your code goes here
	return 0;
}
