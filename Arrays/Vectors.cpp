#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5, 15); // index 0 to 4
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr.size();

    cout<<endl;
    arr.push_back(8);
    arr.push_back(9);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr.size();
}