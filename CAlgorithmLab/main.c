#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

    void calculator_with_switch();
    void maximum_and_minimum_multiple_numbers();
    void maximum_and_minimum_3_numbers();
    void maximum_and_minimum_2_numbers();
    void odd_or_even();
    void efficient_calculation();
    void distance_between_2_points();
    void reversed_number();
    void sum_of_three_digits_2();
    void sum_of_three_digits_1();
    void get_fractional_part();
    void convert_seconds();
    void calculate_travel_time();
    void divisible_or_indivisible();
    void finding_leap_year_gregorian_calendar();
    void finding_next_day();
    void print24HourFormat();
    void average_grade_calculator();
    void quickMoney_or_centDoubling();
    void createNumberPyramid();
    void sumOfDivisibleNumbers();
    void sumOfDivisibleNumbers_2();
    void subtracting_OddDigitsSum_from_evenDigitsSum();
    void sumOfOddNumbersInASequence();
    void factorial();
    void toLowerCase();
    void toUpperCase();
    void digitCharactersToInteger();
    void sumOfDivisors();
    void perfectNumbers();
    void multiplicationTable();
    void isPalindrome();
    void sumOfTwoLargestElementsInArray();
    void howArrayIsSorted();
    void uniqueElementsInArray();
    void duplicateValuesInArray();
    void rotateLeftAGivenArray();
    void rotateRightAGivenArray();
    void sumOfTwoElementsClosestToZero();

    int sumArrayWithoutPointer(int arr[], int size);
    void callingSumArrayWithoutPointer();

    int sumArrayWithPointer(int *pArr, int size);
    void callingSumArrayWithPointer();

    void getStringLength_predefinedString();
    void getStringLength_UserdefinedString();
    void countWords();
    void isStringPalindrome();
    long long int fibonacci_recursiveApproach(int n);
    void fibonacci_recursive();
    void fibonacci_iterative();
    int sumOfDigits_recursiveApproach();
    void sumOfDigits_recursive();

int main()
{
     calculator_with_switch();
     maximum_and_minimum_multiple_numbers();
     maximum_and_minimum_3_numbers();
     maximum_and_minimum_2_numbers();
     odd_or_even();
     efficient_calculation();
     distance_between_2_points();
     reversed_number();
     sum_of_three_digits_2();
     sum_of_three_digits_1();
     get_fractional_part();
     convert_seconds();
     calculate_travel_time();
     divisible_or_indivisible();
     finding_leap_year_gregorian_calendar();
     finding_next_day();
     print24HourFormat();
     average_grade_calculator();
     quickMoney_or_centDoubling();
     createNumberPyramid();
     sumOfDivisibleNumbers();
     sumOfDivisibleNumbers_2();
     subtracting_OddDigitsSum_from_evenDigitsSum();
     sumOfOddNumbersInASequence();
     factorial();
     toLowerCase();
     toUpperCase();
     digitCharactersToInteger();
     sumOfDivisors();
     perfectNumbers();
     multiplicationTable();
     isPalindrome();
     sumOfTwoLargestElementsInArray();
     howArrayIsSorted();
     uniqueElementsInArray();
     duplicateValuesInArray();
     rotateLeftAGivenArray();
     rotateRightAGivenArray();
     sumOfTwoElementsClosestToZero();
     callingSumArrayWithoutPointer();
     callingSumArrayWithPointer();
     getStringLength_predefinedString();
     getStringLength_UserdefinedString();
     countWords();
     isStringPalindrome();
     fibonacci_recursive();
     fibonacci_iterative();
     sumOfDigits_recursive();

     return 0;
}

void calculator_with_switch() {
    int num_1, num_2;
    char sign;

    printf("Enter first number: ");
    while(scanf("%d", &num_1) != 1) {       // Checking if the input is valid
        printf("Invalid input. Please enter an integer: ");
        while(getchar() != '\n');   // Clear input buffer
    }
    printf("Enter second number: ");
    while(scanf("%d", &num_2) != 1) {       // Checking if the input is valid
        printf("Invalid input. Please enter an integer: ");
        while(getchar() != '\n');   // Clear input buffer
    }
    printf("Enter one of the following mathematical operators: \n\t\t + \t - \t * \t / \t ^ \t %% \n");
    while(1) {      // Infinite loop until valid input is received
        if(scanf(" %c", &sign) == 1 && sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '^' || sign == '%') {
            break;      // Exit the loop when a valid operator is entered
        }
        printf("Invalid input. Please enter a valid operator: +, -, *, /, ^, %% \n");
        while(getchar() != '\n');       // Clear the buffer
    }

    int pow = num_2;
    int result = 1;

    switch(sign) {


        case '+':
            printf("%d + %d = %d \n", num_1, num_2, num_1 + num_2);
            break;
        case '-':
            printf("%d - %d = %d \n",num_1, num_2, num_1 - num_2);
            break;
        case '*':
            printf("%d * %d = %d \n",num_1, num_2, num_1 * num_2);
            break;
        case '/':
            if(num_2 == 0)
                printf("Error: Division by zero is not allowed. \n");
            else
                printf("%d / %d = %.2f \n",num_1, num_2, (float)num_1 / num_2);
            break;
        case '^':
            while(pow > 0) {
                result *= num_1;
                pow--;
            }
            printf("%d ^ %d = %d \n", num_1, num_2, result);
            break;
        case '%':
            if(num_2 == 0)
                printf("Error: Modulus by zero is not allowed. \n");
            else
                printf("%d %% %d = %d \n",num_1, num_2, num_1 % num_2);
            break;
        default:
            printf("Invalid operator entered. \n");
            break;
    }
}

