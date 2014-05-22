#ifndef DRAWMACHINE_H
#define DRAWMACHINE_H

#include <random>
#include <vector>

class DrawMachine
{
public:
    virtual ~DrawMachine();
    std::vector<int> DrawNumbers();

protected:
    DrawMachine(int draws, int max);
    DrawMachine(int draws, int min, int max);
    std::vector<int> drawnNums;
    static std::ranlux24 m_gen;
    std::uniform_int_distribution<int> *m_dist;
    void setRepeating(bool val);

private:
    void initialize();
    int m_draws;
    int m_min;
    int m_max;
    bool m_repeating;
};

#endif // DRAWMACHINE_H
