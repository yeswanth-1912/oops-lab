#include<iostream>
using namespace std;
class student{
    string name;
    int rollno;
    public:
    student(string n ,int r){
        name = n;
        rollno= r;
        cout<<"constructor called : student object created" <<endl;
    }
void display() {
    cout<<"Name:"<<name<<"Roll No:"<<rollno<< endl;
}
};
int main(){
    student s1("Rahul",101);
    s1.display();
    return 0;
}