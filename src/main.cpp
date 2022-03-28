#include <iostream>
#include <string>
#include "time.h"

#include "macros.h"
#include "misc.h"


int
main ()
{
  while (true)
    {
      clsrc ();
      PRINT << "Bill Generator" << NEWLINE << NEWLINE;
      PRINT << "1. Generate a Bill" << NEWLINE;
      PRINT << "2. Open a Bill" << NEWLINE;
      PRINT << "3. Add and edit items" << NEWLINE;
      PRINT << "4. exit" << NEWLINE;

      STRING choice;
      PRINT << ":>> ";
      INPUT >> choice;

      if (choice == "1")
	{
	}
      else if (choice == "2")
	{
	}
      else if (choice == "3")
	{
	}
      else if (choice == "4")
	{
	  exit (0);
	}
      else
	{
	  PRINT << "That was inappropriate choice" << NEWLINE;
	  PRINT << "Press any c or any key to continue: ";
	  STRING tmp;
	  INPUT >> tmp;
	  clsrc ();
	}
    }
}
