#include<bits/stdc++.h>
using namespace std;
const int n=30;
vector<bool> isprime(n,1);
int main(){
    isprime[0]=isprime[1]=false;
    for(int i=2;i<sqrt(n);i++){
        if(isprime[i]==true){
            for(int j=i*2;j<n;j=j+i){
                isprime[j]=false;
            }
        }
    }
    for(int i=0;i<30;i++){
        cout<<i<<"   "<<isprime[i]<<endl;
    }

    return 0;
}