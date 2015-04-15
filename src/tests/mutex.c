#include <winlibc.h>

int main( int argc, char** argv )
{
    // GetOwningNewMutex
	HANDLE hMutex = GetOwningNewMutex();
	assert( hMutex != NULL );	
	CloseHandle( hMutex );

	// GetNewMutex
	hMutex = GetNewMutex();
	assert( hMutex != NULL );
	CloseHandle( hMutex );
	return 0;
}
