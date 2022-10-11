//program to convert celcius to fahrenheit using function
#include<iostream>
using namespace std;
//function prototype
float convert(float);
int main()
{
float celcius, fahrenheit;
cout<<"\n Enter Temperature in Celsius : ";
cin>>celcius;
fahrenheit=convert(celcius);
cout<<"\n Temperature in Fahrenheit : "<<fahrenheit;
return 0;
}
//function definition
float convert(float celcius)
{
return(celcius * 9/5) + 32;
}