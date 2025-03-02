#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    printf("Enter one of the following mathematical operators: \n\t\t + \t - \t * \t / \t %% \n");
    while(1) {      // Infinite loop until valid input is received
        if(scanf(" %c", &sign) == 1 && sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '%') {
            break;      // Exit the loop when a valid operator is entered
        }
        printf("Invalid input. Please enter a valid operator: +, -, *, /, %% \n");
        while(getchar() != '\n');       // Clear the buffer
    }

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

    // A less efficient and optimized solution
//    if(year % 100 == 0 && year % 400 == 0)
//        printf("Leap year \n");
//    else if(year % 4 == 0 && year % 100 != 0)
//        printf("Leap year \n");
//    else
//        printf("Not a leap year \n");


    // A more efficient and optimized solution
    if(year % 400 == 0)
        printf("Leap year \n");
    else if(year % 100 == 0)
        printf("Not a leap year \n");
    else if(year % 4 == 0)
        printf("Leap year \n");
    else
        printf("Not a leap year \n");
}

