//
//  443A.cpp
//  Codeforces
//
//  Created by Tico on 3/17/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <set>

using namespace std;

int main ()
{
    char c;
    set<char> s;
    
    while (cin >> c) {
        if (c != ',' && c != '{' && c != '}')
            s.insert(c);
    }
    
    cout << s.size() << endl;
}
