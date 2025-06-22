#include <iostream>
#include <string>

using namespace std;

void printNote(string note);

void printNote(string note, int number);

int main(){
    printNote("Hola");
    printNote("Hola",13);
    return 0;
}

void printNote(string note){
    cout << note << endl;
}

void printNote(string note, int number){
    cout << note + " : " + to_string(number) << endl;
}