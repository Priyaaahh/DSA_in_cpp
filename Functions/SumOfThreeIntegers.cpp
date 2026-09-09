#include<iostream>
using namespace std;
void sumOfThree(int a, int b, int c){
    int sum = a + b + c;
    cout<<sum;
}

int main(){
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Their sum is: ";
    sumOfThree(a, b, c);
}