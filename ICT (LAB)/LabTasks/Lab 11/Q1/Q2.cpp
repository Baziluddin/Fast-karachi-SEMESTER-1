#include <iostream>
#include<string.h>
using namespace std;
class Person{
private :
string Name;
int Age;
public:
Person(string name,int age)
{
Name = name;
Age = age;
}
void SetName(string name)
{
Name = name;
}
string GetName()
{
return Name;
}
void SetAge(int age)
{
Age = age;
}
int GetAge()
{
return Age;
}
virtual void displayinfo(string name,int age)
{
cout<<"your name is :"<<name<<endl;
cout<<"your age is :"<<age<<endl;
}
};

class Employee :public Person{
private :
int employeeID;
public:
Employee(string name,int age,int employeeid) : Person(name,age),employeeID(employeeid)
{
}
void Setemployeeid(int employeeid)
{
employeeID = employeeid;
}
int Getemployeeid()
{
return employeeID;
}
void displayinfo (string name,int age,int employeeid)
{
cout<<"your name is :"<<name<<endl;
cout<<"your age is :"<<age<<endl;
cout<<"your employee id is :"<<employeeID<<endl;
}
};
class Student :public Person{
private :
int studentID;
public:
Student(string name,int age,int studentid) : Person(name,age),studentID(studentid)
{
}
void Setstudentid(int studentid)
{
studentID = studentid;
}
int Getstudentid()
{
return studentID;
}
void displayinfo(string name,int age,int studentid)
{
cout<<"your name is :"<<name<<endl;
cout<<"your age is :"<<age<<endl;
cout<<"your studen id is :"<<studentID<<endl;
}
};
int main()
{
string name;
int age;
int employeeid;
int studentid;
cout<<"enter your name :";
cin>>name;
cout<<"enter your age :";
cin>>age;
Person person(name,age);
person.displayinfo(person.GetName(),person.GetAge());
cout<<"Enter your employee id :";
cin>>employeeid;
cout<<"Enter your student id :";
cin>>studentid;
Employee employee(name,age,employeeid);
Student student(name,age,studentid);
cout<<"employee info \n";
employee.displayinfo(name,age,employeeid);
cout<<"student info \n";
student.displayinfo(name,age,studentid);
return 0;
}
