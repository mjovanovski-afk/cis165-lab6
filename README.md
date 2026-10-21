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

HOW TO RUN AND COMPILE

OnlineGDB Steps:

Go to onlinegdb.com and select C++17 from the top right menu.

Paste code into the editor window.

Click the green Run button.

BMI Tests

| Program/test | Inputs | Expected result | Actual result | Match or correction |
| :--- | :--- | :--- | :--- | :--- |
| BMI Test 1 | 100, 70 | 14.35 — Underweight | BMI: 14.35 - Underweight | Match |
| BMI Test 2 | 150, 70 | 21.52 — Optimal weight | BMI: 21.52 - Optimal weight | Match |
| BMI Test 3 | 200, 70 | 28.69 — Overweight | BMI: 28.69 - Overweight | Match |
| BMI Test 4 | 150, 0 | Error: weight and height must be positive. | Error: weight and height must be positive. | Match |
| BMI Test 5 | -150, 70 | Error: weight and height must be positive. | Error: weight and height must be positive. | Match |
| BMI Extra | 129, 60 | 25.19 — Overweight | BMI: 25.19 - Overweight | Match (Checks boundary just over 25.0) |

Why 18.5 and 25.0 belong in Optimal weight:
The instructions define optimal weight as 18.5 through 25.0 including both endpoints. Using "else if (bmi <= 25.0)" right after checking "bmi < 18.5" catches both exact boundary numbers correctly without leaving gaps.

Color Mixer Tests

| Program/test | Inputs | Expected result | Actual result | Match or correction |
| :--- | :--- | :--- | :--- | :--- |
| Color Mixer 1 | red, blue | purple | purple | Match |
| Color Mixer 2 | red, yellow | orange | orange | Match |
| Color Mixer 3 | blue, yellow | green | green | Match |
| Color Mixer 4 | blue, red | purple | purple | Match |
| Color Mixer 5 | red, red | red | red | Match |
| Color Mixer 6 | orange, blue | Error: enter red, blue, or yellow. | Error: enter red, blue, or yellow. | Match |
| Color Mixer 7 | red, orange | Error: enter red, blue, or yellow. | Error: enter red, blue, or yellow. | Match |
| Color Mixer Extra | yellow, yellow | yellow | yellow | Match (Checks identical yellow inputs) |

---
