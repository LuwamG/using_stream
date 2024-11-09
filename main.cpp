#include "using_stream.cpp"
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;



int main() {
    double number;
    cout << "Enter number: ";
    cin >> number;

    string str = doubleToString(number);


    cout << str << endl;

    return 0;
}
