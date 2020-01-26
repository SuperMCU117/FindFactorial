#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    //std::cout << solution.PrintHelloWorld() << std::endl;
    int inputs = 5;
    if (inputs < 0) std::cout << "input is less than 0, error\n" ;
    else{
        std::cout << solution.Factorial(inputs) << std::endl;
        std::cout << solution.FactorialRecursive(inputs) << std::endl;
        std::cout << "hello world\n";
    }

    return EXIT_SUCCESS;
}