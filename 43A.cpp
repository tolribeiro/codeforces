//
//  43A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/22/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <unordered_map>

using namespace std;

int main ()
{
    unordered_map<string, int> m;
    string s, wt;
    int n;
    
    cin >> n;
    
    if (n == 1) {
        cin >> s;
        cout << s << endl;
    } else {
        while (n--) {
            cin >> s;
            m[s]++;
        }
        
        int w = 1;
        
        for (auto r : m) {
            if (r.second > w) {
                w = r.second;
                wt = r.first;
            }
        }
    }
    
    cout << wt << endl;
    
    return 0;
}
