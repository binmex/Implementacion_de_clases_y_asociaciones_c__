//
// Created by Jairo Riaño on 5/11/21.
//

#include "Student.h"
#include <iostream>

Student::Student() {
}

Student::Student(const std::string &code, const std::string &name, bool gender, short age, char group) : code(code),
                                                                                                         name(name),
                                                                                                         gender(gender),
                                                                                                         age(age),
                                                                                                         group(group) {}

const std::string &Student::getCode() const {
    return code;
}

void Student::setCode(const std::string &code) {
    Student::code = code;
}

const std::string &Student::getName() const {
    return name;
}

void Student::setName(const std::string &name) {
    Student::name = name;
}

bool Student::isGender() const {
    return gender;
}

void Student::setGender(bool gender) {
    Student::gender = gender;
}

short Student::getAge() const {
    return age;
}

void Student::setAge(short age) {
    Student::age = age;
}

char Student::getGroup() const {
    return group;
}

void Student::setGroup(char group) {
    Student::group = group;
}

std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << "code: " << student.code << " name: " << student.name << " gender: " << student.gender << " age: "
       << student.age << " group: " << student.group;
    return os;
}

Student::~Student() {
    std::cout<<"Goob Bye"<<std::endl;
}
