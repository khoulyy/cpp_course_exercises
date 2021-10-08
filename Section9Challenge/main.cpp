#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numbers {1, 2, 3, 4};
    char selection {};

    do {
        cout << "\n-------- Options ----------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the number" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> selection;

        if (selection == 'P' || selection == 'p') {
            if (numbers.size() == 0)
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto num: numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
        }
        else if (selection == 'A' || selection == 'a') {
            int num_to_add {};
            cout << "Enter an integer to add to the list:";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        }
        else if (selection == 'M' || selection == 'm') {
            if (numbers.size() == 0)
                cout << "Unable to calculate mean - list is empty" << endl;
            else {
                int total {};
                for (auto num: numbers)
                    total += num;
                cout << "The mean is: " << static_cast<double>(total) / numbers.size() << endl;
            }
        }
        else if (selection == 'S' || selection == 's') {
            if (numbers.size() == 0)
                cout << "Unable to calculate the smallest - list is empty" << endl;
            else {
                int smallest = numbers.at(0);
                for (auto num: numbers)
                    if (num < smallest)
                        smallest = num;
                cout << smallest << " is the smallest number" << endl;
            }
        }
        else if (selection == 'L' || selection == 'l') {
            if (numbers.size() == 0)
                cout << "Unable to calculate the largest - list is empty" << endl;
            else {
                int largest {};
                for (auto num: numbers)
                    if (num > largest)
                        largest = num;
                cout << largest << " is the largest number" << endl;
            }
        }
        else if (selection == 'Q' || selection == 'q') {
            cout << "Goodbye" << endl;
        }
        else {
            cout << "Unknown selection, please try again." << endl;
        }

    } while (selection != 'Q' && selection != 'q');

    return 0;
}
