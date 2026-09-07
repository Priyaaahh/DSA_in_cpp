#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter radius: ";
    cin>>radius;
    float volume = (4/3)*3.14*radius*radius*radius;
    cout<<"The volume of sphere is: "<<volume<<endl;
}