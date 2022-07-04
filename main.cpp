#include <iostream>
#include "student.h"
#include "name.h"
#include "date.h"
#include "list.h"
using namespace std;

int main()
{
    List<Student> myLista;
    Student myStudent;
    Name myName;
    Date mydate;
    string myStr;
    char op;
    List<Student>::Position pos;

    do
        {
        cout<<"Codigo: ";
        getline(cin,myStr);
        myStudent.setCode(myStr);

        cout<<"Apellido: ";
        getline(cin,myStr);
        myName.setLast(myStr);

        cout<<"Nombre: ";
        getline(cin,myStr);
        myName.setFirst(myStr);


        myStudent.setName(myName);


        cout<<"Fecha de nacimineto (AAA/MM/DD): ";
        getline(cin,myStr,'/');
        mydate.setYear(atoi(myStr.c_str()));
        getline(cin,myStr,'/');
        mydate.setMonth(atoi(myStr.c_str()));
        getline(cin,myStr);
        mydate.setDay(atoi(myStr.c_str()));

        myStudent.setBirthDate(mydate);

        cout << "Fecha de inicio (AAAA/MM/DD): ";
        getline(cin,myStr,'/');
        mydate.setYear(stoi(myStr));
        getline(cin,myStr,'/');
        mydate.setMonth(stoi(myStr));
        getline(cin,myStr);
        mydate.setDay(stoi(myStr));

        myStudent.setStartDate(mydate);

        cout<<"Promedio: ";
        getline(cin,myStr);
        myStudent.setGrade(atof(myStr.c_str()));

        myLista.insertData(myLista.getLastPos(),myStudent);

        cout<<"Insertar otro? (s/n): ";
        cin>>op;
        cin.ignore();
        }
    while(op == 's');

    cout<<endl<<endl;

    cout<<"Contenido de la lista: "<<endl;

    cout<<myLista.toString();

    cout<<endl<<endl;

    cout<<"Codigo del estudiante a borrar: ";
    getline(cin,myStr);
    myStudent.setCode(myStr);

    pos=myLista.findData(myStudent);


    cout<<endl<<endl;

    try
        {
        cout<<"Borrando el estudiante: "<<endl;
        cout<< myLista.retrieve(pos).toString()<<"..."<<endl<<endl;

        myLista.deleteData(pos);
        cout<<"Estudiante borrado!"<<endl;
        }
    catch (List<Student>::Exception ex)
        {
        cout<<"Paso algo malo..."<<endl;
        cout<<ex.what()<<endl;
        }
    cout<<endl<<endl;

    cout<<"Contenido de la lista: "<<endl;
    cout<<myLista.toString();

    cout<<endl<<endl;




    return 0;
}
