#include <iostream>
using namespace std;

void FindOddOrEvenNumbers(int N, int OddOrNot)
{
	for (int i = OddOrNot; i <= N; i += 2)
	{
		cout << i << "\n";
	}
}

int main()
{
	int N;
	cout << "Enter yout number:";
	cin >> N;

	cout << "Even numbers are: \n";
	FindOddOrEvenNumbers(N, 2);

	cout << "Odd Numbers are: \n";
	FindOddOrEvenNumbers(N, 1);
}