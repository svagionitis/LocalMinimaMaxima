#pragma once

#include <functional>
#include <ostream>
#include <sstream>
#include <vector>

namespace Extrema
{

struct Extrema_t
{
    size_t index;
    float value;

    inline bool operator==(const Extrema_t &rhs) const
    {
        return std::tie(index, value) == std::tie(rhs.index, rhs.value);
    }

    friend std::ostream &operator<<(std::ostream &os, const Extrema_t &extrema)
    {
        // See https://stackoverflow.com/questions/2273330/restore-the-state-of-stdcout-after-manipulating-it/43771309#43771309
        std::ios::fmtflags osFlags(os.flags());

        os << "index: " << extrema.index
           << " value: " << extrema.value;

        os.flags(osFlags);

        return os;
    }

    std::string toString() const
    {
        std::stringstream ss;
        ss << (*this);
        return ss.str();
    }
};

class LocalMinimaMaxima
{
public:
    std::vector<float> dataIn;

    std::vector<Extrema_t> algo1(const std::vector<float>& data);
    std::vector<Extrema_t> algo2(const std::vector<float>& data);
    std::vector<Extrema_t> algo3(const std::vector<float>& data);

    std::vector<Extrema_t> CalculateLocalMinima(const std::vector<float>& dataIn,
                                                std::function<std::vector<Extrema_t>(const std::vector<float>&)> algorithm);
    std::vector<Extrema_t> CalculateLocalMixima(const std::vector<float>& dataIn,
                                                std::function<std::vector<Extrema_t>(const std::vector<float>&)> algorithm);
    std::vector<Extrema_t> CalculateLocalMinimaMixima(const std::vector<float>& dataIn,
                                                      std::function<std::vector<Extrema_t>(const std::vector<float>&)> algorithm);
private:
};

}
