// hello world.Christian.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int n;
int i;

void for_loop(int n) {
    for (n > 0;n--;) {
        cout << "Hello World" << endl;
    }
    
}

void while_loop(int n) {
    while (n > 0) {
        cout << "Hello World" << endl;
        n--;
    }

}

void do_while_loop(int n) {
    do {
        cout << "Hello World" << endl;
        n--;
    }
    while (n > 0);
}
int main()
{
    cout << "How many times do you want Hello World to be printed?" << endl;
    cin >> n;
    if (n > 0) {
        cout << "What action do you want to use? 1:For loop  2:While loop  3:Do-While loop" << endl;
        cin >> i;
        if (i == 1) {
            for_loop(n);
        }
        else if (i == 2) {
            while_loop(n);
        }
        else if (i == 3) {
            do_while_loop(n);
        }
        else {
            cout << "Not a valid choice, choose between 1-3";
        }
    }
    else {
        cout << "Not a valid number, must be an integer and above 0";
    }
        
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
