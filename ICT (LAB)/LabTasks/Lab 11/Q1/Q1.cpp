#include <iostream>
#include<string.h>
using namespace std;
class Animal {
private :
string Name;
int Age;
public :
Animal(string name,int age )
{
Name = name;
Age = age;
}
void setName(string name)
{
Name = name;
}
void setAge(int age)
{
Age = age;
}
string GetName()
{
return Name;
}
int GetAge()
{
return Age;
}
void displayinfo(string name,int age)
{
cout<<"Name is : \n"<<name<<endl;
cout<<"Age is :\n"<<age<<endl;
}

};
class Mammal : public Animal{
public :
void feedBaby()
{
cout<<"Feeding baby mammal \n";
}
Mammal(string name,int age ) :Animal(name,age)
{
}
};
class Bird: public Animal{
public :
void layEgg()
{
cout<<"Laying an egg.\n";
}
Bird(string name,int age ) :Animal(name,age)
{
}
};
class Reptile: public Animal{
public :
void shedSkin()
{
cout<<"Shedding skin.\n";
}
Reptile(string name,int age ):Animal(name,age)
{
}
};
int main()
{
string name;
int age;
cout<<"Enter Name ::";
cin>>name;
cout<<"Enter Age ::";
cin>>age;
Animal info(name,age);
Mammal mammal(name,age);
Bird bird(name,age);
Reptile reptile(name,age);
info.displayinfo(info.GetName(),info.GetAge());
mammal.setName(name);
mammal.setAge(age);
bird.setName(name);
bird.setAge(age);
reptile.setName(name);
reptile.setAge(age);
cout<<"Mammal information \n";
mammal.displayinfo(name,age);
mammal.feedBaby();
cout<<"Birds information \n";
bird.displayinfo(name,age);
bird.layEgg();
cout<<"Reptile information \n";
reptile.displayinfo(name,age);
reptile.shedSkin();
return 0;
}
