//
//  427A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/21/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>

using namespace std;

int main ()
{
    int n = 0, p = 0, c = 0, i = 0;
    
    cin >> n;
    
    while (n--) {
        cin >> i;
        if (i < 0) {
            c++;
            if (p) {
                c--;
                p--;
            }
        } else {
            p += i;
        }
    }
    
    cout << c << endl;
    
    return 0;
}
