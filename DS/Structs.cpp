#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

struct student
{
    int age, standard;
    string firstName, lastName;
};


int main(){

    struct student std; 

    cin >> std.age;
    cin >> std.firstName;
    cin >> std.lastName;
    cin >> std.standard;

    cout << std.age << " " << std.firstName << " " << std.lastName << " " << std.standard << endl;

    return 0;

}