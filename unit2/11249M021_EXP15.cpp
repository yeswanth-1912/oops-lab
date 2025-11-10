#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    public:
    student(){
        name="unknown";
        age=0;
        cout<<"default constructor called"<<endl;
    }
    student(string n,int a){
        name=n;
        age=a;
        cout<<"parameterized constructor called"<<endl;
    }
    student(const student&s){
        name=s.name;
        age=s.age;
        cout<<"copy constructor called"<<endl;
    }
    void display(){
        cout<<"name:"<<name<<"age:"<<age<<endl;
    }
    ~student(){
        cout<<"destructoe called for"<<name<<endl;
    }
};
int main(){
    student s1;
    student s2("yash",20);
    student s3 = s2;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}