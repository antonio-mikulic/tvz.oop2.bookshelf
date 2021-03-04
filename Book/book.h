#include "BookInterface.h"
class Book : public BookInterface{
	UnicodeString name;
	UnicodeString authorName;
	UnicodeString description;
	UnicodeString status;
	int pages;

public:
	void setBasicInfo(UnicodeString newName, UnicodeString newAuthorName, UnicodeString newStatus, int newPages);
	void setDescription(UnicodeString newDescription);
    void release();
	UnicodeString getAuthorName();
	UnicodeString getName();
	UnicodeString getDescription();
	UnicodeString getStatus();
	int getPages();


};

