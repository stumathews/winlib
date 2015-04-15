#include <windows.h>
#include <process.h>

HANDLE GetOwningNewMutex()
{
	HANDLE hMutex = CreateMutex(
				    // lpMutexAttributes 
				    NULL,
			            // bInitialOwner 
				    TRUE,
			            // lpName
				    NULL );
	return hMutex;
}

HANDLE GetNewMutex()
{
	HANDLE hMutex = CreateMutex(
				    // lpMutexAttributes 
				    NULL,
			            // bInitialOwner 
				    FALSE,
			            // lpName
				    NULL );
	return hMutex;
				 
}



