#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>

#include "name.h"
#include "date.h"


class Student{
private:
    std::string code;
    Name name;
    Date birthDate;
    std::string career;
    Date startDate;
    float grade;
public:
    Student();
    Student(const Student&);

    Student& operator = (const Student&);

    std::string getCode() const ;
    Name getName() const;
    Date getBirthDate() const;
    std::string getCareer() const;
    Date getStartDate() const;
    float getGrade() const;

    std::string toString() const;

    void setCode(const std::string&);
    void setName(const Name&);
    void setBirthDate(const Date&);
    void setCareer(const std::string&);
    void setStartDate(const Date&);
    void setGrade(const float&);


	bool operator == (const Student&) const;
	bool operator != (const Student&) const;
	bool operator < (const Student&) const;
	bool operator <= (const Student&) const;
	bool operator > (const Student&) const;
	bool operator >= (const Student&) const;

    friend std::ostream& operator << (std::ostream&, Student&);
    friend std::istream& operator >> (std::istream&, Student&);

};

#endif // STUDENT_H_INCLUDED
