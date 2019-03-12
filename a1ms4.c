/* -------------------------------------------
 Name:              Pray Vakta
 Student number:    011481124
 Email:             pavakta@myseneca.ca
 Section:           FF
 Date:              06 July 2018
 ----------------------------------------------
 Assignment: 1
 Milestone:  4
 ---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"

int main (void)
{
    // Declare variables here:

    struct Contact contact = { { {'\0'} }, {0, {'\0'}, 0, {'\0'}, {'\0'} }, { {'\0'} } };

    // Display the title
    printf("Contact Management System\n"
           "-------------------------\n");
    
    // Contact Name Input:

    getName(&contact.name);
    
    // Contact Address Input:
    getAddress(&contact.address);
   
    // Contact Numbers Input:

    getNumbers(&contact.numbers);
    printf("\n");
    
    // Display Contact Summary Details

    display(&contact);

    // Display Completion Message

    printf("Structure test for Contact using functions done!\n");
    
    return 0;
}

/*  SAMPLE OUTPUT:
 
 Contact Management System
 -------------------------
 Please enter the contact's first name: Tom
 Do you want to enter a middle initial(s)? (y or n): y
 Please enter the contact's middle initial(s): Wong
 Please enter the contact's last name: Song
 Please enter the contact's street number: 20
 Please enter the contact's street name: Keele
 Do you want to enter an appartment number? (y or n): y
 Please enter the contact's appartment number: 40
 Please enter the contact's postal code: A8A 4J4
 Please enter the contact's city: Toronto
 Do you want to enter a cell phone number? (y or n): Y
 Please enter the contact's cell phone number: 905-111-6666
 Do you want to enter a home phone number? (y or n): Y
 Please enter the contact's home phone number: 705-222-7777
 Do you want to enter a business phone number? (y or n): Y
 Please enter the contact's business phone number: 416-333-8888
 
 Contact Details
 ---------------
 Name Details
 First name: Tom
 Middle initial(s): Wong
 Last name: Song
 
 Address Details
 Street number: 20
 Street name: Keele
 Apartment: 40
 Postal code: A8A 4J4
 City: Toronto
 
 Phone Numbers:
 Cell phone number: 905-111-6666
 Home phone number: 705-222-7777
 Business phone number: 416-333-8888
 
 Structure test for Name, Address, and Numbers Done!
 */

