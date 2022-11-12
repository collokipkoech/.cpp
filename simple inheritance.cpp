//c++ program for single inheritance
#include<iostream>
using namespace std;
//base class
class tank{
public:
void capacity(){
cout<<"capacity of 1500 litres"<<endl;
}
void colour(){
cout<<"black in colour"<<endl;
}
};
//derived class
class kentank: public tank{
public:
void delivery(){
cout<<"free delivery on purchase"<<endl;
}
};
//creating object of factory class
int main(){
kentank kentank1;
//calling members of base class 
kentank1.capacity();
kentank1.colour();
//calling members of derived function  
kentank1.delivery();
return 0;
}