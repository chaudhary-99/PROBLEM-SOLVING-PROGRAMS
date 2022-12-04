#include<bits/stdc++.h>
using namespace std;
vector<int>div;
int divisor(int n){
    for(int i=1;i<sqrt(n);i++){
        div.push_back(i);
        div.push_back(n/i);
    }
}
int main(){
    int n;
    cin>>n;
    divisor(n);
    return 0;
}