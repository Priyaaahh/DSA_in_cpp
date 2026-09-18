#include<iostream>
using namespace std;
int countDigits(int n){
    int count = 0;
    if(n ==0){
        count++;
    }
    while(n !=0){
        count++;
        n /= 10;
    }
    return count;
}
int main(){
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<countDigits(n);
}