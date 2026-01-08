#include <iostream>
using namespace std;
int main() {
    int* ptr = new int;
    *ptr = 75;
    cout << "Value stored in the dynamically allocated memory: " << *ptr << endl;
    delete ptr;
    ptr = nullptr;
    return 0;
}