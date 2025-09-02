Yashvesh Singh 24070123138
#include<iostream>
using namespace std;
class Student{
    int rollno;
    char name[50];
    double fee;
    public:
    Student()
    {
        cout<<"Enter student Details"<<endl;
        cout<<"Enter The roll number"<<endl;
        cin>>rollno;
        cout<<"Enter The Name of the student"<<endl;
        cin>>name;
        cout<<"Enter The Fees"<<endl;
        cin>>fee;
    }
    void display(){
        cout<<endl<<"Roll Number: "<<rollno<<"\t"<<"Name: "<<name<<"\t"<<"Fee: "<<fee;
    }
};
int main(){
    Student s1;
    s1.display();
    return 0;
}
output:
Enter student Details
Enter The roll number
138
Enter The Name of the student
Yashvesh
Enter The Fees
42525

Roll Number: 138	Name: Yashvesh	Fee: 42525
