#include <iostream>
#include "MonteCarlo.h"

int main(void)
{
    double pi = estimate_pi();
    std::cout << pi << std::endl;
}
