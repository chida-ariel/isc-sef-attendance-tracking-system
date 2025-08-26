Attendance Tracking System.
 This is a small program  made in C language that helps to track attendance.
It lets one to;
-   Mark attendance for a student (ID, Name, Status).
-   Save the record with today’s date and time.
-   See today’s attendance.
-   Get all attendance records for a student by ID.
-   Export all data to a CSV file.


 Files created.
-   Attendance.txt: Stores attendance in text format 
-   Attendance.csv: Stores attendance in table format

How To Run The Program

1. Open the terminal
2. Compile the program
gcc attendance.c -o attendance 
3. Run the program:
./attendance

Menu options.
When you run the previous program you will get to this menu:

1. Mark Attendance 
2. View Daily Attendance 
3. Generate Student Report
4. Export to CSV
5. Exit

-1: Mark Attendance: enter ID, Name, Status (Present/Absent/Late). Program saves it with date and time.
-2: View Daily Attendance: shows all records for today.
-3: Generate Student Report: enter a student’s ID to see all their attendance.
-4: Export to CSV: creates attendance.csv file.
-5: Exit: closes the program.

THINGS TO NOTE:
-Student names cannot have spaces (e.g write James_Paul instead of James Paul.}

-The program does not check if you type the wrong status