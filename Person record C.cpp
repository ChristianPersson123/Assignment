// hello world.Christian.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char name[100], gender[1], address[100];
    int age, street, married;
    float height;
    printf("Write down your name\n");
    scanf("%s", name);
    printf("Declare your age\n");
    scanf("%d", &age);
    printf("Declare your gender\n");
    scanf("%s", gender);
    printf("Write down your address\n");
    scanf("%s%d", address, &street);
    printf("Are you married?\n");
    scanf("%d", &married);
    printf("What is your height in meters?\n");
    scanf("%f", &height);



    printf("Your name is : %s\n", name);
    printf("Your age is : %d\n", age);
    printf("Your gender is : %s\n", gender);
    printf("Your address is : %s %d\n", address, street);
    if (married == 1) {
        printf("Married : true\n");
    }
    else if (married == 0) {
        printf("Married : false\n");
    }
    else {
        printf("Invalid input");
    }
    printf("Height : %f", height);
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
