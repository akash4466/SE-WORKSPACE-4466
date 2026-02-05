#include <iostream>
#include <cmath>    // for ceil()
using namespace std;


const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;


class Event
{
private:
    string eventName;
    string firstName;
    string lastName;
    int numberOfGuests;
    int numberOfMinutes;

public:
    
    void getInput()
    {
        cout << "Enter Event Name: ";
        getline(cin, eventName);

        cout << "Enter First Name: ";
        getline(cin, firstName);

        cout << "Enter Last Name: ";
        getline(cin, lastName);

        
        do
        {
            cout << "Enter Number of Guests: ";
            cin >> numberOfGuests;
        } while (numberOfGuests <= 0);

       
        do
        {
            cout << "Enter Number of Minutes: ";
            cin >> numberOfMinutes;
        } while (numberOfMinutes <= 0);
    }

    
    int getNumberOfServers()
    {
        return ceil(numberOfGuests / 20.0);
    }

    
    double getCostForOneServer()
    {
        double cost1 = (numberOfMinutes / 60) * CostPerHour;
        double cost2 = (numberOfMinutes % 60) * CostPerMinute;
        return cost1 + cost2;
    }

    
    double getFoodCost()
    {
        return numberOfGuests * CostOfDinner;
    }

    
    void displayEstimate()
    {
        int servers = getNumberOfServers();
        double costForOneServer = getCostForOneServer();
        double totalFoodCost = getFoodCost();
        double averageCost = totalFoodCost / numberOfGuests;
        double totalCost = totalFoodCost + (costForOneServer * servers);
        double depositAmount = totalCost * 0.25;

        cout << "\n========== EVENT COST ESTIMATION ==========\n";
        cout << "Event Name: " << eventName << endl;
        cout << "Customer Name: " << firstName << " " << lastName << endl;
        cout << "Number of Guests: " << numberOfGuests << endl;
        cout << "Number of Minutes: " << numberOfMinutes << endl;
        cout << "------------------------------------------\n";
        cout << "Number of Servers Required: " << servers << endl;
        cout << "Cost for One Server: $" << costForOneServer << endl;
        cout << "Total Food Cost: $" << totalFoodCost << endl;
        cout << "Average Cost Per Person: $" << averageCost << endl;
        cout << "------------------------------------------\n";
        cout << "Total Event Cost: $" << totalCost << endl;
        cout << "Deposit Amount (25%): $" << depositAmount << endl;
        cout << "==========================================\n";
    }
};


int main()
{
    Event e;

    cout << "===== Welcome to Event Organiser System =====\n\n";

    // Get all inputs
    e.getInput();

    // Display final cost estimation
    e.displayEstimate();

    return 0;
}