void maximum_and_minimum_multiple_numbers() {
    int numbers[] = {1, 5, 0, 29, 60, 44, 51, 32, 100, 22, 55};
    int N = sizeof(numbers) / sizeof(numbers[0]);
    int max = numbers[0], min = numbers[0];

    for (int i = 1; i < N; i++) {
        if (numbers[i] > max) max = numbers[i];
        if (numbers[i] < min) min = numbers[i];
    }

printf("Max is: %d \nMin is: %d \n", max, min);

}

void maximum_and_minimum_3_numbers() {
    float number_1, number_2, number_3;

    printf("Enter the first number: ");
    scanf("%f", &number_1);
    printf("Enter the second number: ");
    scanf("%f", &number_2);
    printf("Enter the third number: ");
    scanf("%f", &number_3);

    // A less efficient and less optimized algorithm using redundant conditions

//    if(number_1 > number_2 && number_1 > number_3) {
//        printf("Max is: %.2f \n", number_1);
//        if(number_2 > number_3)
//            printf("Min is: %.2f \n", number_3);
//        else
//            printf("Min is: %.2f \n", number_2);
//    }
//
//    else if(number_2 > number_1 && number_2 > number_3) {
//        printf("Max is: %.2f \n", number_2);
//        if(number_1 > number_3)
//            printf("Min is: %.2f \n", number_3);
//        else
//            printf("Min is: %.2f \n", number_1);
//    }
//
//    else {
//        printf("Max is: %.2f \n", number_3);
//        if(number_1 > number_2)
//            printf("Min is: %.2f \n", number_2);
//        else
//            printf("Min is: %.2f \n", number_1);
//    }




    // A more efficient and optimized algorithm

//    float max = number_1, min = number_2;
//    if(number_1 < number_2) {
//        max = number_2;
//        min = number_1;
//    }
//    if(number_2 < number_3)
//        max = number_3;
//    if(number_3 < number_1)
//        min = number_3;
//
//    printf("Max is: %.2f \nMin is: %.2f", max, min);




    // Optimizing the above algorithm even more

    float max = number_1, min = number_1;

    if (number_2 > max) max = number_2;
    if (number_3 > max) max = number_3;

    if (number_2 < min) min = number_2;
    if (number_3 < min) min = number_3;

    printf("Max is: %.2f \nMin is: %.2f \n", max, min);
}

void maximum_and_minimum_2_numbers() {
    float number_1, number_2;

    printf("Enter the first number: ");
    scanf("%f", &number_1);
    printf("Enter the second number: ");
    scanf("%f", &number_2);

    if(number_1 > number_2) {
        printf("MAXIMUM = %f \n", number_1);
        printf("MINIMUM = %f \n", number_2);
    }

    else if (number_2 > number_1) {
        printf("MAXIMUM = %.2f \n", number_2);
        printf("MINIMUM = %.2f \n", number_1);
    }

    else
        printf("%.2f = %.2f \n", number_1, number_2);
}

void odd_or_even() {
    int number;

    printf("Enter a number to see if it is odd or even: ");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("%d is an even number. \n", number);
    else
        printf("%d is an odd number. \n", number);
}

void efficient_calculation() {
    int x;
    int x2, x4, x6, x8;

    printf("Enter the number: ");
    scanf("%d", &x);

    x2 = x * x;
    x4 = x2 * x2;
    x6 = x4 * x2;
    x8 = x4 * x4;

    printf("X^2 = %d \nX^4 = %d \nX^6 = %d \nX^8 = %d \n", x2, x4, x6, x8);
}

void distance_between_2_points() {
    // Also called Pythagoras in math

    float x_axis_point1, y_axis_point1, x_axis_point2, y_axis_point2;
    float distance;

    printf("Enter the x-axis and y-axis of first point: ");
    scanf("%f%f", &x_axis_point1, &y_axis_point1);
    printf("Enter the x-axis and y-axis of the second point: ");
    scanf("%f%f", &x_axis_point2, &y_axis_point2);

    distance = sqrt(pow(x_axis_point1 - x_axis_point2, 2) + pow(y_axis_point1 - y_axis_point2, 2));
    printf("The distance between points (%.2f, %.2f) and (%.2f, %.2f) is equal to: %.2f \n", x_axis_point1, y_axis_point1, x_axis_point2, y_axis_point2, distance);
}

