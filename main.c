#include <stdio.h>
#include <string.h>
#include <conio.h>
// declaring-structure
struct school
{
    char t_name[20], incharge[20];
    int s_period, f_period, std;
    double m_num;
} s;
int main()
{
    // declaring variables
    char sub[20], sec[10];
    char eng[10] = "english";
    char jun[10] = "junior";
    int load, sub_num, tload;
    // clrscr();
    // taking input from user
    printf("\nEnter the teacher's name: ");
    scanf("%s", &s.t_name);
    printf("\nEnter the section (Junior, Primary, Senior): ");
    scanf("%s", &sec);
    printf("\nEnter the name of incharge: ");
    scanf("%s", &s.incharge);
    printf("\nTotal load in one week (hrs): ");
    scanf("%d", &load);
re_s_period:
    printf("\nEnter the Substitute periods: ");
    scanf("%d", &s.s_period);
    if (s.s_period > 4)
    {
 printf("There cannot be more than 4 substitute periods.\n Please Enter Again!!\n");
 goto re_s_period;
    }
    printf("\nEnter the contact number of teacher: ");
    scanf("%lf", &s.m_num);
    printf("\nEnter the class: ");
    scanf("%d", &s.std);
    printf("\nEnter the number of free periods: ");
    scanf("%d", &s.f_period);
    printf("\nEnter the subject type: ");
    scanf("%s", &sub);
    printf("\nEnter the number of subject periods: ");
    scanf("%d", &sub_num);
    // checking conditions
    if (load > 36)
    {
        s.f_period += 2;
    }
    tload = (load * 4) - (s.f_period * 4);
    // Output
    printf("\n***********************\n");
    printf(" OUTPUT");
    printf("\n***********************\n");
    printf("\n\nTOTAL LOAD IN MONTH IS %d hrs\n", tload);
    printf("\nTeacher's Name:\t %s\n", s.t_name);
    printf("Contact Number:\t %.0lf\n", s.m_num);
    printf("Class:\t %d\n", s.std);
    printf("Subtitute Periods:\t %d\n", s.s_period);
    printf("Load in a week in hrs:\t %d\n", load);
    printf("Incharge's Name:\t %s\n", s.incharge);
    printf("Section Taught:\t %s\n", sec);
    printf("Number of extra free periods for next week:\t %d\n", s.f_period);
    printf("Subject Type (Period):\t %s\n", sub);
    // exception-handling
    if (strcmp(sub, eng) == 0 && sub_num > 2)
    {
        printf("\n***********************\n");
 printf("\nThere should not be more than two periods a week for a single teacher.\n");
 printf("\n***********************\n");
    }
    if (strcmp(sec, jun) == 0)
    {
        printf("\n***********************\n");
  printf("\n%s is a junior teacher and he/she cannot teach senior section\nbut he/she can be assigned substitute period in primary section.\n",s.t_name);
  printf("\n***********************\n");
    }
    // getch();
    return 0;
}