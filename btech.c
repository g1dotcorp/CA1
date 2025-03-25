#include <stdio.h>

int main() {
    int choice;

    printf("Select a course by entering the corresponding number:\n");
    printf("1. CSE\n");
    printf("2. ECE\n");
    printf("3. AIML\n");
    printf("4. mechanical\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected CSE.\n");
            break;
        
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}

