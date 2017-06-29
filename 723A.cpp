//
//  723A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/29/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int x1, x2, x3;
    vector<int> v;
    
    cin >> x1;
    v.emplace_back(x1);
    cin >> x2;
    v.emplace_back(x2);
    cin >> x3;
    v.emplace_back(x3);
    sort(v.begin(), v.end());
    
    cout << (v[1]-v[0])+(v[2]-v[1]) << endl;
}
