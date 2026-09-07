#include<iostream>
using namespace std;
int main(){
    int p, r, t;
    cout<<"Enter the principle amount (in rupees): ";
    cin>>p;
    cout<<"Enter the rate (in %): ";
    cin>>r;
    cout<<"Enter the time (in years): ";
    cin>>t;
    
    int simple_interest = (p*r*t)/100;
    cout<<"The simple interest of the given data is (in rupees): "<<simple_interest<<endl;
    int total_amount = simple_interest + p;
    
    cout<<"The total amount to be given is (in rupees): "<<total_amount<<endl;
}