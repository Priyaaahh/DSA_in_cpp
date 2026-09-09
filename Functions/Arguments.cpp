#include<iostream>
using namespace std;
void minOfTwo(int a, int b){ // 2 number sko receive karega aur unke minimum ko print karega
    if(a < b){
        cout<<a<<" is smaller"<<endl;
    }
    else{
        cout<<b<<" is smaller"<<endl;
    }
}

int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    minOfTwo(a, b);
}


