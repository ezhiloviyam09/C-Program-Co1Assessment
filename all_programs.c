/*
====================================================
             C PROGRAMMING ASSIGNMENT - 1
====================================================
Name                : Ezhiloviyam. S
Registration Number : 1912260591
====================================================

All 10 assignment programs are included in this single file.
Run the program and enter a question number from 1 to 10.
*/

#include <stdio.h>

void q1(void) {
    float distance, fare = 100.0f;
    int member;
    printf("Enter distance and membership (1=member, 0=non-member): ");
    scanf("%f%d", &distance, &member);
    if (distance > 10) fare += (distance - 10) * 20;
    if (member == 1) fare *= 0.90f;
    printf("Final Fare: Rs.%.0f\n", fare);
}

void q2(void) {
    int questions, time, submitted;
    printf("Enter questions answered, remaining time, submitted (0=no, 1=yes): ");
    scanf("%d%d%d", &questions, &time, &submitted);
    if (questions >= 1 && time > 0 && submitted == 0)
        printf("Submission Allowed\n");
    else
        printf("Submission Not Allowed\n");
}

void q3(void) {
    int coins, x, y, ben, blackbeard, remaining, each;
    printf("Enter total coins, Long Ben percentage, Blackbeard percentage: ");
    scanf("%d%d%d", &coins, &x, &y);
    ben = coins * x / 100;
    remaining = coins - ben;
    blackbeard = remaining * y / 100;
    remaining -= blackbeard;
    each = remaining / 3;
    printf("%d\n%d\n%d\n", ben, blackbeard, each);
}

void q4(void) {
    int d1, c1, d2, c2, dollars, cents;
    printf("Enter first dollars, first cents, second dollars, second cents: ");
    scanf("%d%d%d%d", &d1, &c1, &d2, &c2);
    dollars = d1 + d2;
    cents = c1 + c2;
    dollars += cents / 100;
    cents %= 100;
    printf("%d\n%d\n", dollars, cents);
}

void q5(void) {
    float mileage;
    int petrol, distance;
    printf("Enter mileage, petrol litres, and distance: ");
    scanf("%f%d%d", &mileage, &petrol, &distance);
    if (mileage * petrol >= distance) printf("Can reach\n");
    else printf("Cannot reach\n");
}

void q6(void) {
    int a, b, c, car;
    printf("Enter road A, road B, road C numbers and car number: ");
    scanf("%d%d%d%d", &a, &b, &c, &car);
    /* Assumption: car number modulo 3 determines the road. */
    if (car % 3 == 1) printf("Car %d goes into road A\n", car);
    else if (car % 3 == 2) printf("Car %d goes into road B\n", car);
    else printf("Car %d goes into road C\n", car);
}

void q7(void) {
    float principal, rate, years, interest, amount, discount, settlement;
    printf("Enter principal, interest rate, and years: ");
    scanf("%f%f%f", &principal, &rate, &years);
    interest = principal * rate * years / 100.0f;
    amount = principal + interest;
    discount = interest * 0.02f;
    settlement = amount - discount;
    printf("%.2f\n%.2f\n%.2f\n%.2f\n",
           interest, amount, discount, settlement);
}

void q8(void) {
    int experience, performance;
    printf("Enter experience and performance score: ");
    scanf("%d%d", &experience, &performance);
    if (experience > 7 && performance >= 85) printf("Level: Senior\n");
    else if (experience >= 3 && experience <= 7 && performance >= 80)
        printf("Level: Mid-Level\n");
    else printf("Level: Junior\n");
}

void q9(void) {
    int year, month, days;
    printf("Enter year and month: ");
    scanf("%d%d", &year, &month);
    if (year < 1900 || year > 9999 || month < 1 || month > 12) {
        printf("0\n");
        return;
    }
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31; break;
        case 4: case 6: case 9: case 11:
            days = 30; break;
        case 2:
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                days = 29;
            else days = 28;
            break;
        default: days = 0;
    }
    printf("%d Days\n", days);
}

void q10(void) {
    int units;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units <= 200) bill = units * 0.50f;
    else if (units <= 400) bill = units * 0.65f + 100;
    else if (units <= 600) bill = units * 0.80f + 200;
    else bill = units * 1.25f + 425;
    printf("Rs.%.0f\n", bill);
}

int main(void) {
    int choice;
    printf("===== C PROGRAMMING ASSIGNMENT =====\n");
    printf("1. Cab Fare Calculation\n");
    printf("2. Online Examination System\n");
    printf("3. Treasure Hunt\n");
    printf("4. Dollars and Cents\n");
    printf("5. Car Mileage\n");
    printf("6. Car Race\n");
    printf("7. Debt Repay\n");
    printf("8. Employee Job Level\n");
    printf("9. Number of Days\n");
    printf("10. Electricity Bill\n");
    printf("Choose question (1-10): ");
    if (scanf("%d", &choice) != 1) return 1;
    switch (choice) {
        case 1: q1(); break;
        case 2: q2(); break;
        case 3: q3(); break;
        case 4: q4(); break;
        case 5: q5(); break;
        case 6: q6(); break;
        case 7: q7(); break;
        case 8: q8(); break;
        case 9: q9(); break;
        case 10: q10(); break;
        default: printf("Invalid question number\n"); break;
    }
    return 0;
}
