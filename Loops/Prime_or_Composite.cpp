#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int factors = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            factors++;
            
        }
    }
    if(factors >= 3){
        cout<<"The given number is a composite number!!";
    } else{
        cout<<"The given number is a prime number!!";
    }
}