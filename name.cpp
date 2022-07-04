#include "name.h"

using namespace std;

Name::Name(){}

Name::Name(const Name&n): last(n.last), first(n.first){}

Name& Name::operator=(const Name&n)
{
    last = n.last;
    first = n.first;

    return *this;
}


std::string Name::getLast() const
{
    return last;
}

std::string Name::getFirst() const
{
    return first;
}

std::string Name::toString() const{
    return last + ", " + first;
}

void Name::setLast(const std::string& l)
{
    last=l;
}

void Name::setFirst(const std::string& f)
{
    first=f;
}

ostream& operator << (ostream& os, Name& n){

    os<< n.last<<endl;  //aqui se puede poner XML
    os<< n.first;

    return os;

}
istream& operator >> (istream& is, Name& n){
    getline(is, n.last);
    getline(is, n.first);

    return is;

}
bool Name::operator == (const Name& n) const{
     return toString() == n.toString();
}

bool Name::operator != (const Name& n) const{
     return toString() != n.toString();
}

bool Name::operator < (const Name& n) const{               /* copiable, comparable, imprimible y flujeable */
     return toString() < n.toString();
}

bool Name::operator <= (const Name& n) const{
     return toString() <= n.toString();
}

bool Name::operator > (const Name& n) const{
     return toString() > n.toString();
}

bool Name::operator >= (const Name& n) const{
     return toString() >= n.toString();
}

