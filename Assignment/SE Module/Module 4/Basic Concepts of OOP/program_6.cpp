// Write a C++ program to create a class called Person that has private
// member variables for name, age and country. Implement member
// functions to set and get the values of these variables.

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name, country;
    int age;

public:
    void setName(string new_name)
    {
        name = new_name;
    }
    void setAge(int new_age)
    {
        age = new_age;
    }
    void setCountry(string new_country)
    {
        country = new_country;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getCountry()
    {
        return country; 
    }
};
int main()
{
    Person person;
    string name, country;
    int age;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter country: ";
    cin.ignore();
    getline(cin, country);
    person.setName(name);
    person.setAge(age);
    person.setCountry(country);
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;
}