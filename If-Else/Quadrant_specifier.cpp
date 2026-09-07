#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter the value of x in (x,y): ";
    cin>>x;
    cout<<"Enter the value of y in (x,y): ";
    cin>>y;
    
    if(x == 0 and y == 0){
        cout<<"At origin";
    }
    else if(x == 0){
        cout<<"At y-axis";
    }
    else if(y == 0){
        cout<<"At x-axis";
    }
    else if(x < 0 and y < 0){
        cout<<"In 3rd Quadrant";
    }
    else if(x < 0 and y > 0){
        cout<<"In 2nd Quadrant";
    }
    else if(x > 0 and y < 0){
        cout<<"In 4th Quadrant";
    }
    else{
        cout<<"In 1st quadrant";
    }
}