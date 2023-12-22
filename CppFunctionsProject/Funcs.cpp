#include <iostream>

void PrintStars(char symbol, int length);

int modul(int number)
{
    PrintStars('_', 20);

    if (number < 0)
        number = -number;

    return number;
}

void PrintStars(char symbol, int length)
{
    for (int i = 0; i < length; i++)
        std::cout << symbol;
    std::cout << "\n";
}

void Func(int n)
{
    PrintStars('_', 20);
    n = 200;
}