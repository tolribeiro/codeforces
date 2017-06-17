//
//  133A.cpp
//  Codeforces
//
//  Created by Tico on 3/17/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    bool found = false;
    cin >> s;
    
    for (const int c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES\n";
            found = true;
            break;
        }
    }
    
    if (!found) cout << "NO\n";
    
    
    return 0;
}
