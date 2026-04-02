include ui_center_text.sci
include ../game_ext.sci

const int c_iDayChangeTextIDBase = 300;

maintask UI_Daychange : UI_CenterText
{
	void init(void) {
		int iOffset;
		if (GetPlayer() == c_iBranchDanko) {
			iOffset = 12;
		}
		else 
		if (GetPlayer() == c_iBranchBurah) {
			iOffset = 0;
		}
		else {
			iOffset = 24;
		}
		
		string stat = GetDeathStatisctics(GetDay());
		if (stat != "") {
			super.initbystring(stat, 10);
		}
		super.init(c_iDayChangeTextIDBase + iOffset + GetDay() - 1, 8);
		@DestroyWindow();
	}
}

string GetDeathStatisctics(int iDay) {
	if (iDay < 2 || iDay > 12)
		return "";
		
	int iDiseased = GetDiseasedCount(iDay);
	int iDead = GetDeadCount(iDay);
	int iLost = GetLostCount(iDay);
	int iDiseasedTotal = GetDiseasedTotal(iDay);
	
	int iDeadTotal = GetDeadTotal(iDay);
	
	string out;
	@format(out, GetStringByID(c_iTID_Death_Stat_Base + (iDay - 2)), iDiseased, iDead, iLost, iDeadTotal, iDiseasedTotal);
	return out;
}

int GetDeadTotal(int iDay) {
	int iTotal = 0;
	for (int i = 1; i <= iDay; ++i) {
		int iVal;
		@GetVariable("ps_dead_count" + iDay, iVal);
		iTotal += iVal;
	}
	return iTotal;
}

int GetDiseasedCount(int iDay) 
{
	int iRangeMin, iRangeMax;
	if (iDay == 2) {
		iRangeMin = 20; iRangeMax = 30;
	}
	else
	if (iDay == 3) {
		iRangeMin = 30; iRangeMax = 50;
	}
	else
	if (iDay == 4) {
		iRangeMin = 40; iRangeMax = 60;
	}
	else
	if (iDay == 5) {
		iRangeMin = 100; iRangeMax = 130;
	}
	else
	if (iDay == 6) {
		iRangeMin = 150; iRangeMax = 200;
	}
	else
	if (iDay == 7) {
		iRangeMin = 170; iRangeMax = 220;
	}
	else
	if (iDay == 8) {
		iRangeMin = 200; iRangeMax = 250;
	}
	else
	if (iDay == 9) {
		iRangeMin = 330; iRangeMax = 390;
	}
	else
	if (iDay == 10) {
		iRangeMin = 330; iRangeMax = 390;
	}
	else
	if (iDay == 11) {
		iRangeMin = 330; iRangeMax = 390;
	}
	else
	if (iDay == 12) {
		iRangeMin = 330; iRangeMax = 390;
	}
	else
		return 0;
		
	int iVal;
	@irand(iVal, iRangeMax - iRangeMin);
	return iVal + iRangeMin;
}

int GetDeadCount(int iDay) 
{
	int iRangeMin, iRangeMax;
	if (iDay == 2) {
		iRangeMin = 10; iRangeMax = 20;
	}
	else
	if (iDay == 3) {
		iRangeMin = 30; iRangeMax = 40;
	}
	else
	if (iDay == 4) {
		iRangeMin = 50; iRangeMax = 60;
	}
	else
	if (iDay == 5) {
		iRangeMin = 70; iRangeMax = 90;
	}
	else
	if (iDay == 6) {
		iRangeMin = 110; iRangeMax = 170;
	}
	else
	if (iDay == 7) {
		iRangeMin = 310; iRangeMax = 360;
	}
	else
	if (iDay == 8) {
		iRangeMin = 360; iRangeMax = 430;
	}
	else
	if (iDay == 9) {
		iRangeMin = 400; iRangeMax = 490;
	}
	else
	if (iDay == 10) {
		iRangeMin = 600; iRangeMax = 690;
	}
	else
	if (iDay == 11) {
		iRangeMin = 600; iRangeMax = 690;
	}
	else
	if (iDay == 12) {
		iRangeMin = 600; iRangeMax = 690;
	}
	else
		return 0;
		
	int iVal;
	@irand(iVal, iRangeMax - iRangeMin);
	@SetVariable("ps_dead_count" + iDay, iVal + iRangeMin);
	return iVal + iRangeMin;
}

int GetLostCount(int iDay) 
{
	int iRangeMin, iRangeMax;
	if (iDay == 2) {
		iRangeMin = 5; iRangeMax = 10;
	}
	else
	if (iDay == 3) {
		iRangeMin = 10; iRangeMax = 15;
	}
	else
	if (iDay == 4) {
		iRangeMin = 15; iRangeMax = 35;
	}
	else
	if (iDay == 5) {
		iRangeMin = 15; iRangeMax = 35;
	}
	else
	if (iDay == 6) {
		iRangeMin = 10; iRangeMax = 30;
	}
	else
	if (iDay == 7) {
		iRangeMin = 10; iRangeMax = 30;
	}
	else
	if (iDay == 8) {
		iRangeMin = 30; iRangeMax = 60;
	}
	else
	if (iDay == 9) {
		iRangeMin = 30; iRangeMax = 60;
	}
	else
	if (iDay == 10) {
		iRangeMin = 120; iRangeMax = 140;
	}
	else
	if (iDay == 11) {
		iRangeMin = 120; iRangeMax = 140;
	}
	else
	if (iDay == 12) {
		iRangeMin = 120; iRangeMax = 140;
	}
	else
		return 0;
		
	int iVal;
	@irand(iVal, iRangeMax - iRangeMin);
	return iVal + iRangeMin;
}

int GetDiseasedTotal(int iDay) 
{
	int iRangeMin, iRangeMax;
	if (iDay == 2) {
		iRangeMin = 20; iRangeMax = 30;
	}
	else
	if (iDay == 3) {
		iRangeMin = 40; iRangeMax = 60;
	}
	else
	if (iDay == 4) {
		iRangeMin = 50; iRangeMax = 70;
	}
	else
	if (iDay == 5) {
		iRangeMin = 90; iRangeMax = 110;
	}
	else
	if (iDay == 6) {
		iRangeMin = 310; iRangeMax = 360;
	}
	else
	if (iDay == 7) {
		iRangeMin = 360; iRangeMax = 460;
	}
	else
	if (iDay == 8) {
		iRangeMin = 500; iRangeMax = 590;
	}
	else
	if (iDay == 9) {
		iRangeMin = 500; iRangeMax = 590;
	}
	else
	if (iDay == 10) {
		iRangeMin = 500; iRangeMax = 590;
	}
	else
	if (iDay == 11) {
		iRangeMin = 500; iRangeMax = 590;
	}
	else
	if (iDay == 12) {
		iRangeMin = 500; iRangeMax = 590;
	}
	else
		return 0;
		
	int iVal;
	@irand(iVal, iRangeMax - iRangeMin);
	return iVal + iRangeMin;
}
