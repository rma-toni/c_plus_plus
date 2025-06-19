#include <iostream>

int main(){

//------------------Arithmetic Operations------------------------

    //Adition
    int a = 5;
    int b = 6;
    int sum = a + b; // sum is 11
    
    //subtraction
    a = 10;
    b = 6;
    int diff = a - b; // diff is 4

    //multiplication
    a = 3;
    b = 4;
    int product = a * b; // product is 12

    //division
    a = 12;
    b = 4;
    int quotient = a / b; // quotient is 3

    //modulus
    a = 15;
    b = 4;
    int remainder = a % b; // remainder is 3

//------------------Relational Operations------------------------

    //Equal
    bool equal = 5 == 5;
    bool equal2 = 5 == 3;

    //Not Equal to
    bool notequal = 6 != 3;

    //Greater than
    bool greaterThan = 5 > 3;

    //Less than
    bool lessThab = 3 < 5;

    //less or equal, greater or equal
    bool loe = 4 >= 4;
    bool goe = 4 <= 4;

//------------------Logical Operations------------------------

    //AND
    bool andOpr = true && true;

    //OR
    bool orOpr = false || true;

    //NOT
    bool notOpr = !true;
}