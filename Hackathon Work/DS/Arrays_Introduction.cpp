#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
//#include <algorithm>

using namespace std;

int main(){
    
    int n ;
    
    cin >> n;
    
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i] ;
    }
    
    // cout << v.empty() << endl;

    reverse(v.begin(), v.end());

    for(int i : v){
        cout << i << " " ;
    }
}