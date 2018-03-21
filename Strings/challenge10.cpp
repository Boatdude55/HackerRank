#include <iostream>
#include <string>

#ifndef MIN
    #define MIN 2
#endif
using namespace std;
/**
 * Input Format:
 * You are given two strings, and , separated by a new line.
 * Each string will consist of lower case Latin characters ('a'-'z').
 * 
 * Output Format:
 * In the first line print two space-separated integers, representing the length of a and b respectively.
 * In the second line print the string produced by concatenating a and b (a + b).
 * In the third line print two strings separated by a space, a and b. a and b are the same as a and b,
 * respectively, except that their first characters are swapped.
**/
void print_length ( string * x ) {
    
    for ( int i = 0; i < MIN; i++ ) {
        
        cout << x[i].size() << " ";
        
    }
    
    cout << endl;
}

void print_sum ( string * x ) {
    
    string sum;
    
    for ( int i = 0; i < MIN; i++ ) {
        
        sum += x[i];
        
    }
    
    cout << sum << endl;
}

void print ( string * x ) {
    
    for ( int i = 0; i < MIN; i++ ) {
        
        cout << x[i] << " ";
        
    }
    
    cout << endl;
    
}
void swap ( string * x, int index = 0 ) {
    
    char temp;
    
    temp = x[0][index];
    x[0][index] = x[1][index];
    x[1][index] = temp;
    
    print(x);
    
}
int main() {
   
   string input[MIN];
   int i = 0;
   
   while( i < MIN ){
       
       cin >> input[i];
       i++;
   }
    
    print_length( input );
    print_sum( input );
    swap( input );
    
    return 0;
}