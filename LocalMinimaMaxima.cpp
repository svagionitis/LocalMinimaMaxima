#include "LocalMinimaMaxima.h"
#include <iostream>
#include <ostream>

namespace Extrema
{
std::vector<Extrema_t> LocalMinimaMaxima::algo1(const std::vector<float>& data)
{
    Extrema_t candidateMaxima = {0, data[0]};
    Extrema_t candidateMinima = {0, data[0]};
    std::vector<Extrema_t> localMaxima = {};
    std::vector<Extrema_t> localMinima = {};

    for (size_t i = 0; i < data.size(); ++i)
    {
        if (i != 0)
        {
            if (data[i] > data[i - 1])
            {
                candidateMaxima.index = i;
                candidateMaxima.value = data[i];
                std::cout << "candidateMaxima: " << candidateMaxima << std::endl;
            }
            else if (data[i] < data[i - 1])
            {
                candidateMinima.index = i;
                candidateMinima.value = data[i];
                std::cout << "candidateMinima: " << candidateMinima << std::endl;
            }
            else
            {
                candidateMaxima.index = i;
                candidateMaxima.value = data[i];
                std::cout << "candidateMaxima: " << candidateMaxima << std::endl;
                candidateMinima.index = i;
                candidateMinima.value = data[i];
                std::cout << "candidateMinima: " << candidateMinima << std::endl;
            }

            if (candidateMaxima.value > data[i]
                && candidateMaxima.index == i - 1)
            {
                localMaxima.push_back(candidateMaxima);
                std::cout << "lMx: ";
                for (auto lMx: localMaxima)
                {
                    std::cout << lMx << ", ";
                }
                std::cout << std::endl;
            }

            if (candidateMinima.value < data[i]
                && candidateMinima.index == i - 1)
            {
                localMinima.push_back(candidateMinima);
                std::cout << "lMn: ";
                for (auto lMn: localMinima)
                {
                    std::cout << lMn << ", ";
                }
                std::cout << std::endl;
            }
        }
    }

    return {};
}

std::vector<Extrema_t> LocalMinimaMaxima::algo2(const std::vector<float>& data)
{
    return {};
}

std::vector<Extrema_t> LocalMinimaMaxima::algo3(const std::vector<float>& data)
{
    return {};
}
}
