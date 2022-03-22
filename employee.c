

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"
#include "employee.h"
#include "utilities.h"



#define MAX_SIZE 100

  /* array to hold our contacts */
Contact employee[MAX_SIZE];



/* current size of the employee array */
int currentSize = 0,i,j,k;
int ssss(char v[])
{
    int i,l,o=0,p=0,q=0;
    l=strlen (v);
    for (i=0;i<l;i++)
    {
        if (v[i]<48 || v[i]>57) o=5;
        if (v[i]>=48 && v[i]<=57) p=3;
    }
    return o+p;
}

void addEntry()
{
    if(currentSize == MAX_SIZE) {
        puts("Error: employee list is fulL!");
        return;
    }

    Contact c;
    printf("If you want to skip any option press  any character but * are must necessary\n");
    read:
    printf("*Enter ID : ");
    gets(c.id);  
    i=ssss(c.id);
    if((i==8) || (i==5))
    {
        printf("Invalid Input\n");
        goto read;
    }
    r:
    printf("*Enter First Name: ");
    gets(c.firstName);
    i=ssss(c.firstName);
    if((i==8) || (i==3))
    {
        printf("Invalid Input\n");
        goto r;
    }
    e:
    printf("*Enter Last Name: ");
    gets(c.lastName);
    i=ssss(c.lastName);
    if((i==8) || (i==3))
    {
        printf("Invalid Input\n");
        goto e;
    }
    a:
    printf("*Enter Your Age : ");
    gets(c.age);
    i=ssss(c.age);
    if((i==8) || (i==5))
    {
        printf("Invalid Input\n");
        goto a;
    }
    d:
    printf("*Enter your Blood Group :");
    gets(c.blood);
    i=ssss(c.age);
    if((i==8) || (i==5))
    {
        printf("Invalid Input\n");
        goto d;
    }
    
    
    u:
    printf("*Enter Mobile Number: ");
    gets(c.mobileNumber);
    i=ssss(c.mobileNumber);
    if((i==8) || (i==5))
    {
        printf("Invalid Input\n");
        goto u;
    }
    o:
    printf("Enter Your Email Address : ");
    gets(c.email);
    
    p:
    printf("*Enter Present Address: ");
    gets(c.address);
    i=ssss(c.address);
    if((i==8) || (i==3))
    {
        printf("Invalid Input\n");
        goto p;
    }
    q:
    printf("*Enter permanent Address: ");
    gets(c.adress);
    i=ssss(c.adress);
    if((i==8) || (i==3))
    {
        printf("Invalid Input\n");
        goto q;
    }
    s:
    printf("*Enter Qualification : ");
    gets(c.qualification);
    i=ssss(c.qualification);
    if((i==8) || (i==3))
    {
        printf("Invalid Input\n");
        goto s;
    }
    t:
    printf("Enter your Interest :");
    gets(c.interest);
    i=ssss(c.interest);
    if((i==8) || (i==3))
    {
        printf("Invalid Input\n");
        goto t;
    }
    v:
    printf("Enter your Extra Skill :");
    gets(c.skill);
    i=ssss(c.skill);
    if((i==8) || (i==3))
    {
        printf("Invalid Input\n");
        goto v;
    }
    w:
    printf("Enter Jobtitle : ");
    gets(c.jobtitle);
    i=ssss(c.jobtitle);
    if((i==8) || (i==3))
    {
        printf("Invalid Input\n");
        goto w;
    }



    employee[currentSize] = c;
    ++currentSize;

    printf("\nContact added.\n");
}

void display(int index)
{
    if(index < 0 || index >= currentSize) {
        puts("Error: invalid index!");
        return;
    }

    Contact c = employee[index];
    printf("   Id : %s\n", c.id);
    printf("   First Name: %s\n", c.firstName);
    printf("   Last Name : %s\n", c.lastName);
    printf("   Age : %s\n", c.age);
    printf("   Blood group  : %s\n", c.blood );
    printf("   Mobile No : %s\n", c.mobileNumber);
    printf("   Email Address : %s\n", c.email);
    printf("   Present Address: %s\n", c.address);
    printf("   Permanent Address: %s\n", c.adress);
    printf("   Qualification: %s\n", c.qualification);
    printf("   Interest  : %s\n", c.interest );
    printf("   Extra skill  : %s\n", c.skill );
    printf("   Jobtitle: %s\n", c.jobtitle);




}

void displayAll()
{
    if(currentSize == 0) {
        puts("Employee list is empty!");
        return;
    }
    int i;
    for(i=0; i<currentSize; i++) {
        display(i);
        puts(""); // extra new line
    }
}

void search(char *key, search_t type)
{
    int found = 0;
    int i;

    strtolower(key);
    char content[41];

    if(type == FIRST_NAME) { // search by first name
        for(i=0; i<currentSize; i++) {

            strcpy(content, employee[i].firstName);
            strtolower(content);

            if(strcmp(content, key) == 0) {
                display(i);
                found = 1;
            }
        }
    }
    else if(type == LAST_NAME) { // search by last name
        for(i=0; i<currentSize; i++) {
            strcpy(content, employee[i].lastName);
            strtolower(content);

            if(strcmp(content, key) == 0) {
                display(i);
                found = 1;
            }
        }
    }
    else if(type  == MOBILE_NUMBER) { // search by mobile number
        for(i=0; i<currentSize; i++) {
            strcpy(content, employee[i].mobileNumber);
            strtolower(content);

            if(strcmp(content, key) == 0) {
                display(i);
                found = 1;
            }
        }
    }

    else {
        puts("Error: invalid search type!");
        return;
    }

    if(!found) {
        puts("Not found in the employee list");
    }

}



void removeEntry(char *id)
{
    if(currentSize == 0) {
        puts("Employee list is empty! Nothing to delete!");
        return;
    }


    int i, j;
    int count = 0;
    for(i=0; i<currentSize; i++) {
        if(strcmp(employee[i].id, id) == 0) {
            for(j=i; j<currentSize-1; j++) {
                employee[j] = employee[j+1];
            }

            strcpy(employee[j].firstName, "");
            strcpy(employee[j].lastName, "");
            strcpy(employee[j].id, "");

            currentSize -= 1;
            ++count;
        }
    }
    if(count == 0) {
        puts("No entry deleted");
    }
    else {
        printf("%d entries deleted\n", count);
    }
}

void readFromFile()
{
    FILE *fp;
    if((fp = fopen("employee.txt", "r")) == NULL) {

        return;
    }


    /* read the size of the employee list */
    if(fread(&currentSize, sizeof(currentSize), 1, fp) != 1) {
        puts("Error: can't read data!");
        return;
    }

    /* read the actual employee list content */
    if(fread(employee, sizeof(employee), 1, fp) != 1) {
        puts("Error: can't read data!");
        return;
    }

}

void saveToFile()
{
    FILE *fp;
    if( (fp = fopen("employee.txt", "w")) == NULL ) {
        puts("Error: can't create a database file!");
        return;
    }

    /* Save the current size of the employee list*/
    if (fwrite(&currentSize, sizeof(currentSize), 1, fp) != 1 ) {
        puts("Error: can't save data!");
        return;
    }

    /* save the employee list contents */
    if(fwrite(employee, sizeof(employee), 1, fp) != 1) {
        puts("Error: can't save data!");
        return;
    }

    puts("Employee list saved to file successfully!");
}

