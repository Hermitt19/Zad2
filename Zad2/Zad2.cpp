//#include <iostream>
//using namespace std;
//
//void FindOddOrEvenNumbers(int N, int OddOrNot)
//{
//	for (int i = OddOrNot; i <= N; i += 2)
//	{
//		cout << i << "\n";
//	}
//}
//
//int main()
//{
//	int N;
//	cout << "Enter yout number:";
//	cin >> N;
//
//	cout << "Even numbers are: \n";
//	FindOddOrEvenNumbers(N, 2);
//
//	cout << "Odd Numbers are: \n";
//	FindOddOrEvenNumbers(N, 1);
//}




#include <iostream> 
#include <time.h>

using namespace std;

int main()
{
    const int N = 5;
    int array[N][N]{};


    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            array[i][j] = i + j;
        }
    }


    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << '\n';
    }
    time_t t = time(NULL);
    struct tm buf;
    localtime_s(&buf, &t);
    int day = buf.tm_mday;





    int sum = 0;
    for (int j = 0; j < N; ++j)
    {
        sum += array[day % N][j];
    }
    cout << "SUM: " << sum << '\n';

    return 0;
}