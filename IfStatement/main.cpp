#include <iostream>

using namespace std;

int main()
{
    int num {};
    const int mini {10};
    const int maxi {100};

    cout << "Enter a number between " << mini << " and " << maxi << " : " << endl;
    cin >> num;

    if (num >= mini){
        cout << "\n==================== If Statement 1 =====================" << endl;
        cout << num << " is greater than or equal to " << mini << endl;

        int diff {num - mini};
        cout << num << " is " << diff << " greater than " << mini << endl;
    }

    if (num <= maxi){
        cout << "\n==================== If Statement 2 =====================" << endl;
        cout << num << " is less than or equal to " << maxi << endl;

        int diff {maxi - num};
        cout << num << " is " << diff << " less than " << maxi << endl;
    }

    if (num >= mini && num <= maxi){
        cout << "\n==================== If Statement 3 =====================" << endl;
        cout << num << " in range " << endl;
        cout << "This means statements 1 and 2 must also display!!" << endl;
    }

    if (num == mini || num == maxi){
        cout << "\n==================== If Statement 4 =====================" << endl;
        cout << num << " is right on the boundary" << endl;
        cout << "This means all 4 statements display" << endl;
    }

    return 0;
}
