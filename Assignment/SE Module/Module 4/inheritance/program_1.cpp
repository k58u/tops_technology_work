// Assume a class cricketer is declared. Declare a derived class batsman from 
// cricketer. Data member of batsman. Total runs, Average runs and best 
// performance. Member functions input data, calculate average runs, Display 
// data. (Single Inheritance)


#include <iostream>
#include <string>
using namespace std;
class Cricketer {
private:
    string name;
    int age;
    string country;
public:
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter country: ";
        cin >> country;
    }
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};
class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;
public:
    void inputData() {
        Cricketer::inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }
    void calculateAverageRuns() {
        averageRuns = (totalRuns) / 5; 
    }
    void displayData()  {
        Cricketer::displayData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};
int main() {
    Batsman batsman;
    cout << "Enter batsman details:" << endl;
    batsman.inputData();
    cout << "\nBatsman Details:" << endl;
    batsman.displayData();
}
