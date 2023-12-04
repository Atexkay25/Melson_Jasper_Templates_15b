// Jasper Melson    
// CIS 1202 
// December 3, 2023


#include <iostream>
#include <cmath> // For rounding functions

using namespace std;

// Function to find half of a value, considering its type
template <typename T>
T half(T value) {
    return value / 2; // For float and double, just divide by 2
}

// Special function for integers: rounds up if odd, otherwise rounds down
template <>
int half(int value) {
    return (value % 2 == 0) ? (value / 2) : ((value / 2) + 1);
}

int main() {
    // Testing the half function with different types
    float fValue = 5.0;
    double dValue = 10.0;
    int intValue = 7;

    // Displaying the original values
    cout << "Original values:" << endl;
    cout << "Float: " << fValue << endl;
    cout << "Double: " << dValue << endl;
    cout << "Int: " << intValue << endl;

    // Displaying the half values
    cout << "\nHalf values:" << endl;
    cout << "Half of float: " << half(fValue) << endl;
    cout << "Half of double: " << half(dValue) << endl;
    cout << "Half of int: " << half(intValue) << endl;

    return 0;
}


