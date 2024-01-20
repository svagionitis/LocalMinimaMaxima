#include "LocalMinimaMaxima.h"
#include "UtilsPrint.h"

#include <iostream>
#include <ostream>

namespace Extrema
{
std::vector<Extrema_t> LocalMinimaMaxima::algo1(const std::vector<float>& data)
{
    // Initializiing candidate maxima and minima with the first element.
    Extrema_t candidateMaxima = {0, data[0]};
    Extrema_t candidateMinima = {0, data[0]};
    std::vector<Extrema_t> localMaxima = {};
    std::vector<Extrema_t> localMinima = {};

    for (size_t i = 0; i < data.size(); ++i)
    {
        if (i != 0)
        {
            // If the current value is greater than the previous, then this is a candidate maxima
            if (data[i] > data[i - 1])
            {
                candidateMaxima.index = i;
                candidateMaxima.value = data[i];
                std::cout << "candidateMaxima: " << candidateMaxima << std::endl;
            }
            // If the current value is less than the previous, then this is a candidate minima
            else if (data[i] < data[i - 1])
            {
                candidateMinima.index = i;
                candidateMinima.value = data[i];
                std::cout << "candidateMinima: " << candidateMinima << std::endl;
            }
            // If the current value is equal to the previous, it is both a maxima and a minima
            else
            {
                candidateMaxima.index = i;
                candidateMaxima.value = data[i];
                std::cout << "candidateMaxima: " << candidateMaxima << std::endl;
                candidateMinima.index = i;
                candidateMinima.value = data[i];
                std::cout << "candidateMinima: " << candidateMinima << std::endl;
            }

            // If the candidate maxima is greater than the current value and its index is the previous,
            // add it to local maxima or
            // if the candidate maxima is the last element, add it
            if ((candidateMaxima.value > data[i] && candidateMaxima.index == i - 1)
                || (candidateMaxima.value == data[i] && candidateMaxima.index == data.size() - 1))
            {
                localMaxima.push_back(candidateMaxima);

                Utils::UtilsPrint::PrintVector("lMx", localMaxima);
            }

            // If the candidate minima is less than the current value and its index is the previous,
            // add it to local minima or
            // if the candidate minima is the last element, add it
            if ((candidateMinima.value < data[i] && candidateMinima.index == i - 1)
                || (candidateMinima.value == data[i] && candidateMinima.index == data.size() - 1))
            {
                localMinima.push_back(candidateMinima);

                Utils::UtilsPrint::PrintVector("lMn", localMinima);
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
