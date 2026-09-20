#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    long long product = 1;
    cout<<"The product of elements is: ";
    for(int i = 0; i <= n-1; i++){
        product *= arr[i];
    }
    cout<<product;
}