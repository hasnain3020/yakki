#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, value, position;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Create a vector of size n
    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value to insert: ";
    cin >> value;

    cout << "Enter the position to insert the value (0 to " << n << "): ";
    cin >> position;

    // Insert the value at the specified position
    arr.push_back(0); // Make room for one more element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];  // Shift elements to the right
    }
    arr[position] = value;  // Insert the new value

    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
