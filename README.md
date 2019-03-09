# rangeblocker
Block range of numbers in Google Voice

This is a simple program that lets you enter the area code and number prefix for a range of US phone numbers (i.e. enter AAA-BBB-xxxx). It then generates a CSV with all 10,000 numbers in the range assigned to 100 different "Spam" contacts in Google Contacts format. You can use this to block a range of numbers from ringing your Google Voice number as follows:

1. Import the CSV to Google Contacts.
2. Change the name of the imported group to "Spam" or whatever else you want.
3. Open Google Voice on the computer and choose "Legacy Google Voice".
4. Under Settings / Groups select the new contact group and change the preferences so it either screens your calls or doesn't ring your phones.
