//
//  main.cpp
//  CSC450_CT3
//
//  Created by Paul Bauer on 10/26/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;
    
    // Prompt for input
    cout << "Please enter an integer\n";
    cin >> *ptr1;
    cout << "Please enter another intger\n";
    cin >> *ptr2;
    cout << "Please input one more integer\n";
    cin >> *ptr3;
    
    cout << "Address         | Value\n";
    cout << "-----------------------\n";
    cout << ptr1 << "  : " << *ptr1 << "\n";
    cout << ptr2 << "  : " << *ptr2 << "\n";
    cout << ptr3 << "  : " << *ptr3 << "\n";
    
    delete ptr1;
    delete ptr2;
    delete ptr3;
    return 0;
}
