#include <stdlib.h>
#include <windows.h>
#include "Threads.h"

void Bar()
{

}

void Foo()
{
	atexit(Bar);
}

int main(int argc, char* argv[])
{
	atexit(Foo);
	return 0;
}

