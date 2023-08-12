#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

class Marks{
    public:
        int score = 0;
};

int main(){

    map<string, Marks> student;

    int n ;

    cin >> n;

    for(int i = 0; i < n; i++){
        
        int q, m;
        string name;

        cin >> q >> name;

        switch(q){
            case 1:
                cin >> m;
                student[name].score += m;
                break;

            case 2:
                student[name].score = 0;
                break;
            
            case 3:
                cout << student[name].score << endl;
                break;

            default:
                break;
        }

    }
}
