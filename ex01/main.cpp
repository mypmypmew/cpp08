#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

// int main()
// {
//     std::cout << "---- subject example ----\n";
//     Span sp(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);

//     std::cout << sp.shortestSpan() << "\n"; // 2
//     std::cout << sp.longestSpan() << "\n";  // 14

//     std::cout << "\n---- big test (10k) ----\n";
//     Span big(10000);

//     std::srand(static_cast<unsigned int>(std::time(0)));

//     std::vector<int> tmp;
//     tmp.reserve(10000);
//     for (int i = 0; i < 10000; ++i)
//         tmp.push_back(std::rand());

//     // bonus range add
//     big.addNumber(tmp.begin(), tmp.end());

//     std::cout << "shortest: " << big.shortestSpan() << "\n";
//     std::cout << "longest:  " << big.longestSpan() << "\n";

//     return 0;
// }

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}
