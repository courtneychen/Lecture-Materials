#include <iostream>

using namespace std;

void swap(int val1, int val2) {
	int tempVal = val1;
	val1 = val2;
	val2 = tempVal;
}

int main() {
	int val1 = 100;
	int val2 = 200;
	
	std::cout << val1 << " - " << val2 << endl;
	swap(val1, val2);
  cout << val1 << " - " << val2 << endl;

	return 0;
}