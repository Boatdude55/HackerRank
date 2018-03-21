#include <iostream>

using namespace std;

int main () {
    
    int input = 0;
    const char * defaults[] = {
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
        
    cout << "Enter(int):";
    cin >> input;
    
    if ( input <= 9 ) {
        
        cout << defaults[input-1] << endl;
    
    }else {
        
        cout << "Greater than 9" << endl;
        
    }
    return 0;
}