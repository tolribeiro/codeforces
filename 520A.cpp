//
//  520A.cpp
//  Codeforces
//
//  Created by Tico on 3/17/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main ()
{
    int start = 'a', end = 'z';
    unordered_map<int, int> h;
    string str;
    bool found = false;
    int number;
    
    cin >> number;
    cin >> str;
    
    for (int i = start; i <= end; ++i) {
        h[i] = 0;
    }
    
    for (int i = 0; i < str.length(); ++i) {
        h[tolower(str[i])]++;
    }
    
    for (auto &j : h) {
        if (j.second == 0) {
            cout << "NO\n";
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "YES\n";
    }
    
    return 0;
}
