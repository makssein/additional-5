#pragma once

#define N 20000
#define M 10000
namespace func{
    void Input(int& n, int mas[N]);
    void Output(int& c, int& s, int mas[N]);
    int multiplicity6(int n, int mas[N], int& c);
    int duplication(int& c, int& s, int count[M], int mas[N]);
}
