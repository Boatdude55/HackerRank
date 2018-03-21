#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
    //int, long, char, float, and double
    int x = 0;
    long y = 0;
    char z = 0;
    float w = 0;
    double q = 0;
    
    cin >> x >> y >> z >> w >> q;
    cout << x << '\n' << y << '\n' << z << '\n'<< fixed << setprecision(3) << w << '\n' << setprecision(9) << q << endl;
    return 0;
}