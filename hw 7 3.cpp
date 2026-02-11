#include <iostream>

int main()
{
	long num;
	std::cout << "Enter number: ";
	std::cin >> num;

	long a = 0;
	long b = 1;

	std::cout << "Fibonicci numbers: ";

	for (long i = 0; i < num; ++i)
	{
		std::cout << a << " ";
		long next = a + b;
		a = b;
		b = next;
	}
	return EXIT_SUCCESS;
}