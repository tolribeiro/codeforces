//
//  499B.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/17/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n = 0, m = 0;
    string a, b, c;
    unordered_map<string, string> map;
    
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        a.length() > b.length() ? map[a] = b : map[b] = a;
    }
    
    while (n--) {
        cin >> c;
        if (map.find(c) == map.end()) {
            cout << c << " ";
        } else {
            cout << map[c] << " ";
        }
    }
    
    return 0;
}
