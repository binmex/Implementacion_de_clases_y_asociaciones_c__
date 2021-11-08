//
// Created by Jairo Riaño on 5/11/21.
//

#include "ManagementStudent.h"

ManagementStudent::ManagementStudent() {}

Student *ManagementStudent::findStudent(std::string code) {
    for(Student* student : students){
        if( student->getCode().compare( code ) == 0 ){
            return student;
        }
    }

    return NULL;
}

bool ManagementStudent::addStudent(std::string code, std::string name, bool gender,  short age, char type) {
    if(findStudent( code ) == NULL ){
        students.push_back( new Student(code, name, gender, age, type ) );

        return true;
    }

    return false;
}

std::vector<Student *> ManagementStudent::getStudents() {
    return students;
}

ManagementStudent::~ManagementStudent() {
    for( Student* student : students ){
        delete( student );
    }
}
