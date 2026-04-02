include dgame.sci
////////////////////////////////////////////////////////
// danko day 5
////////////////////////////////////////////////////////

// CONSTANTS
// CONSTANTS

const int c_iD5_Quest01_Count = 2;

void D5_Init()
{
	ClearMapMarks();
}

void EnableD5_Danko_Quest01()
{
	@SetVariable("d5q01", c_iQuestEnabled) ;
	@SetVariable("d5q01_counter", 0) ;
}

bool IsD5_Danko_Quest01_Enabled()
{
	return (GetVariable("d5q01") == c_iQuestEnabled);
}

bool IsD5_Danko_Quest01_Completed()
{
	return (GetVariable("d5q01") == c_iQuestCompleted);
}

bool D5_Danko_Quest01_HasPlayerAnyBlood(object player)
{
	return true;
}

bool MoveD5_Danko_Quest01(object actor)
{
	int iItemID = GetItemByName("blooddiseasedalive");
	@Trace("ItemID " + iItemID);
	int iCount;
	actor->GetItemCountOfType(iCount, iItemID);
	@Trace("Count " + iCount);
	if (iCount >= c_iD5_Quest01_Count) {
		@SetVariable("d5q01", c_iQuestCompleted);
		@Trace("Quest: d5q01 completed");
		return true;
	}
	return false;	
}

void D5_MorningMail()
{
	@ShowDiary(AddDiaryEntry_D5Q01_checkRubin());
}

void D5_EveningMail()
{
	@ShowMessage(AddMessage_D5_mDanko_Rubin02());
}

void D5_Quest01MissCheck()
{
}