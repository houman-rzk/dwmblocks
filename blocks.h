//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "sb-timer",							0,					9},
	{"", "sb-mem",									30,					5},
	{"", "sb-forecast",							60, 				2},
	{"", "sb-tasks",								0,					1},
	{"", "sb-music",								0,					7},
	{"", "sb-volume",								60,					6},
	{"", "sb-battery",							120,  			8},
	{"", "sb-clock",								30,					3},
	{"", "sb-network",							30,					4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "┃";
//static char *delim = " • ";
//static unsigned int delimLen = 5;
