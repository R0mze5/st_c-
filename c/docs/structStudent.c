#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./struct.h"

#define STUDENTS 3

int main(void)
{

  Student students[STUDENTS];

  for (int i = 0; i < STUDENTS; i++)
  {
    printf("Student's name: ");
    students[i].name = "sdf";
    students[i].dorm = "sdf";

    printf("%s \n", students[i].name);
  }

  FILE *file = fopen("students.csv", "w");

  if (file != NULL)
  {
    for (int i = 0; i < STUDENTS; i++)
    {
      fprintf(file, "%s,%s\n", students[i].name, students[i].dorm);
    }
    fclose(file);
  }

  // for (int i = 0; i < STUDENTS; i++)
  // {
  //   free(students[i].name);
  //   free(students[i].dorm);
  // }
}