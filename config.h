/* user and group to drop privileges to */
static const char *user  = "mi";
static const char *group = "mi";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#3b4252",     /* after initialization */
	[INPUT] =  "#3b4252",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

static const char *imgpath          = "/home/mi/.local/share/image.xpm";
static const int imgwidth           = 1920;
static const int imgheight          = 1080;
static const int imgoffsetx         = 0;
static const int imgoffsety         = 0;
static const int showimgonlyatstart = 1;