void reversed_number() {
    int num_input, num_output, temp;

    printf("Enter a number to get its reverse: ");
    scanf("%d", &num_input);

    while(num_input != 0) {
        temp = num_input % 10;
        num_output = num_output * 10 + temp;
        num_input /= 10;
    }
    printf("Reverse of the input number is: %d \n", num_output);
}

void sum_of_three_digits_2() {
    int digits;
    int units_place, tens_place, hundreds_place;

    printf("Enter a three-digit number to get sum of the digits: ");
    scanf("%d", &digits);

    units_place = digits % 10;
    tens_place = (digits / 10) % 10;
    hundreds_place = digits / 100;

    printf("The sum of the entered digits is: %d \n", units_place + tens_place + hundreds_place);
}

void sum_of_three_digits_1() {
    int digits;
    int units_place, tens_place, hundreds_place;

    printf("Enter a three-digit number to get sum of the digits: ");
    scanf("%d", &digits);

    units_place = digits % 10;

    digits = (digits - units_place) / 10;
    tens_place = digits % 10;

    digits = (digits - tens_place) / 10;
    hundreds_place = digits;

    printf("The sum of the entered digits is: %d \n", units_place + tens_place + hundreds_place);
}

void get_fractional_part() {
    float decimal_number;

    printf("Enter a decimal number to extract the fractional part: ");
    scanf("%f", &decimal_number);
    printf("The whole part is: %d\nThe fractional part is: %.3f \n", (int)decimal_number, decimal_number - (int)decimal_number);

}

void convert_seconds() {
    long long int total_seconds, hour;
    int minute, second, remaining_seconds;

    total_seconds = 100000000000;
    hour = total_seconds / 3600;
    remaining_seconds = total_seconds - (hour * 3600);
    minute = remaining_seconds / 60;
    second = remaining_seconds % 60;

    printf("Hour: %d \n", hour);
    printf("Minute: %d \n", minute);
    printf("second: %d \n", second);
}

void calculate_travel_time() {
    int hours, minutes, seconds, total_seconds, remaining_seconds;
    float distance, speedInHour;

    distance = 590;
    speedInHour = 88;

    hours = distance / speedInHour;
    total_seconds = distance / (speedInHour / 3600);
    remaining_seconds = total_seconds - (hours * 3600);
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;
    //OR
    //seconds = remaining_seconds - (minutes * 60);


    printf("Hours: %d \n", hours);
    printf("Minutes: %d \n", minutes);
    printf("Seconds: %d \n", seconds);

}

void divisible_or_indivisible() {
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    if(num1 == 0 || num2 == 0 || num3 == 0)
        printf("Invalid arithmetic operation (division by 0!).");
    else if(num1 % num2 == 0 || num2 % num1 == 0 && num1 % num3 == 0 || num3 % num1 == 0 && num2 % num3 == 0 || num3 % num2 == 0)
        printf("Divisible \n");
    else
        printf("Indivisible \n");
}

void finding_leap_year_gregorian_calendar() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // A shorter but slightly a harder solution due to the mixed logical operators
//    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//        printf("Leap year \n");
//    else
//        printf("Not a leap year \n");


    // A more readable and logically clear solution
    if(year % 400 == 0)
        printf("Leap year \n");
    else if(year % 100 == 0)
        printf("Not a leap year \n");
    else if(year % 4 == 0)
        printf("Leap year \n");
    else
        printf("Not a leap year \n");

}

void finding_next_day() {
    int year, month, day;
    int leapYear = 0;

    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the day: ");
    scanf("%d", &day);

    if(month == 2)
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        leapYear = 1;

    day++;

    switch(month) {

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(day <= 31)
            break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(day <= 30)
            break;
    case 2:
        if(day <= 29 && leapYear == 1)
            break;
        else if(day <= 28)
            break;
    default:
        day = 1;
        month++;
        if(month > 12) {
            month = 1;
            year++;
        }
        printf("%d-%02d-%02d \n", year, month, day);
    }

}

void print24HourFormat() {
  int totalSeconds, hour, minute, second;

  printf("Enter total seconds: ");
  scanf("%d", &totalSeconds);

  hour = totalSeconds / 3600;
  totalSeconds -= hour * 3600;
  minute = totalSeconds / 60;
  second = totalSeconds % 60;


    // First solution
//  if(hour < 10)
//    printf("0");
//  printf("%d:", hour);
//  if(minute < 10)
//    printf("0");
//  printf("%d:", minute);
//  if(second < 10)
//    printf("0");
//  printf("%d \n", second);


    // A more efficient and optimized solution
  printf("%02d:%02d:%02d\n", hour, minute, second);
}

