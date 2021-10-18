#include "Karen.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
        return 1;

    Karen obj;
    switch (obj.getLevel(argv[1]))
    {
    case 0:
        obj.complain("DEBUG");
    case 1:
        obj.complain("INFO");
    case 2:
        obj.complain("WARNING");
    case 3:
        obj.complain("ERROR");
        break;
    default:
        cout << "[ Probably complaining about insignificant problems ]" << endl;
        break;
    }
    return 0;
}
