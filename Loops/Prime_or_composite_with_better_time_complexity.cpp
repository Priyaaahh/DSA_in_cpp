#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = false;
    for(int i = 2; i <= n-1; i++){ //factor mil gya except 1 and n
        if(n%i == 0){
            flag = true;
            break;
        }
    }
    if(flag == true){
        cout<<"The given number is a composite number!!";
    } else{
        cout<<"The given number is a prime number!!";
    }
}