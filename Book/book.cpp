#include "book.h"
#include <iostream>
using namespace std;


void Book::setBasicInfo(UnicodeString newName, UnicodeString newAuthorName, UnicodeString newStatus, int newPages){
	name = newName;
	authorName = newAuthorName;
	status = newStatus;
	pages = newPages;
}
void Book::setDescription(UnicodeString newDescription){
	description = newDescription;
}
void Book::release(){delete this;}
UnicodeString Book::getAuthorName(){ return authorName; }
UnicodeString Book::getName(){ return name; }
UnicodeString Book::getDescription(){ return description; }
UnicodeString Book::getStatus(){ return status; }
int Book::getPages(){ return pages; }

