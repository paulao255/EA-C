/* Include guard: */
#ifndef EXTENDED_ASCII_C
#define EXTENDED_ASCII_C

/* Importations: */
#include <cutils.h>
#include <stdio.h>


/* Main code: */
int main()
{
	/* Version variables: */
	#define EXTENDED_ASCII_FULL_VERSION  100.0L /* Extended Ascii full version variable.  */
	#define EXTENDED_ASCII_MAJOR_VERSION   1.0L /* Extended Ascii major version variable. */
	#define EXTENDED_ASCII_MINOR_VERSION   0.0L /* Extended Ascii minor version variable. */
	#define EXTENDED_ASCII_PATCH_VERSION   0.0L /* Extended Ascii patch version variable. */

	/* Local variables: */
	unsigned char character = 0u;               /* Stored character variable.             */
	int times = 0;                              /* Times to print variable.               */

	/* Commands before main loop: */
	CLEAR_TERMINAL();

	/* Main loop: */
	while(character <= 251)
	{
		for(times = 0; times <= 5; ++times)
		{
			if(character >= 33u && character <= 126u)
			{
				if(character <= 99)
				{
					printf(" %d = %c ", (int)character, character);
				}

				else
				{
					printf("%d = %c ", (int)character, character);
				}
			}

			else
			{
				if(character <= 9)
				{
					printf("  %d =   ", (int)character);
				}

				else if(character <= 32)
				{
					printf(" %d =   ", (int)character);
				}

				else
				{
					printf("%d =   ", (int)character);
				}
			}

			++character;
		}

		fputs("\n", stdout);
	}

	for(times = 0; times <= 3; ++times)
	{
		printf("%d =   ", (int)character);
		++character;
	}

	return 0;
}

/* End code: */
#endif
