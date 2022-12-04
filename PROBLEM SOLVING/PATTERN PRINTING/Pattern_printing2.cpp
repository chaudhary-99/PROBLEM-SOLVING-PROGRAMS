#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j<=n-1;j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
        	cout<<"#";
		}
		for(int t=0;t<i;t++){
			cout<<"#";
		}
        cout<<"\n";
    }
    for(int r=0;r<n-1;r++){
        for(int j=0;j<=r+1;j++){
            cout<<" ";
        }
		for(int k=r;k<n-1;k++){
        	cout<<"#";
		}	
		for(int t=r;t<n-2;t++){
			cout<<"#";
		}
		cout<<"\n";
	}
    return 0;
}