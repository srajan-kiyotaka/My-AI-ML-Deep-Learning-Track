#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

vector<int> parseInts(string str) {

    stringstream ss(str);   

    vector<int> result;

    char ch;

    int tmp;
    
    while(ss >> tmp) {   
    
        result.push_back(tmp);
    
        ss >> ch;  
    
    }
    
    return result;
}

int main()
{
    string str ;

    getline(cin, str);

    vector<int> v = parseInts(str) ;
 
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}