// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program will create a random math problem, then ask the user to solve it, once the user enters, the program will either say correct or inccorect
// If incorrect the program will output correct answer. 

#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate two random numbers
    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 25;

    int userAnswer, correctAnswer;

    // Display the math problem
    cout << "Solve the following addition problem:\n\n";
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;

    // Get the user's answer
    cout << "Enter your answer: ";
    cin >> userAnswer;

    // Calculate the correct answer
    correctAnswer = num1 + num2;

    // Check and display results
    if (userAnswer == correctAnswer) {
        cout << "You are correct! Good Job!" << endl;
    }
    else {
        cout << "Your answer is not correct." << endl;
        cout << "The correct answer is: " << correctAnswer << endl;
    }

    return 0;
}