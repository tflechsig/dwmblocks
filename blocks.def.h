//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"" , "date '+%b %d (%a) %I:%M%p'"    , 60,   0},
	{"" , "source ~/.config/dwm/dwmblocks/statusbar_volume.sh"  ,  0,   9},
	{"" , "source ~/.config/dwm/dwmblocks/statusbar_network.sh" ,  0,  10},
	{"" , "source ~/.config/dwm/dwmblocks/statusbar_power.sh"   ,  0,  11},
};

//end of block
//delimiter should not be part of block button
//NOTE: This means 31 cannot be used as an update signal
static char block_end[] = "\x1f";
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
