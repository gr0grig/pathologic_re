include std.sci
include world_wnd_messages.sci

int AddMessage(int iTitle, int iText) { 
	int iIndex;
	@AddMessage(iTitle, iText, iIndex);
	@SendWorldWndMessage(c_iWM_PlayerMail);
	return iIndex;
}

int AddMessage(int iTitle, int iText, float fTime) { 
	int iIndex;
	@AddMessage(iTitle, iText, fTime, iIndex);
	@SendWorldWndMessage(c_iWM_PlayerMail);
	return iIndex;
}
