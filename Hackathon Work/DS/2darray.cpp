#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int numberGrid[3][4] = {
                            {11, 12, 13, 14},
                            {23, 34, 45, 56},
                            {123, 234, 567, 789}
                           };
    cout << numberGrid[1][2] << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << numberGrid[i][j] << " " ;
        }
        cout << "\n" ;
    }
}