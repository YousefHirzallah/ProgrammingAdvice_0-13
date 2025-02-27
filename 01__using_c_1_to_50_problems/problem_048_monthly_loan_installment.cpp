#include <iostream>
using namespace std;

int main() {
    float loan_amount;
    int nbr_of_months;
    float monthly_payment;


    cout << "Enter the loan amount: ";
    cin >> loan_amount;

    while (loan_amount < 0) {
        cout << "Please enter a positive loan amount.\n";
        cin >> loan_amount;
    }

    cout << "Enter the number of months: ";
    cin >> nbr_of_months;

    while (nbr_of_months <= 0) {
        cout << "Please enter a positive number of months.\n";
        cin >> nbr_of_months;
    }


    monthly_payment = loan_amount / nbr_of_months;


    cout << "\nTo settle the loan amount (" << loan_amount << " $) in " << nbr_of_months
         << " months, your monthly payment will be: " << monthly_payment << " $\n";

    return 0;
}
