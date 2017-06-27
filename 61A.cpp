//
//  61A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/26/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    string a, b, c;
    
    cin >> a >> b;
    
    for (int i = 0; i < a.length(); ++i) {
        a[i] != b[i] ? c+='1' : c+='0';
    }
    
    cout << c << endl;
}
