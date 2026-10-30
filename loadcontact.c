#include<stdio.h>    //standard input and output functions
#include"contact.h"  //header file containing structure and function declarations
// Function to load contacts from a file
void loadcontact(struct Addressbook *addressbook)
{

         // Open the file in read mode
         FILE *fptr=fopen("contact.csv","r");
// Check if the file exists
if(fptr==NULL)
{
    printf("File not found\n");
    addressbook->count=0;  //set the contact count to zero
    return;
}
// Read the total number of contacts from the file
fscanf(fptr,"#%d\n",&addressbook->count);
// Display the number of contacts loaded
printf("#%d\n",addressbook->count);

// Read each contact from the file
for(int i=0;i<addressbook->count;i++)
{
 
    fscanf(fptr," %[^,],%[^,],%[^,]\n",addressbook->contact[i].name,
                                     addressbook->contact[i].mobile,
                                     addressbook->contact[i].email);
}
// Close the file
fclose(fptr);
// Display success message
printf("Contacts loaded successfully\n");

}
