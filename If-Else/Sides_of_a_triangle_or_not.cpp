#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the length of the first side of triangle: ";
    cin>>a;
    cout<<"Enter the length of the second side of triangle: ";
    cin>>b;
    cout<<"Enter the length of the third side of triangle: ";
    cin>>c;
    
    if((a+b > c) and (b+c > a) and (c+a > b)){
        cout<<"The given lengths can be the sides of a triangle!!";
    }
    else{
        cout<<"The given lengths can't be the the sides of a triangle!!";
    }
}