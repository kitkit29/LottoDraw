#if defined(_WIN32)
#define _CRT_RAND_S
#include <cstdlib>
#elif defined(__linux__)
#include <cstdio>
#endif

#include "drawmachine.h"
#include <vector>
#include <algorithm>

std::ranlux24 DrawMachine::m_gen = std::ranlux24();

DrawMachine::DrawMachine(int draws, int max)
    : m_draws(draws), m_min(1), m_max(max)
{
    initialize();
}

DrawMachine::DrawMachine(int draws, int min, int max)
    : m_draws(draws), m_min(min), m_max(max)
{
    initialize();
}

DrawMachine::~DrawMachine()
{
    delete m_dist;
}

std::vector<int> DrawMachine::DrawNumbers()
{
    drawnNums.clear();

    for(int i = 0; i < m_draws; i++)
    {
        std::sort(drawnNums.begin(), drawnNums.end());
        int num = m_dist->operator ()(m_gen);
        if (!std::binary_search(drawnNums.begin(), drawnNums.end(), num))
            drawnNums.push_back(num);
        else
        {
            if (!m_repeating)
                i--;
        }
    }

    return drawnNums;
}

void DrawMachine::initialize()
{
    m_dist = new std::uniform_int_distribution<int>(m_min, m_max);
    unsigned seed;

#if defined(_WIN32)
    rand_s(&seed);
#elif defined(__linux__)
    FILE *rndFile;
    rndFile = fopen("/dev/urandom", "r");
    fread(&seed, sizeof(unsigned), 1, rndFile);
    fclose(rndFile);
#endif
    m_gen.seed(seed);
}

void DrawMachine::setRepeating(bool val)
{
    m_repeating = val;
}
