//
//  main.cpp
//  bmi calcc
//
//  Created by John on 2015-09-22.
//  Copyright (c) 2015 John. All rights reserved.
//

//Do the commenting
//Insert new lines into your strings (find out what they are because you are using them)


#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    
    //Initialize 3 variables of type double. Double is a number of high accuracy (compared to integer)
    double BMI, weight, height;
    //stores the address of the variable of character type
    char choice;
 
    std::cout << "This program will calculate your BMI \n" << std::endl;
    //Allowing user to pick their measurement types
    std::cout << "Please choose either the imperial or metric system(i/m):\n\n";
    std::cin >> choice;
    
    // allowing to Make decisions depending on the input
    if(choice == 'i')
    {
        //Asks user for input
        std::cout << "\n Please enter your height in inches ";
        
        //Saves input from user to variable height
        std::cin >> height;
        //Asks user for input
        std::cout << "please enter your weight in pounds: ";
        //Saves input from user to variable height
        std::cin >> weight ;
        //Does Calculation for User
        BMI = weight * 703 / pow(height,2);
        
        
    }
   
    else{
        //Asks user for input
        std::cout << "please enter your height in meters:\n\n ";
        std::cin >> height;
        
        //Asks user for input
        std::cout << "please enter your weight in kilograms:\n\n ";
        std::cin >> weight;
        
        // After entering the weight and height it will calculate the human's BMI
        BMI = weight/pow(height,2);
   
    }
    //Giving the total calculations
    std::cout << "your  BMI is " << BMI << std::endl;
    return 0;

}