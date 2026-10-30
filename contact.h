#ifndef CONTACT_H
#define CONTACT_H


struct contact  //structure to store contact details
{
    char name[50];    //contact name
    char mobile[20];  //mobile number
    char email[50];   //email address
};
//structure to store all contacts
struct Addressbook 
{
    struct contact contact[100]; //array of contacts
    int count;                   //no of contacts
  
};
//function to create a new contact
void createContact(struct Addressbook *addressbook);
//function to search a contact
void searchContact(struct Addressbook *addressbook);
//function to edit a contact
void editContact(struct Addressbook *addressbook);
//function to delete a contact
void deleteContact(struct Addressbook *addressbook);
//function to display all contacts
void displayallContacts(struct Addressbook *addressbook);
//function to save a contact
void savecontact(struct Addressbook *addressbook);
//function to load contacts
void loadcontact(struct Addressbook *addressbook);


// Function to search a contact by name
void search_name(struct Addressbook *addressbook);
// Function to search a contact by mobile
void search_mobile(struct Addressbook *addressbook);
// Function to search a contact by email
void search_email(struct Addressbook *addressbook);


//function to validate a mobile number
int isValid_mobile(char*);
//function to validate name
int isValid_name(char*);
//function to validate a email
int isValid_mail(char*);
//function to validate whether a mobile is unique
int isMobile_unique(struct Addressbook *addressbook,char* mobile);
//function to validate whether a email is unique or not
int is_emailUnique(struct Addressbook *addressbook,char* email);

#endif