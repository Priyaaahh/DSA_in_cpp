#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter n: ";
    cin>>n;

    //UpperLine
    for(int i = 1; i <= 2*n+1; i++){
        cout<<"* ";
    }
    cout<<endl;

    //1 loop mein 3 loop
    for(int i = 1; i <= n-1; i++){

        //stars (hori. flipped triangle)
        for(int j = 1; j <= n-i+1; j++){
            cout<<"* ";
        }
        //spaces (odd triangle)
        for(int j = 1; j <= 2*i-1; j++){
            cout<<"  ";
        }
        //stars (hori. flipped triangle)
        for(int j = 1; j <= n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}