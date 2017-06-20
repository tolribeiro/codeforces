//
//  136A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/20/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int n = 0, p = 0;
    
    unordered_map<int, int> m;
    vector<int> v;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> p;
        m[p] = i+1;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << m[i+1] << " ";
    }
    
    return 0;
}
