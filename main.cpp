#include "LocalMinimaMaxima.h"

int main(int argc, char *argv[])
{
    Extrema::LocalMinimaMaxima lMinMax;

    lMinMax.algo1({1,2,3,4,3,2,1});

    //lMinMax.algo1({1,2,3,4,5,6,7});

    return 0;
}
