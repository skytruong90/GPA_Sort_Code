//Author: David Tan

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system("pause")
#define CLS system("cls")
#define FLUSH myFlush()
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//struct for students
typedef struct {
	char name[50];
	float GPA;
}STUDENT;

//prototype functions

void addStudents(STUDENT** record, int *count);
void studentRecords(STUDENT** record, int count);
void sortByName(STUDENT** record, int count);
void sortByGPA(STUDENT** record, int count);
STUDENT* makeAWord();
char userChoice(void);
void myFlush(void);
void displayMenu();
main() {
	STUDENT** record;
	int count = 0;
	int amount = 10;
	record = calloc(amount, sizeof(STUDENT*));
	


	char choice = ' ';
	do {
		choice = userChoice();
		switch (choice) {
		case 'A':
			record[count] = makeAWord();
			addStudents(record, &count);
			PAUSE;
			break;
		case 'B':
			sortByName(record, count);
			studentRecords(record, count);
			PAUSE;
			sortByGPA(record, count);
			studentRecords(record, count);
			PAUSE;
			break;
		case 'C':
			sortByName(record, count);
			studentRecords(record, count);
			PAUSE;
			break;
		case 'D':
			sortByGPA(record, count);
			studentRecords(record, count);
			PAUSE;
			break;
		case 'E':
			printf("Bye!");
			PAUSE;
			break;
		default:
			printf("Invalid choice entered!");
			PAUSE;
			break;
		}
	} while (choice != 'E');
}// END MAIN

void addStudents(STUDENT** record, int *count)
{
	CLS;
	char name[50];
	printf("Enter the student's name: "); //get the name of the student
	scanf(" %s", name);
	strcpy(record[*count]->name, name);

	printf("Enter the GPA for the student: ");
	scanf("%f", &record[*count]->GPA);

	(*count)++;
} //end add student

char userChoice() {
	char result;
	displayMenu();
	scanf(" %c", &result);
	return toupper(result);
}// end userchoice

void displayMenu() {
	CLS;
	printf("A.) Add a Student\n");
	printf("B.) Display All Student Records\n");
	printf("C.) Sort by name\n");
	printf("D.) Sort by GPA\n");
	printf("E.) Quit\n");
} //display menu function

void studentRecords(STUDENT** record, int count) {
	int i;
	CLS;
	printf("NAME\tGPA\n\n");
	for (i = 0; i < count; i++)
		printf("%s\t%.2f\n\n", record[i]->name, record[i]->GPA);
} //end student records

void myFlush() {
	while (getchar() != '\0');
} // end myFlush

void sortByName(STUDENT** record, int count) {
	STUDENT temp;
	int i, bottom;
	char switchMade = 'N';
	printf("==================================\n");
	printf("       Names have now been sorted!\n");
	printf("===================================");
	bottom = count - 1;
	do {
		switchMade = 'N';
		for (i = 0; i < bottom; i++) {
			if (strcmp(record[i]->name, record[i + 1]->name) > 0) {
				switchMade = 'Y';
				strcpy(temp.name, record[i]->name);
				temp.GPA = record[i]->GPA;
				strcpy(record[i]->name, record[i + 1]->name);
				record[i]->GPA = record[i + 1]->GPA;
				strcpy(record[i + 1]->name, temp.name);
				record[i + 1]->GPA = temp.GPA;
			}// end if 
		}// end for 
		bottom--;
	} while (switchMade == 'Y');
}

void sortByGPA(STUDENT** record, int count) {   // this is the enhanced bubble sort
	STUDENT* temp;
	int i, bottom;
	char switchMade = 'N'; // flag variable
	printf("======================================\n");
	printf("               Sorted by GPA\n");
	printf("======================================\n");
	bottom = count - 1;    // going down to i then comparing it to i + 1
	do {
		switchMade = 'N'; // turn the flag to no
		for (i = 0; i < bottom; i++) {
			if (record[i]->GPA > record[i + 1]->GPA) {
				switchMade = 'Y';
				temp = record[i];
				record[i] = record[i + 1];
				record[i + 1] = temp;
			} // end if
		} // end for
		bottom--;
	} while (switchMade == 'Y');
} // end sort by GPA


STUDENT* makeAWord() {

	STUDENT* result;

	result = malloc(sizeof(STUDENT));

	return result;

} //end 