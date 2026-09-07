#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if (ch >= 65 and ch <= 90){
        cout<<"The given character is in capital letter!!";
    }
    else{
        cout<<"The given character is not in capital letter!!";
    }
}