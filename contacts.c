/* -------------------------------------------
 Name:              Pray Vakta
 Student number:    011481124
 Email:             pavakta@myseneca.ca
 Section:           FF
 Date:              July 11, 2018
 ----------------------------------------------
 Assignment: 1
 Milestone:  4
 ---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"


// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:
void getName(struct Name* name)
{
    char option = '\0';
    
    printf("Please enter the contact's first name: ");
    scanf("%[^\n]", name->firstName);
    
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    scanf(" %c", &option);
    if (option == 'y' || option == 'Y'){
        printf("Please enter the contact's middle initial(s): ");
        scanf(" %[^\n]", name->middleInitial);
    }
    printf("Please enter the contact's last name: ");
    scanf(" %[^\n]", name->lastName);
}

// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address* address)
{
    int error = 0;
    char option = '\0';
    
    printf("Please enter the contact's street number: ");
    error = 0;
    do {
        scanf("%d", &address->streetNumber);
        if (address->streetNumber <= 0){
            printf("INVALID ENTRY!!! Please enter a positive Street number: ");
            error = 1;
        } else error = 0;
    }while (error == 1);
    printf("Please enter the contact's street name: ");
    scanf(" %[^\n]", address->street);
    
    option = '\0';
    printf("Do you want to enter an apartment number? (y or n): ");
    scanf(" %c", &option);
    if (option == 'y' || option == 'Y') {
        printf("Please enter the contact's apartment number: ");
        error = 0;
        do {
            scanf("%d", &address->apartmentNumber);
            if (address->apartmentNumber <= 0){
                printf("INVALID ENTRY!!! Please enter a positive apartment number: ");
                error = 1;
            } else error = 0;
        } while (error == 1);
    }
    printf("Please enter the contact's postal code: ");
    scanf(" %[^\n]", address->postalCode);
    printf("Please enter the contact's city: ");
    scanf(" %[^\n]", address->city);
}

// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers* numbers)
{
    char option = '\0';
    
    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf(" %c", &option);
    if (option == 'y' || option == 'Y') {
        printf("Please enter the contact's cell phone number: ");
        scanf(" %[^\n]", numbers->cell);
    }
    option = '\0';
    printf("Do you want to enter a home phone number? (y or n): ");
    scanf(" %c", &option);
    if (option == 'y' || option == 'Y') {
        printf("Please enter the contact's home phone number: ");
        scanf(" %[^\n]", numbers->home);
    }
    option = '\0';
    printf("Do you want to enter a business phone number? (y or n): ");
    scanf(" %c", &option);
    if (option == 'y' || option == 'Y') {
        printf("Please enter the contact's business phone number: ");
        scanf(" %[^\n]", numbers->business);
    }
}

//Function to display the output of the stored values
void display(struct Contact* summary)
{
    printf("Contact Details\n"
           "---------------\n"
           "Name Details\n"
           "First name: %s\n"
           "Middle initial(s): %s\n"
           "Last name: %s\n\n", summary->name.firstName, summary->name.middleInitial, summary->name.lastName);
    
    printf("Address Details\n"
           "Street number: %d\n"
           "Street name: %s\n"
           "Apartment: %d\n"
           "Postal code: %s\n"
           "City: %s\n\n", summary->address.streetNumber, summary->address.street, summary->address.apartmentNumber, summary->address.postalCode, summary->address.city);
    
    printf("Phone Numbers:\n"
           "Cell phone number: %s\n"
           "Home phone number: %s\n"
           "Business phone number: %s\n\n", summary->numbers.cell, summary->numbers.home, summary->numbers.business);
}
