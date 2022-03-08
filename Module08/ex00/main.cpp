#include "./easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> a;

	a.push_back(564);
	a.push_back(6465);
	a.push_back(34534);
	a.push_back(245);
	a.push_back(102);
	a.push_back(222);

    try
    {
        easyfind(a, 130);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}