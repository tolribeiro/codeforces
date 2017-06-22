//
//  344A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/22/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>

using namespace std;

int main ()
{
    int n, count = 1;
    char e;
    string s;
    
    cin >> n >> s;
    e = s[1];
    
    for (int i = 1; i < n; ++i) {
        cin >> s;
        if (s[0] == e) {
            count++;
            e = s[1];
        }
    }
    
    cout << count << endl;
    
    return 0;
}
