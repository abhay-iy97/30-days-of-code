#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int value1; float value2; string value3;
    // Read and save an integer, double, and String to your variables.
    cin >> value1 >> value2;
    cin.ignore();
    getline(cin, value3);
    // Print the sum of both integer variables on a new line.
    cout<<(i + value1)<<"\n";
    // Print the sum of the double variables on a new line.
    cout<<float(d + value2)<<"\n";
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<(s + value3)<<"\n";
    return 0;
}