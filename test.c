#include <locale.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	printf("is _UCRT defined?  ");
#ifdef _UCRT
	printf("yes: ", _UCRT);
#else
	printf("no\n");
#endif

	printf("does _configthreadlocale() work?  ");
	printf(_configthreadlocale(_ENABLE_PER_THREAD_LOCALE) == -1 ? "no\n" : "yes\n");

    return 0;
}
