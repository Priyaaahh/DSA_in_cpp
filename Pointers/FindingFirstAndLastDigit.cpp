#include<iostream>
using namespace std;
int count
int main(){
    int n;
    cin>>n;
    int count = 0;
    if (n == 0){
        count++;
    }
    while(n != 0){
        count++;
        n /= 10;
    }

    cout<<count;
}