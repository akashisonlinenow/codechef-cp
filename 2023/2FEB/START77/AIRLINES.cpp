#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int x,y,z;
        std::cin >> x>>y>>z;
        
        if(y<=10*x){
            std::cout << y*z << std::endl;
        }
        else {
            std::cout << 10*x*z << std::endl;
        }
    }
	// your code goes here
	return 0;
}
