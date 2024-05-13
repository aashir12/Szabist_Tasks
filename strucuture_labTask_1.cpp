// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct studentData{
    int roll;
    string name;
    int age;
    int marks;
};
int main() {
    studentData data;
    cout<<"Enter the roll number"<<endl;
    cin>>data.roll;
    cout<<"Enter your name"<<endl;
    cin>>data.name;
    cout<<"Enter your age"<<endl;
    cin>>data.age;
    cout<<"Enter your marks"<<endl;
    cin>>data.marks;
    
         cout<<"Here are your marks"<<data.roll<<endl;
              cout<<"Here is your name"<<data.name<<endl;
         cout<<"Here is your age"<<data.marks<<endl;
     cout<<"Here are your marks"<<data.marks<<endl;

    return 0;
}
