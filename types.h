


#ifndef TYPES_H /* include  Guarding */
#define TYPES_H

/* structure to hold the informations of a single contact */
typedef struct {
    char firstName[40];
    char lastName[40];
    char age[10];
    char email[50];
    char blood[10];
    char interest[100];
    char skill[100];
    char mobileNumber[20];
    char address[50];
    char adress[50];
    char id[100];
    char qualification[100];
    char jobtitle[50];
} Contact;
/* enumerator for different search types */
typedef enum { FIRST_NAME, LAST_NAME, MOBILE_NUMBER,DISTRICT } search_t;

#endif // TYPES_H

