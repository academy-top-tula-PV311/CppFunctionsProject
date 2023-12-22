#include <iostream>

void PrintStars(char symbol = '*', int length = 10);
int modul(int number);
void Func(int n);

double Power(double x, int n);

int main()
{
    /*
    int n;
    PrintStars();
    std::cout << "input n: ";
    std::cin >> n;

    PrintStars('-', n);
    std::cout << "Modul n = " << modul(n) << "\n";

    PrintStars(65);

    PrintStars('$');
    PrintStars('&');
    PrintStars('+', 50);
    //PrintStars();
    //int m = modul(n) * 2;
    */
    
    
    std::cout << Power(5, 3);

    return 0;
}

double Power(double x, int n)
{
    double power{ 1 };
    for (int i{}; i < n; i++)
        //power = power * x;
        power *= x;

    return power;
}

