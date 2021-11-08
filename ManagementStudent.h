//
// Created by  int, char);
//    std::vector<Student*> getStudents();Jairo Riaño on 5/11/21.
//

#ifndef EXAMPLECPP_MANAGEMENTSTUDENT_H
#define EXAMPLECPP_MANAGEMENTSTUDENT_H

#include "Student.h"
#include <vector>

class ManagementStudent {
public:
    ManagementStudent();
    Student* findStudent(std::string);
    bool addStudent(std::string, std::string, bool, short

    virtual ~ManagementStudent();

private:
    std::vector<Student*> students;
};


#endif //EXAMPLECPP_MANAGEMENTSTUDENT_H
