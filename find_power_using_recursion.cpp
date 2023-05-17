#include<iostream>
using namespace std;

int findPower(int base ,int power){
     if(power!=0){
        return (base*(findPower(base,(power-1))));
     }
     else{
        return 1;
     }
}
    int main(){
        int base,power,result;
        cout<<"Enter base = ";
        cin>>base;
        cout<<"Enter power = ";
        cin>>power;
        result=findPower(base,power);
        cout<<"The power of "<<base<<" is "<<result<<endl;
        return 0;
    }

    
