#include <string>
#include <fstream>
#include <iostream>

bool checkErrors(int argc, char const *argv[])
{
    if (argc != 4 || !argv[2][0] || !argv[3][0])
    {
        std::cout << "Invalid arguments or empty S1/S2!" << std::endl;
        return false;
    }
    //TODO:
    std::ifstream read(argv[1]); // read the file
    if (!read.is_open())
    {
        std::cout << "can't open this file!" << std::endl;
        return false;
    }
    if (read.peek() == EOF)
    {
        std::cout << "Empty file!" << std::endl;
        return false;
    }
    return true;
}

bool isFilesOpen(std::fstream &inputFile, std::fstream &outputFile, const char *filename)
{
    inputFile.open(filename, std::ios::in);
    outputFile.open((std::string)filename + ".replace", std::ios::out);
    if (inputFile.is_open() && outputFile.is_open())
        return true;
    return false;
}

int main(int argc, char const *argv[])
{
    if (!checkErrors(argc, argv))
        return 1;
    std::fstream inputFile;
    std::fstream outputFile;
    std::string line;
    std::string s1 = argv[2];
    size_t pos;

    if (isFilesOpen(inputFile, outputFile, argv[1]))
    {
        while (getline(inputFile, line))
        {
            pos = 0;
            while ((pos = line.find(argv[2], pos)) != std::string::npos)
            {
                line.erase(pos, s1.length());
                line.insert(pos, argv[3]);
                pos += s1.length();
            }
            outputFile << line << std::endl;
        }
        outputFile.close();
        inputFile.close();
    }
    return 0;
}
