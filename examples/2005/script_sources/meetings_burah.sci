include std.sci
include bgame.sci

void MeetingSpi4ka(object actor) {
	int iMeeting;
	@GetVariable("mt_spi4ka", iMeeting);
	
	if (!iMeeting) {
		TDlg_Mt_Burah_Spi4ka{actor}; 
		@SetVariable("mt_spi4ka", 1);
	}
}	
