# Title: GPA Sorting
### I worked on this by myself and the programming language I used is C Programming. 

## How to install:
1. Clone the repository:  https://github.com/skytruong90/GPA_Sorting.git
2. The main code is inside the code folder when you download everything.
3. Run the project with VS code and download the C programming extension or you can use online compilert to run this code.

## My Objective: 
### To create a GPA sorting code that would let end user add students, display student records, and sort their name as well as their GPA.

## Explaination of the code:
This is a GPA sorting program that allows the user to input information about students, including their name and GPA, and then sort the information based on the student's name or GPA. The program uses a struct to store the student's name and GPA, and a dynamic array of pointers to structs to store multiple students' information.
The program's main function contains a menu that allows the user to choose different options, including adding a new student, displaying all student records, sorting by name, sorting by GPA, or quitting the program. When the user chooses to add a new student, the program prompts the user to input the student's name and GPA, and stores this information in the dynamic array. When the user chooses to display all student records, the program prints out a table showing the student's name and GPA. When the user chooses to sort by name or GPA, the program uses a bubble sort algorithm to rearrange the order of the students' information based on the chosen sorting criteria. The program then displays the sorted information.
The program also includes several helper functions, including functions to display the menu, flush the input buffer, and allocate memory for a new student struct.

## What did I learned:
1. Familiarity with the C programming language: Developing a program in C may have provided you with a deeper understanding of the language syntax and data structures.
2. Problem-solving skills: Programming requires careful planning, critical thinking, and problem-solving abilities to identify potential issues and debug your code.
3. Importance of error handling: Programming languages can be unforgiving if errors go unhandled. As a result, you might have learned how to effectively handle errors and provide meaningful feedback to users.
4. Importance of testing: Testing your code is crucial to identify errors and confirm that the program meets the desired outcomes. You might have learned the importance of developing a robust testing process to ensure program functionality.

## What I would improved:
1. Code optimization: You could have optimized the code to reduce memory usage and improve performance. This could have included reducing the number of loops or using more efficient algorithms.
2. User interface design: A well-designed user interface can improve the user experience and make the program more intuitive to use. You could have improved the interface design to make it more user-friendly and visually appealing.
3. Error handling: You could have implemented better error handling to provide more informative error messages and to handle errors more gracefully. This could have improved the overall reliability of the program.
4. Code organization: Organizing the code into modular components can make it easier to read, understand, and maintain. You could have improved the organization of the code to make it more modular and easier to maintain.

## Key features:
1. User Input: The program should allow the user to input a list of GPAs that they want to sort.
2. GPA Sorting: The program should sort the list of GPAs in ascending or descending order.
3. Display Sorted GPAs: The program should display the sorted GPAs to the user in a clear and readable format.
4. GPA Validation: The program should validate that each inputted GPA is within a valid range (e.g. between 0 and 4).
5. Error Handling: The program should handle any errors or exceptions that may occur during the GPA sorting process, such as invalid inputs or insufficient memory.
6. File Input/Output: The program could allow the user to read GPAs from a file or write sorted GPAs to a file.
