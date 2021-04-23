#ifndef PERSON_H
#define PERSON_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DIM 10

typedef struct Person_struct {
	char name[40];
	char surname[40];
	char dateOfBirth[11];
	char phoneNumber[11];
	char emailAddress[100];
	char address[100];
} Person;

void dataEntry(Person *);
void createContact();
void retrieveContact();
void updateContact();
void deleteContact();
void printPerson(Person);
void printAddressBook(Person *);

#endif