void average_grade_calculator() {

    float grade, sum = 0;
    float average = 0;
    int counter = 0;

    printf("Enter your grades, or enter (-1) to exit: \n");

    while(1) {
        printf("Course %d: ", counter+1);
        scanf("%f", &grade);

        if(grade == -1)     // Check for the termination condition
            break;

        if(counter < 50) {      // Setting limits to the number of grades
            sum += grade;
            counter++;
            average = sum / counter;
        }
        else {
            printf("You have entered the maximum number of grades (50). \n");
            break;
        }
    }
    printf("You have entered %d grades. \n", counter);
    printf("Final average: %.2f \n", average);
}

void quickMoney_or_centDoubling() {

    int i;
    int quick_money = 1000000;
    float total_amount = 0.01;      // Day #1

    for(i = 2; i <= 30; i++) {      // Skipping the first day by assigning 2 to i
        total_amount*= 2;

        if(total_amount >= quick_money) {
            printf("In %d days you will get %.2f dollars. \n", i, total_amount);
            break;      // Breaking out of the loop when we reach a specific total amount
        }
    }

    for(; i < 30; i++) {        // Continuing rest of the previous loop to get the total amount after 30 days
        total_amount *= 2;
    }
    // Print the final amount after 30 days
    printf("In %d days you will get %.2f dollars. \n", i, total_amount);



    // Second solution using only one loop

//    int thresholdReached = 0;   // Flag to indicate if the threshold has been reached
//    for(i = 1; i <= 30; i++) {
//        if(i > 1) {
//            total_amount *= 2;
//        }
//
//        if(!thresholdReached && total_amount >= quick_money) {
//            printf("In %d days you will get %.2f dollars. \n", i, total_amount);
//            thresholdReached = 1;       // Update the flag to indicate threshold is reached
//        }
//    }
//
//    // Print the final amount after 30 days
//    printf("In %d days you will get %.2f dollars. \n", 30, total_amount);
}

void createNumberPyramid() {
    /*

    int num, rowMaxValue, temp;
    int row, counter, blankSpaces, currentValue = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;    // We don't want to change (num). We'll need it's original value in the code.

    for(row = 1; temp > 0 ; row++) {    // Acquiring the number of rows
        temp -= row;
        if(temp <= 0)
            break;    // Preventing incrementation of (row) in the last iteration
    }

    for(counter = 1; row > 0; row--) {
        rowMaxValue += counter++;    // This will get the last value in a row
        for(blankSpaces = 1; blankSpaces < row; blankSpaces++) {    // Blank spaces in a row
            printf(" ");
            }
        for(; currentValue <= rowMaxValue && currentValue <= num; currentValue++) {    // Making sure we print up to the given number
            printf("%d ", currentValue);
        }
        printf("\n");     // Jump to a new row pyramid_number_pattern
    }

    */

        // A more optimized solution

    int num, row, counter, blankSpaces, currentValue = 1;
    printf("Enter number: ");
    scanf("%d", &num);

    int temp = num, rows = 0;
    while (temp > 0) {
        rows++;
        temp -= rows;
    }

    for (row = 1; row <= rows; row++) {
        for (blankSpaces = 1; blankSpaces <= rows - row; blankSpaces++) {
            printf(" ");
        }

        for (counter = 1; counter <= row && currentValue <= num; counter++) {
            printf("%d ", currentValue++);
        }
        printf("\n");
    }

}

void sumOfDivisibleNumbers() {
    int num, sum;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // An inefficient solution
/*    for(int i = 1; i <= num; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            printf("%d can be divided by both 3 and 5 \n", i);
            sum = sum + i;
        }
    }
    printf("Sum of the divisible numbers: %d \n", sum); */


    // An optimized solution
    for(int i = 15; i <= num; i+=15) {
        printf("%d can be divided by both 3 and 5 \n", i);
        sum = sum + i;
    }
    printf("Sum of the divisible numbers: %d \n", sum);
}

void sumOfDivisibleNumbers_2() {
    int num, sum;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // An inefficient solution

/*    for(int i = 1; i <= num; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            printf("%d can be divided by either 3 or 5 \n", i);
            sum = sum + i;
        }
    }
    printf("Sum of the divisible numbers: %d \n", sum);     */


    // An optimized solution

    for(int i = 3; i <= num; i+=3) {
        printf("%d can be divided by 3 \n", i);
        sum = sum + i;
    }
    printf("\n");
    for(int i = 5; i <= num; i+=5) {
        printf("%d can be divided by 5 \n", i);
        if(i % 3 != 0)
            sum = sum + i;
    }
    printf("\nSum of the divisible numbers: %d \n", sum);
}

void subtracting_OddDigitsSum_from_evenDigitsSum() {
    int num, currentDigit;
    int evenSum = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        currentDigit = num % 10;

        if(currentDigit % 2 == 0) {
            evenSum += currentDigit;
        }
        else {
            oddSum += currentDigit;
        }
        num /= 10;
    }

    printf("Even digits sum(%d) - Odd digits sum(%d) = %d \n", evenSum, oddSum, evenSum-oddSum);
}

