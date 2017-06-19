//
//  271A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/19/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>

using namespace std;

bool allUnique(string& s)
{
    bool check[256] = {false};
    int i=0;
    while (s[i] != '\0')
    {
        if (check[(int) s[i]])
            return false;
        else
        {
            check[(int) s[i]] = true;
            i++;
        }
    }
    return true;
}

int beautifulYear(int y)
{
    y += 1;
    string s = to_string(y);
    
    while (!allUnique(s)) {
        y = stoi(s)+1;
        s = to_string(y);
    }
    
    return y;
}


int main()
{
    int y;
    
    cin >> y;
    
    cout << beautifulYear(y);
    
    return 0;
}
