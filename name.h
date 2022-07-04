#ifndef NAME_H_INCLUDED
#define NAME_H_INCLUDED

#include <iostream>
#include <string>

class Name{
///friend std::ostream; no es buena practica de programacion
private:
    std::string last;
    std::string first;
public:
    Name();
    Name(const Name&);      //constructor copia

    Name &operator = (const Name&);     //operador de asignación

	std::string toString() const;

    std::string getLast() const;
    std::string getFirst() const;

    void setLast(const std::string&);
    void setFirst(const std::string&);


	bool operator == (const Name&) const;
	bool operator != (const Name&) const;
	bool operator < (const Name&) const;
	bool operator <= (const Name&) const;
	bool operator > (const Name&) const;
	bool operator >= (const Name&) const;

    friend std::ostream& operator << (std::ostream&, Name&); //operador de flujo de salida y retorna un flujo de salida tambien tiene peremisos de entrar a la clase
    friend std::istream& operator >> (std::istream&, Name&); //operador de flujo de entrada y retorna un flujo de entrada
};


#endif // NAME_H_INCLUDED
