#include<iostream>
using namespace std;
void starTriangle(int n){
    cout<<"The star triangle of "<<n<< " rows is: "<<endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}

int main(){
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    starTriangle(a);

    cout<<"Enter b: ";
    cin>>b;
    starTriangle(b);

    cout<<"Enter c: ";
    cin>>c;
    starTriangle(c);
}