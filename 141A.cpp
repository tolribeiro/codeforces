//
//  141A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/16/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string guest, host, letters;
    
    cin >> guest >> host >> letters;
    
    if (letters.length() != (host.length()+guest.length())) {
        cout << "NO" << endl;
    } else {
        string r = guest+host;
        sort(r.begin(), r.end());
        sort(letters.begin(), letters.end());
        r == letters ? cout << "YES" << endl : cout << "NO" << endl;
    }
    
    return 0;
}


