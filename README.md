# cpplife
Probably the most difficult to debug \[lang\]life since C++ makes up gibberish for errors :P

# Usage Instructions
You're gonna need a C++ compiler, either use Visual Studio on windows, or g++ on unix. If your OS supports GNU Make and has g++ then I recommend using the makefile for easy compilation of the program.
Now what are the differences between the 2?
Windows has a guarantee that the colour lib will work since Windows C++ API works with modifying the terminal colours.
Linux might not work so well colour wise since it uses specific characters to modify the terminal colours, they probably are supported by most computers but older computers might see gibberish instead of them.

# credits
Vincent Godin 2006, ConsoleColor.h -> "colors.h" (no license was given, but this feels right)
