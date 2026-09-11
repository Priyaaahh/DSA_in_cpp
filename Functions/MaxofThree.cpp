#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    int d = max(a, b);
    int e = max(a, c);
    int f = max(d, e);
    cout<<"The maximum of the given three numbers is: "<<f;


}