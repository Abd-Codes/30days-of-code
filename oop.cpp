#include <iostream>
using namespace std;
class student{
    public:
    string name;
    string school;
    int age;

    void intro(){
        cout<<"Name - "<<name<<endl;
        cout<<"School - "<<school<<endl;
        cout<<"Age - "<<age<<endl;
    }

    student(string Name, string School, int Age){
        name = Name;
        school = School;
        age = Age;
    }
};
int main(){
    student student1 = student("Ali", "Al hayyan", 19);
    /*student1.name = "Ali";
    student1.school = "Al hayyan";
    student1.age = 19;*/
    student1.intro();

    student student2 = student("Ahmad", "Al pine", 18);
    /*student2.name = "Ahmad";
    student2.school = "Al Pine";
    student2.age = 119;*/
    student2.intro();
}