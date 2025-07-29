#include <iostream>

int main(){

    //FUNDAMENTAL DATA TYPES
    int num = 23; //usually 4 bytes
    short int num2 = 3;
    long num3 = 41;
    long long  num4 = 15124;

    float float1 = 3.14f; //4 bytes
    double double1 = 3.1415926535; //8 bytes

    char letter = 'A';

    bool boolean1 = true;

    //DERIVED DATA TYPES

    //arrays
    int numbers[5] = {1, 2, 3, 4, 5};

    //pointers: store de memory address of a variable
    int nump = 42;
    int* pNump = &num;

    //References:
    int num5 = 42;
    int& num5Ref = num5;

    //USER DEFINED DATA TYPES

    //structures (struct)

    struct Person {
        std::string name;
        int age;
        float height;
    };

    Person p1 = {"John Doe", 30, 5.9};

    //classes (class)

    class Personclass {
        public:
            std::string name;
            int age;
        
        void printInfo() {
            std::cout << "Name: " << name << ", Age: " << age << '\n';
        };
    };

    Personclass p2;
    p2.name = "John Doe";
    p2.age = 30;

    //These errors are because this code is being used globally, something not allowed in C++.


    //Unions
    union Data {
        int num;
        char letter;
        float decimal;
    };

    Data myData;
    myData.num = 42;
    
}
