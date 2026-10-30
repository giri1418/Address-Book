#include<stdio.h>     //for standard input and output
#include"contact.h"   //header file containing structure and function declarations
#include<string.h>    //for string functions

void searchContact(struct Addressbook *addressbook)
{
    int choice;  //variable to store user choice
    //display menu
    printf("1.Name\n2.Mobile No\n3.Email\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    getchar(); // Remove newline character from input buffer

    //call the required search function
    switch(choice)
    {
        case 1: 
                search_name(addressbook);
                break;
        case 2:
                search_mobile(addressbook);
                break;
        case 3:
                search_email(addressbook);
                break;
        default:
                printf("Invalid option!!\n");

    }

}
// Function to search a contact by name
void search_name(struct Addressbook *addressbook)
{
    //check if addressbook is empty or not
    if(addressbook->count==0)
    {
        printf("Addressbook is Empty\n");
        return;
    }

    char search_name[50];
    printf("Enter the name to search\n");
    scanf("%[^\n]",search_name);
    //compoare entered name with every contact
    for(int i=0;i<addressbook->count;i++)
    {
        if(strcmp(addressbook->contact[i].name,search_name)==0)
        {
            printf("Found\n");
            printf("Name: %s\n",addressbook->contact[i].name);
            printf("Mobile: %s\n",addressbook->contact[i].mobile);
            printf("Email: %s\n",addressbook->contact[i].email);
            return;
        }
        
    }
    //display message if contact is not found
    printf("Not Found!\n");
}
// Function to search a contact by mobile number
void search_mobile(struct Addressbook *addressbook)
{
    // Check if the address book is empty
    if(addressbook->count==0)
    {
        printf("Addressbook is Empty\n");
        return;
    }
    char search_mobile[20];
    printf("Enter the mobile no to search:\n");
    scanf("%[^\n]",search_mobile);
    //Compare entered mobile number with every contact
    for(int i=0;i<addressbook->count;i++)
    {
        if(strcmp(addressbook->contact[i].mobile,search_mobile)==0)
        {
            printf("Found\n");
            printf("Name: %s\n",addressbook->contact[i].name);
            printf("Mobile: %s\n",addressbook->contact[i].mobile);
            printf("Email: %s\n",addressbook->contact[i].email);
            
            return;
        }
    }
    // Display message if mobile number is not found
    printf("Not Found\n");

}
// Function to search a contact by email
void search_email(struct Addressbook *addressbook)
{
    // Check if the address book is empty
    if(addressbook->count==0)
    {
        printf("Addressbook is Empty\n");
        return;
    }
    char search_email[50];
    printf("Enter the email: ");
    scanf("%[^\n]",search_email);
    // Compare entered email with every contact
    for(int i=0;i<addressbook->count;i++)
    {
        if(strcmp(addressbook->contact[i].email,search_email)==0)
        {
            printf("Found\n");
            printf("Name: %s\n",addressbook->contact[i].name);
            printf("Mobile: %s\n",addressbook->contact[i].mobile);
            printf("Email: %s\n",addressbook->contact[i].email);
            return;
        }
    }
    //display message if email is not found
    printf("Not Found\n");
}
