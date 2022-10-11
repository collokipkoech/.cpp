//program to calculate bonus and salary for employees
#include <iostream>
 using namespace std;
int main() 
{
    int iSalary;
    int iService;
    float fBonus;
    int counter;
    bool okcontinue = true;
    char idontchar; 

    while (okcontinue) { 
        cout << "You are employee #" << counter << " to use this.\n";
        cout << "Enter your base salary: \n";
        cin >> iSalary;
        cout << "Enter total # of years serviced: \n";
        cin >> iService;

        if (iService >= 10) fBonus = iSalary * 0.1;
        if ((iService < 10) && (iService >= 5)) fBonus = iSalary * 0.05;
        if ((iService < 5) && (iService >= 1)) fBonus = iSalary * 0.025;
        cout << "Your bonus is: " << fBonus << ". Enter 'e' to exit or 'c' to continue.\n";
        cin >> idontchar;

        if (idontchar == 'e') return 0;
      }
  
      }