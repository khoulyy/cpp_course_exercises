#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "\nElement in vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "\nSize of vector1 is: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nElement in vector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "\nSize of vector2 is: " << vector2.size() << endl;

    vector <vector<int>*> vector_2d;

    vector_2d.push_back(&vector1);
    vector_2d.push_back(&vector2);

    cout << "\nElements in vector_2d: " << endl;
    cout << vector_2d.at(0)->at(0)<< endl;
    cout << vector_2d.at(0)->at(1) << endl;
    cout << vector_2d.at(1)->at(0) << endl;
    cout << vector_2d.at(1)->at(1) << endl;

    vector1.at(0) = 1000;

    cout << "\nUpdated elements in vector_2d: " << endl;
    cout << vector_2d.at(0)->at(0) << endl;
    cout << vector_2d.at(0)->at(1) << endl;
    cout << vector_2d.at(1)->at(0) << endl;
    cout << vector_2d.at(1)->at(1) << endl;

    cout <<"\nUpdated elements in vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    return 0;
}
