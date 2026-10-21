Lab 6: BMI and Color Mixer
Course: CIS 165

Program Plans

Program 1: Body Mass Index (bmi.cpp)

Inputs: weight (pounds, double), height (inches, double).

Validation Check: Verify weight > 0.0 and height > 0.0. If either is less than or equal to 0, display an error message and end the program.

Calculation: bmi = weight * 703.0 / (height * height)

Classification Rules:

bmi < 18.5: Underweight

18.5 <= bmi <= 25.0: Optimal weight

bmi > 25.0: Overweight

Output: Display BMI formatted to 2 decimal places using fixed and setprecision(2) alongside its category.
