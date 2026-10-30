#include"contact.h" //header file containing structure and function declarations
#include<stdio.h>   //for standard inputoutout
#include<ctype.h>   //for character functions
#include<string.h>  //for string functions

//function to create a new contact
void createContact(struct Addressbook *addressbook)
{
    //check whether address book is full or not
    if(addressbook->count>=100)
    {
        printf("Addressbook is Full\n");
        return;
    }
   int nflag=1; //variable to check valid name

   //repeat until correct name is entered
   do 
   {
        //get a name from user
        printf("Enter your Name: ");
        scanf(" %[^\n]",addressbook->contact[addressbook->count].name);
        
        //checks if name is valid or not
        if(isValid_name(addressbook->contact[addressbook->count].name))
        nflag=0;
        else
        printf("Your name should not contain special characters or any digits\n");

   }while(nflag);

    //variable to check valid mobile number
    int flag=1;
    //repeat until valid mobile number is entered
    do 
    {
        //get mobile no from user
        printf("Enter your Mobile No: ");
        scanf(" %[^\n]",addressbook->contact[addressbook->count].mobile);
    
    //checks if mobile number is valid or not
    if(isValid_mobile(addressbook->contact[addressbook->count].mobile)&&isMobile_unique(addressbook,addressbook->contact[addressbook->count].mobile))
    {
        flag=0;
    }
    else
    printf("Your number should contain 10 digits and it should be unique\n");

    }while(flag);

    //variable to check valid email
    int mflag=1;
    //repeat until valid email is entered
    do 
    {
        //get valid mail from user
        printf("Enter your Email: ");
        scanf(" %[^\n]",addressbook->contact[addressbook->count].email);

        //check whether the mail entered is valid or not
        if(isValid_mail(addressbook->contact[addressbook->count].email)&&is_emailUnique(addressbook,addressbook->contact[addressbook->count].email))
        mflag=0;
        else
        printf("Your mail should contain atleast one @ and one . and it should be unique\n");

    }while(mflag);

    //increase contact count
    addressbook->count++;

    //shows success message
    printf("Contact created successfully\n");
}