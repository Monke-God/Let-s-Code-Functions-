#include <iostream>
using namespace std;
int func(int n)
{
    int x = 1;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            x = 0;
            break;
        }
    }
    return x;
}
int main()
{
    int number;
    cout << "Enter a positive integer : \n";
    cin >> number;
    for (int i = 2; i <= number / 2; ++i)
    {
        if (func(i))
        {
            if (func(number - i))
            {
                cout << number << " = " << i << " + " << number - i << endl;
            }
        }
    }
    return 0;
}
