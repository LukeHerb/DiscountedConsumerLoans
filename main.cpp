#include <iostream>

using namespace std;

int main() {
    double faceValue;
    double monthlyPayment;
    double interestRate;
    double duration;
    double interest;
    double interestOwed;
    double valueNeeded;
    char repeat;

    do {

        cout << "How much of a loan do you need? ";
        cin >> faceValue;
        cout << "What is the interest rate in percent? ";
        cin >> interestRate;
        cout << "What is the duration of the loan in months? ";
        cin >> duration;

        interest = faceValue * (interestRate / 100);
        interestOwed = interest * (duration / 12);

        valueNeeded = faceValue + interestOwed;
        monthlyPayment = valueNeeded / duration;
        cout << "You need a face value of $" << valueNeeded << "\n";
        cout << "Your monthly payment is $" << monthlyPayment << "\n";
        cout << "If you want to repeat this, press y. If not, press n. ";
        cin >> repeat;

    } while (repeat == 'y');
    return 0;
}