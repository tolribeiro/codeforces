//
//  main.cpp
//  bootcamp
//
//  Created by Thiago Ribeiro on 5/29/18.
//  Copyright © 2018 Thiago Ribeiro. All rights reserved.
//

#include <iostream>

using namespace std;

short CountBits(unsigned int x) {
    short num_bits = 0;
    while (x) {
        num_bits += x & 1;
        x >>= 1;
    }
    return num_bits;
}

int main(int argc, const char * argv[]) {
    
    CountBits(10);
    
    return 0;
}
