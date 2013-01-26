//
// rms <rms@velocitylimitless.org>
//
// This code is licensed under whatever license
// you want.
//

#include <unistd.h>
#include <sys/types.h>
#include <sys/cdefs.h>

#include <stdio.h>
#include <stdint.h>

#include <readline/readline.h>
#include <readline/history.h>

/*
 * This program is only used to interface with the user and present
 * questions in a simple format that can be used with the run script
 * to fill out the guidelines.
 *
 * Please keep both in sync or I will chop your heads off with my
 * scythe made from gcc's source code and Richard Stallman's beard
 * remains,
 */

typedef struct _section_1 {
    char* name;             // Student/Team Leader
    uint32_t grade;         // Grade
    char* email;            // Email
    char* phone;            // Phone
} _section_1_t;

typedef struct _section_2 {
    char* title;            // Title
} _section_2_t;

typedef struct _section_8 {
    char* name;             // Name
    char* address;          // Address
    char* phone;            // Phone
} _section_8_t;

typedef struct _form_1a {
    _section_1_t    section_1;
    _section_2_t    section_2;
    _section_8_t    section_8[2];
} _form_1a_t;

static _form_1a_t form;

static void process_form(void) {
    memset(&form, 0, sizeof(_form_1a_t));
    
    printf("=== FORM 1A, SECTION 1 ===\n");

    form.section_1.name = readline("Student Name? ");
    form.section_1.grade = atoi(readline("Student Grade? "));
    form.section_1.email = readline("Student E-mail? ");
    form.section_1.phone = readline("Student Phone? ");

    printf("=== FORM 1A, SECTION 2 ===\n");

    form.section_2.title = readline("Project Title? ");

    printf("=== FORM 1A, SECTION 8 ===\n");
    
    printf("*** Work Site #1\n");

    form.section_8[0].name = readline("Non-School Work site Name? ");
    form.section_8[0].address = readline("Non-School Work site Address? ");
    form.section_8[0].phone = readline("Non-School Work site phone? "); 

    printf("*** Work Site #2\n");

    form.section_8[1].name = readline("Non-School Work site Name? ");
    form.section_8[1].address = readline("Non-School Work site Address? ");
    form.section_8[1].phone = readline("Non-School Work site phone? "); 
    
    return;
}

int main(int argc, char* argv[]) {
    process_form();
    return 0;
}
