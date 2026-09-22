#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int mx = INT_MIN;
    
    for(int i = 0; i <= n-1; i++){
        if(arr[i] > mx){
            mx = arr[i];
        }
    }

    int secondMx = INT_MIN;
    bool flag = false;

    for(int i = 0; i < n; i++){
        if(arr[i] < mx && arr[i] > secondMx){
            secondMx = arr[i];
            flag = true; 
        }
    }
    if(flag == true){
        cout<<"Second maximum element is: "<<secondMx<<endl;
        cout<<"And the maximum element is: "<<mx;
    }
    else{
        cout<<"Second maximum doesn't exist!!";
    }

}