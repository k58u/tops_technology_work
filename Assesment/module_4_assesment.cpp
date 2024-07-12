#include <iostream>
#include <cmath>

using namespace std;

class Event {

private:
    string eventName;
    string firstName;
    string lastName;
    int numberOfGuests;
    int numberOfMinutes;
    int numberOfServers;
    double totalCost;

    const double costPerHour = 18.50;
    const double costPerMinute = 0.40;
    const double costOfDinner = 20.70;
    const double depositRate = 0.25;

public:
    Event() : numberOfServers(0), totalCost(0.0) {}

    void getEventDetails() {
        cout << "Enter the name of the event: ";
        getline(cin, eventName);
        cout << "Enter your first name: ";
        cin >> firstName;
        cout << "Enter your last name: ";
        cin >> lastName;
        cout << "Enter the number of guests: ";
        cin >> numberOfGuests;
        cout << "Enter the duration of the event in minutes: ";
        cin >> numberOfMinutes;
    }

    void calculateCost() {
        numberOfServers = ceil(numberOfGuests / 20.0);

        double costForOneServer = ((numberOfMinutes / 60) * costPerHour) + ((numberOfMinutes % 60) * costPerMinute);

        double totalFoodCost = numberOfGuests * costOfDinner;

        double averageCost = totalFoodCost / numberOfGuests;

        totalCost = totalFoodCost + (costForOneServer * numberOfServers);

        double depositAmount = totalCost * depositRate;

        cout << "\n Event Details " << endl;
        cout << "Event Name: " << eventName << endl;
        cout << "Organizer: " << firstName << " " << lastName << endl;
        cout << "Number of Guests: " << numberOfGuests << endl;
        cout << "Number of Servers: " << numberOfServers << endl;
        cout << "Total Food Cost: " << totalFoodCost << endl;
        cout << "Average Cost Per Person: Rs " << averageCost << endl;
        cout << "Total Cost: Rs" << totalCost << endl;
        cout << "Deposit Amount (25% of Total Cost): Rs" << depositAmount << endl;
    }
};

int main() {
    Event event;
    event.getEventDetails();
    event.calculateCost();
 }
