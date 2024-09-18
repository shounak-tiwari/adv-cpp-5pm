#include <iostream>
using namespace std;

void lcm(int num1, int num2)
{
    int max = (num1 > num2) ? num1 : num2;
    while (true)
    {

        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << "LCM : " << max;
            break;
        }

        else
        {
            max++;
        }
    }
}

int main()
{
    int x, y;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of y : ";
    cin >> y;
    lcm(x, y);
}