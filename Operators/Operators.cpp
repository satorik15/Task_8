#include "Operators.h"
Student::Student(const string& name, const string& surname, const string& middle_name, const string& city, const string& group, const int& course) {
    this->name = name;
    this->surname = surname;
    this->middle_name = middle_name;
    this->city = city;
    this->group = group;
    this->course = course;
}

std::istream& operator>> (std::istream& in, Student& student)
{
    in >> student.surname;
    in >> student.name;
    in >> student.middle_name;
    in >> student.city;
    in >> student.group;
    in >> student.course;
    return in;
}

std::ostream& operator<< (std::ostream& out, const Student& student)
{
    out << "Student(" << student.surname << ", " << student.name << ", " << student.middle_name << ", " << student.city << ", " << student.group << ", " << student.course << ')';
    return out;
}

Student& Student::operator= (const Student& student)
{
    name = student.name;
    surname = student.surname;
    middle_name = student.middle_name;
    city = student.city;
    group = student.group;
    course = student.course;
    return *this;
}

Student::~Student()
{
}