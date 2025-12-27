#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::cout << "vector: ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << "\n";

    try {
        std::vector<int>::iterator it = easyfind(v, 20);
        std::cout << "found in vector: " << *it << "\n";
    } catch (const std::exception&) {
        std::cout << "not found in vector\n";
    }

    try {
        std::vector<int>::iterator it = easyfind(v, 99);
        std::cout << "found in vector: " << *it << "\n";
    } catch (const std::exception&) {
        std::cout << "not found in vector\n";
    }

    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    std::cout << "list: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";
    std::cout << "\n";

    try {
        std::list<int>::iterator it = easyfind(lst, 2);
        std::cout << "found in list: " << *it << "\n";
    } catch (const std::exception&) {
        std::cout << "not found in list\n";
    }

    return 0;
}
