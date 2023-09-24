#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int num1 = (rand() % 6) + 1; // I do the "% 6", because I want to create a six-sided dice.
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
    
    return 0;
}