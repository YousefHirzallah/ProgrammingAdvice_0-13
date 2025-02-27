#include <iostream>

struct LoanPayment {
	int nbr_of_months;
	float loan_amount;
	float monthly_payment;
};

void print_result(const LoanPayment& loan);
LoanPayment read_loan_amount_and_monthly_payment();
LoanPayment calculate_months_to_settle_loan(const LoanPayment& loan);

int main() {
	LoanPayment loan = read_loan_amount_and_monthly_payment();
	loan = calculate_months_to_settle_loan(loan);
	print_result(loan);
	return 0;
}

void print_result(const LoanPayment& loan) {
	std::cout << "\nThe Number of months to settle the Loan ("
			  << loan.loan_amount
			  << " $) with ("
			  << loan.monthly_payment
			  << " $) Monthly Payments is: "
			  << loan.nbr_of_months
			  << " Months" << std::endl;
}

LoanPayment read_loan_amount_and_monthly_payment() {
	LoanPayment loan;
	loan.loan_amount = read_positive_nbr("Enter the loan amount:");
	loan.monthly_payment = read_positive_nbr("Enter the monthly payment amount:");
	return loan;
}

LoanPayment calculate_months_to_settle_loan(const LoanPayment& loan) {
	LoanPayment loan_with_months = loan;
	loan_with_months.nbr_of_months = static_cast<int>(loan_with_months.loan_amount / loan_with_months.monthly_payment);
	return loan_with_months;
}

float read_positive_nbr(const std::string& prompt) {
	float number;
	std::cout << prompt << std::endl;
	std::cin >> number;
	while (number <= 0) {
		std::cout << "Please enter a positive number." << std::endl;
		std::cin >> number;
	}
	return number;
}
