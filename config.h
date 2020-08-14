//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"pacpackages",	3600,	8},
	{"", "echo '|'",	 0,	0},
	{"",	"deadbeefstatus",	1,	1},
	{"",	"deadbeef --nowplaying '%e/%l'",	1,	1},
	{"",	"volume",	0,	10},
	/*{"",	"news",		0,	6},*/
	/* {"",	"crypto",	0,	13}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, */
	/* {"",	"price btc Bitcoin 💰",				0,	21}, */
	/* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, */
	/*{"",	"torrent",	20,	7},*/
	{"",	"memory",	5,      14},
	{"",	"cpuse",	1,	18},
	{"",	"cpu",	1,	18},
	{"", "echo '|'",	 0,	0},
	/* {"",	"moonphase",	18000,	17}, */
	/*{"",	"weather",	7200,	5},*/
      /*{"",	"mailbox",	180,	12},*/
	/*{"",	"battery",	5,	3},*/
	{"",	"clock",	1,	1},
/*	{"",	"nettraf",	1,	16},*/
	{"",	"internet",	5,	4},
	/*{"",	"help-icon",	0,	15},*/
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
