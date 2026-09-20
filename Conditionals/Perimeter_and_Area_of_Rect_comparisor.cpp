#include<iostream>
using namespace std;
int main(){
    int breadth, length;
    cout<<"Enter length of rectangle: ";
    cin>>length;
    cout<<"Enter breadth of rectangle: ";
    cin>>breadth;
    int perimeter = 2 * (length + breadth);
    cout<<"The perimeter is: "<<perimeter<<endl;
    int area = length * breadth;
    cout<<"The area is: "<<area<<endl;
    if(area > perimeter){
        cout<<"The area is greater than the perimeter!!";
    }
    else if(area == perimeter){
        cout<<"The area is equal to the perimeter!!";
    }
    else{
        cout<<"The area is less than the perimeter!!";
    }
}