void sumOfOddNumbersInASequence() {

    int n;
    int currentValue, oddSum;

    printf("Enter 'n' (The number of values in a sequence): ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        printf("Enter a value: ");
        scanf("%d", &currentValue);

        if(currentValue % 2 == 1) {
            oddSum += currentValue;
        }
    }
    printf("Sum of the odd numbers = %d \n", oddSum);
}

void factorial() {

    int num, result = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num<0) {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    }

    for(int i=1; i<=num; i++) {
        result *= i;
    }

    printf("Factorial(%d): %d \n", num, result);
}

void toLowerCase() {

    char letter;

    printf("Enter an upper case letter to change it to a lower case letter: ");
    scanf("%c", &letter);

    if(letter>='A' && letter<='Z') {
//        letter = 122 - (90 - letter);
        // OR
        letter = letter - 'A' + 'a';
    }
    printf("Lower case letter: %c \n", letter);
}

void toUpperCase() {

    char letter;

    printf("Enter a lower case letter to change it to an upper case letter: ");
    scanf("%c", &letter);

    if(letter>='a' && letter<='z') {
//        letter = 90 - (122 - letter);
        // OR
        letter = letter - 'a' + 'A';
    }
    printf("Upper case letter: %c \n", letter);
}

void digitCharactersToInteger() {

    int digits=0;

/*
        // Solution #1
    char character1, character2, character3;

    printf("Enter three digit characters: ");
    scanf("%c %c %c", &character1, &character2, &character3);

    if((character1>='0' && character1<='9') && (character2>='0' && character2<='9') && (character3>='0' && character3<='9')) {
        digits = character1 - '0';
        digits *= 10;
        digits += character2 - '0';
        digits *= 10;
        digits += character3 - '0';
    }       */

        // Solution #2
    char character1, character2, character3;
    int hundreds, tens, units;

    printf("Enter three digit characters: ");
    scanf("%c %c %c", &character1, &character2, &character3);

    if(character1>='0' && character1<='9') {
        hundreds = (character1 - '0')*100;
    }
    if(character2>='0' && character2<='9') {
        tens = (character2 - '0')*10;
    }
    if(character3>='0' && character3<='9') {
        units = character3 - '0';
    }
    digits = hundreds + tens + units;


    printf("Characters are: '%c', '%c' and '%c' \n", character1, character2, character3);
    printf("The result integer is: %d \n", digits);
}

void sumOfDivisors() {

        // Solution #1: Less optimized
/*    int num, count;

    printf("Enter your number: ");
    scanf("%d", &num);

    int sum = 1+num;

    if(num == 1) {
        printf("Sum = %d \n", 1);
    }
    else {
        for(int i=2; i<=num/2; i++) {
            if(num%i == 0) {
                sum += i;
            }
            count++;
        }
        printf("Number of iterations of the for loop = %d \n", count);
        printf("Sum = %d \n\n", sum);

    }       */



        // Solution #2: More optimized
/*    int num, count;

    printf("Enter your number: ");
    scanf("%d", &num);

    int sum = 1+num;
    int tempNum = num;

    if(num == 1) {
        printf("Sum = %d \n", 1);
    }
    else {
        for(int i=2; i<tempNum; i++) {
            if(num%i == 0) {
                sum += i;
                tempNum = num / i;
                if(tempNum == i)
                    break;
                sum += num/i;
            }
            count++;
        }
        printf("Number of iterations of the for loop = %d \n", count);
        printf("Sum = %d \n\n", sum);

    }       */



        // Solution #3: Optimal
    int i, num, count;

    printf("Enter your number: ");
    scanf("%d", &num);

    int sum = 1+num;

    if(num == 1) {
        printf("Sum = %d \n", 1);
    }
    else {
        for(i=2; i*i<num; i++) {
            if(num%i == 0) {
                sum = sum+i + num/i;
            }
            count++;
        }
        if(i*i == num)
            sum += i;

        printf("Number of iterations of the for loop = %d \n", count);
        printf("Sum = %d \n\n", sum);

    }

}

void perfectNumbers() {

    int i, num, count;
    int sum = 1;

    printf("Enter your number: ");
    scanf("%d", &num);


    for(i=2; i*i<num; i++) {
        if(num%i == 0) {
            sum = sum+i + num/i;
        }
        count++;
    }
    if(i*i == num)
        sum += i;

    if(sum == num)
        printf("%d is a perfect number. \n\n", num);
    else
        printf("%d is not a perfect number \n\n", num);

}

