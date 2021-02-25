#include <iostream>
#include <string>
#include <sstream>
#include "E:\ECE330\homework 3\HeartRates.h"
using namespace std;

template <typename T>
std::string toString(T val)
{
   std::ostringstream oss;
   oss << val;
   return oss.str();
}

HeartRates::HeartRates ( string fname, string lname, int mm, int dd, int yy )
{
   setFirstName(fname);
   setLastName(lname);
   setMonthOfBirth(mm);
   setDayOfBirth(dd);
   setYearOfBirth(yy);
}
void HeartRates::setFirstName ( string fname)
{
   firstName = fname;
}

string HeartRates::getFirstName ()
{
   return firstName;
}

void HeartRates::setLastName (string lname)
{
   lastName = lname;
}

string HeartRates::getLastName ()
{
   return lastName;
}

void HeartRates::setMonthOfBirth (int mm)
{
   monthOfBirth = mm;
}

int HeartRates::getMonthOfBirth ()
{
   return monthOfBirth;
}

void HeartRates::setDayOfBirth (int dd)
{
   dayOfBirth = dd;
}

int HeartRates::getDayOfBirth ()
{
   return dayOfBirth;
}

void HeartRates::setYearOfBirth(int yy)
{
   yearOfBirth = yy;
}

int HeartRates::getYearOfBirth()
{
   return yearOfBirth;
}

int HeartRates::getAge()
{
   int delta = 0;
   int month, day, year;
   cout << "Todays date: ";
   cin >> month >> day >> year;    // decide if birthday this year passed
   if (getMonthOfBirth() > month) delta = -1;
   if ((getMonthOfBirth() == month) && (getDayOfBirth() > day)) delta = -1;
   return (year - getYearOfBirth() + delta);  
}

int HeartRates::getMaximumHeartRate()
{
   return (220 - getAge());
}

string HeartRates::getTargetHeartRate()
{
   int max;
   max = getMaximumHeartRate();
   string lowrate, highrate;
   lowrate = toString(max * 50 / 100);
   highrate = toString(max * 85 / 100);
   return (lowrate + "-" + highrate);
}

