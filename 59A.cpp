//
//  59A.cpp
//  Codeforces
//
//  Created by Tico on 3/17/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>

using namespace std;

int main ()
{
    string str;
    int numberOfUpper = 0, numberOfLower = 0;
    vector<int> indexOfLettersUpper, indexOfLettersLower;
    
    cin >> str;
    
    for (int i = 0 ; i < str.length(); ++i) {
        if(isupper(str[i])) {
            ++numberOfUpper;
            indexOfLettersUpper.emplace_back(i);
        } else {
            ++numberOfLower;
            indexOfLettersLower.emplace_back(i);
        }
    }
    
    if (numberOfUpper <= numberOfLower) {
        for(int &i : indexOfLettersUpper) {
            str[i] = tolower(str[i]);
        }
    } else {
        for(int &i : indexOfLettersLower) {
            str[i] = toupper(str[i]);
        }
    }
    
    cout << str;
    
    return 0;
}
