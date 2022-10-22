#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sumodd=0;
        int sumeven=0;
        for(int j=0;j<n;j++){
            if(a[j]%2==0){
                sumeven+=1;
            }
            else{
                sumodd+=1;
            }
        }
        if(sumodd==n ||sumeven==n){
            cout<<"0"<<endl;
        }
        else {
            cout<<sumeven<<endl;
        }
    }
    
	// your code goes here
	return 0;
}
