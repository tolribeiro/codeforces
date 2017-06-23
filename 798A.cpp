//
//  798A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/23/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>

using namespace std;

bool verifyPalindrome(const string& s)
{
    int i = 0, j = (int)s.length()-1, dif = 0, it;
    
    it = (j+1)/2;
    
    while (it--) {
        if (s[i] != s[j]){
            dif++;
        }
        --j;
        ++i;
    }
    
    if (dif == 1 || (dif == 0 && s.length() % 2 != 0)) {
        return true;
    } else {
        return false;
    }
}


int main ()
{
    string s;
    
    cin >> s;
    
    verifyPalindrome(s) ? cout << "YES" << endl : cout << "NO" << endl;
    
    return 0;
}
