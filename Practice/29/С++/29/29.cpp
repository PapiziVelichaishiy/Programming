#include <iostream.h>
#include <string.h>
#include <conio.h>
class progress;

class student
{
    friend ostream& operator<<(ostream&, const student&);
    friend istream& operator>>(istream&, student&);
private:
    friend class progress;
    student* next;
    char* name;
    float mark;
public:
    void Ras();
    void PrintStudent() { cout << "Student " << name << " have mark " << mark << endl; }
    void ReadStudent()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter mark: ";
        cin >> mark;
    }
    student();
};

student::student()
{
    int k = 10;
    name = new char[k + 1];
    strcpy(name, "With Out Name");
    mark = 0;
}

void student::Ras()
{
    student* s;
    float fin = 0;
    while (s)
    {
        fin += mark;
        s = s->next;
    }
    cout << fin << endl;
}

class progress
{
    int count;
    char Facultet[20];
    student* first;
    student* head;
public:
    progress(char* FacultetName)        //Ïðèñâîåíè èìåíè Ôàêóëüòåòó
    {
        strcpy(Facultet, FacultetName);
        count = 0;
        first = head = NULL;
    }
    void AddStudent();
    void PrintAll();
    ~progress();
};
progress::~progress()
{
    if (count)
    {
        student* s = first;
        while (s)
        {
            s = first->next;
            delete first;
            first = s;
        }
    }
}

void progress::AddStudent()
{
    if (!count) {
        first = new student;
        head = first;
        head->next = NULL;
        head->ReadStudent();
        count = 1;
    }
    else {
        head->next = new student;
        head = head->next;
        head->ReadStudent();
        head->next = NULL;
        count++;
    }
}

void progress::PrintAll()
{
    student* s;
    s = first;
    while (s)
    {
        s->PrintStudent();
        s = s->next;
    }
}

istream& operator>>(istream& input, student& s)
{
    input >> s.name;
    return input;
}

ostream& operator<<(ostream& output, const student& s)
{
    output << s.name << s.mark << ' ' << endl;
    return output;
}

void main()
{
    progress P("PS");
    student S;
    char s = 0;
    while (s != 27)
    {
        P.AddStudent();
        s = getch();
    }
    P.PrintAll();
    S.Ras();
}