/**
 * Input Format:
 * You will be given two positive integers,  and  (), separated by a newline.
 * Output Format:
 * For each integer  in the interval  :
 *  If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
 * Else if n > 9 and it is an even number, then print "even".
 * Else if n > 9 and it is an odd number, then print "odd".
 *
 */

#include <iostream>

using namespace std;

int main () {
    
    int a, b = 0;
    const char * numbers[] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };
        
    const char * parity[] = {
        "even",
        "odd"
    };
    
    cin >> a >> b;
    
    for ( int i = a; i <= b; i++ ) {
        
        try{
            
            if ( i > 9 ) {
                
                throw i;
            }
            cout << numbers[i-1] << endl;

        }catch ( int i ) {
            
            cout << parity[(i%2)] << endl;
        }
    }
    return 0;
}