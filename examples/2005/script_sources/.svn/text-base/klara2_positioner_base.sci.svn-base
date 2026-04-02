include std.sci

// true if klara is sill in region
bool IsKlara2Variable(int iDay) { // iDay [ 1 ... 12 ]
	int iVal;
	@GetVariable("K2System" + iDay, iVal);
	return (iVal != 0);
}

void SetKlara2Variable(int iDay, bool bKlara) { // iDay [ 1 ... 12 ]
	@SetVariable("K2System" + iDay, bKlara ? 1 : 0);
}

void SetKlara2OO(string prefix) {
	int iDay;
	@GetProperty("day", iDay);
	@SetVariable("K2S_Klara2" + prefix + iDay, 1);	
}

bool IsKlara2OO(string prefix) {
	int iDay;
	@GetProperty("day", iDay);
	int iVal;
	@GetVariable("K2S_Klara2" + prefix + iDay, iVal);
	return (iVal == 0);
}

int GetKlara2Region(int iDay) { // iDay [ 1 ... 12 ]
	if (iDay == 6) {
		return c_iRegion15;
	}
	else
	if (iDay == 7) {
		return c_iRegion9;
	}
	else
	if (iDay == 8) {
		return c_iRegion5;
	}
	else
	if (iDay == 9) {
		return c_iRegion14;
	}
	else
	if (iDay == 10) {
		return c_iRegion6;
	}
	else
	if (iDay == 11) {
		return c_iRegion12;
	}
	
	return -1;
}

string GetKlara2Scene(int iDay) {
	if (iDay == 6) {
		return "lc_House6_04";
	}
	else
	if (iDay == 7) {
		return "r2_house3_03";
	}
	else
	if (iDay == 8) {
		return "house1_se_04r";
	}
	else
	if (iDay == 9) {
		return "r7_house3_02_i2";
	}
	else
	if (iDay == 10) {
		return "house5_15";
	}
	else
	if (iDay == 11) {
		return "r5_house2_01";
	}
	return "";
}

void SendKlara2Mail(int iDay, float fTime) {
	if (iDay == 6) {
		AddMessage_D6_Klara_Klara2_Loc(fTime);
		AddDiaryEntry_klara2();
		AddDiaryEntry_klara2_find();
	}
	else
	if (iDay == 7) {
		AddMessage_D7_Klara_Klara2_Loc(fTime);
		AddDiaryEntry_klara2();
		AddDiaryEntry_klara2_find();
	}
	else
	if (iDay == 8) {
		AddMessage_D8_Klara_Klara2_Loc(fTime);
		AddDiaryEntry_klara2();
		AddDiaryEntry_klara2_find();
	}
	else
	if (iDay == 9) {
		AddMessage_D9_Klara_Klara2_Loc(fTime);
		AddDiaryEntry_klara2();
		AddDiaryEntry_klara2_find();
	}
	else
	if (iDay == 10) {
		AddMessage_D10_Klara_Klara2_Loc(fTime);
		AddDiaryEntry_klara2();
		AddDiaryEntry_klara2_find();
	}
	else
	if (iDay == 11) {
		AddMessage_D11_Klara_Klara2_Loc(fTime);
		AddDiaryEntry_klara2();
		AddDiaryEntry_klara2_find();
	}
}
