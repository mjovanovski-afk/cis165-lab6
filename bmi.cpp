#include <iostream>
#include <iomanip>

int main()
{
    double weight = 0.0;
    double height = 0.0;
    double bmi = 0.0;
    std::cout<<"Enter weight in pounds: ";
    std::cin>>weight;
    
    std::cout<<"Enter height in inches: ";
    std::cin>>height;
    
    if (weight <= 0.0 || height <= 0.0) {
        std::cout<<"ERROR: Height and weight must be positive.\n";
        return 1;
    }
    
    bmi = weight * 703.0 / (height * height);
    
    std::cout << "BMI: "<<std::fixed<<std::setprecision(2)<<bmi<<" - ";    
    
    if (bmi<18.5) { 
        std::cout<<"Underweight\n";
    } else if (bmi<=25.0) {
        std::cout<<"Optimal weight\n";
    } else {
        std::cout<<"Overweight\n";
    }
    return 0;
}