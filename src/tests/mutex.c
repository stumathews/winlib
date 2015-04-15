#include <winlibc.h>

int main( int argc, char** argv )
{
	HANDLE hMutex = GetOwningNewMutex();
	assert( hMutex != NULL );	
	CloseHandle( hMutex );
	return 0;
}
