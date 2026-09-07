#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(abs(n) < 69){
        cout<<"It's magnitude is smaller than 69.";
    }else{
        cout<<"It's magnitude is not smaller than 69.";
    }
}