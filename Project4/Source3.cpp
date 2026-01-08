#include <iostream>
using namespace std;
int main()
{
	int arr[3] = { 1, 2, 3 };
	int* p = arr;
	std::cout << p << endl;   // 1
	std::cout << *(p + 1); // 2
}
