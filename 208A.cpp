//
//  208A.cpp
//  codeforces
//
//  Created by Thiago Ribeiro on 6/16/17.
//  Copyright © 2017 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <string>
#include <regex>

using namespace std;

//79min

int main()
{
    string originalSong;

    cin >> originalSong;
    string overdub = "WUB";
    
    regex r(" +");
    
    size_t found = originalSong.find(overdub);
    
    while (found != string::npos) {
        originalSong.replace(found, overdub.length(), " ");
        found = originalSong.find(overdub);
    }
    
    size_t findSpace = originalSong.find(" ");
    
    if (findSpace != string::npos) {
        originalSong = regex_replace(originalSong, r," ");
    }
    
    if (originalSong[0] == ' ') {
        originalSong = originalSong.substr(1, originalSong.length()-1);
    }
    
    cout << originalSong << endl;
    
    return 0;
}
