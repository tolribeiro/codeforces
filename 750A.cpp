//
//  750A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/22/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>

using namespace std;

int main ()
{
    int n, k;
    
    cin >> n >> k;
    
    int i;
    for (i = 1; i <= n; ++i) {
        k += 5 * i;
        if (k > 240) {
            break;
        }
    }
    cout << i-1 << endl;
    
}
