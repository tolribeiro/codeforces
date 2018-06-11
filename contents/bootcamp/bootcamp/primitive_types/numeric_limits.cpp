//
//  numeric_limits.cpp
//  bootcamp
//
//  Created by Thiago Ribeiro on 6/10/18.
//  Copyright © 2018 Thiago Ribeiro. All rights reserved.
//

#include <iostream>
#include <limits>

using namespace std;

int main () {
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned short>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    
    return 0;
}
