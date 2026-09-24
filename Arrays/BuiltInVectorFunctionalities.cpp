#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9}; // 2 3 4 8 9
    sort(v.begin(), v.end());
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;

    reverse(v.begin(), v.end());
    for(int ele : v){
        cout<<ele<<" ";
    }

}