#include<stdio.h>    //standard input and output functions
#include"contact.h"  //header file containing structure and function declarations
#include<string.h>   //string handling functions

// Function to save all contacts into a file
void savecontact(struct Addressbook *addressbook)
{
    // Open the file in write mode
    FILE *fptr=fopen("contact.csv","w");
    // Check if the file is opened successfully
    if(fptr==NULL)
    {
        printf("File Not Found\n");
        return;
    }
    // Save the total number of contacts in the first line
    fprintf(fptr, "#%d\n", addressbook->count);
    // Write each contact's details into the file
    for(int i=0;i<addressbook->count;i++)
    {
        fprintf(fptr,"%s,%s,%s\n",addressbook->contact[i].name,
                                addressbook->contact[i].mobile,
                                addressbook->contact[i].email);
    }
    // Close the file
    fclose(fptr);
    // Display success message
    printf("Contacts saved successfully\n");
}