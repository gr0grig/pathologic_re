include std.sci

const int c_iNotFound = 0;
const int c_iFoundAndHolded = 1;
const int c_iFoundAndAwared = 2;
const int c_iFoundAndPredan = 3;

void InitK2SystemNPC() {
	TriggerActor("klara2_npc_positioner", "init");
}

void K2SystemRemoveDanko() {
	TriggerActor("klara2_npc_positioner", "remove_danko");
}

void K2SystemRemoveBurah() {
	TriggerActor("klara2_npc_positioner", "remove_burah");
}


// additional
int GetK2KlaraQuestDay(void) {
	int iVal;
	@GetVariable("k2system_klara_day", iVal);
	return iVal;
}

void SetK2KlaraQuestDay(int iDay) {
	@SetVariable("k2system_klara_day", iDay);
}


int GetK2BurahQuestDay(void) {
	int iVal;
	@GetVariable("k2system_burah_day", iVal);
	return iVal;
}

void SetK2BurahQuestDay(int iDay) {
	@SetVariable("k2system_burah_day", iDay);
}

int GetK2DankoQuestDay(void) {
	int iVal;
	@GetVariable("k2system_danko_day", iVal);
	return iVal;
}

void SetK2DankoQuestDay(int iDay) {
	@SetVariable("k2system_danko_day", iDay);
}

int GetK2BurahState(void) {
	int iDay = GetK2BurahQuestDay();
	int iVal;
	@GetVariable("k2system_burah_state" + iDay, iVal);
	return iVal;
}

void SetK2BurahState(int iState) {
	int iDay = GetK2BurahQuestDay();
	@SetVariable("k2system_burah_state" + iDay, iState);
}

int GetK2DankoState(void) {
	int iDay = GetK2DankoQuestDay();
	int iVal;
	@GetVariable("k2system_danko_state" + iDay, iVal);
	return iVal;
}

void SetK2DankoState(int iState) {
	int iDay = GetK2DankoQuestDay();
	@SetVariable("k2system_danko_state" + iDay, iState);
}

int GetK2KlaraState(void) {
	int iDay = GetK2KlaraQuestDay();
	int iVal;
	@GetVariable("k2system_klara_state" + iDay, iVal);
	return iVal;
}

void SetK2KlaraState(int iState) {
	int iDay = GetK2KlaraQuestDay();
	@SetVariable("k2system_klara_state" + iDay, iState);
}

/////////////////////////////////////////////////////////////
// dialog
//

// ------------ danko
bool IsK2DankoQuestInCurrentDay(void) {
	return (GetDay() == GetK2DankoQuestDay());
}

bool IsK2DankoFoundAndAwared(void) {
	return (GetK2DankoState() == c_iFoundAndAwared);
}

void SetK2DankoFoundAndAwared(void) {
	AddDiaryEntry_k2MariaDankoFoundAndAwared();
	SetK2DankoState(c_iFoundAndAwared);
}

bool IsK2DankoFoundAndPredan(void) {
	return (GetK2DankoState() == c_iFoundAndPredan);
}

void SetK2DankoFoundAndPredan(void) {
	AddDiaryEntry_k2MariaCompletedBurah();
	SetK2DankoState(c_iFoundAndPredan);
}

bool IsK2DankoFoundAndHolded(void) {
	return (GetK2DankoState() == c_iFoundAndHolded);
}

void SetK2DankoFoundAndHolded(void) {
	AddDiaryEntry_k2MariaDankoFoundAndHolded();
	SetK2DankoState(c_iFoundAndHolded);
}

bool IsK2DankoNotFound(void) {
	return (GetK2DankoState() == c_iNotFound);
}

void SetK2DankoNotFound(void) {
	SetK2DankoState(c_iNotFound);
}

// ----------- burah
bool IsK2BurahQuestInCurrentDay(void) {
	return (GetDay() == GetK2BurahQuestDay());
}

bool IsK2BurahFoundAndAwared(void) {
	return (GetK2BurahState() == c_iFoundAndAwared);
}

void SetK2BurahFoundAndAwared(void) {
	AddDiaryEntry_k2AglajaBurahFoundAndAwared();
	SetK2BurahState(c_iFoundAndAwared);
}

bool IsK2BurahFoundAndPredan(void) {
	return (GetK2BurahState() == c_iFoundAndPredan);
}

