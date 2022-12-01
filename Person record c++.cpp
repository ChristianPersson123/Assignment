// hello world.Christian.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string name, address, decider;
    int age, street;
    char mf;
    bool married = true;
    bool not_married = false;
    float height;
    cout << "Declare your name please" << endl;
    cin >> name;
    cout << "Declare your age" << endl;
    cin >> age;
    cout << "Write down your gender" << endl;
    cin >> mf;
    cout << "Declare your address" << endl;
    cin >> address >> street;
    cout << "Are you married?" << endl;
    cin >> decider;
    cout << "Declare your height in meters" << endl;
    cin >> height;
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Gender : " << mf << endl;
    cout << "Address : " << address << " " << street << endl;
    if (decider == "true") {
        cout << "Married : " << married << endl;
    }
    else if (decider == "false") {
        cout << "Married : " << not_married << endl;
    }
    else {
        cout << "Not a valid input" << endl;
    }
    cout << "Height : " << height << endl;
        
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
