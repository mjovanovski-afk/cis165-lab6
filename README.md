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

Program 2: Color Mixer (color_mixer.cpp)

Inputs: first_color (char array size 20), second_color (char array size 20).

Validation Check: Compare each input against "red", "blue", and "yellow" using strcmp. If either input is invalid, display an error message and exit.

Mixing Rules:

Same primary color: Output that color.

Red + Blue (any order): purple

Red + Yellow (any order): orange

Blue + Yellow (any order): green
