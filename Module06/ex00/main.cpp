#include "./converter.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        cout << "Usage: ./converter <number>" << endl;
        return 1;
    }
    Converter c(argv[1]);

    char s = static_cast<char>(c);
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    (void)s;
    (void)i;
    (void)f;
    (void)d;

    return 0;
}
