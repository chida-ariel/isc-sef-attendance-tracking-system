#include <stdio.h>
#include <stdlib.h>
#include "attendance.h"

int main() {
    if (!adminlogin()) {
        return 1; //Exit if login fails
    }

while (1) {
    printf("\n==== Attendance Tracker ====\n");
    printf("1. Mark Attendance\n");
    printf("2. View Daily Attendance\n");
    printf("3. Generate Student Report\n");
    printf("4. Export to CSV\n");
    printf("5. Exit\n");
    printf("Enter choice:");
    
    char choiceStr[10];
    readLine(choiceStr, sizeof(choiceStr));
    int choice = atoi(choiceStr);
    
    if (choice = 1) {
        markAttendance();
    }
    else if (choice = 2) {
        viewDailyAttendance();
    }
    else if (choice = 3) {
        generateStudentReport();
    }
    else if (choice = 4) {
        exportToCsv();
    }
    else if (choice = 5) {
        printf("Exiting program .....\n");
        break;
    }
    else {
        printf("Invalid choice ! Please try again.\n");
    }
}

return 0;
}