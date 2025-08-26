#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//structure for storing attendance data
typedef struct {

    char name[50]; //student/employee name
    char password[20]; //student/employee password
    int id;         //unique id number
    char date[11]; //format: YYYY-MM-DD
    char time[6]; //format:HH:MM
    char status[10]; //present,absent,late
    char line[200];

} Attendance;

//utility
void getCurrentDateTime(char *date, char *time);
void readLine(char *buffer, int size);
const char *filename = "attendance.txt"; 

//login
int adminLogin();


//functions
void markAttendance();
void viewDailyAttendance();
void generateStudentReport();
void exportToCSV();

#endif