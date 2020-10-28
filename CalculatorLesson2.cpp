// CalculatorLesson2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
    int choice;
    long num1, num2, x;
 
    cout << "Please choose your option:"
        "\n1 = Addition"
        "\n2 = Subtraction"
        "\n3 = Multiplication"
        "\n4 = Division"
        "\n5 = Squares"
        "\n6 = power"
        "\n7= Remainder: ";
        "\n8= exit";

    cin >> choice;
   
    while (choice < 1 || choice>8)
    {
        cout << "\nPlease choose one option"
            "\nChoice: ";
        cin >> choice;
    }

    switch (choice)
    {
        //Addition
    case 1:
        cout << "Enter two numbers: \n";
        cin >> num1 >> num2;
        x = num1 + num2;
        cout << "Sum = " << x;
        break;

        //Subtraction
    case 2:
        cout << "Enter two numbers: \n";
        cin >> num1 >> num2;
        x = num1 - num2;
        cout << "Subtraction = " << x;
        break;

        //Multiplication
    case 3:
        cout << "Enter two numbers: \n";
        cin >> num1 >> num2;
        x = num1 * num2;
        cout << "Product = " << x;
        break;

        //Division
    case 4:
        cout << "Enter Dividend: ";
        cin >> num1;
        cout << "Enter Divisor: ";
        cin >> num2;

       //while loops tp check that the divisor is greater than zero
        while (num2 >=1)
        {
            cout << "\nDivisor cannot be zero."
                "\nEnter divisor once again: ";
            cin >> num2;
        }
        x = num1 / num2;
        cout << "\nQuotient = " << x;
        break;

        //Square
    case 5:
        cout << "Enter any number: \n";
        cin >> num1;
        x = num1 * num1;
        cout << "Square = " << x;
        break;

        //power
    case 6:
        cout << "Enter base number: \n";
        cin >> num1;
        cout<<"enter exponent";
        cin >> num2;
        x = num1 * (num2*num2);
        cout << "Square = " << x;
        break;

        //Remainder
    case 7:
        cout << "Enter two number to calculate the remainder: \n";
        cin >> num1;
        cin >> num2;
        x = num1 % num2;
        cout << "Remainder is  = " << x;
        break;

    case 8:
        return 0;

    default: cout << "\nError";
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
