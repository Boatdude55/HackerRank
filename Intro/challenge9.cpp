#include <iostream>

using namespace std;
//Sample input
// MIN MIN
// 3 1 5 4
// 5 1 MIN 8 9 3
// 0 1
// 1 3
/** Format
 * n q
 * k N0[k]
 * ....
 * k Nn[k]
 * Q0[MIN = {i , j}
 * ....
 * Qq[MIN] = {i , j}
 * */

#ifndef BASE_TYPE
    #define MIN 2
    #define BASE_TYPE unsigned int
    #define ARRAY_PTR **
#endif

void input_to_array (  BASE_TYPE * input_array , BASE_TYPE size, istream & input_stream ) {
    
    for ( int i = 0 ; i < size ; i++ ) {
        
            input_stream >> input_array[i];

    }
    
};

void print ( BASE_TYPE * array, BASE_TYPE size ) {
    
    cout << "Array content:" << endl;
    
    for ( int i = 0 ; i < size ; i++ ) {
        
        cout << array[i] << endl;
        
    }
    
    cout << endl;
    
}

void resolve_query ( BASE_TYPE ** queries, BASE_TYPE queries_size, BASE_TYPE ** arrays ) {
    
    BASE_TYPE a, ai;
    BASE_TYPE result[queries_size];
    
    for ( int i = 0; i < queries_size; i++ ) {
        
        a = queries[i][0];
        ai = queries[i][1];
        
        result[i] = arrays[a][ai];
        
    }
    
    print ( result, queries_size );
    
}

int main  () {
    
    BASE_TYPE num_arrays, num_queries = 0;
    BASE_TYPE setup_input[MIN];
    BASE_TYPE ARRAY_PTR arrays = NULL;
    BASE_TYPE ARRAY_PTR queries = NULL;
    
    input_to_array( setup_input, MIN, cin );

    num_arrays = setup_input[0]; num_queries = setup_input[1];
    
    arrays = new BASE_TYPE * [ num_arrays ];
    queries = new BASE_TYPE * [ num_queries ];
    
    int k, counter = 0;
    for ( int i = 0 ; i < num_arrays ; i++ ) {

        cin >> k;
        arrays[i] = new BASE_TYPE[k];
        input_to_array( arrays[i] , k , cin );
        
    }

    for ( int i = 0 ; i < num_queries ; i++ ) {

        queries[i] = new BASE_TYPE[MIN];
        input_to_array( queries[i] , MIN , cin );
        
    }
    
    resolve_query ( queries, num_queries, arrays );
    
    return 0;
    
}