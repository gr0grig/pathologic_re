include std.sci

bool IsKlara2SvitaRemoved(int iDay) { // iDay [ 1 ... 12 ]
	int iVal;
	@GetVariable("K2SystemSvitaRemoved" + iDay, iVal);
	return (iVal != 0);
}

void SetKlara2SvitaRemoved(int iDay, bool bRemoved) { // iDay [ 1 ... 12 ]
	@SetVariable("K2SystemSvitaRemoved" + iDay, bRemoved ? 1 : 0);
}

void SetKlara2SvitaOO(string prefix) {
	int iDay;
	@GetProperty("day", iDay);
	@SetVariable("K2S_Klara2Svita" + prefix + iDay, 1);	
}

bool IsKlara2SvitaOO(string prefix) {
	int iDay;
	@GetProperty("day", iDay);
	int iVal;
	@GetVariable("K2S_Klara2Svita" + prefix + iDay, iVal);
	return (iVal == 0);
}

int GetKlara2SvitaRegion(int iDay) { // iDay [ 1 ... 12 ]
	if (iDay == 6) {
		return c_iRegion13;
	}
	else
	if (iDay == 7) {
		return c_iRegion5;
	}
	else
	if (iDay == 8) {
		return c_iRegion14;
	}
	else
	if (iDay == 9) {
		return c_iRegion6;
	}
	else
	if (iDay == 10) {
		return c_iRegion10;
	}
	else
	if (iDay == 11) {
		return c_iRegion4;
	}
	
	return -1;
}