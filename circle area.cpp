//program to calculate the area of a circle using function
#include<iostream>
using namespace std;
float circle(int r); //function prototype
int main(){
  int radius;
  float Area;
  cout<<"Enter radius"<<endl;
  cin>>radius;
  Area = circle(radius); //function calling
  cout<<"The Area is "<<Area<<endl;
  return 0;
  }
float circle(int r){
  float Area;
Area=3.142*r*r;
return Area;
}