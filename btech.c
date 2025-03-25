#include <stdio.h>

int main() {
    int choice;

    printf("Select a course by entering the corresponding number:\n");
    printf("1. Mathematics\n");
    printf("2. Physics\n");
    printf("3. Computer Science\n");
    printf("4. Chemistry\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected Mathematics.\n");
            break;
        case 2:
            printf("You selected Physics.\n");
            break;
        case 3:
            printf("You selected Computer Science.\n");
            break;
        case 4:
            printf("You selected Chemistry.\n");
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}

