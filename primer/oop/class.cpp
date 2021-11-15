#include <iostream>
#include <string>

using namespace std;

// testing the different access modifiers
// class Base
// {
// private:
//   int priv;

// protected:
//   int prot;

// public:
//   int pub;
// };

// class Derived : public Base
// {
//   void someMemberFunction()
//   {
//     cout << "priv: " << priv << endl;
//     cout << "prot: " << prot << endl;
//     cout << "pub: " << pub << endl;
//   }
// };

// class Unrelated
// {
//   Base X;

//   void anotherMemberFunction()
//   {
//     cout << "priv: " << X.priv << endl;
//     cout << "prot: " << X.prot << endl;
//     cout << "pub: " << X.pub << endl;
//   }
// };

class Person // person Base class
{
private:
  string name;
  int age;
  string address;
  string idNum;

public:
  Person(string name, int age, string address, string idNum);
  string getName(string name) { return name; };
  virtual void print()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    cout << "ID Number: " << idNum << endl;
  };
  ~Person();
};

class Student : public Person // student derived class
{
private:
  string major;
  int year;
  double gpa;
  int gradYear;

public:
  Student(string name, int age, string address, string idNum, string major, int year, double gpa, int gradYear);
  virtual void print()
  {
    Person::print();
    cout << "Major: " << major << endl;
    cout << "Year: " << year << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Graduation Year: " << gradYear << endl;
  };
  ~Student();
};

Person::Person(string name, int age, string address, string idNum)
{
  this->name = name;
  this->age = age;
  this->address = address;
  this->idNum = idNum;
};

Student::Student(string name, int age, string address, string idNum, string major, int year, double gpa, int gradYear) : Person(name, age, address, idNum)
{
  this->major = major;
  this->year = year;
  this->gpa = gpa;
  this->gradYear = gradYear;
};

Person ::~Person()
{
  cout << "Person destructor" << endl;
}

Student::~Student()
{
  cout << "Student destructor" << endl;
}

int main()
{
  Person *p = new Person("John", 20, "123 Main St", "123-45-6789");
  // p->print();
  delete p;

  Student *s = new Student("Jane", 21, "456 Main St", "123-45-6789", "Computer Science", 2019, 3.5, 2021);
  // s->print();
  delete s;

  // static binding
  Person *pp[100];
  pp[0] = new Person("John", 20, "123 Main St", "123-45-6789");
  pp[1] = new Student("Jane", 21, "456 Main St", "123-45-6789", "Computer Science", 2019, 3.5, 2021);

  // cout << pp[1]->getName() << endl;
  pp[0]->print();
  cout << "------------------------------" << endl;
  pp[1]->print();
  // pp[1]->print();
}