#define Q_RECKILL  1
#define Q_NETMAIL  4
#define Q_PRIVATE  8
#define Q_RECEIVED 16
#define Q_LOCAL    32+64

#define Q_KILL  1
#define Q_SENT  2
#define Q_FILE  4
#define Q_CRASH 8
#define Q_FRQ   16
#define Q_ARQ   32
#define Q_CPT   64

struct _msginfo {
	word lowmsg;
	word highmsg;
	word totalmsgs;
	word totalonboard[200];
};

struct _msgidx {
	int  msgnum;
	byte board;
};

struct _msgtoidx {
	char string[36];
};

struct _msghdr {
	int  msgnum;
	word prevreply;
	word nextreply;
	word timesread;
	word startblock;
	word numblocks;
	word destnet;
	word destnode;
	word orignet;
	word orignode;
	byte destzone;
	byte origzone;
	word cost;
	byte msgattr;
	byte netattr;
	byte board;
	char time[6];
	char date[9];
	char whoto[36];
	char whofrom[36];
	char subject[73];
};