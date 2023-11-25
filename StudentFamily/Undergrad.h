#pragma once
#include "student.h"
class Undergrad :
    public student
{
public:
    Undergrad() {
        name = "";
        gpa = 5.0;
    }
};

