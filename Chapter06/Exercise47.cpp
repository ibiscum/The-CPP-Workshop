#include <iostream>
using namespace std;

struct noisy
{
    noisy() { cout << "constructing noisy" << endl; }
   ~noisy() { cout << "destroying noisy" << endl; }
};

int main()
{
    auto* p = new noisy;
    delete[] p;
}