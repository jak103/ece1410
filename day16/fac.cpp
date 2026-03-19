#include <iostream>
#include <chrono>


using namespace std;


int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fac(n-1);
    }
}

int facIter(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}


int main()
{
    cout << "Fac is cool!" << endl;

    cout << "9! = " << fac(10) << endl;
    cout << "9! = " << facIter(10) << endl;

    // Timing tests
    long iterations = 10000000;
    int testValue = 17;

    // Time recursive version
    auto start = chrono::high_resolution_clock::now();
    for (long i = 0; i < iterations; i++)
    {
        fac(testValue);
    }
    auto end = chrono::high_resolution_clock::now();
    auto fac_duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

    // Time iterative version
    start = chrono::high_resolution_clock::now();
    for (long i = 0; i < iterations; i++)
    {
        facIter(testValue);
    }
    end = chrono::high_resolution_clock::now();
    auto facIter_duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

    cout << "\nTiming Results (" << iterations << " iterations, n=" << testValue << "):" << endl;
    cout << "Recursive fac():  " << fac_duration.count() << " nanoseconds" << endl;
    cout << "Iterative facIter(): " << facIter_duration.count() << " nanoseconds" << endl;
    
    double fac_avg = fac_duration.count() / (double)iterations;
    double facIter_avg = facIter_duration.count() / (double)iterations;
    
    cout << "\nAverage per call:" << endl;
    cout << "Recursive fac():  " << fac_avg << " ns" << endl;
    cout << "Iterative facIter(): " << facIter_avg << " ns" << endl;
    
    if (fac_duration < facIter_duration)
    {
        double speedup = facIter_duration.count() / (double)fac_duration.count();
        cout << "\nRecursive fac() is faster by " << (speedup - 1.0) * 100 << "%" << endl;
    }
    else
    {
        double speedup = fac_duration.count() / (double)facIter_duration.count();
        cout << "\nIterative facIter() is faster by " << (speedup - 1.0) * 100 << "%" << endl;
    }

    return 0;
}