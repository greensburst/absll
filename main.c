#include "absll.h"
#include <stdio.h>

struct student {
    int age;
    bool gender;
};

typedef struct student stu;

void op(void* p) {
    stu* s = (stu*)p; 
    printf("age = %d, gender = %d\n", s->age, s->gender);
}

int main() {
    PABSLL students = ll_create();
    
    stu xm = {18,true};
    stu xh = {16,false};

    ll_append(students, &xm);
    ll_append(students, &xh);

    ll_traverse(students, op);
}