#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"Enter a number: ";
    cin>>n;
    int y = (int)n;
    
    if (n == y){
        cout<<"It's an integer!!";
    }
    else{
        cout<<"It's not an integer!!";
    }   
}
