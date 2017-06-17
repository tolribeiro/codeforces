//
//  158B.cpp
//  Codeforces
//
//  Created by Tico on 3/17/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int n, s, taxi = 0;
    vector<int> v;
    
    cin >> n;
    
    while (n--) {
        cin >> s;
        v.push_back(s);
    }
    
    sort(v.begin(), v.end());
    
    int i = (int)v.size()-1;
    int j = 0;
    
    while (j != i) {
        if (v.at(i)+v.at(j) <= 4) {
            v.at(i)+=v.at(j);
            j++;
        } else {
            i--;
            taxi++;
        }
    }
    
    cout << taxi+1 << endl;
    
    return 0;
}
