//
//  721B.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/23/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int c = 0, k = 0, el = 0, dl = 0, bc = 0, w = 0, w_c = 0;
    string p, ci;
    vector<string> v;
    
    cin >> c >> k;
    
    int cc = c;
    
    while (c--) {
        cin >> ci;
        v.emplace_back(ci);
    }
    
    cin >> p;
    
    for (string str : v) {
        str.length() == p.length() ? el++ : dl++;
    }
    
    el == cc ? bc = 1 : bc = dl;
    
    for (string str : v) {
        if (str != p && w >= k) {
            w_c += 5;
            w = 0;
        }
        if (str != p) {
            w++;
            if (w >= k) {
                w_c += 5;
                w = 0;
            }
        }
        
    }
    
    cout << bc << " " << w_c+el << endl;
    
    return 0;
}