void SetK2BurahFoundAndPredan(void) {
	AddDiaryEntry_k2AglajaCompletedDanko();
	SetK2BurahState(c_iFoundAndPredan);
}

bool IsK2BurahFoundAndHolded(void) {
	return (GetK2BurahState() == c_iFoundAndHolded);
}

void SetK2BurahFoundAndHolded(void) {
	AddDiaryEntry_k2AglajaBurahFoundAndHolded();
	SetK2BurahState(c_iFoundAndHolded);
}

bool IsK2BurahNotFound(void) {
	return (GetK2BurahState() == c_iNotFound);
}

void SetK2BurahNotFound(void) {
	SetK2BurahState(c_iNotFound);
}

// ------------- klara
bool IsK2KlaraFoundAndHolded(void) {
	return (GetK2KlaraState() == c_iFoundAndHolded);
}

void SetK2KlaraFoundAndPredan(void) {
	SetK2KlaraState(c_iFoundAndPredan);
}

/////////////////////////////////////////////////////////////


//
int GetBurahRegion(int iDay) { // iDay [ 1 ... 12 ]
	if (iDay == 8) {
		return c_iRegion6;
	}
	else
	if (iDay == 9) {
		return c_iRegion11;
	}
	else
	if (iDay == 10) {
		return c_iRegion4;
	}
	else
	if (iDay == 11) {
		return c_iRegion2;
	}
	
	return -1;
}

int GetDankoRegion(int iDay) { // iDay [ 1 ... 12 ]
	if (iDay == 8) {
		return c_iRegion8;
	}
	else
	if (iDay == 9) {
		return c_iRegion3;
	}
	else
	if (iDay == 10) {
		return c_iRegion12;
	}
	else
	if (iDay == 11) {
		return c_iRegion16;
	}
	
	return -1;
}

string GetBurahScene(int iDay) {
	if (iDay == 8) {
		return "house5_unoin_solidl";
	}
	else
	if (iDay == 9) {
		return "r4_house4_02_i2";
	}
	else
	if (iDay == 10) {
		return "dt_house1_union2_01r";
	}
	else
	if (iDay == 11) {
		return "dt_house_1_03";
	}
	return "";
}

string GetDankoScene(int iDay) {
	if (iDay == 8) {
		return "house7_02";
	}
	else
	if (iDay == 9) {
		return "dt_house2_01";
	}
	else
	if (iDay == 10) {
		return "r5_House6_01";
	}
	else
	if (iDay == 11) {
		return "lc_house3_05";
	}
	return "";
}

void SendAglajaMail(int iDay, float fTime) {
	if (iDay == 8) {
		AddDiaryEntry_k2Aglaja();
		AddDiaryEntry_k2AglajaFindBurah();
		AddMessage_D8_Klara_Aglaja(fTime);
	}
	else
	if (iDay == 9) {
		AddDiaryEntry_k2Aglaja();
		AddDiaryEntry_k2AglajaFindBurah();
		AddMessage_D9_Klara_Aglaja(fTime);
	}
	else
	if (iDay == 10) {
		AddDiaryEntry_k2Aglaja();
		AddDiaryEntry_k2AglajaFindBurah();
		AddMessage_D10_Klara_Aglaja(fTime);
	}
	else
	if (iDay == 11) {
		AddDiaryEntry_k2Aglaja();
		AddDiaryEntry_k2AglajaFindBurah();
		AddMessage_D11_Klara_Aglaja(fTime);
	}
}

void SendBlockMail(int iDay, float fTime) {
	if (iDay == 8) {
		AddDiaryEntry_k2Maria();
		AddDiaryEntry_k2MariaFindDanko();
		AddMessage_D8_Klara_Maria(fTime);
	}
	else
	if (iDay == 9) {
		AddDiaryEntry_k2Maria();
		AddDiaryEntry_k2MariaFindDanko();
		AddMessage_D9_Klara_Maria(fTime);
	}
	else
	if (iDay == 10) {
		AddDiaryEntry_k2Maria();
		AddDiaryEntry_k2MariaFindDanko();
		AddMessage_D10_Klara_Maria(fTime);
	}
	else
	if (iDay == 11) {
		AddDiaryEntry_k2Maria();
		AddDiaryEntry_k2MariaFindDanko();
		AddMessage_D11_Klara_Block(fTime);
	}
}
