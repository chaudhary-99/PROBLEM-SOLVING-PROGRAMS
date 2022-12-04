#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    	for(int k=0;k<i;k++){
    		cout<<" ";
		}
        for(int j=0;j<n-i;j++){
        	cout<<"#";
		}
		for(int t=i;t<n-1;t++){
			cout<<"#";
		}
        cout<<"\n";
    }
    for(int r=0;r<n-1;r++){
        for(int y=r;y<n-2;y++){
        	cout<<" ";
		}
		for(int w=0;w<r+2;w++){
			cout<<"#";
		}
		for(int q=0;q<r+1;q++){
			cout<<"#";
		}
		cout<<"\n";
	}
    
    return 0;
}