#include<iostream>
using namespace std;
void anu(){
    cout<<"Hello Anu!"<<endl;
}
void Arjun(){
    cout<<"Hello Arjun"<<endl;
    anu();
}
void Pranjal(){
    cout<<"Hello Pranjal"<<endl;
    Arjun();
}
int main(){
    Pranjal();
}