# ifndef SUBJECT_H
# define SUBJECT_H
# include <string>
using namespace std;



class Subject {
public:
    Subject(string, int, int);
    string name;
private:
    int lecturesCount;
    int exerciseCount;
};
# endif //SUBJECT_H