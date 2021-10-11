#include <iostream>
#include <fstream>
#include "func.h"
#define N 10000

int main(){
    int n, s;
    s=0;
    int mas[N];
    int count[N];
    int c = 0;

    func::Input(n, mas);
    func::multiplicity6(n, mas, c);
    func::duplication(c, s, count, mas);
    func::Output(c, s, mas);

}
