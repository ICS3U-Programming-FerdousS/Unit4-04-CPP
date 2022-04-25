// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: April. 22, 2022
// This program asks the user to enter a number 0-9
// use while to keep asking user if they guessed it wrong.
// Then use break to stop program if user guessed the right number.



#include <iostream>
#include <cmath>
// include string
#include <string>

// import random number generator
#include <random>


int main() {
    // variables for input
    int input_number_int;
    std::string input_number_string;

    // variable for random number genarator
    int someRandomNumber;
    std::random_device rseed;

    // use while loop to keep runing the program
    while (true) {
        try {
            // ask user for a number 0-9
            std::cout << "Guess a number between 0-9: ";
            std::cin >> input_number_string;
            std::cout << std::endl;

            // set random number range
            std::mt19937 rgen(rseed());  // mersenne_twister
            std::uniform_int_distribution<int> idist(0, 9);
            input_number_int = std::stoi(input_number_string);

            // check if the user guessed the right number
            // and break if not keep continue
            someRandomNumber = idist(rgen);
            if (input_number_int  == someRandomNumber) {
                std::cout << "You guessed it right!" << std::endl;
                break;
  } else {
                std::cout << "You guessed it wrong." << std::endl;
                continue;
  }
}
     catch (std::invalid_argument) {
            std::cout <<"Invalid input. Input was not a number." << std::endl;
}
  }
}