void multiplicationTable() {

    #define ROW_SIZE 11
    #define COLUMN_SIZE 11
    int i, j;
    int myArr[ROW_SIZE][COLUMN_SIZE];


    // A more detailed and descriptive table

    for(i=0; i<ROW_SIZE; i++){      // For-loop for assigning values to the table
        if(i>0)
            myArr[i][0]=i;
        for(j=1; j<COLUMN_SIZE; j++){
            if(i==0){
                myArr[i][j]=j;
                continue;
            }
            myArr[i][j] = myArr[0][j] * myArr[i][0];
        }
    }

    for(i=0; i<ROW_SIZE; i++){      // For-loop for displaying values in the table
        for(j=0; j<COLUMN_SIZE; j++){

            if(i==0){
                if(i==0 && j==0){
                    printf("      ");
                }
                else if(i==0 && (j>0 && j<COLUMN_SIZE)){
                    printf("  %d   ", myArr[i][j]);
                }
                if(j==COLUMN_SIZE-1){
                    printf("\n");
                }
            }

            else if(i>0 && i<10){
                if(j==0){
                    printf("%d    |", myArr[i][j]);
                }
                else{
                    if(myArr[i][j]<10){
                        printf("  %d  |", myArr[i][j]);
                    }
                    else{
                        printf("  %d |", myArr[i][j]);
                    }
                }
            }

            else if(i>=10){
                if(j==0){
                    printf("%d   |", myArr[i][j]);
                }
                else{
                    if(myArr[i][j]<10){
                        printf("  %d  |", myArr[i][j]);
                    }
                    else{
                        printf("  %d |", myArr[i][j]);
                    }
                }
            }

        }
        printf("\n     -------------------------------------------------------------\n");
    }



    // A simple table

    for(i=1; i<ROW_SIZE; i++){      // Filling the array indexes
        for(j=1; j<COLUMN_SIZE; j++){
            myArr[i][j] = i*j;
        }
    }

    for(i=1; i<ROW_SIZE; i++){      // Displaying the array indexes' values
        for(j=1; j<COLUMN_SIZE; j++){
            printf("%4d", myArr[i][j]);
        }
        printf("\n");
    }
}

