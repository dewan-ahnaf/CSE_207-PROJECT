#ifdef Faculty_H
#define Faculty_H

typedef struct faculty{
    LECTURER,
    Senior_Lecturer,
    Assistant_Professor,
}

typedef struct faculty{
    char *name;
    char *id;
    int designation;

}faculty;

void add_faculty();

#endif