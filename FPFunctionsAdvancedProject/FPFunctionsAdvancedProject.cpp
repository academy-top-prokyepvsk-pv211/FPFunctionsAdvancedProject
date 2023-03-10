#include <iostream>

using namespace std;

unsigned long long Factorial(int n);

double PowerReq(double x, int n);

unsigned long long FibonachiReq(int n);
unsigned long long FibonachiLoop(int n);

unsigned long long Hanoy(int n);

void BinaryNumber(int n);


int main()
{
    //cout << FibonachiLoop(100) << "\n";
    //cout << FibonachiReq(100) << "\n";
    //cout << Hanoy(64) / 60 / 60 / 24 / 365 << "\n";
    BinaryNumber(58);
}

unsigned long long Factorial(int n)
{
    if (n == 0)
        return 1;
    return Factorial(n - 1) * n;
}

double PowerReq(double x, int n)
{
    if (n == 0)
        return 1;
    return PowerReq(x, n - 1) * x;
}

unsigned long long FibonachiReq(int n)
{
    static unsigned long long fibArray[100]{};

    if (n == 0 || n == 1)
        return n;

    if(fibArray[n] == 0)
        fibArray[n] = FibonachiReq(n - 1) + FibonachiReq(n - 2);

    return fibArray[n];
}

unsigned long long FibonachiLoop(int n)
{
    unsigned long long f0{ 0 }, f1{ 1 }, fs;
    for (int i = 0; i < n; i++)
    {
        fs = f0 + f1;
        f0 = f1;
        f1 = fs;
    }
    return f0;
}

unsigned long long Hanoy(int n)
{
    if (n == 0)
        return 0;
    return Hanoy(n - 1) * 2 + 1;
}


void BinaryNumber(int n)
{
    if (n >= 2)
        BinaryNumber(n / 2);
    cout << n % 2;
}
