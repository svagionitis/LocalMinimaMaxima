#pragma once

#include <iostream>
#include <string>
#include <vector>

namespace Utils
{
class UtilsPrint
{
public:
    template <typename T>
    static void PrintVector(const std::string& vectorName, const std::vector<T>& vec)
    {
        std::cout << vectorName << ": ";
        for (const auto& elem : vec)
        {
            std::cout << elem << ", ";
        }
        std::cout << std::endl;
    }

private:
    UtilsPrint();
};
}
