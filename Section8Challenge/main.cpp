#include <iostream>

using namespace std;

int main()
{
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int amount_of_cents {};

    cout << "Enter number of cents : ";
    cin >> amount_of_cents;

    int dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    int balance = 0;

    dollars = amount_of_cents / dollar_value;
    balance = amount_of_cents - (dollars * dollar_value);

    quarters = balance / quarter_value;
    balance -=quarters * quarter_value;

    dimes = balance / dime_value;
    balance -= dimes * dime_value;

    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;

    pennies = balance;

    cout << "You can provide change for this change as follows: " << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    return 0;
}
