#include <stdio.h>

// Function to simulate the lift movement
void operateLift(int currentFloor, int targetFloor) {
    printf("Lift is moving from floor %d to floor %d\n", currentFloor, targetFloor);
}

int main() {
    int currentFloor = 1; // Lift starts at the ground floor

    printf("Welcome to the Lift Simulator!\n");

    while (1) {
        int targetFloor;

        // Get the user's desired floor
        printf("Enter the floor you want to go to (1-10, 0 to exit): ");
        scanf("%d", &targetFloor);

        if (targetFloor == 0) {
            printf("Exiting Lift Simulator. Goodbye!\n");
            break;
        }

        // Validate the floor input
        if (targetFloor < 1 || targetFloor > 10) {
            printf("Invalid floor. Please enter a floor between 1 and 10.\n");
            continue;
        }

        // Move the lift to the target floor
        operateLift(currentFloor, targetFloor);
        currentFloor = targetFloor;

        // Inform the user about the current floor
        printf("Lift has arrived at floor %d.\n", currentFloor);
    }

    return 0;
}