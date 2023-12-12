#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student
{
    QString _name;
    QString _surname;
    double _score;
public:
    Student();

    Student(QString name, QString surname, double score){
        _name = name;
        _surname = surname;
        _score = score;
    }

    void fill(int ind, QString name, QString surname, double score){

    }

    QString getName(){return _name;}
    QString getSurname(){return _surname;}
    double getScore(){return _score;}

    void operator= (Student &student){
        student._name = _name;
        student._score = _score;
        student._surname = _surname;
    }
};

#endif // STUDENT_H
