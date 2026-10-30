#include<stdio.h>     //for standard input output functions
#include"contact.h"  // Header file containing structure and function declarations
#include<string.h>   // String handling functions

// Function to delete a contact from the address book
void deleteContact(struct Addressbook *addressbook)
{
    // Check if the address book is empty
    if(addressbook->count==0)
    {
        printf("Addressbook is empty\n");
        return;
    }
     char delete_name[50];
     printf("Enter the name to delete: ");
     scanf("%[^\n]",delete_name);
     // Search for the contact by name
     for(int i=0;i<addressbook->count;i++)
     {
        // Check if the entered name matches
        if(strcmp(addressbook->contact[i].name,delete_name)==0)
        {
            for(int j=i;j<addressbook->count-1;j++)
            {
                addressbook->contact[j]=addressbook->contact[j+1];
            }
            // Reduce the total number of contacts
            addressbook->count--;

            // Display success message
            printf("Contact deleted successfully\n");
            return;
        }
     }
     // Display message if the contact is not found
     printf("Contact Not Found!!\n\n");
}