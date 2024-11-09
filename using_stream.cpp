#include "using_stream.hpp"
#include <sstream>
#include <iomanip>

using namespace std;
// Function to convert double to string 
string doubleToString(double number) {
    stringstream stream;
    int n;
    cout << "How many digits do you want your number to have? ";
    cin >> n;
    stream << fixed << setprecision(n) << number;
    return stream.str();
}