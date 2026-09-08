#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    // Upper half
    for(int i = 1; i <= n; i++){
        
        //spaces
        for(int j = 1; j <= n-i; j++){
            cout<<"  ";
        }

        // hollow part
        for(int j = 1; j <= 2*i-1; j++){
            if(j == 1 or j == 2*i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    //Lower part
    for(int i = n-1; i >= 1; i--){

        //leading spaces
        for(int j = 1; j <= n-i; j++){
            cout<<"  ";
        }
        //hollow part
        for(int j = 1; j <= 2*i-1; j++){
            if(j ==1 or j == 2*i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}