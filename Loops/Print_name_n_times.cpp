#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many times you have to print your name: ";
    cin>>n;

    string m = "Shubham Pandey!!";
    for(int i = 1; i <= n; i++){
        cout<<m<<endl;
    }
}