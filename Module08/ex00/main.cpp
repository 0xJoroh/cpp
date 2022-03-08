#include "./easyfind.hpp"
#include <vector>
#include <list>
#include <array>

int main()
{
    std::vector<int> vec;
    std::list<int> lis;
    std::array<int,6> ar = {1, 2, 3, 4, 5, 6};

	lis.push_back(5);
	lis.push_back(6565);
	lis.push_back(44);
	lis.push_back(24);
	lis.push_back(37);
	lis.push_back(13);

    vec.push_back(55);
	vec.push_back(52);
	vec.push_back(18);
	vec.push_back(39);
	vec.push_back(553);
	vec.push_back(42);

    try
    {
        easyfind(ar, 6);
        easyfind(vec, 18);
        easyfind(lis, 37);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}