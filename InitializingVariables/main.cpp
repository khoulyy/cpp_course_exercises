#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main()
{
    int room_width {0};
    int room_length {0};

    cout << "Enter the width of the room: " << endl;
    cin >> room_width;

    cout << "Enter the length of the room: " << endl;
    cin >> room_length;

    cout << "Area of the room is " << room_width * room_length << " square feet" << endl;

    return 0;
}
