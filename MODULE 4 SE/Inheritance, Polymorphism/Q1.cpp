// Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)

#include <iostream>
using namespace std;

class Cricketer {
};

class Batsman : public Cricketer {
    
private:
    
    int TotalRuns;
    float AverageRuns;
    int BestPerformance;

public:
    
    void inputData() {
        cout << "Enter Total Runs : ";
        cin >> TotalRuns;
        cout << "Enter Best Performance : ";
        cin >> BestPerformance;
        calculateAverageRuns();
    }
    void calculateAverageRuns() {
        int matchesPlayed = 10;
        AverageRuns = static_cast<float>(TotalRuns) / matchesPlayed;
    }

    void displayData() {
        cout << "Total Runs : " << TotalRuns << endl;
        cout << "Average Runs : " << AverageRuns << endl;
        cout << "Best Performance : " << BestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.displayData();
    return 0;
}


