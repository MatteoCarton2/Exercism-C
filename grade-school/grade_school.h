#ifndef GRADE_SCHOOL_H
#define GRADE_SCHOOL_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 20
#define MAX_STUDENTS 20

typedef struct {
   uint8_t grade;
   char name[MAX_NAME_LENGTH];
} student_t;

typedef struct {
   size_t count;
   student_t students[MAX_STUDENTS];
} roster_t;

// Initialiser le registre
void init_roster(roster_t *roster);

// Ajouter un élève
bool add_student(roster_t *roster, const char *name, uint8_t grade);

// Obtenir la liste des élèves d'un niveau
roster_t get_grade(const roster_t *roster, uint8_t desired_grade);

#endif
