#include<iostream>
using namespace std;

bool chkPrime(int n){
    bool isPrime=true;
    if(n==0||n==1){
        isPrime=false;
    }
        for(int i=2;i<=n/2;++i)
        {
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    
    return isPrime;
}
int main(){
    int num=2;
    cout<<chkPrime(num);
    return 0;
}