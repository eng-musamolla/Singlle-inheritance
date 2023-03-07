#include <iostream>
using namespace std;

class Animal {
protected:
  string name;

public:
  Animal(string name) : name(name) {}
  void eat() { cout << name << "is eating." << endl; }
};

class Dog : public Animal {
public:
  Dog(string name) : Animal(name) {}
  void bark() { cout << name << "is barking." << endl; }
};

int main() {
  Dog kutta("Buddy ");
  kutta.eat();
  kutta.bark();
}