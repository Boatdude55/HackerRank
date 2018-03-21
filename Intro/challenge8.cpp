#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverse ( int * input, int size ) {
    
    for ( int i = (size - 1); i >= 0; i-- ) {
    
            cout << input[i] << " ";

    }
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    int arry_size = 0;

    cin >> arry_size;
    int ex_arry[arry_size];
    
    int i = 0;
    
    while ( i < arry_size && cin >> num ) {
        
        ex_arry[i] = num;
        i++;
    }
    
    reverse(ex_arry, arry_size);
    return 0;

    
}
/*
#include <iostream>

using namespace std;

void reverse ( int * input, int size ) {
    
    int breakCase = size%2 == 0 ? (size/2 - 1) : size/2;
    
    char start, end;
    
    for ( int i = (size - 1); i >= 0; i-- ) {
        
            // if ( i > breakCase ) {
                
            //     cout << "(i,breakeCase): " << i << "," << breakCase << endl;
            //      break;
                
            // }
            
            // start = input[i];
            // end = input[(size-1) - i];
            
            // input[i] = end;
            // input[ (size-1) - i ] = start;
            
            // cout << input[i] << " | start:" << start << " | end:" << end << endl;
            // cout << "Swap result: " << input << endl;
            cout << input[i] << " ";

    }
    
    //cout << input << endl;
    
}

int main () {

    char * input_arry;
    char input;
    int num;
    int arry_size = 0;

    cin >> arry_size;
    input_arry = new char[(2*arry_size)-1];
    int ex_arry[arry_size];
    
    int i = 0;
    
    while ( i < arry_size && cin >> num ) {
        
        ex_arry[i] = num;
        i++;
    }
    // while ( i < (2*arry_size)-1  && cin.get(input) ) {
        
    //     if ( input == 10 ) {
            
    //         continue;
            
    //     }else if ( input == 32 && i < 1 ) {
            
    //         continue;
        
    //     }
    //     input_arry[i] = input;
    //     i++;
    // }
    
    //reverse( input_arry, (2*arry_size)-1 );
    reverse(ex_arry, arry_size);
    return 0;

}
*/