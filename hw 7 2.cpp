#include <iostream>

void printPower(int value, int power)
{
    int result = 1;
    for (int i = 0; i < power; ++i)
    {
        result *= value;
    }
    std::cout << value << " to a degree " << power << " = " << result << std::endl;
}

int main(int argc, char** argv)
{
    printPower(5, 2);
    printPower(3, 3);
    printPower(4, 4);
    return EXIT_SUCCESS;
}

