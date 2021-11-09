#include <iostream>

using namespace std;

//R.1.11
class Flower
{
public:
  Flower();
  Flower(int, string, float);
  string getName();
  int getPetals();
  float getPrice();
  void setName(string);
  void setPetals(int);
  void setPrice(double);

private:
  int petals;
  string name;
  float price;
};

Flower::Flower()
{
  petals = 0;
  name = "";
  price = 0.0;
}

Flower::Flower(int petals, string name, float price)
{
  this->petals = petals;
  this->name = name;
  this->price = price;
}

string Flower::getName()
{
  return name;
}

int Flower::getPetals()
{
  return petals;
}

float Flower::getPrice()
{
  return price;
}

void Flower::setName(string n)
{
  name = n;
}

void Flower::setPetals(int p)
{
  petals = p;
}

void Flower::setPrice(double p)
{
  price = p;
}

int main()
{
  Flower rose(5, "Rose", 10.0);
  cout << "Name: " << rose.getName() << endl;
  cout << "Petals: " << rose.getPetals() << endl;
  cout << "Price: " << rose.getPrice() << endl;
  rose.setName("Lily");
  rose.setPetals(10);
  rose.setPrice(20.0);
  cout << "Name: " << rose.getName() << endl;
  cout << "Petals: " << rose.getPetals() << endl;
  cout << "Price: " << rose.getPrice() << endl;
  return 0;
}