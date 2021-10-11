/*Дана последовательность натуральных чисел {Aj}j=1...n 
(n<=10000). Удалить из последовательности числа, сумма 
цифр которых кратна шести. Среди оставшихся продублировать 
числа, начинающиеся цифрой 1.

*/
#include <iostream>
#include <fstream>
#include "func.h"
#define N 20000
#define M 10000

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
