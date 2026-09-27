#include<iostream>
using namespace std;
int main(){
    int a[] = {10,20,40,70,100};
    int b[] = {30,50,60,80};
    int m = sizeof(a)/4;
    int n = sizeof(b)/4;
    int c[m+n];
    int i = m-1, j = n-1, k = m+n-1;
    while(i >= 0 && j >= 0){
        if(a[i] > b[j]){
            c[k] = a[i];
            k--;
            i--;
        }
        else{
            c[k] = b[j];
            k--;
            j--;
        }
    }
    if(i < 0){
        while(j >= 0){
            c[k] = b[j];
            k--;
            j--;
        }
    }
    if(j < 0){
        while(i >= 0){
            c[k] = a[i];
            i--;
            k--;
        }
    }
    for(int i = 0; i < m+n; i++){
        cout<<c[i]<<" ";
    }
}