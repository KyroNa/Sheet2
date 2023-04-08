// Sheet2.cpp : This file contains sheet 2 codes for cse131
//

#include <iostream>
using namespace std;

int main()
{
    /*
    //Problem 1
    int x = 2; 
    if (x >= 0) 
        x++; 
    else if (x >= 1) 
        x += 10; 
    cout << x << "\n";
    x = 2; 
    if (x >= 0) 
        x++; 
    if (x >= 1) 
        x += 10; 
    cout << x << endl;
    */

   /*
    //Problem 2
    float x = 25.0, y; 
    cin >> y; 
    if (y != (x - 10.0)) 
        x = x - 10.0; 
    else x = x / 2.0; 
    cout << "x = " << x << ", y = " << y << endl; 
    x = 25.0; 
    cin >> y; 
    if (y < 12.0) 
    { 
        if (y >= 0.0) 
            x = 5 * y; 
        else 
            x = 2 * y; 
    }
    else x = 3 * y; 
    cout << "x = "<< x <<", y = "<< y << endl;
    


    /*
    //Problem 3
    int x;

    cout << "Please insert number to check if even or odd\n";
    cin >> x;

    if (x % 2 == 1)
    {
        cout << x << " is odd\n";
    }
    else 
    {
        cout << x << " is even\n";
    }
    */

    /*
    //Problem 5
    int a;
    int x=0;
    cin >> a;
    switch (a)
    {
    case 1:
        x += 5;
        break;
    case 2:
        x += 10;
        break;
    case 3:
        x += 16;
        break;
    case 4:
        x += 34;
        break;
    }
    cout << "x = " << x << endl;
    */

    /*
    //Problem 6
    int num1, num2, num3;
    cout << "Insert the 3 numbers to be sorted\n";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2; 
        num2 = temp;
    }

    if (num1 > num3)
    {
        int temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3)
    {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    cout << num1 << " < " << num2 << " < " << num3 << "\n";
    */

    
    //Probelm 7
    double base_salary = 5000;
    double goal;
    // goal in exmp is 80000
    cout << "Earn goal: ";
    cin >> goal;
    double sales_amount, comm_rate;
    // goal = base salary + commission rate * sales amount;
    // max to earn from 5000 sales is 5000*0.08 = 400
    // max to earn from 10000 sales is 10000*0.1 = 1000
    
    if (goal - base_salary <= 5000 * 0.08)
        comm_rate = 0.08;
    else if ((goal - base_salary) <= 10000*0.1)
        comm_rate = 0.1;
    else 
        comm_rate = 0.12;

    sales_amount = (goal - base_salary) / comm_rate;
    cout << "Sales amount needed is " << sales_amount << endl;
    


    /*
    //Problem 8
    double x, y;
    int choice;
    cout << "Please insert two numbers\n";
    cin >> x;
    cin >> y;
    cout<< "Choose the operation\n"
        << "1-Addition\t"
        << "2-Subtraction\t"
        << "3-Multiplication\n"
        << "4-Division\t"
        << "5-Average\t"
        << "6-Maximum\n"
        << "7-Minumum\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "x + y = " << x + y << endl;
        break;
    case 2:
        cout << "x - y = " << x - y << endl;
        break;
    case 3:
        cout << "x * y = " << x * y << endl;
        break;
    case 4:
        cout << "x / y = " << x / y << endl;
        break;
    case 5: 
        cout << "Average = " << (x + y) / 2.0 << endl;
        break;
    case 6:
        if (x < y)
            cout << "Maximum is " << y;
        else 
            cout << "Maximum is " << x;
        break;
    case 7:
        if (x < y)
            cout << "Minimum is " << x;
        else
            cout << "Minimum is " << y;
        break;
    }
    */


    /*
    //Problem 9 
    int shape;
    cout<< "Choose the shape to copmute its area and perimeter\n"
        << "1- Rectangle\n"
        << "2- Square\n"
        << "3- Circle\n";
    cin >> shape;

    double Area;
    double Perimeter;
    double Circumference;

    switch (shape)
    {
    case 1:
        cout << "Insert Length and Width\n";
        double L, W;
        cin >> L >> W;
        Area = L * W;
        Perimeter = (L + W) * 2;
        cout << "Area = " << Area << "\n";
        cout << "Perimeter = " << Perimeter << endl;
        break;
    case 2:
        cout << "Insert Side length\n";
        double S;
        cin >> S;
        Area = S * S;
        Perimeter = S * 4;
        cout << "Area = " << Area << "\n";
        cout << "Perimeter = " << Perimeter << endl;
        break;
    case 3:
        cout << "Insert Radius\n";
        const double pi = 22.0/7.0;
        double r;
        cin >> r;
        Area = pi * pow(r, 2);
        Circumference = 2 * pi * r;
        cout << "Area = " << Area << "\n";
        cout << "Circumference = " << Circumference << endl;
        break;
    }
    */
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
