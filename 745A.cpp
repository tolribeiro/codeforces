//
//  745A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/24/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>

using namespace std;

void shiftStr(string& s)
{
    int b = s[s.length()-1];
    for (int i = (int)s.length()-1; i > 0; --i) {
        s[i] = s[i-1];
    }
    s[0] = b;
}

int main ()
{
    int count = 0;
    string s;
    
    cin >> s;
    count++;
    string str = s;
    shiftStr(str);
    
    if (!(s == str || s.length() == 1)) {
        count++;
        shiftStr(str);
        while (str != s) {
            count++;
            shiftStr(str);
        }
    }
    
    cout << count << endl;
    
    return 0;
}
