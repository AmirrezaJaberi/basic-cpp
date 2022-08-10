#include <iostream>

// C Math
#include <cmath>

using namespace std;

// Function
void SayInformation(string name, int age)    // --> Function Say Information
{
    cout << "Name: "<< name <<"" << endl;
    cout << "Age: "<< age <<"" << endl;
    cout << "This Line Write With Function !" << endl;
}

int Cube(int number)
{
    int result = number * number * number;
    return result;
}

string GetNumber(int number)
{
    string result;
    switch(number)
    {
    case 1:
        result = "first number !";
    break;
    case 2:
        result = "secend number !";
    break;
    default:
        result = "wrong !";
    break;
    }
    return result;
}

int main()
{
    // Types
    // string --> AmIrReZa           |
    // char --> A                    |
    // int --> 1,2,3,4,5,6,7,8,9     |
    // float --> 1,2,3,4,5,6,7,8,9   |
    // double --> 1.1, 2.2, 3.3, ... |
    // bool --> true or false        |


    // Print in C++
    string name = "AmIrReZa";
    int age = 17;
    cout << "Your name is "<< name <<"" << endl;
    cout << "Your age is "<< age <<"" << endl;


    // String
    string example = "Example";            // --> Defult string
    cout << example.length() << endl;      // --> Get Length            Output : 7
    cout << example[0] << endl;            // --> Get Index Number 0    Output : E
    cout << example.find("Ex", 0) << endl; // --> Get Index Position    Output : 0
    cout << example.substr(0, 7) << endl;  // --> Get String With Index Output : Example

    // Numbers
    cout << 5 + 8 << endl;                 // --> Addition                Output : 13
    cout << 5 - 8 << endl;                 // --> Subtraction             Output : -3
    cout << 5 / 8 << endl;                 // --> Division                Output : 0
    cout << 5 * 8 << endl;                 // --> Multiplication          Output : 40
    cout << 5 % 8 << endl;                 // --> Percentage              Output : 5

    cout << pow(5, 8) << endl;             // --> power                      Output : 390625
    cout << sqrt(49) << endl;              // --> radical                    Output : 7
    cout << round(4.3) << endl;            // --> close number               Output : 4
    cout << ceil(4.1) << endl;             // --> The most and the closest   Output : 5
    cout << fmax(3, 10) << endl;           // --> Maximum number             Output : 10
    cout << fmin(3, 10) << endl;           // --> Minimum number             Output : 3

    // Input
    string new_name;
    int new_age;
    cout << "Enter your name: " << endl;
    cin >> new_name;
    cout << "Your name is "<< new_name <<"" << endl;
    cout << "Enter your age: " << endl;
    cin >> new_age;
    cout << "Your age is "<< new_age <<"" << endl;

    // Arrays
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};    // --> Tables
//                   0  1  2  3  4  5  6
    cout << numbers[6] << endl;               // --> Output : 7

    int new_numbers[3][2] = { // 2D
        {1, 2},
        {3, 4},
        {4, 5},
    };

    cout << new_numbers[2][1] << endl;        // --> Output : 3
    // Run Functions
    SayInformation(new_name, new_age);

    int F_Cube = Cube(5);
    cout << F_Cube << endl;                  // --> Cube Of 5               Output : 125

    // if
    bool status = true;
    if (status) {
    cout << "Status is true !" << endl;
    } else {
    cout << "Status is false !" << endl;
    }

    // Switch
    string get_number = GetNumber(1);
    cout << get_number << endl;             // --> Choose number text        --> Output : first number !

    // While
    int index = 6;
    do {
        cout << index << endl;              // --> Check then while          --> Output : 6
    } while (index <= 5);

    // For
    int numtables[] = { 4, 8, 9, 78, 65, 35, 60, 83 };
    int length = sizeof(numtables)/sizeof(int); // Get size of tables
    for(int i = 0; i < length; i++)
    {
        cout << numtables[i] << endl;           // Print Numbers
    }

    // Pointer
    int pointer = 19;

    cout << &pointer << endl;                   // Print Memory Address     --> Output : 0x6.......

    return 0;
}
