#include <iostream>
#include <cmath>

using namespace std;

int main(){

    // Array declaration
    // integer array
    int arrayint[] = {1,23,45,67,98};

    // charecter array
    char arraychar[] = {'A','B','j','y','z'};

    // decimal array
    double arrayfloat[] = {1.3, 2.6, 7.8, 9.87, 10.78};

    // boolean array
    bool arraybool[] = {false, true};

    // another way of array declaration
    int luckynum[36];

    int luckynums[23] = {12,34,56,74,81,92,102};

    cout << arrayint[2] << endl;

    cout << arraychar[3] << endl;

    cout << arrayfloat[4] << endl;

    cout << arraybool[1] << endl;

    cout << luckynum[20] << endl;

    luckynum[20] = 345 ;

    cout << luckynum[20] << endl;

    cout << luckynums[6] << endl;

}

