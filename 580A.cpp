#include <iostream>
#include <vector>

using namespace std;

//80

int main(int argc, const char * argv[])
{
    long n, a, u = -1;
    int c = 0, b = -1;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a >= u) {
            c++;
        } else {
            if (c > b) {
                b = c;
            }
            c = 1;
        }
        u = a;
    }
    
    if (c > b) b = c;
    
    cout << b;
    
    return 0;
}
