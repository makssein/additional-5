#pragma once
#include "func.h"
#include <fstream>
#define N 20000
#define M 10000

std::ifstream in("input.txt");
std::ofstream out("output.txt");
namespace func{
    void Input(int& n, int mas[N]){
        in >> n;
        for(int i = 0; i<n; i++)
            in >> mas[i];
    }
    void Output(int& c, int& s, int mas[N]){
        for(int i = 0; i<c+s; i++)
            out << mas[i] << " ";
    }
    int multiplicity6(int n, int mas[N], int& c){
        int a, b;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            a = mas[i];
            while (a > 0) {
                b = a % 10;
                sum += b;
                a /= 10;
            }
            if (sum % 6 != 0) {
                mas[c] = mas[i];
                c++;
            }
            sum = 0;
        }
    }
    int duplication(int& c, int& s, int count[M], int mas[N]){
        int num;
        for(int i = 0; i<c; i++){
            num = mas[i];
            while(num>9){
                num/=10;
            }
            if(num == 1) {
                count[s] = i+s;
                s++;
            }
        }
        for(int i = 0; i<s;i++){
            for(int j = c+1;j>=count[i];j--){
                mas[j+1] = mas[j];
            }
        }
    }
}
