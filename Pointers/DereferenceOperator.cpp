#include<iostream>
using namespace std;
int main(){
    int x = 121;
    int* ptr = &x;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr = 10;
    cout<<*ptr<<endl;
    
    *ptr += 8;
    cout<<x<<endl;
}