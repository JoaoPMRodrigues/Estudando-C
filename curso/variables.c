#include <stdio.h>
#include <stdbool.h>

int main()
{
    // variable is a reusable containers for a value.

    int age = 18;
    int year = 2026;

    float gpa = 2.5;
    float price = 19.99;
    float price_2 = 19.999999;
    float price_3 = 19.9999999; // stack overflow

    double price_4 = 19.99999999999999;

    char grade = 'A';
    char symbol = '!';

    char name[] = "João Paulo";
    char food[6] = "Pizza"; // One more byte for \0
    char email[] = "fake123@gmail.com";

    bool isOnline = true; // true == 1
    bool isNotOnline = 0; // false == 0
    bool isStudent = false;

    // decimal/intenger (4 bytes)

    printf("I'm %d years old\n", age);
    printf("The year is %d\n", year);

    // float (4 bytes)

    printf("Your gpa is %f\n", gpa);
    printf("The price is $%f\n", price);
    printf("The price is $%f\n", price_2);
    printf("The price is $%f\n", price_3);

    // long float (8 bytes)

    printf("The price is $%.14f\n", price_4);

    // single character (1 byte)

    printf("Your grade is %c\n", grade);
    printf("The fatorial's symbol is %c\n", symbol);

    // array of characters = string (sentence("João") + 1(\0) byte)

    printf("Hello, my name is %s\n", name);
    printf("I'm hungry, I should order %s\n", food);
    printf("My email is %s\n", email);

    // bools are binary with True or False (1 byte)

    printf("%d\n", isOnline);
    if (isNotOnline == false) // it's the same of isNotOnline == false
        printf("He isn't online =/\n");

    if (isStudent)
        printf("He is a student!\n");
    else
        printf("He isn't a student!\n");

    return 0;
}

/*make variables
make run */