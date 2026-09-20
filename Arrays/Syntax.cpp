#include<iostream>
using namespace std;
int main(){
    int marks[] = {78, 90, 95, 87, 97, 96};
   // cout<<size(marks)<<endl; // giving error in old cpp version
    cout<<sizeof(marks)<<endl; // giving total bytes of the array
    cout<<"The total number of elements in the array is: ";
    cout<<sizeof(marks)/4<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[4]<<endl;
    // marks[4] = 99;
    // cout<<marks[4]<<endl;
    
}