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
#include <cmath>
#include <string>

double calculateBMIImperial(double heightInches, double weightPounds)
{
    return weightPounds * 703.0 / std::pow(heightInches, 2);
}

double calculateBMIMetric(double heightMeters, double weightKg)
{
    return weightKg / std::pow(heightMeters, 2);
}

std::string bmiCategory(double bmi)
{
    if (bmi < 18.5)
        return "Underweight";
    if (bmi < 25.0)
        return "Normal weight";
    if (bmi < 30.0)
        return "Overweight";
    return "Obese";
}

int main()
{
    double weight = 0.0;
    double height = 0.0;
    char choice = 0;

    std::cout << "This program will calculate your BMI\n";

    while (choice != 'i' && choice != 'm')
    {
        std::cout << "Please choose either the imperial or metric system (i/m): ";
        std::cin >> choice;
    }

    if (choice == 'i')
    {
        std::cout << "\nPlease enter your height in inches: ";
        std::cin >> height;

        std::cout << "Please enter your weight in pounds: ";
        std::cin >> weight;

        double bmi = calculateBMIImperial(height, weight);
        std::cout << "Your BMI is " << bmi
                  << " (" << bmiCategory(bmi) << ")" << std::endl;
    }
    else
    {
        std::cout << "\nPlease enter your height in meters: ";
        std::cin >> height;

        std::cout << "Please enter your weight in kilograms: ";
        std::cin >> weight;

        double bmi = calculateBMIMetric(height, weight);
        std::cout << "Your BMI is " << bmi
                  << " (" << bmiCategory(bmi) << ")" << std::endl;
    }

    return 0;
}