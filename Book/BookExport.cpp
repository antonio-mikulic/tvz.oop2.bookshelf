#pragma hdrstop
#pragma argsused
#include "book.h"

extern "C" __declspec(dllexport) void* __stdcall CreateBook(){
        return static_cast<void*>(new Book);
}


extern "C" int _libmain(unsigned long reason){
	return 1;
}

