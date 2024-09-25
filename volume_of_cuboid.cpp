//Akshit Bansal
//23070123013

#include<iostream>
using namespace std;
class Cuboid
{
    public:
    int h,b,l;
    int v;
    void input()
    {
        cout<<"Enter the value of lenght, breadht, height of cuboid: "<<endl;
        cin>>l>>b>>h;
    }
    void volume()
    {
        v=l*b*h;
    }
    void output()
    {
        cout<<"The volume of the cuboid is "<<v<<endl;
    }
};
int main()
{
    Cuboid c1;
    c1.input();
    c1.volume();
    c1.output();
    return 0;
}

/*Output 
Enter the value of lenght, breadht, height of cuboid: 
4
5
6
The volume of the cuboid is 120*/
