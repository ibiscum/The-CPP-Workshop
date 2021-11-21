// Vector example.
#include <iostream>
#include <vector>

std::vector<int> myVector;

void PrintVector()
{
	for (int i: myVector)
	{
		std::cout << i;
	}
	std::cout << "\n\n";
}

int main()
{
	PrintVector();
}
