#include<stdio.h>     //for standard input and output
#include"contact.h"   //header file containing structure and function declarations
#include<string.h>    //
// Function to edit an existing contact
void editContact(struct Addressbook *addressbook)
{
    // Check if the address book is empty
    if(addressbook->count==0)
    {
        printf("Addressbook is empty\n");
        return;
    }

    char edit_name[50];
    printf("Enter the name to edit: ");
    scanf(" %[^\n]",edit_name);
    // Search for the contact by name
    for(int i=0;i<addressbook->count;i++)
    {
        if(strcmp(addressbook->contact[i].name,edit_name)==0)
        {
            int nflag=1;  // Flag for name validation
            // Get a valid new name
            do 
            {
                    printf("Enter new your Name: ");
                    scanf(" %[^\n]",addressbook->contact[addressbook->count].name);

                    if(isValid_name(addressbook->contact[addressbook->count].name))
                    nflag=0;
                    else
                    printf("Your name should not contain special characters or any digits\n");

            }while(nflag);


           int flag=1;   // Flag for mobile number validation
            // Get a valid mobile number
            do 
            {
                printf("Enter your new Mobile No: ");
                scanf(" %[^\n]",addressbook->contact[addressbook->count].mobile);
            
            if(isValid_mobile(addressbook->contact[addressbook->count].mobile))
            {
                flag=0;
            }
            else
            printf("Your number should contain 10 digits\n");

            }while(flag);
            getchar();  //removes new line
            
            int mflag=1;   // Flag for email validation
            // Get a valid email address
            do 
            {
                printf("Enter your Email: ");
                scanf(" %[^\n]",addressbook->contact[addressbook->count].email);
                if(isValid_mail(addressbook->contact[addressbook->count].email))
                mflag=0;
                else
                printf("Your mail should contain atleast one @ and one .\n");

            }while(mflag);
            getchar();

            printf("Contact Updated successfully\n");
            return;
        }
    }
    // Display message if contact is not found
    printf("Not Found!\n");
}