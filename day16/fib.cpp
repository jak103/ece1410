#include <iostream>
#include <chrono>

using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}


int fibIter(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        int a = 0;
        int b = 1;
        int result;

        for (int i = 2; i <= n; i++)
        {
            result = a + b;
            a = b;
            b = result;
        }

        return result;
    }
}

int main()
{
    cout << "Fib is cool!" << endl;

    auto start = chrono::high_resolution_clock::now();
    int result1 = fib(40);
    auto end = chrono::high_resolution_clock::now();
    auto duration1 = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Fibonacci of 40 (recursive): " << result1 << " (Time: " << duration1.count() << " ms)" << endl;

    start = chrono::high_resolution_clock::now();
    int result2 = fibIter(40);
    end = chrono::high_resolution_clock::now();
    auto duration2 = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Fibonacci of 40 (iterative): " << result2 << " (Time: " << duration2.count() << " ms)" << endl;

    return 0;
}