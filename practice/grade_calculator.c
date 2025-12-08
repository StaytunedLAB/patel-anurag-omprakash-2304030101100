#include <stdio.h>

int main() {
    int marks;
    printf("Enter percentage marks (0-100): ");
    if (scanf("%d", &marks) != 1) return 0;
    if (marks < 0 || marks > 100) {
        printf("Please enter marks between 0 and 100.\n");
        return 0;
    }

    int score = marks / 10; // 0-10
    switch (score) {
        case 10: // fallthrough
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }

    return 0;
}