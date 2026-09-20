#include<iostream>
using namespace std;
int main(){
    int cp, sp;
    cout<<"Enter the cost price: ";
    cin>>cp;
    cout<<"Enter the selling price: ";
    cin>>sp;
    
    if(sp == cp or sp > cp){
        if(sp == cp){
            cout<<"The cost price and selling price are equal.\nIt doesn't give any profit!!";
        }
        else{
            cout<<"The selling price is higher than the cost price.\nThe profit is of: "<<sp-cp;
        }
    }
    else{
        cout<<"The selling price is lesser than the cost price.\nAnd it gives a loss of: "<<cp-sp;
    }
}