#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			cout<<"#";
		}
		for(int k=i;k<n-1;k++){
			cout<<" ";
		}
		for(int k=0;k<n-1-i;k++){
			cout<<" ";
		}
		for(int k=0;k<i+1;k++){
			cout<<"#";
		}
		cout<<"\n";
	}
	return 0;
}