#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    if (1000 <= n && n <= 9999){
        cout<<"The given number is a four digit number!!";
    }
    else{
        cout<<"The given number doesn't have four digits!!";
    }
}