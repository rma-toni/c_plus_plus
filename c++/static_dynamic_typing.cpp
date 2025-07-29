//C++ is a statically typed language, which means that it uses static typing to determine 
//data types and perform type checking during compile time. 

#include <iostream>
#include <any>

int main1() {
    int num = 65;        // 'num' is statically typed as an integer
    double pi = 3.14159; // 'pi' is statically typed as a double
    char c = 'c';        // 'c' is statically typed as a char

    c = num;    // This asssigment would convert num's value to ASCII equivalent character
    num = pi; // This assignment would convert pi's value from double type to int type
    
    std::cout << "The value of num is: " << num << '\n';
    std::cout << "The value of pi is: " << pi << '\n';
    std::cout << "The value of c is: "<< c << '\n';
    return 0;
}

//C++ also provides concepts to have certain level of dynamic typing, which means determining 
//the data types of variables at runtime. WE HAVE TWO WAYS:

//void* Pointers
//A void* pointer is a generic pointer that can point to objects of any data type. They can be used 
//to store a reference to any type of object without knowing the specific type of the object

#include <iostream>

int main2() {
    int x = 42;
    float y = 3.14f;
    std::string z = "Hello, world!";

    void* void_ptr;

    void_ptr = &x;
    std::cout << "int value: " << *(static_cast<int*>(void_ptr)) << '\n';

    void_ptr = &y;
    std::cout << "float value: " << *(static_cast<float*>(void_ptr)) << '\n';

    void_ptr = &z;
    std::cout << "string value: " << *(static_cast<std::string*>(void_ptr)) << '\n';

    return 0;
}

//std::any (C++17)
//C++17 introduced the std::any class which represents a generalized type-safe container for single values of any type.

int main3() {
    std::any any_value;

    any_value = 42;
    std::cout << "int value: " << std::any_cast<int>(any_value) << '\n';

    any_value = 3.14;
    std::cout << "double value: " << std::any_cast<double>(any_value) << '\n';

    any_value = std::string("Hello, world!");
    std::cout << "string value: " << std::any_cast<std::string>(any_value) << '\n';

    return 0;
}