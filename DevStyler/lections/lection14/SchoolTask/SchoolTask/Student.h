# ifndef Student_H
# define Student_H
# include <string>
# include "Subject.h"
using namespace std;

class Student {
public:
    Student(string, int);
    void setName(string);
    string getName();
    void setId(int);
    int getId();
    void printInfo();

private:
    string name;
    int id;
};
# endif //Student_H