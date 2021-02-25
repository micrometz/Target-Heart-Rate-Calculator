#include <iostream>
#include <string>
#include "E:\ECE330\homework 3\HeartRates.h"

using namespace std;

int main()
{
       string fname, lname;
   int mm, dd, yy;
   cout << "Enter your name and date of birth (first name, last name, month, day, year): ";
   cin >> fname >> lname >> mm >> dd >> yy;
   HeartRates person1( fname, lname, mm, dd, yy);
   cout << "Your name is " << person1.getFirstName() << " " << person1.getLastName() <<
       ". Your birthday is " << person1.getMonthOfBirth() << "/" << person1.getDayOfBirth() <<
       "/" << person1.getYearOfBirth() << endl;
   cout << "Your age is " << person1.getAge() << " years!" << endl;
   cout << "Your maximum heart rate is " << person1.getMaximumHeartRate() << endl;
   cout << "Your target heart rate is " << person1.getTargetHeartRate() << endl;
}