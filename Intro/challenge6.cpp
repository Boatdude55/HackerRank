#include <iostream>
#define MAX_FOUR 4

using namespace std;

int max_of_four ( int a, int b, int c, int d ) {
    
    int arr[MAX_FOUR] = {a,b,c,d};
    int max = 0;
    
    for ( int i = 0; i < MAX_FOUR; i++ ) {
        
        if ( max < arr[i] ) {
            max = arr[i];
        }
    }
    
    return max;
    
}

int main () {
    
    int w, x, y, z = 0;
    
    cin >> w >> x >> y >> z;
    
    int result = max_of_four( w , x , y , z );
    
    cout << result <<endl;
    return 0;
    
}

