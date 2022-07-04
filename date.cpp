#include "date.h"
#include <ostream>


using namespace std;

Date::Date(){ }

Date::Date(const Date&d): year(d.year), month(d.month), day(d.day){}


Date & Date::operator=(const Date&d)  {
    year = d.year;
    month = d.month;
    day = d.day;

    return *this;
}


int Date::getYear() const
{
    return year;
}

int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}

std::string Date::toString() const {
    char result[11];

    sprintf(result,"%04i/%02i/%02i", year, month, day);

    return result;
}

bool Date::operator > (const Date& d) const{
     return toString() > d.toString();
}
bool Date::operator == (const Date& d) const{
     return toString() == d.toString(); /*year == d.year and month == d.month and day == d.day;*/
}

bool Date::operator != (const Date& d) const{
     return toString() != d.toString(); /*year != d.year or month != d.month or day != d.day;*/
}

bool Date::operator < (const Date& d) const{
     return toString() < d.toString();
}

bool Date::operator <= (const Date& d) const{
     return toString() <= d.toString();
}

bool Date::operator >= (const Date& d) const{
     return toString() >= d.toString();
}

void Date::setYear(const int& y)
{
    year=y;
}

void Date::setMonth(const int& m)
{
    month=m;
}

void Date::setDay(const int& d)
{
    day=d;
}

ostream& operator <<(ostream& os, Date& d){


    os<<d.year<<endl;
    os<<d.month<<endl;
    os<<d.day;

    return os;
 }

istream& operator >> (istream& is, Date& d){
    string myStr;

    getline(is,myStr);
    d.year= atoi(myStr.c_str());

    getline(is,myStr);
    d.month= atoi(myStr.c_str());

    getline(is,myStr);
    d.day= atoi(myStr.c_str());

    return is;

}
