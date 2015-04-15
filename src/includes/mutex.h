#include <winlibc.h>

/**
* \breif Creates a new mutex object and make it owned by you initially
*/
LIBRARY_API HANDLE GetOwningNewMutex();

/**
* \breif Creates a new mutex object that is unowned.
* This means you'll need to 'obtain it' by waiting on it
*/
LIBRARY_API HANDLE GetNewMutex();
