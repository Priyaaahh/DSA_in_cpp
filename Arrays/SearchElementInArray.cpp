#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    int search;

    cout<<"Enter the element which we've to search in the given array: ";
    cin>>search;

    bool flag = false;
    for(int i = 0; i <= n-1; i++){
        if(search == arr[i]){
            flag = true;
            break;
        }       
    }  
    if(flag == true){
        cout<<"Element found!!";
    } else{
        cout<<"Element not found!!";
    }
}