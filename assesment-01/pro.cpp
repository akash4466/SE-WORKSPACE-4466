#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Event
{
private:
    string eventName;
    string firstName;
    string lastName;
    int numberOfGuests;
    int numberOfMinutes;

    const double CostPerHour = 18.50;
    const double CostPerMinute = 0.40;
    const double CostOfDinner = 20.70;

public:
    void getInput()
    {
        cout << "Enter Event Name: ";
        getline(cin, eventName);

        cout << "Enter First Name: ";
        cin >> firstName;

        cout << "Enter Last Name: ";
        cin >> lastName;

        cout << "Enter Number of Guests: ";
        cin >> numberOfGuests;

        cout << "Enter Number of Minutes: ";
        cin >> numberOfMinutes;
    }

    int calculateServers()
    {
        return ceil(numberOfGuests / 20.0);
    }

    double costPerServer()
    {
        double cost1 = (numberOfMinutes / 60) * CostPerHour;
        double cost2 = (numberOfMinutes % 60) * CostPerMinute;
        return cost1 + cost2;
    }

    void displayOutput()
    {
        int servers = calculateServers();
        double oneServerCost = costPerServer();
        double foodCost = numberOfGuests * CostOfDinner;
        double averageCost = foodCost / numberOfGuests;
        double totalCost = foodCost + (oneServerCost * servers);
        double deposit = totalCost * 0.25;

        cout << fixed << setprecision(2);

        cout << "\nEvent Name: " << eventName;
        cout << "\nCustomer Name: " << firstName << " " << lastName;
        cout << "\nGuests: " << numberOfGuests;
        cout << "\nMinutes: " << numberOfMinutes;
        cout << "\nServers Required: " << servers;
        cout << "\nCost Per Server: $" << oneServerCost;
        cout << "\nTotal Food Cost: $" << foodCost;
        cout << "\nAverage Cost Per Person: $" << averageCost;
        cout << "\nTotal Event Cost: $" << totalCost;
        cout << "\nDeposit Amount: $" << deposit;
    }
};

int main()
{
    Event e;
    e.getInput();
    e.displayOutput();
    return 0;
}
