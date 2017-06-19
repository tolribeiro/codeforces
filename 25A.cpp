//
//  25A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/19/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int r = 0, n = 0, e = 0, o = 0, c = 0, countEven = 0, countOdd = 0;
    vector<int> v;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> c;
        v.emplace_back(c);
        if (c % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }
    
    if (countEven > countOdd) {
        e = 1;
    } else {
        o = 1;
    }
    
    for (int i = 0; v.size(); ++i) {
        if (v[i] % 2 == 0) {
            e = 1;
        } else {
            o = 1;
        }
        
        if (e && o) {
            r = i;
            break;
        }
    }
    
    cout << r+1 << endl;
    
    return 0;
}
