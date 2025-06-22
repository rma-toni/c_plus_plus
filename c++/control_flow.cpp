#include <iostream>

int main(){

//-------------------SELECTION-STATEMENTS-------------------
//---------IF---------
    int age = 20;
    if (age >= 18){
        std::cout << "You are an adult." << std::endl;
    }
    return 0;
//-------IF-ELSE---------
    age = 16;
    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a minor." << std::endl;
    }
//-------IF-ELSEIF-ELSE---------
    int score = 75;
    if (score >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade: B" << std::endl;
    } else if (score >= 70) {
        std::cout << "Grade: C" << std::endl;
    } else {
        std::cout << "Grade: D" << std::endl;
    }
//-------SWITCH---------
    int day = 3;
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
    }
//-------------------ITERATION-STATEMENTS-------------------
//-------FOR---------
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteration: " << i << std::endl;
    }
//-------WHILE---------
    int count = 0;
    while (count < 5) {
        std::cout << "Count: " << count << std::endl;
        count++;
    }
//-------DOWHILE---------
    int num = 10;
    do {
        std::cout << "Number: " << num << std::endl;
        num++;
    } while (num < 5);  // Condition is false initially, but the loop runs once.
//-------------------JUMP-STATEMENTS-------------------
//-------BREAK--------- 
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
        std::cout << "Value: " << i << std::endl;
    }
//-------CONTINUE---------
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        std::cout << "Odd number: " << i << std::endl;
    }
//-------GOTO--------- not recommended
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i + j == 3) {
                goto end; // Jump to the end label
            }
            std::cout << "i: " << i << ", j: " << j << std::endl;
        }
    }

    end: // Label
    std::cout << "Finished!" << std::endl;
}