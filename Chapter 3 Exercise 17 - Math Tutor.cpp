// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 


#include <iostream>
#include <random>  // For modern random number generation

using namespace std;

int main() {
    
    // This program will create a random math problem, then ask the user to solve it, once the user enters, the program will either say correct or inccorect
    // If incorrect the program will output correct answer.  

    // Constants for range of numbers
    const int MIN = 100;
    const int MAX = 999;

    // Random number engine
    random_device engine;
    uniform_int_distribution<int> dist(MIN, MAX);

    // Generate two random numbers
    int num1 = dist(engine);
    int num2 = dist(engine);

    int userAnswer;
    int correctAnswer = num1 + num2;

    // Display the math problem
    cout << "Solve the following addition problem:\n\n";
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;

    // Get the user's answer
    cout << "Enter your answer: ";
    cin >> userAnswer;

    // Check and display results
    if (userAnswer == correctAnswer) {
        cout << "You are correct! Good Job!" << endl;
    }
    else {
        cout << "Your answer is not correct. The correct answer is: " << correctAnswer << endl;
    }
    return 0;
}
