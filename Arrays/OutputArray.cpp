#include<iostream>
using namespace std;
int main(){
    int arr[] = {65, 89, 85, 77, 82, 64, 66, 99, 84, 68, 55};
    cout<<"The elements of the array is as follows: ";
    for(int i = 0; i <= sizeof(arr)/sizeof(int); i++){
        cout<<arr[i]<<" ";
    }
}