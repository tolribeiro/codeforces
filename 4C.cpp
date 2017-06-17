//
//  4C.cpp
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
    unordered_map<string, int> m;
    string user;
    int n;
    
    cin >> n;
    
    while (n--) {
        cin >> user;
        
        if (!m[user]) {
            cout << "OK" << endl;
            m[user]++;
        } else {
            cout << user << m[user] << endl;
            m[user]++;
        }
    }
    
    return 0;
}
