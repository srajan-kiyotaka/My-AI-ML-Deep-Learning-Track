#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i] ;
    }

    int x, a, b ;

    cin >> x >> a >> b;

    v.erase(v.begin() + x - 1);

    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;

}