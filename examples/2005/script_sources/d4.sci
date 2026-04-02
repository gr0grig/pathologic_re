include dgame.sci
////////////////////////////////////////////////////////
// danko day 4
////////////////////////////////////////////////////////

// CONSTANTS
// CONSTANTS

void D4_Init()
{
	ClearMapMarks();
	LockDoor("sobor@door1", true);
	LockDoor("theater@door1", true);
}

string D4GetRegionCenter(int i)
{
	string strPoint = "pt_region";
	if (i + 1 < 10) 
		strPoint += "0" + (i + 1);
	else
		strPoint += (i + 1);
	strPoint += "_center01";
	return strPoint;
}

void EnableD4_Danko_Quest01()
{
	@SetVariable("d4q01", c_iQuestEnabled);
	@SetVariable("d4q01_warehouse", 0);
	@SetVariable("d4q01_sobor", 0);
	@SetVariable("d4q01_theater", 0);
	
	int iCount = GetDiseasedRegionCount();
	if (iCount < 2) {
		@Trace("Error region count during 4th day (" + iCount + ")");
		return;
	}
	
	AddActorToOutdoorScene("pt_theater_entrance01", "pers_patrool", "d4q01_birdmask.xml");
	AddActorToOutdoorScene("pt_sobor_entrance01", "pers_wasted_girl", "d4q01_wasted_woman.xml");
	
	iCount = 0;
	for (int i = 0; i < c_iRegionCount; ++i) {
		if (IsRegionDiseased(i)) {
			if (iCount == 0) {
				string strPoint = D4GetRegionCenter(i);
				@SetVariable("d4q01_whitemask", i);
				AddActorToOutdoorScene(strPoint, "pers_patrool", "d4q01_whitemask.xml");
				@Trace("Whitemask is in region " + strPoint);
			}
			if (iCount == 1) {
				string strPoint = D4GetRegionCenter(i);
				@SetVariable("d4q01_wasted_male", i);
				AddActorToOutdoorScene(strPoint, "pers_wasted_male", "d4q01_wasted_male.xml");
				@Trace("Wasted male is in region " + strPoint);
			}
			iCount++;
			if (iCount == 2)
				break;
		}
	}
	
	AddMapMark("Grif", "pt_map_grif");	
	AddMapMark("Sobor", "pt_map_sobor");	
	AddMapMark("Theater", "pt_map_theater");
	ShowMapCeneteredToMark("Sobor", 2.0);
}

bool IsD4_Danko_Quest01_Enabled()
{
	return (GetVariable("d4q01") == c_iQuestEnabled);
}

bool IsD4_Sobor_Completed()
{
	return (GetVariable("d4q01_sobor") != 0);
}

bool IsD4_Warehouse_Completed()
{
	return (GetVariable("d4q01_warehouse") != 0);
}

bool IsD4_Theater_Completed()
{
	return (GetVariable("d4q01_theater") != 0);
}

bool IsD4_Danko_Quest01_Completed()
{
	//return (GetVariable("d4q01") == c_iQuestCompleted);
	if (IsD4_Sobor_Completed() && IsD4_Warehouse_Completed() && IsD4_Theater_Completed())
		return true;
	return false;
}

void MoveD4_Danko_Quest01()
{
	@SetVariable("d4q01", c_iQuestCompleted);
}

bool D4_CanBuyWarehouse(object actor, int iPrice)
{
	int iMoney;
	actor->GetProperty(iMoney, "money");
	return (iMoney > iPrice);
}

void D4_BuyWarehouse(object actor, int iPrice)
{
	int iMoney;
	actor->GetProperty(iMoney, "money");
	iMoney -= iPrice;
	actor->SetProperty("money", iMoney);
	@SetVariable("d4q01_warehouse", 1);
}

void D4_Danko_Quest01_WastedWomanAction()
{
	int i = GetVariable("d4q01_wasted_male");
	string strPos = D4GetRegionCenter(i);
	@Trace(strPos);
	AddMapMark("d4q01WastedMale", strPos);
	ShowMapCeneteredToMark("d4q01WastedMale", 2.0);
}

void D4_Danko_Quest01_WastedMaleAction()
{
	LockDoor("sobor@door1", false);
	ShowMapCeneteredToMark("Sobor", 2.0);
}

void D4_Danko_Quest01_BirdmaskAction()
{
	int i = GetVariable("d4q01_whitemask");
	string strPos = D4GetRegionCenter(i);
	@Trace(strPos);
	AddMapMark("d4q01Whitemask", strPos);
	ShowMapCeneteredToMark("d4q01Whitemask", 2.0);
}

void D4_Danko_Quest01_WhitemaskAction()
{
	LockDoor("theater@door1", false);
	ShowMapCeneteredToMark("Theater", 2.0);
}

void D4_Danko_Quest01_GrifAction()
{
}
