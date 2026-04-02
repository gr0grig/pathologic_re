include dgame.sci
////////////////////////////////////////////////////////
// danko day 6
////////////////////////////////////////////////////////

// CONSTANTS
const int c_iD6_Quest01_Count = 3;
// CONSTANTS

void D6_Init()
{
	@Trace("Initializing day6");
	ClearMapMarks();
	LockDoor("sobor@door1", true);
	
	// setting patrool near sobor
	AddActorToOutdoorScene("pt_sobor_entrance01", "pers_wasted_male", "d6q01_patrol_wm.xml");
	AddActorToOutdoorScene("pt_sobor_entrance02", "pers_wasted_girl", "d6q01_patrol_ww.xml");
}

string D6GetRegionCenter(int i)
{
	string strPoint = "pt_region";
	if (i + 1 < 10) 
		strPoint += "0" + (i + 1);
	else
		strPoint += (i + 1);
	strPoint += "_center01";
	return strPoint;
}

void EnableD6_Danko_Quest01()
{
	@SetVariable("d6q01", c_iQuestEnabled) ;
	@SetVariable("d6q01_counter", 0) ;
}

void EnableD6_Danko_Quest01e()
{
	@SetVariable("d6q01e", c_iQuestEnabled) ;

	int iRegion = GetAnyDiseasedRegion();
	if (iRegion == -1) {
		@Trace("Error, cant find diseased region for Klara");
	}
	
	string strPos = D6GetRegionCenter(iRegion);
	AddActorToOutdoorScene(strPos, "NPC_Klara", "NPC_Danko_Klara.xml");
}

bool IsD6_Danko_Quest01_Enabled()
{
	return (GetVariable("d6q01") == c_iQuestEnabled);
}

bool IsD6_Danko_Quest01e_Enabled()
{
	return (GetVariable("d6q01e") == c_iQuestEnabled);
}

bool IsD6_Danko_Quest01_Completed()
{
	return (GetVariable("d6q01") == c_iQuestCompleted);
}

bool IsD6_Danko_Quest01e_Completed()
{
	return (GetVariable("d6q01q") == c_iQuestCompleted);
}

bool MoveD6_Danko_Quest01(object actor)
{
	if (IncVariable("d6q01_counter") >= c_iD6_Quest01_Count) {
		@SetVariable("d6q01", c_iQuestCompleted);
		@Trace("Quest: d6q01 completed");
		EnableD6_Danko_Quest01e();
		return false;
	}				
	return true;
}

void MoveD6_Danko_Quest01e(object actor)
{
	@SetVariable("d6q01e", c_iQuestCompleted);
	TDlg_D6_Danko_dv01{actor};
}

void D6_MorningMail()
{
	@ShowMessage(AddMessage_D6_Danko_BigVlad01());
	@ShowMessage(AddMessage_D6_Danko_Kapella01());
	@ShowMessage(AddMessage_D6_Danko_Maria01());
}

void D6_EveningMail()
{
}

void D6_Quest01MissCheck()
{
}