void isPalindrome() {

    #define SIZE 9

    int i;
    int isPalindrome = 1;
    int palindrome[SIZE] = {1,7,2,3,5,3,2,7,1};

    for(i=0; i<SIZE/2; i++){
        if(palindrome[i] != palindrome[SIZE-1-i]){
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The array is a palindrome. \n");
    else
        printf("The array is not a palindrome. \n");

}

void sumOfTwoLargestElementsInArray() {

    #define SIZE 6

    int myArr[SIZE] = {10,6,1,16,2,10};
    int largestSum = myArr[0] + myArr[1];
    int element1, element2;

    for(int i=1; i<SIZE-1; i++) {
        if(largestSum < myArr[i] + myArr[i+1]) {
            largestSum = myArr[i] + myArr[i+1];
            element1 = myArr[i];
            element2 = myArr[i+1];
        }
    }

    printf("\nThe sum of two largest adjacent elements(%d+%d) = %d \n", element1, element2, largestSum);
}

void howArrayIsSorted() {

    #define SIZE 6

    int arr[SIZE] = {10,12,16,19,20,20};
    int isSorted = 1;

    for(int i=0; i<SIZE-1; i++) {
        if(arr[i] > arr[i+1]) {
            isSorted = -1;
            break;
        }
        if(arr[i] == arr[i+1]) {
            isSorted = 0;
        }
    }

    if(isSorted == 1)
        printf("The array is totally sorted. \n");
    else if(isSorted == 0)
        printf("The array is slightly sorted. \n");
    else if(isSorted == -1)
        printf("The array is not sorted. \n");

}

void uniqueElementsInArray() {

    #define SIZE 13

        // Solution #1:

/*    int i, j;
    int uniqueCounter = 0;
    int arr[SIZE] = {10,12,20,19,20,2,12,13,2,1,1,13,10};

   for(i=0; i<SIZE; i++) {             // Selecting an element
        for(j=0; j<SIZE; j++) {         // Comparing the selected element with other elements in the array
            if(j==SIZE-1 && arr[i] != arr[j]) {         // Specifying the unique element
                uniqueCounter++;
                printf("Unique element %d = arr[%d] = %d \n", uniqueCounter, i, arr[i]);
            }
            if(i==j)                    // We don't want to compare an element with itself
                continue;
            if(arr[i] != arr[j]) {      // We continue comparing if the elements are not same
                continue;
            }
            else if(arr[i] == arr[j]) {         // We break out of the loop if the selected element is not unique
                break;
            }
        }
    }
    printf("\nTotal Number of unique elements = %d \n", uniqueCounter);         */




        // Solution #2: A more readable solution

    int i, j;
    int foundDuplicate = 0;
    int uniqueCounter = 0;
    int arr[SIZE] = {10,12,20,19,20,2,12,13,2,1,1,13,10};

    for(i=0; i<SIZE; i++) {             // Selecting an element
        for(j=0; j<SIZE; j++) {         // Comparing the selected element with other elements in the array
            if(i==j)                    // We don't want to compare an element with itself
                continue;
            if(arr[i] == arr[j]) {      // We break out of the loop if the selected element is not unique
                foundDuplicate = 1;
                break;
            }
        }
        if(foundDuplicate!=1) {
            uniqueCounter++;
            printf("Unique element %d = arr[%d] = %d \n", uniqueCounter, i, arr[i]);
        }
        else
            foundDuplicate = 0;
    }
    printf("\nTotal Number of unique elements = %d \n", uniqueCounter);

}

void duplicateValuesInArray() {

    #define SIZE 22

        // Solution #1

/*    int i, j;
    int duplicateCounter = 0;
    int arr[SIZE] = {10,3,12,20,19,20,2,12,13,10,2,1,1,13,10,10,2,3,3,3,9,9};

    for(i=0; i<SIZE; i++) {             // Selecting an element
        for(j=0; j<SIZE; j++) {         // Comparing the selected element with other elements in the array
            if(i==j)
                continue;
            if(arr[i] == arr[j] && j<i) {       // We break out of the loop if we have already taken into account the duplicate value
                break;
            }
            if(arr[i] == arr[j] && j>i) {       // We take into account the duplicate value for the first time
                duplicateCounter++;
                printf("Duplicate value = %d \n", arr[i]);
                break;
            }
        }
    }

    if(duplicateCounter)
        printf("\nTotal Number of duplicate values = %d \n", duplicateCounter);
    else
        printf("\nNo duplicate values were found. \n");     */



        // Solution #2

    int i, j;
    int foundDuplicate = 0;
    int duplicateCounter = 0;
    int arr[SIZE] = {10,3,12,20,19,20,2,12,13,10,2,1,1,13,10,10,2,3,3,3,9,9};

    for(i=0; i<SIZE; i++) {              // Selecting an element
        foundDuplicate = 0;
        for(j=0; j<i; j++) {             // Comparing the selected element with other elements in the array
            if(arr[i] == arr[j]) {       // We break out of the loop if we have already taken into account the duplicate value
                foundDuplicate = 1;
                break;
            }
        }
        if(foundDuplicate == 1)
            continue;
        else {
            for(j=i+1; j<SIZE; j++) {
                if(arr[i] == arr[j]) {
                    duplicateCounter++;
                    printf("Duplicate value = %d \n", arr[i]);
                    break;
                }
            }
        }

    }

    if(duplicateCounter)
        printf("\nTotal Number of duplicate values = %d \n", duplicateCounter);
    else
        printf("\nNo duplicate values were found. \n");

}

void rotateLeftAGivenArray() {

    #define SIZE 5

    int temp;
    int rotateNum = 2;
    int arr[SIZE] = {5,7,9,3,1};

        for(int i=0; i<rotateNum; i++) {        // Number of positions to rotate
            temp = arr[0];
            for(int j=1; j<SIZE; j++) {         // Rotating each element to left by one position
                arr[j-1] = arr[j];
            }
            arr[SIZE-1] = temp;         // Assigning first value to last element
        }

    for(int i=0; i<SIZE; i++) {
        printf("%d ", arr[i]);
    }
}

void rotateRightAGivenArray() {

    #define SIZE 5

    int temp;
    int rotateNum = 3;
    int arr[SIZE] = {5,7,9,3,1};

        for(int i=0; i<rotateNum; i++) {        // Number of positions to rotate
            temp = arr[SIZE-1];
            for(int j=SIZE-1; j>0; j--) {         // Rotating each element to right by one position
                arr[j] = arr[j-1];
            }
            arr[0] = temp;         // Assigning last value to first element
        }

    for(int i=0; i<SIZE; i++) {
        printf("%d ", arr[i]);
    }
}

void sumOfTwoElementsClosestToZero() {

    #define SIZE 4

    int arr[SIZE] = {-5,-4,8,9};
    int minSum = arr[0] + arr[1];
    int index1 = 0, index2 = 1;
    int currentSum;
    int i, j;


        // Solution #1

    if(minSum < 0)              // Calculate the absolute value if minSum is less than zero
        minSum *= -1;

        for(i=0; i<SIZE; i++) {
            for(j=i+1; j<SIZE; j++) {
                currentSum = arr[i] + arr[j];
                if(currentSum < 0) {
                    if(minSum > (currentSum * -1 )) {
                        minSum = currentSum;
                        index1 = i;
                        index2 = j;
                    }
                }
                else {
                    if(minSum > currentSum) {
                        minSum = currentSum;
                        index1 = i;
                        index2 = j;
                    }
                }
            }
        }

        printf("(index[%d] + index[%d]) ==> (%d + %d) = %d \n", index1, index2, arr[index1], arr[index2], minSum);



            // Solution #2: Using |abs| function

        for(i=0; i<SIZE; i++) {
            for(j=i+1; j<SIZE; j++) {
                currentSum = arr[i] + arr[j];
                if(abs(currentSum) < abs(minSum)){
                    minSum = currentSum;
                    index1 = i;
                    index2 = j;
                }
            }
        }

        printf("(index[%d] + index[%d]) ==> (%d + %d) = %d \n", index1, index2, arr[index1], arr[index2], minSum);
}


int sumArrayWithoutPointer(int arr[], int size) {

    int sum = 0;

    for(int i=0; i<size; i++) {
        sum += arr[i];
    }
    return sum;
}

void callingSumArrayWithoutPointer() {

    int myArray[] = {5, 10, 15, 20, 25};  // Example array
    int size = sizeof(myArray) / sizeof(myArray[0]);  // Calculate size of the array

    int result = sumArrayWithoutPointer(myArray, size);  // Call the function

    printf("The sum of the array elements is: %d\n", result);  // Output the result
}


int sumArrayWithPointer(int *pArr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
//        sum += pArr[i];         // Accessing elements through index notation
        sum += *(pArr + i);     // Accessing elements through pointer arithmetic
    }
    return sum;
}

void callingSumArrayWithPointer() {

    int myArray[] = {5, 10, 15, 20, 25, 30};  // Example array
    int size = sizeof(myArray) / sizeof(myArray[0]);  // Calculate size of the array

    int result = sumArrayWithPointer(myArray, size);  // Call the function

    printf("The sum of the array elements is: %d\n", result);  // Output the result
}


void getStringLength_predefinedString() {

    char str[] = "Get the length of any string";
    int strLength = 0;

    while(str[strLength] != '\0')
        strLength++;

    printf("%d \n", strLength);
}

void getStringLength_UserdefinedString() {

    char userString[200];
    int strLength = 0;

    printf("Enter your string to calculate the length (Max = 200 characters): ");
    fgets(userString, sizeof(userString), stdin);

    while(userString[strLength] != '\n')
        strLength++;

    printf("%d \n", strLength);
}

void countWords() {

    char sentence[50];
    int wordCount = 0;

    printf("Enter your string: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Using for loop
/*    int i;

    for(i=0; i<strlen(sentence); i++) {
//        if(sentence[i] == ' '){
//            wordCount++;
//        }
    if ((i == 0 || sentence[i - 1] == ' ') && (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n')) {
            wordCount++;
        }
    }
    wordCount++;       */


    // Using while loop
    int i=0;
    while(sentence[i] != '\n') {
//        if(sentence[i] == ' ') {
//            wordCount++;
//        }
    if ((i == 0 || sentence[i - 1] == ' ') && (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n')) {
            wordCount++;
        }
        i++;
    }
    wordCount++;

    printf("The number of words in **%s** = %d \n", sentence, wordCount);
}

void isStringPalindrome() {

    int i = 0;
    int charCount = 0;
    char string[200];

    printf("Enter your string: ");
    fgets(string, sizeof(string), stdin);

    for(i=0; i<strlen(string)/2; i++) {
        if(string[i] != string[strlen(string)-(i+2)]) {
            printf("It is not a palindrome. \n", string);
            return 0; // Exit early if not a palindrome
        }
    }

    printf("It is a palindrome. \n", string);

    return 0;
}

long long int fibonacci_recursiveApproach(int n) {

    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    return fibonacci_recursiveApproach(n-1) + fibonacci_recursiveApproach(n-2);
}

void fibonacci_recursive() {

    int num;
    long long int result;

    printf("Enter the term number you want to find in Fibonacci sequence: ");
    scanf("%d", &num);

    // Mode #1: Printing the n-th term value in Fibonacci sequence
/*
    result = fibonacci_recursiveApproach(num-1);
    printf("Value of the (%d)th term in Fibonacci sequence = %lld \n", num, result);
                                                                                        */


    // Mode #2: Printing all the values of Fibonacci sequence up to the n-th term

    for(int i=0; i<num; i++) {
        printf("Term %d: %lld \n", i+1, fibonacci_recursiveApproach(i));
    }

}

void fibonacci_iterative() {

    int num, i;
    long long a = 0;
    long long b = 1;
    long long next;

    printf("Enter the term number you want to find in Fibonacci sequence: ");
    scanf("%d", &num);

    // Mode #1: Printing the n-th term value in Fibonacci sequence
/*
    for(i=0; i<num-1; i++) {
        next = a+b;
        a = b;
        b = next;
    }
    printf("Value of the (%d)th term in Fibonacci sequence = %lld \n", num, a);
                                                                                    */


    // Mode #2: Printing all the values of Fibonacci sequence up to the n-th term

    for(i=0; i<num; i++) {
        printf("Term %d: %lld \n", i+1, a);
        next = a+b;
        a = b;
        b = next;
    }

}

int sumOfDigits_recursiveApproach(int num) {

    if(num <= 9)
        return num;

    return num%10 + sumOfDigits_recursiveApproach(num/10);
}

void sumOfDigits_recursive() {

    int num = 953519;

    printf("Sum of digits in %d = %d \n", num, sumOfDigits_recursiveApproach(num));
}


