include dgame.sci
////////////////////////////////////////////////////////
// danko day 3
////////////////////////////////////////////////////////

// CONSTANTS
const int c_iD3_Quest01_Count = 3;
// CONSTANTS

void D3_Init()
{
	ClearMapMarks();
}

void EnableD3_Danko_Quest01()
{
	@SetVariable("d3q01", c_iQuestEnabled) ;
	@ShowDiary(AddDiaryEntry_D3Q01_DeadSamples());
}

bool IsD3_Danko_Quest01_Enabled()
{
	return (GetVariable("d3q01") == c_iQuestEnabled);
}

bool IsD3_Danko_Quest01_Completed()
{
	return (GetVariable("d3q01") == c_iQuestCompleted);
}

bool MoveD3_Danko_Quest01(object actor)
{
	int iItemID = GetItemByName("blooddiseased");
	int iCount;
	actor->GetItemCountOfType(iCount, iItemID);
	if (iCount >= c_iD3_Quest01_Count) {
		@SetVariable("d3q01", c_iQuestCompleted);
		@Trace("Quest: d3q01 completed");
		return true;
	}
	return false;	
}

void D3_MorningMail()
{
	@ShowMessage(AddMessage_D3_mGotoRubin());
	@ShowDiary(AddDiaryEntry_D3Q01_Sensation());
}

void D3_EveningMail()
{
}

void D3_Quest01MissCheck()
{
	if (!IsD3_Danko_Quest01_Enabled()) {
		@ShowMessage(AddMessage_D3_mGotoRubin());
	}		
}