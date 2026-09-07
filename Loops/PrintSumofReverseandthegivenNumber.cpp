#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int rev = 0, n2 = n;
    
    while(n != 0){
        rev *= 10;
        rev += (n%10);
        n /= 10;
    }
    cout<<"The sum of the given number and its reverse is: " <<rev + n2;
}