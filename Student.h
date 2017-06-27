//
// Created by LIU Qingpei on 27/6/2017.
//

#ifndef SELECTIONSORTUSINGTEMPLATE_STUDENT_H
#define SELECTIONSORTUSINGTEMPLATE_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student{
    string name;
    int score;

    bool operator<(const Student& otherStudent){
        return score != otherStudent.score?
               score < otherStudent.score : name < otherStudent.name;
    }

    friend ostream& operator<<(ostream&os, const Student& student){
        os<<"Student: "<<student.name<<" "<<student.score<<endl;
        return os;
    }
};

#endif //SELECTIONSORTUSINGTEMPLATE_STUDENT_H
