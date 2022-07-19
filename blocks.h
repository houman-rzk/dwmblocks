//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-mem",								30,		1},
	{"", "sb-forecast",							7200,	2},
	{"", "sb-tasks",							0,		5},
	{"", "sb-music",							0,		7},
	{"", "sb-volume",							0,		6},
	{"", "sb-battery",							900,	8},
	{"", "sb-clock",							30,		3},
	{"", "sb-network",							30,		4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "┃";
//static char *delim = " • ";
//static unsigned int delimLen = 5;
