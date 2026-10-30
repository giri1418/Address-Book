#include<stdio.h>     //standard input and output functions
#include"contact.h"   // Header file containing structure and function declarations

// Function to display all contacts in the address book
void displayallContacts(struct Addressbook *addressbook)
{
    // Check if the address book is empty
    if(addressbook->count==0)
    {
        printf("Addressbook is Empty\n");
        return;
    }
 
    // print a seperator line
    printf("----------------------------------------------------------------\n");

    // Display each contact one by one
    for(int i=0;i<addressbook->count;i++)
    {
        printf("Name: %s\n",addressbook->contact[i].name);
        printf("Mobile: %s\n",addressbook->contact[i].mobile);
        printf("Email: %s\n",addressbook->contact[i].email);
       
        printf("----------------------------------------------------------------\n");

    }
    
}