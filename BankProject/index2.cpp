#include <iostream>
using namespace std;

class A; // Forward declaration of class A

class B {
public:
    // Friend function declaration
    void displayPrivateData(const A &obj);
};

class A {
private:
    int privateData;

public:
    // Constructor to initialize private data
    A(int value) : privateData(value) {}

    // Declare class B's function as a friend
    friend void B::displayPrivateData(const A &obj);
};

// Definition of the friend function
void B::displayPrivateData(const A &obj) {
    cout << "Accessing private data of class A: " << obj.privateData << endl;
}

int main() {
    A objA(42); // Create an object of class A
    B objB;     // Create an object of class B

    // Use class B's friend function to access class A's private data
    objB.displayPrivateData(objA);

    return 0;
}
