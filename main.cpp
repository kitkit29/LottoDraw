#include <algorithm>
#include <iostream>
#include "_6_45.h"
#include "_6_42.h"
#include "_6_49.h"
#include "_6_55.h"
#include "_6digit.h"
#include "_4digit.h"
#include "_3digit.h"
#include "_2digit.h"

using namespace std;

void printnum(int i)
{
    cout << i << " ";
}

int main()
{
    _6_45 mach45;
    auto drawNums = mach45.DrawNumbers();
    cout << "6/42: ";
    for_each(drawNums.begin(), drawNums.end(), printnum);
    cout << endl;

    _6_42 mach42;
    drawNums = mach42.DrawNumbers();
    cout << "6/45: ";
    for_each(drawNums.begin(), drawNums.end(), printnum);
    printf("\n");

    _6_49 mach49;
    drawNums = mach49.DrawNumbers();
    cout << "6/49: ";
    for_each(drawNums.begin(), drawNums.end(), printnum);
    printf("\n");

    _6_55 mach55;
    drawNums = mach55.DrawNumbers();
    cout << "6/55: ";
    for_each(drawNums.begin(), drawNums.end(), printnum);
    printf("\n");

    _6digit mach6;
    drawNums = mach6.DrawNumbers();
    cout << "6 Digit: ";
    for_each(drawNums.begin(), drawNums.end(), printnum);
    printf("\n");

    _4digit mach4;
    drawNums = mach4.DrawNumbers();
    cout << "4 Digit: ";
    for_each(drawNums.begin(), drawNums.end(), printnum);
    printf("\n");

    _3digit mach3;
    drawNums = mach3.DrawNumbers();
    cout << "3 Digit: ";
    for_each(drawNums.begin(), drawNums.end(), printnum);
    printf("\n");

    _2digit mach2;
    drawNums = mach2.DrawNumbers();
    cout << "2 Digit: ";
    for_each(drawNums.begin(), drawNums.end(), printnum);
    printf("\n");

    return 0;
}

