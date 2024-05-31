#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double change;  
    double monthlySalary;
    string employeeName;
    double proposedHourlySalary;
    double proposedMonthlyHours;
    double nominalSalary;
    double nominalIncome;
    double SGMM;
    string fixedOption;
    bool isFixedOption;
    string paymentTerms;
    int numOfDays;
    string fixedOption2;
    bool isFixedOption2;
    double headHunter;
    double PMC;
    double tariffcph;

    cout << "Enter the change amount in USD: $";
    cin >> change;

    cout << "Enter the employee's monthly salary: $";
    cin >> monthlySalary;

    double hourlySalary = monthlySalary / 160;
    cout << fixed << setprecision(2);
    cout << "Employee's hourly salary = $" << hourlySalary << endl;

    cout << "Enter the employee's name: ";
    cin >> employeeName;

    cout << "Enter the proposed hourly salary: $ ";
    cin >> proposedHourlySalary;

    cout << "Enter the number of monthly hours planned in the proposed project: ";
    cin >> proposedMonthlyHours;

    double netMonthlyIncome = proposedHourlySalary * proposedMonthlyHours;
    cout << "Net monthly income = $" << netMonthlyIncome << endl;

    cout << "Enter the monthly nominal salary: $";
    cin >> nominalSalary;

    cout << "Enter the net nominal income: $";
    cin >> nominalIncome;

    double assimilated = netMonthlyIncome - nominalIncome;
    cout << "Assimilated = $" << assimilated << endl;

    double legalBenefits = (netMonthlyIncome / 12 / 2) + (netMonthlyIncome / 30 * 15 / 12);
    cout << "Legal benefits = $" << legalBenefits << endl;

    double payrollCommission = netMonthlyIncome * 0.05;
    cout << "Payroll outsourcing commission = $" << payrollCommission << endl;

    cout << "Enter the SGMM amount: $";
    cin >> SGMM;

    cout << "Enter Fixed Option (yes or no): ";
    cin >> fixedOption;

    // Convert fixedOption to lowercase for case-insensitive comparison
    for (auto &c : fixedOption) {
        c = tolower(c);
    }

    double fixedValue1;
    if (fixedOption == "yes") {
        isFixedOption = true;
        fixedValue1 = 2000.00;
        cout << "Fixed value = $" << fixedValue1 << endl;
    } else if (fixedOption == "no") {
        isFixedOption = false;
        fixedValue1 = 0.00;
        cout << "Fixed value = $" << fixedValue1 << endl;
    } else {
        cout << "Invalid input for Fixed Option. Please enter 'yes' or 'no'." << endl;
        return 1; // Exit the program with an error code
    }

    double googleFixedValue = 140.00;
    cout << "Google fixed value = $" << googleFixedValue << endl;

    double totalSum = nominalSalary + nominalIncome + assimilated + legalBenefits + payrollCommission + SGMM + fixedValue1 + googleFixedValue;
    cout << "Total sum of the previous nine fields = $" << totalSum << endl;

    cout << "Enter the payment terms of the client: ";
    cin >> paymentTerms;

    cout << "Enter the number of days (30, 60, 90, 120): ";
    cin >> numOfDays;

    cout << "Enter Fixed Option (yes or no): ";
    cin >> fixedOption2;

    // Convert fixedOption2 to lowercase for case-insensitive comparison
    for (auto &c : fixedOption2) {
        c = tolower(c);
    }

    double fixedValue2;
    if (fixedOption2 == "yes") {
        isFixedOption2 = true;
        fixedValue2 = 5000.00;
        cout << "Fixed value = $" << fixedValue2 << endl;
    } else if (fixedOption2 == "no") {
        isFixedOption2 = false;
        fixedValue2 = 0.00;
        cout << "Fixed value = $" << fixedValue2 << endl;
    } else {
        cout << "Invalid input for Fixed Option. Please enter 'yes' or 'no'." << endl;
        return 1; // Exit the program with an error code
    }

    cout << "Head Hunter LATAM - Berenice Garcia: $";
    cin >> headHunter;

    cout << "Personnel Management Cost: $";
    cin >> PMC;

    double subTotal = numOfDays + fixedValue2 + headHunter + PMC;
    cout << "Sub Total = $" << subTotal << endl;

    double totalCost = totalSum + subTotal;
    cout << "Total Cost = $" << totalCost << endl;

    cout << "What is the tariff cost per hour: $";
    cin >> tariffcph;

    double tariffValue = tariffcph * proposedMonthlyHours;
    cout << "Monthly tariff = $" << tariffValue << endl;

    double TC_TV = totalCost - tariffValue;
    cout << "Total cost - Monthly tariff = $" << TC_TV << endl;

    double marginPercentage = (TC_TV * 100) / tariffValue;
    cout << "Margin Percentage = %" << marginPercentage << endl;

    return 0;
}


