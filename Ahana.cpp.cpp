#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    string name;
    public:
    student(int A,string n)
    {
        rollno = A;
        name = n;
        cout<<"student object created"<<endl;
    }
    void display()
    {
        cout<<"Roll Number:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
    }
    ~student()
    {
        cout<<"student object destroyed"<<endl;
    }
};
    int main()
    {
        student s1(101,"Arun");
        s1.display();
        return 0;
    }