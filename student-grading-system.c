#include <stdio.h>
#define MAX_STUDENTS 100

void calculateGrade(float mark, char g[4])
{
    if (mark >= 80)
    {
        g[0] = 'A';
        g[1] = '+';
        g[2] = '\0';
    }
    else if (mark >= 75)
    {
        g[0] = 'A';
        g[1] = '\0';
    }
    else if (mark >= 70)
    {
        g[0] = 'A';
        g[1] = '-';
        g[2] = '\0';
    }
    else if (mark >= 65)
    {
        g[0] = 'B';
        g[1] = '\0';
    }
    else if (mark >= 60)
    {
        g[0] = 'B';
        g[1] = '-';
        g[2] = '\0';
    }
    else if (mark >= 55)
    {
        g[0] = 'C';
        g[1] = '\0';
    }
    else if (mark >= 50)
    {
        g[0] = 'C';
        g[1] = '-';
        g[2] = '\0';
    }
    else if (mark >= 40)
    {
        g[0] = 'D';
        g[1] = '\0';
    }
    else
    {
        g[0] = 'F';
        g[1] = '\0';
    }
}

int main()
{
    int n, i;
    char name[MAX_STUDENTS][50];
    char studentID[MAX_STUDENTS][50];
    float marks[MAX_STUDENTS][3];
    float total[MAX_STUDENTS], average[MAX_STUDENTS];
    char grade[MAX_STUDENTS][4];
    char subjectGrade[MAX_STUDENTS][3][4];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]", name[i]);

        printf("Enter Student ID of student %d: ", i + 1);
        scanf(" %[^\n]", studentID[i]);

        int has_failed_subject = 0, invalid_marks = 0;

        // From here input for Discrete Math
        printf("\nEntering marks for Discrete Math:\n");
        float dm_ksa, dm_ct1, dm_mid, dm_ct2, dm_pres, dm_final;
        printf("KSA (out of 10): ");
        scanf("%f", &dm_ksa);
        printf("CT1 (out of 5): ");
        scanf("%f", &dm_ct1);
        printf("Mid Term (out of 30): ");
        scanf("%f", &dm_mid);
        printf("CT2 (out of 5): ");
        scanf("%f", &dm_ct2);
        printf("Presentation (out of 10): ");
        scanf("%f", &dm_pres);
        printf("Final (out of 40): ");
        scanf("%f", &dm_final);

        if (dm_ksa < 0 || dm_ksa > 10 || dm_ct1 < 0 || dm_ct1 > 5 || dm_mid < 0 || dm_mid > 30 ||
                dm_ct2 < 0 || dm_ct2 > 5 || dm_pres < 0 || dm_pres > 10 || dm_final < 0 || dm_final > 40)
        {
            invalid_marks = 1;
        }

        marks[i][0] = dm_ksa + dm_ct1 + dm_mid + dm_ct2 + dm_pres + dm_final;
        if (marks[i][0] < 40) has_failed_subject = 1;

        //From here input for  CTPS
        printf("\nEntering marks for CTPS:\n");
        float lab1, lab2, ctps_ksa1, ctps_ksa2, attn, lab3, ctps_pres, lab_final;
        printf("Lab Report 1 (out of 5): ");
        scanf("%f", &lab1);
        printf("Lab Report 2 (out of 5): ");
        scanf("%f", &lab2);
        printf("KSA1 (out of 10): ");
        scanf("%f", &ctps_ksa1);
        printf("KSA2 (out of 10): ");
        scanf("%f", &ctps_ksa2);
        printf("Attendance (out of 10): ");
        scanf("%f", &attn);
        printf("Lab Report 3 (out of 5): ");
        scanf("%f", &lab3);
        printf("Presentation (out of 25): ");
        scanf("%f", &ctps_pres);
        printf("Lab Final (out of 30): ");
        scanf("%f", &lab_final);

        if (lab1 < 0 || lab1 > 5 || lab2 < 0 || lab2 > 5 || ctps_ksa1 < 0 || ctps_ksa1 > 10 ||
                ctps_ksa2 < 0 || ctps_ksa2 > 10 || attn < 0 || attn > 10 || lab3 < 0 || lab3 > 5 ||
                ctps_pres < 0 || ctps_pres > 25 || lab_final < 0 || lab_final > 30)
        {
            invalid_marks = 1;
        }

        marks[i][1] = lab1 + lab2 + ctps_ksa1 + ctps_ksa2 + attn + lab3 + ctps_pres + lab_final;
        if (marks[i][1] < 40) has_failed_subject = 1;

        //From here input for Academic English
        printf("\nEntering marks for Academic English:\n");
        float en_ksa, en_ct1, listening, en_mid, speaking, en_ct2, en_pres, en_final;
        printf("KSA (out of 10): ");
        scanf("%f", &en_ksa);
        printf("CT1 (out of 5): ");
        scanf("%f", &en_ct1);
        printf("Listening (out of 10): ");
        scanf("%f", &listening);
        printf("Mid Term (out of 20): ");
        scanf("%f", &en_mid);
        printf("Speaking (out of 10): ");
        scanf("%f", &speaking);
        printf("CT2 (out of 5): ");
        scanf("%f", &en_ct2);
        printf("Presentation (out of 10): ");
        scanf("%f", &en_pres);
        printf("Final (out of 30): ");
        scanf("%f", &en_final);

        if (en_ksa < 0 || en_ksa > 10 || en_ct1 < 0 || en_ct1 > 5 || listening < 0 || listening > 10 ||
                en_mid < 0 || en_mid > 20 || speaking < 0 || speaking > 10 || en_ct2 < 0 || en_ct2 > 5 ||
                en_pres < 0 || en_pres > 10 || en_final < 0 || en_final > 30)
        {
            invalid_marks = 1;
        }

        marks[i][2] = en_ksa + en_ct1 + listening + en_mid + speaking + en_ct2 + en_pres + en_final;
        if (marks[i][2] < 40) has_failed_subject = 1;

        total[i] = marks[i][0] + marks[i][1] + marks[i][2];
        average[i] = total[i] / 3.0;

        if (invalid_marks)
        {
            grade[i][0] = 'X';
            grade[i][1] = '\0';
            subjectGrade[i][0][0] = 'X';
            subjectGrade[i][0][1] = '\0';
            subjectGrade[i][1][0] = 'X';
            subjectGrade[i][1][1] = '\0';
            subjectGrade[i][2][0] = 'X';
            subjectGrade[i][2][1] = '\0';
        }
        else
        {

            calculateGrade(marks[i][0], subjectGrade[i][0]);
            calculateGrade(marks[i][1], subjectGrade[i][1]);
            calculateGrade(marks[i][2], subjectGrade[i][2]);

            if (has_failed_subject)
            {
                grade[i][0] = 'F';
                grade[i][1] = '\0';
            }
            else
            {
                calculateGrade(average[i], grade[i]);
            }
        }
    }


    printf("\n%90s\n\n", "----- Student Results -----");
    printf("%-25s %-15s %-15s %-5s %-15s %-5s %-17s %-5s %-10s %-10s %-6s\n",
           "Name", "Student ID",
           "Discrete Math", "G",
           "CTPS", "G",
           "Academic English", "G",
           "Total", "Average", "Grade");
    printf("----------------------------------------------------------------------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        if (grade[i][0] == 'X')
        {
            printf("%-25s %-15s %-15s %-5s %-15s %-5s %-17s %-5s %-10s %-10s %-6s\n",
                   name[i], studentID[i],
                   "Invalid", "-", "Invalid", "-", "Invalid", "-",
                   "-", "-", "X");
        }
        else
        {
            printf("%-25s %-15s %-15.2f %-5s %-15.2f %-5s %-17.2f %-5s %-10.2f %-10.2f %-6s\n",
                   name[i], studentID[i],
                   marks[i][0], subjectGrade[i][0],
                   marks[i][1], subjectGrade[i][1],
                   marks[i][2], subjectGrade[i][2],
                   total[i], average[i], grade[i]);
        }
        printf("---------------------------------------------------------------------------------------------------------------------------------------\n");

    }
    return 0;
}

