//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-mem",								10,		0},
	{"", "sb-forecast",							10,		0},
	{"", "sb-clock",							30,		1},
	{"", "sb-network",							10,		2},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
//static unsigned int delimLen = 5;
