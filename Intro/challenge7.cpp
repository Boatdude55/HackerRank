#include <iostream>

using namespace std;

void update ( int * a, int * b ) {
    
    *a = *a + *b;
    *b = *a - (*b*2);
    *b = *b > 0 ? *b : ( ~(*b) + 1 ); 
    
}

int main () {
    
    /**TEST CASE**/
    //3514
    //2122 
    
    int a, int b;
    int *pa = &a, *pb = &b;
    
    update(pa, pb);
    
    cout << "operand:" << *a << ",operand:" << *b << endl;
    
    return 0;

}