#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        // Solution doesn't exist for n<=2
        if(n<=2){
            cout<<"-1"<<endl;
        }
        else{
            // Creating empty 2D array
            int arr[n][n];

            for(int row = 0; row<n; row++){
                int col = 0;
                // filling up 1s
                for(; col<row+1; col++){
                    arr[row][col] = 1;
                }
                // filling up 0s
                for(; col<n; col++){
                    arr[row][col] = 0;
                }
            }
            
            // Change value to 0 at (row=1,col=0)
            arr[1][0] = 0;
            
            // Print Matrix
            for(int row=0; row<n; row++){
                for(int col=0; col<n; col++){
                    cout<<arr[row][col];
                }
                cout<<endl;
            }
        }
    }
	return 0;
}