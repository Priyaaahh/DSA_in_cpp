#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    
    if(a>b and a>c){
        cout<<"The greatest of them is: "<<a;
    }
    else if (b>c and b>a){
        cout<<"The greatest of them is: "<<b;
    }
    else{
        cout<<"The greatest of them is: "<<c;
    }
}