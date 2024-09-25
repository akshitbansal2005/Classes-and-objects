#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age;
    string branch;
    float result;
    int year;
};
int main()
{
    Student s1;
    s1.name = "Gayatri";
    s1.age= 18;
    s1.branch= "ENTC";
    s1.result= 7.8;
    s1.year= 2023;
    cout<< s1.name<<endl<<s1.age<<endl<<s1.branch<<endl<<s1.result<<endl<<s1.year<<endl;
}

/*Output
Gayatri
18
ENTC
7.8
2023
*/
