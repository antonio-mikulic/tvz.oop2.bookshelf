#include <System.hpp>

class BookInterface{
public:
	virtual void setBasicInfo(UnicodeString newName, UnicodeString newAuthorName, UnicodeString newStatus, int newPages) = 0;
	virtual void setDescription(UnicodeString newDescription) = 0;
	virtual UnicodeString getAuthorName() = 0;
	virtual UnicodeString getName() = 0;
	virtual UnicodeString getDescription() = 0;
	virtual UnicodeString getStatus() = 0;
	virtual int getPages() = 0;
};
