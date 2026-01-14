/* Include guard: */
#ifndef EA_C
#define EA_C

/* Importations: */
#include "C-Utils/cutils.h"
#include <stdio.h>


/* EA version variables: */
#define EA_FULL_VERSION  20260114 /* Extended Ascii full version variable.  */
#define EA_MAJOR_VERSION 2026     /* Extended Ascii major version variable. */
#define EA_MINOR_VERSION 01       /* Extended Ascii minor version variable. */
#define EA_PATCH_VERSION 14       /* Extended Ascii patch version variable. */

/* Main code: */
int main(void)
{
	/* Local variables: */
	unsigned char character = 0u; /* Stored character variable.             */
	int times = 0;                /* Times to print variable.               */

	/* Commands before main loop: */
	clear_terminal();

	/* Main loop: */
	while(character <= 251)
	{
		for(times = 0; times <= 5; ++times)
		{
			if(character >= 33u && character <= 126u)
			{
				if(character <= 99u)
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
				if(character <= 9u)
				{
					printf("  %d =   ", (int)character);
				}

				else if(character <= 32u)
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
