//
//  41A.cpp
//  Codeforces
//
//  Created by Tico on 3/17/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main ()
{
    string s, t;
    
    cin >> s >> t;
    
    reverse(t.begin(), t.end());
    
    !s.compare(t) ? cout << "YES" : cout << "NO";
    
    return 0;
}
