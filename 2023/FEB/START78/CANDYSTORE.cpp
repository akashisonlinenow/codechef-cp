#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    
	    if(x>=y) std::cout << y << std::endl;
	    else std::cout << x+(y-x)*2 << std::endl;
	}
	return 0;
}
