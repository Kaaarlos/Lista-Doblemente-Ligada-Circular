#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <iostream>
#include <string>

class Date{
private:
        int year;
        int month;
        int day;
        int toInt() const;
public:
    Date();
    Date(const Date&);

    Date& operator = (const Date&);


    int getYear()const;
    int getMonth()const;
    int getDay()const;

    std::string toString() const;

    void setYear(const int&);
    void setMonth(const int&);
    void setDay(const int&);

    bool operator == (const Date&) const;
	bool operator != (const Date&) const;
	bool operator < (const Date&) const;
	bool operator <= (const Date&) const;
	bool operator > (const Date&) const;
	bool operator >= (const Date&) const;

    friend std::ostream& operator << (std::ostream&,Date&);
    friend std::istream& operator >> (std::istream&,Date&);

};


#endif // DATE_H_INCLUDED
