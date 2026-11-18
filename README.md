# Student Test Result Grading System

A C-based Student Test Result Grading System that automates student mark calculation, subject-wise grading, and overall result generation.

## Project Overview

This project is developed using the C programming language as part of the Computational Thinking and Problem Solving (CSE-100) course.

The system calculates student results across three subjects:

- Discrete Mathematics
- Computational Thinking and Problem Solving (CTPS)
- Academic English

It accepts multiple students' information and marks, validates the entered scores, calculates subject totals and averages, and assigns letter grades according to a defined grading policy.

## Features

- Supports multiple students (up to 100).
- Accepts student names and IDs.
- Calculates marks for three subjects.
- Validates marks according to their maximum limits.
- Calculates subject-wise totals.
- Calculates overall average.
- Assigns subject-wise letter grades.
- Assigns final overall grades.
- Automatically assigns F if a student fails any subject.
- Identifies invalid marks and displays grade X.
- Displays results in a formatted table.

## Subjects

| Subject | Maximum Marks |
|---|---:|
| Discrete Mathematics | 100 |
| CTPS | 100 |
| Academic English | 100 |

## Grading System

| Marks | Grade |
|---|---|
| 80 and above | A+ |
| 75–79 | A |
| 70–74 | A- |
| 65–69 | B |
| 60–64 | B- |
| 55–59 | C |
| 50–54 | C- |
| 40–49 | D |
| Below 40 | F |

**Important:** If a student fails any one subject, the final overall grade becomes F, regardless of the overall average.

Invalid marks result in grade X.

## Software and Technologies

- Programming Language: C
- Compiler: GCC
- Development Environment: GCC on Linux/Windows

## How It Works

1. The user enters the number of students.
2. The system collects each student's name and ID.
3. It accepts marks for Discrete Mathematics, CTPS, and Academic English.
4. It validates the marks against their respective maximum limits.
5. It calculates the total marks for each subject.
6. It calculates the overall total and average.
7. It assigns subject-wise and overall letter grades.
8. It displays all student results in a formatted table.

## Testing

The project was tested using three different cases:

- **Valid Marks:** Correctly calculates marks and assigns grades.
- **Failed Subject:** Assigns final grade F when a student fails any subject.
- **Invalid Input:** Identifies marks exceeding the allowed limits and assigns grade X.

The testing results demonstrate that the system handles valid, failed, and invalid cases correctly.

## Limitations

- Supports only three fixed subjects.
- Does not include GPA or CGPA calculation.
- Results are not stored permanently.
- Uses a fixed maximum capacity of 100 students.

## Future Improvements

- Implement GPA and CGPA calculation.
- Store and retrieve results using files or databases.
- Develop a graphical user interface (GUI).
- Support dynamic subject handling.
- Improve memory management using dynamic allocation.

## Project Files

- `1CTPS_Grading_System.c` – Complete C source code.
- `1_CTPS_Lab Project Report.pdf` – Project documentation and report.

## Author

**Developed by:** Ihkabbo

Academic project focused on C programming, arrays, functions, conditional statements, loops, and input validation.
