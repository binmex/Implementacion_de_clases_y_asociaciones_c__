#include <iostream>
#include "Student.h"
#include "ManagementStudent.h"

using namespace std;

void mngStudents() {
    ManagementStudent *mng = new ManagementStudent();

    mng->addStudent("34534","Pedro José Lopez Niño",true,32,'R');
    mng->addStudent("635463","Catalina Escobar",0,26,'S');
    mng->addStudent("76544","Paola Andrea Baez",false,29,'H');
    cout<<"Estudiantes---> "<<mng->getStudents().size()<<endl;

    for( Student* student : mng->getStudents()){
        cout<<*student<<endl;
    }

    delete( mng );

}

int main() {

    Student pepe("32421","Pedro Jose Niño",true,27,'A');

    Student *lola = new Student("2342","Dolores de Cabezas",false,54,'O');

    cout<<pepe<<endl;

    cout<<*lola<<endl;

    delete(lola);

    mngStudents();

    return EXIT_SUCCESS;
}
