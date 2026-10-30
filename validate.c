#include<ctype.h>     //character handling functions
#include<string.h>    //string handling functions
#include"contact.h"   ////header file containing structure and function declarations

// Function to validate a mobile number
int isValid_mobile(char *mobile)
    {
        // Check if the mobile number has exactly 10 digits
        if(strlen(mobile)!=10)
        {
            return 0;
        }
        // Check whether every character is a digit
        for(int i=0;i<10;i++)
        {
            if(!isdigit(mobile[i]))
            {
                return 0;
            }
        }

        return 1; // if mobile number is valid
    }

    // Function to validate a name
    int isValid_name(char* name)
    {
        // Check if the name is empty
        if(strlen(name)==0)
        return 0;
        // Check each character of the name
        for(int i=0;i<strlen(name);i++)
        {
            // Allow only letters and spaces
            if(!isalpha (name[i]) && !isspace(name[i]))
            return 0;
            // Do not allow two consecutive spaces
            if(name[i]==' ' && name[i+1]==' ')
            return 0;
        }

        return 1; // if name is valid

    }
    // Function to validate a email address
    int isValid_mail(char* email)
    {
        // Check if the email is empty
        if(strlen(email)==0)
        return 0;
        // Check for consecutive spaces
        for(int i=0;i<strlen(email);i++)
        {
            if(email[i]==' ' && email[i+1]==' ')
            return 0;

        }
        // Check if '@' is present
        char* at=strchr(email,'@');
        if(at==NULL)
        return 0;
        // Check if '.' comes after '@'
        char* dot=strchr(at,'.');
        if(dot==NULL)
        return 0;

        return 1;   // if mail is valid
    }
    // Function to check whether the mobile number is unique
    int isMobile_unique(struct Addressbook *addressbook,char* mobile)
    {
        // Compare with all existing mobile numbers
        for(int i=0;i<addressbook->count;i++)
        {
            if(strcmp(addressbook->contact[i].mobile,mobile)==0)
            return 0;
        }
        return 1;  // if Mobile number is unique
    }
    // Function to check whether the email is unique
    int is_emailUnique(struct Addressbook *addressbook,char* email)
    {
        // Compare with all existing email addresses
        for(int i=0;i<addressbook->count;i++)
        {
            if(strcmp(addressbook->contact[i].email,email)==0)
            return 0;
        }
        return 1;  // if email is unique
    }