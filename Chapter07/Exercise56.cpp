#include <iostream>
#include <memory>
using namespace std;

shared_ptr<char[]> func(shared_ptr<char[]> str)
{
    if (!str)
    {
        str.reset(new char[1]);
        str[0] = '\0';
    }
    return str;
}

int main()
{
    shared_ptr<char[]> null;
    if (null == nullptr)
        cout << "null is equal to nullptr" << endl;
    auto result1 = func(null);
    if (result1 == nullptr)
        cout << "result1 is equal to nullptr" << endl;
    result1 = func(result1);

    return 0;
}

