

#include <iostream>
using namespace std;

class Person{

  public:
    string profession;
    int age;

    // Default constructor
    Person(): profession("unemployed"), age(16){ }

    void display() {
      
      cout << "My Procession is: " << profession << endl;
      cout << "My age is: " << age << endl;

      walk();
      talk();
    }

    void walk(){ cout << "I can walk." << endl;}
    void talk(){ cout << "I can talk." << endl;}

};



  // Inherits from person
class MathsTeacher : public Person{ 

  public:
    void teachMaths(){cout << "I can teach Maths." << endl;}
};

class Footballer : public Person {

  public:
      void playFootball() { cout << "I can play Football." << endl; }
};



int main(){
  MathsTeacher teacher;
  teacher.profession = "Teacher";
  teacher.age = 23;
  teacher.display();
  teacher.teachMaths();

  Footballer footballer;
  footballer.profession = "Footballer";
  footballer.age = 19;
  footballer.display();
  footballer.playFootball();

  Person person;
  person.display();


}