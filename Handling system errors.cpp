// Controling system errors 
//

#include <cstdio>
#include <cerrno>
#include <cstring>

int main()
{

	printf("Errno is %d \n", errno);			// Errno gives a integer value
	remove("File");
	printf("Errno is %d \n", errno);			// Errno gives a integer value
	perror("Cannot do it ");					// Prints the error associated with that number

	const char* errstr = strerror(errno);
	printf("The error is %s", errstr);

	return 0;
}