
/*
             Application Name: ***** Employee Project ******
  
             LANGUAGE :     C

       	     Compiler ::    Codeblocks/dev c++

              Name:              Rudro Debnath
              Class Roll:        18CSE025
              Session:           2017-18
              Semester & Year :  1st,1st
              department:        Computer Science and Engineering

  */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<conio.h>
#include<windows.h>

#include "types.h"
#include "employee.h"

void clear();



int main()
{

    readFromFile();
    char selection[41];
    int choice;
  
    while(1){
    	puts("**********************************************************************");
    	puts("*                     WELCOME TO OUR APPLICATION                     *");
        puts("*                     Employees application main menu.               *");
        puts("*       1. Insert a new entry                                        *");
        puts("*       2. Display All Entry                                         *");
        puts("*       3. Search by First Name                                      *");
        puts("*       4. Search by Last Name                                       *");
        puts("*       5. Search by Mobile Number                                   *");
        puts("*       6. Delete a contact (by ID)                                  *");
        puts("*       7. Save Database                                             *");
        puts("*       8. Exit                                                      *");
        puts("**********************************************************************");
		do {
            printf("        Enter your choice: ");
            gets(selection);
            choice = atoi(selection);
        } while (choice < 1 || choice > 8);

        switch(choice)
        { 
        case 1:
            addEntry();
            clear();
            break;
        case 2:
            displayAll();
            clear();
            break;
        case 3:
            printf("Enter first name to search: ");
            gets(selection);
            search(selection, FIRST_NAME);
            clear();
            break;
        case 4:
            printf("Enter last name to search: ");
            gets(selection);
            search(selection, LAST_NAME);
            clear();
            break;
        case 5:
            printf("Enter mobile number to search: ");
            gets(selection);
            search(selection, MOBILE_NUMBER);
            clear();
            break;
        case 6:
            printf("Enter id to delete: ");
            gets(selection);
            removeEntry(selection);
            clear();
            break;
        case 7:
            saveToFile();
            clear();
            break;
        case 8:
            exit(0);
            break;
        default:
            break;
        }
    }
    
    return 0;
    
}


void clear()
{
    system("PAUSE"); // press any key to continue..
    system("CLS"); // clear the screen
}
