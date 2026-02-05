#include <iostream>
#include <fstream>
#include <iomanip>

#include <cstdio>

using namespace std;

int main ()
{
    // Fun with streams
    ofstream myFile("output.txt");
    
    double pi = 123456789.14159293847529045;

    // Hello world, this is pi: 3.1415965490845609284...
    printf("Hello world, %.9f\n", pi);
    cout << "Hello World, this is pi: " << setfill('.') << setw(42) << left << hexfloat << setprecision(9) << pi << "--" << fixed << setw(42) << pi << endl;
    myFile << "Hello World, this is pi: " << setfill('.') << setw(42) << left << hexfloat << setprecision(9) << pi << "--" << fixed << setw(42) << pi << endl;
    
    string text;
    string next;

    cout << "Enter some text: ";
    // cin >> text;
    // cin >> next;
    std::getline(cin, text);

    cout << "You typed: " << text << endl;
    // cout << "You also typed: " << next << endl;


    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    cout << "You typed: " << letter << endl;

    unsigned long int number;

    cout << "Number is " << number << endl;

    cout << "Enter a number: ";
    cin >> number;

    cout << "You typed: " << number << endl;
    
    double decimal;
    
    cout << "Enter a float: ";
    cin >> decimal;

    
    cout << "You typed: " << decimal << endl;

    cout << "Enter something crazy: ";
    cin >> noskipws >> text  >> letter >> number >> decimal;

    cout << "You entered: " << text << " " << letter << " " << number << " " << decimal << endl;


    ifstream inFile("output.txt");

    inFile >> text;
    cout << "Read from file: " << text << endl;

    return 0;
}