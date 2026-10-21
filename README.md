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
4. Explanations

1. BMI Formula and Height Squaring:
The 703.0 turns standard measurements (pounds and inches) into a proper BMI number. To square the height, we just multiply height by height. We do not use the ^ symbol because in C++ that symbol does a math trick on computer bits, not exponents.

2. Boundary Conditions (18.5 and 25.0):
We check if the BMI is less than 18.5 first. If it is not, the computer moves to the next line: checking if it is less than or equal to 25.0. This automatically catches everything from 18.5 through 25.0 for optimal weight. Anything higher goes straight to overweight.

3. Early Input Checking:
We check the user's numbers right away to stop bad math before it happens. If someone enters 0 for height, calculating BMI would mean dividing by zero, which crashes the program.

4. Unrounded Classification vs Rounded Display:
We check the category using the raw, exact BMI number before rounding it for the screen. If a BMI is 25.004, it is technically overweight. If we rounded it to 25.00 first, the computer would think it is optimal weight, which is wrong.

5. strcmp vs ==:
Using == on words checks where the word is stored in the computer memory instead of reading the letters. The strcmp function actually reads the word letter by letter and gives back 0 when the words match completely.

6. Order Independence and Same Colors:
If both inputs are identical, the program just outputs that same color. For different colors, we check both ways using OR. For example, we check if the user typed red then blue, OR if they typed blue then red, so either order gives purple.

7. Invalid Color Checking:
We set up simple checks to see if the first input is valid and if the second input is valid. If either color is wrong, the program prints an error message and stops right away.

8. Constants and Result Variables:
Using named storage for numbers stops us from using random "magic numbers" in our code. It keeps the code clean, easy to read, and prevents accidental buffer mistakes.
