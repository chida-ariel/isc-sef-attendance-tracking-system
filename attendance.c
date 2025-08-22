#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>


//get admin login

int adminLogin() {
    char username[20], password[20];
    int attempts = 3;
    while (attempts--) {
        printf("Enter Admin Username:");
        readLine(username, sizeof(username));
        printf("Enter Password:");
        readLine(password,sizeof(password));
        
        if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0){
            printf("Login successful.\n");
            return 1;
        } else {
            printf("Login failed. Attempts left: %d\n",attempts);
            if (attempts == 0) {
                printf("No attempts left. Exiting.\n");
                return 0;
            }
        }
    }
    return 0;
}

/* ---core features ---*/

//function to capture current date in YYYY-MM-DD format
void getCurrentDate(char *dateStr) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(dateStr, "%4d-%02d-%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
}

//function to capture current time in HH:MM format
void getCurrentTime(char *timeStr) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(timeStr, "%2d:%2d", tm.tm_hour, tm.tm_min);
}


void markAttendance() {

    printf("\nEnter Student ID:");
    scanf("%d", &a.id);

    printf("Enter Student Name:");
    scanf("%s", a.name);

    getCurrentDate(a.date); //Auto capture date
    getCurrentTime(a.time); //Auto capture time

    printf("Enter status (Present/Absent/Late):");
    scanf("%s",a.status);

    FILE *fp = fopen(fileno, "a"); //open file in append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    //save record in file
    fprintf(fp, "ID:%d | Name:%s | Date%s | Time:%s | Status:%s\n", a.id, a.name, a.time, a.status);
    fclose(fp);

    printf("Attendance recorded successfully!\n");
}

//function to view today's attendance 
void viewDailyAttendance() {
    char today[11];
    getCurrentDate(today); //Get today's date
    
    FILE *fp = fopen(fileno, "r");
    if (fp == NULL) {
        return;
    }

    char line[200];
    printf("\n--- Attendance for %s ---\n",today);
    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, today)) {  //show only today's records
            printf("%s", line);
        }
    }
    fclose(fp);
}

 //function to generate report for a student
void generateStudentReport() {
    int searchID;
    printf("\n--- Attendance Report for ID %d ---\n", searchID);
    while (fgets(line, sizeof(line), fp)) {
        char buffer[20];
        sprintf(buffer, "ID:%d", searchID);
        if (strstr(line, buffer)) {
            printf("%s", line);
            found = 1;
        }
    }
    fclose(fp);

    if (!found) {
        printf("No records found for ID %d\n", searchID);
    }
}
// function to export records to CSV format
void exportToCsv() {
    FILE %fp = fopen(filename, "r");
    FILE %csv = fopen("attendance.csv", "w");

    if (fp == NULL || csv == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(csv, "ID, Name, Date, Time, Status\n");  //csv header

    char line[200];
    while (fgets(line, sizeof(line), fp)) {
        int id;
        char name[50], date[11], time[6], status[10];
        sscanf(line, "%d,%s,%s,%s,%s,\n", id, name, date, time, status);
    }

    fclose(fp);
    fclose(csv);
    printf("Records exported to attendance.csv successfully!\n");
}
