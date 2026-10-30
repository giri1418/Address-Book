/*
Author : Kancharla Giri Babu
Date   : 18-06-2026
Title  : Address Book
Description : 
This is an Address book project developed using C language.
Using this we can store the contact details and also we can manage the contact details.

Using this project we can perform some operations like :
- Create a new contact
- Search a new contact
- Edit an existing contact
- Delete an existing contact
- Display all the contacts
- Save the contacts to a file
- Load the contacts from a file
Each contact contains
. Name
. Mobile
. email

In this project, we use strings,functions,file io,structures,arrays concepts to develop a c program.
The program also check whether whether the email,mobile entered is unique/valid or not while saving the contact. 

*/
#include<stdio.h>       //standard input and output functions
#include"contact.h"     //header file containing structure and function declarations
int main()
{
    //create an addressbook
    struct Addressbook addressbook;
    //initialise contact count to 0
    addressbook.count = 0;
    //load saved contacts from the file
    loadcontact(&addressbook);
    //variable to store user choice
    int choice;
    do
    {
        //display the main menu
        printf("1.Create contact\n");
        printf("2.Search contact\n");
        printf("3.Edit contact\n");
        printf("4.Delete contact\n");
        printf("5.Display all contacts\n");
        printf("6.Save contacts\n");
        printf("7.Load contacts\n");
        printf("8.Exit\n");
         
        // Read user's choice
        printf("Enter your choice: ");
        scanf("%d",&choice);
        getchar();  //removes new line
        
        //select a option
        switch(choice)
        {
            case 1: 
                    //to create a new contact
                    createContact(&addressbook);
                    break;
            case 2:
                    //to search an existing contact
                    searchContact(&addressbook);
                    break;
            case 3:
                    //to edit an existing contact
                    editContact(&addressbook);
                    break;
            case 4:
                     //to delete an existing contact
                    deleteContact(&addressbook);
                    break;
            case 5:
                     //to display all contacts 
                    displayallContacts(&addressbook);
                    break;
            case 6:
                    //to save contacts into the file
                    savecontact(&addressbook);
                    break;
            case 7: 
                    //to load contacts in a file
                    loadcontact(&addressbook);
                    break;
            case 8:
                    //exit the program
                    printf("Exit\n");
                    printf("Thank you!!!\n");
                    break;
        
            default:
                    //if choice exceeds the limit prints invalid
                    printf("Invalid choice !! chose between 1 to 8\n");

        }
    }while(choice!=8); //continue until exit selected

    return 0;
    
}