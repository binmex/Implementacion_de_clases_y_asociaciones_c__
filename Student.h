//
// Created by Jairo Riaño on 5/11/21.
//

#ifndef EXAMPLECPP_STUDENT_H
#define EXAMPLECPP_STUDENT_H

#include <string>
#include <ostream>

class Student {
public:
    Student();

    Student(const std::string &code, const std::string &name, bool gender, short age, char group);

    const std::string &getCode() const;

    void setCode(const std::string &code);

    const std::string &getName() const;

    void setName(const std::string &name);

    bool isGender() const;

    void setGender(bool gender);

    short getAge() const;

    void setAge(short age);

    char getGroup() const;

    void setGroup(char group);

    friend std::ostream &operator<<(std::ostream &os, const Student &student);

    virtual ~Student();

private:
    std::string code;
    std::string name;
    bool gender;
    short int age;
    char group;
};

#endif //EXAMPLECPP_STUDENT_H
