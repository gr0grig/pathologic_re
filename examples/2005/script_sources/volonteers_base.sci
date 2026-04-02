include std.sci
include volonteers_base_ext.sci
include game.sci
include citymanager_base.sci

//////////////////////////////////////////////////////////////
// volonteers
//////////////////////////////////////////////////////////////
const int c_iUnlocked = 0;
const int c_iDiseaseLock = 1;
const int c_iDeadLock = 2;

void DLockDoorActor(string name, int iLockType)
{
	object actor;
	@FindActor(actor, name);
	if (!actor)
		@Trace("Door " + name + " not found");
	else
		actor->SetProperty("dlocked", iLockType);
}

void FillTermitsRescueList() 
{
	object vector;
	@CreateIntVector(vector);
	FillTermitsVector(vector, false, -1);
	
	int iSize;
	vector->size(iSize);
	for (int i = 0; i < iSize; ++i) {
		int iNPCID;
		vector->get(iNPCID, i);
		SetRescueVolonteer(iNPCID);
	}
}

bool AreTermitsSaved() {
	object vector;
	@CreateIntVector(vector);
	FillTermitsVector(vector, false, -1);
	
	int iSize;
	vector->size(iSize);
	for (int i = 0; i < iSize; ++i) {
		int iNPCID;
		vector->get(iNPCID, i);
		if (IsDeadVolonteer(iNPCID) || IsDiseasedVolonteer(iNPCID))
			return false;
	}

	return true;
}

void FillUtopistsRescueList() 
{
	object vector;
	@CreateIntVector(vector);
	FillUtopistsVector(vector, false, -1);
	
	int iSize;
	vector->size(iSize);
	for (int i = 0; i < iSize; ++i) {
		int iNPCID;
		vector->get(iNPCID, i);
		SetRescueVolonteer(iNPCID);
	}
}

bool AreUtopistsSaved() {
	object vector;
	@CreateIntVector(vector);
	FillUtopistsVector(vector, false, -1);
	
	int iSize;
	vector->size(iSize);
	for (int i = 0; i < iSize; ++i) {
		int iNPCID;
		vector->get(iNPCID, i);
		if (IsDeadVolonteer(iNPCID) || IsDiseasedVolonteer(iNPCID))
			return false;
	}

	return true;
}

void FillSmireniksRescueList() 
{
	object vector;
	@CreateIntVector(vector);
	FillSmirenniksVector(vector, false, -1);
	
	int iSize;
	vector->size(iSize);
	for (int i = 0; i < iSize; ++i) {
		int iNPCID;
		vector->get(iNPCID, i);
		SetRescueVolonteer(iNPCID);
	}
}

bool AreSmireniksSaved() {
	object vector;
	@CreateIntVector(vector);
	FillSmirenniksVector(vector, false, -1);
	
	int iSize;
	vector->size(iSize);
	for (int i = 0; i < iSize; ++i) {
		int iNPCID;
		vector->get(iNPCID, i);
		if (IsDeadVolonteer(iNPCID) || IsDiseasedVolonteer(iNPCID))
			return false;
	}

	return true;
}

bool IsChildCondition() {
/*	object list, doors, scenes;
	@CreateIntVector(list);
	doors = null;
	scenes = null;
	PerformVolonteerListInit(list, doors, scenes);
	int iSize;
	list->size(iSize);
	
	int iCount = 0;
	for (int i = 0; i < iSize; ++i) {
		int iVol;
		list->get(iVol, i);
		if (!IsDeadVolonteer(iVol) && !IsDiseasedVolonteer(iVol))
			iCount++;
	}
	
	return (iCount >= 12);*/
	
	int iCount = 0;
	if (AreSmireniksSaved())
		iCount++;

	if (AreUtopistsSaved())
		iCount++;

	if (AreTermitsSaved())
		iCount++;
	
	return (iCount >= 2);
}

bool IsTheaterCondition() {
	return AreSmireniksSaved() && AreUtopistsSaved() && AreTermitsSaved();
}

task TVolonteers
{
	var object m_Volonteers, m_VolonteersDayList, m_VolonteersDayListOther, m_BirdMasks, m_Doors, m_Scenes;
	var int g_iVolonteersDay;
	var bool m_bTheaterLetter, m_bChildsLetter;
	var bool m_bUtopistsDiary, m_bTermitsDiary, m_bSmirenniksDiary;
	
	void init(void) {
		PerformVolonteersInit();
		m_bTheaterLetter = false;
		m_bChildsLetter = false;
		for (;;) {
			@Hold();
		}
	}
	
	void LetterDiaryCheck(void) 
	{
		if ((!m_bChildsLetter) && IsDay(12) && IsChildCondition() && GetHour() >= 8) {
			SendChildsLetter(GetGameTime());
			m_bChildsLetter = true;
		}
		
		/*if ((!m_bTheaterLetter) && IsDay(12) && IsTheaterCondition() && GetHour() >= 8) {
			SendTheaterLetter(GetGameTime());
			m_bTheaterLetter = true;
		}*/	
		
		if (!m_bUtopistsDiary && IsDay(12) && AreUtopistsSaved()) {
			m_bUtopistsDiary = true;
			AddUtopistDiaryFinish();
		}
		
		if (!m_bTermitsDiary && IsDay(12) && AreTermitsSaved()) {
			m_bTermitsDiary = true;
			AddTermitDiaryFinish();
		}	
		
		if (!m_bSmirenniksDiary && IsDay(12) && AreSmireniksSaved()) {
			m_bSmirenniksDiary = true;
			AddSmirennikDiaryFinish();
		}
	}
	
	void OnTrigger(string name, string params) {
		@Trace(name);
		if (name == "rescue") {
			RescueVolonteerByIndex(GetVolonteerIndex(GetNPCIDByName(params)));
			LetterDiaryCheck();
		}	
		else 
		if (name == "rescue_oneday") {
			RescueOneDayVolonteerByIndex(GetVolonteerIndex(GetNPCIDByName(params)));
		}	
		else
		if (name == "rescue_locked") {
			for (int i = 0; i < GetVolonteerCount(); ++i) {
				if (IsLockedVolonteerByIndex(i) && IsMyVolonteer(GetVolonteerID(i)))
					RescueVolonteerByIndex(i);
			}
			LetterDiaryCheck();		
		}		
		else
		if (name == "kill") {
			KillVolonteerByIndex(GetVolonteerIndex(GetNPCIDByName(params)));
		}
		else
		if (name == "disease") {
			DiseaseVolonteerByIndex(GetVolonteerIndex(GetNPCIDByName(params)));
		}
		else
		if (name == "update") {
			PerformVolonteersUpdate();
		}		
		else
		if (name == "cleanup") {
			CleanupVolonteers();
		}		
		else if (name == "childs_letter") {
			if (!m_bChildsLetter) {
				SendChildsLetter(GetGameTime());
				m_bChildsLetter = true;
			}
		}
		else if (name == "theater_letter") {
			if (!m_bTheaterLetter) {
				SendTheaterLetter(GetGameTime());
				m_bTheaterLetter = true;
			}
		}
	}
	
	void GenerateVolonteers(int iNum, int iOtherNum, int iDay)
	{
		for (int i = 0; i < iNum; ++i) {
			GenerateVolonteer(iDay, true);
		}
		
		for (int i = 0; i < iOtherNum; ++i) {
			GenerateVolonteer(iDay, false);
		}
	}	
	
	int GenerateVolonteer(int iDay, bool bYourList)
	{
		object daylist;
		if (bYourList) {
			m_VolonteersDayList->get(daylist, iDay);
		}
		else {
			m_VolonteersDayListOther->get(daylist, iDay);
		}
		
		int iSize;
		daylist->size(iSize);
		if (iSize == 0)
			return -1;
		
		int iStart = 0;
		if (iSize > 1)
			@irand(iStart, iSize);
			
		for (int i = 0; i < iSize; ++i) {
			int iVol = (i + iStart) % iSize;
			int iNPCID;
			daylist->get(iNPCID, iVol);
			int iIndex = GetVolonteerIndex(iNPCID);
			if (IsNotUsedVolonteerByIndex(iIndex)) {
				LockVolonteerByIndex(iIndex);
				return iIndex;
			}
		}
		return -1;
	}	
	
	void PerformVolonteersUpdate() 
	{
		@Trace(1);
		// not rescued volonteers become diseased
		for (int i = 0; i < GetVolonteerCount(); ++i) {
			@Trace(2);
			int id = GetVolonteerID(i);
			@Trace(3);
			if (IsLockedVolonteerByIndex(i)) {
				@Trace(4);
				DiseaseVolonteerByIndex(i);
			}
			
			@Trace(5);
			if (IsRescueOneDayVolonteerByIndex(i)) {
				@Trace(6);
				RescueOneDayVolonteerUpdateByIndex(i);
			}
			
			@Trace(7);
			if (IsDiseasedVolonteerByIndex(i)) {
				@Trace(8);
				object doors;
				m_Doors->get(doors, i);
				@Trace(9);
				int iSize;
				doors->size(iSize);
				@Trace(10);
				for (int j = 0; j < iSize; ++j) {
					@Trace(11);
					string door;
					doors->get(door, j);
					DLockDoorActor(door, c_iDiseaseLock);
				}
				
				@Trace(12);
			}
			
			@Trace(13);
		}
		
		@Trace(14);
		// generating new ones
		g_iVolonteersDay++;
		GenerateVolonteers(GetVolonteerCount(g_iVolonteersDay), GetOtherVolonteerCount(g_iVolonteersDay), g_iVolonteersDay);
		@Trace(15);
		
		int iCount = 0;
		for (int i = 0; i < GetVolonteerCount(); ++i) {
			@Trace(16);
			int id = GetVolonteerID(i);
			@Trace(17);
			if (IsLockedVolonteerByIndex(i)) {
				@Trace(18);
				@Trace("Volonteer : " + GetNPCInternalNameByID(id));
				iCount++;
			}
		}
		
		@Trace(19);
		int iDCount = 0;
		for (int i = 0; i < GetVolonteerCount(); ++i) {
			@Trace(20);
			int id = GetVolonteerID(i);
			if (IsDiseasedVolonteerByIndex(i)) {
				@Trace(21);
				iDCount++;
				@Trace("Diseased volonteer : " + GetNPCInternalNameByID(id));
			}
		}	
		
		@Trace(22);
		
		@Trace("Today volonteers: " + iCount + ", diseased: " + iDCount);
	}	
	
	void CleanupVolonteers() 
	{
		disable OnTrigger;
		@Trace("Volonteers Cleanup...");
		for (int i = 0; i < GetVolonteerCount(); ++i) {
			object birdmask;
			m_BirdMasks->get(birdmask, i);
			if (birdmask != null) {
				birdmask->Remove();
			}	
		}	
	}
	
	void PerformVolonteersInit()
	{
		@Trace("Volonteers Init...");
		object list, doors, scenes;
		@CreateIntVector(list);
		@CreateObjectVector(doors);
		@CreateStringVector(scenes);
		PerformVolonteerListInit(list, doors, scenes);
		m_Volonteers = list;
		m_Doors = doors;
		m_Scenes = scenes;
		
		object daylist, daylist_other;
		@CreateObjectVector(daylist);
		@CreateObjectVector(daylist_other);
		PerformVolonteerInit(daylist, daylist_other);
		m_VolonteersDayList = daylist;
		m_VolonteersDayListOther = daylist_other;

		object birdmasks;
		@CreateObjectVector(birdmasks);
		m_BirdMasks = birdmasks;
		
		for (int i = 0; i < GetVolonteerCount(); ++i) {
			@SetVariable(GetVolonteerVarNameByIndex(i), 0);
			object t = null;
			m_BirdMasks->add(t);
		}
		
		g_iVolonteersDay = 0;
		
		@Trace("Volonteers count: " + GetVolonteerCount());
	}	
	
	int GetVolonteerCount() 
	{
		int iSize;
		m_Volonteers->size(iSize);
		return iSize;
	}

	int GetVolonteerIndex(int iNPCID)
	{
		for (int i = 0; i < GetVolonteerCount(); ++i) {
			int iVol;
			m_Volonteers->get(iVol, i);
			if (iNPCID == iVol)
				return i;
		}
		return -1;
	}
	
	int GetVolonteerID(int iVol) {
		int iNPCID;
		m_Volonteers->get(iNPCID, iVol);
		return iNPCID;
	}


	string GetVolonteerVarNameByIndex(int iVol) 
	{
		int iNPCID;
		m_Volonteers->get(iNPCID, iVol);
		return "vol_" + iNPCID;
	}

	int GetVolonteerNPCIDByIndex(int iVol)
	{
		int iNPCID;
		m_Volonteers->get(iNPCID, iVol);
		return iNPCID;
	}
	
	bool IsRescueOneDayVolonteerByIndex(int iVol) {
		int iVal;
		@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		return ((iVal & c_iVolonteerOneDayRescue) != 0);
	}

	bool IsLockedVolonteerByIndex(int iVol)
	{
		int iVal;
		@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		return ((iVal & c_iVolonteerLocked) != 0);
	}

	bool IsNotUsedVolonteerByIndex(int iVol)
	{
		int iVal;
		@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		return ((iVal & c_iVolonteerUsed) == 0);
	}

	bool IsDiseasedVolonteerByIndex(int iVol)
	{
		int iVal;
		@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		return ((iVal & c_iVolonteerDiseased) != 0);
	}		
	
	bool IsDeadVolonteerByIndex(int iVol)
	{
		int iVal;
		@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		return ((iVal & c_iVolonteerDead) != 0);
	}	
	
	void DiseaseVolonteerByIndex(int iVol) 
	{
		int iVal;
		@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		@SetVariable(GetVolonteerVarNameByIndex(iVol), (iVal & c_iVolonteerToRescue) | (c_iVolonteerDiseased | c_iVolonteerUsed));
		object birdmask;
		m_BirdMasks->get(birdmask, iVol);
		if (birdmask == null) {
			object scene = GetVolonteerMaskSceneByIndex(iVol);
			string strName = GetNPCInternalNameByID(GetVolonteerID(iVol));
			birdmask = SpawnStationaryActor(scene, "pt_volonteer_" + strName, "pers_birdmask", "vbirdmask_" + strName + ".xml");
			m_BirdMasks->set(iVol, birdmask);
		}
		
		object doors;
		m_Doors->get(doors, iVol);
		int iSize;
		doors->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			string door;
			doors->get(door, i);
			DLockDoorActor(door, c_iDiseaseLock);
		}
	}
	
	void RescueOneDayVolonteerByIndex(int iVol)
	{
		int iVal;
		@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		@SetVariable(GetVolonteerVarNameByIndex(iVol), iVal | c_iVolonteerOneDayRescue);
		
		object doors;
		m_Doors->get(doors, iVol);
		int iSize;
		doors->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			string door;
			doors->get(door, i);
			DLockDoorActor(door, c_iUnlocked);
		}
	}
	
	void RescueOneDayVolonteerUpdateByIndex(int iVol)
	{
		int iVal;
		@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		@SetVariable(GetVolonteerVarNameByIndex(iVol), (iVal | c_iVolonteerOneDayRescue) - c_iVolonteerOneDayRescue);
		
		object doors;
		m_Doors->get(doors, iVol);
		int iSize;
		doors->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			string door;
			doors->get(door, i);
			DLockDoorActor(door, c_iDiseaseLock);
		}
	}	

	void RescueVolonteerByIndex(int iVol)
	{
		int iVal;
		// old
		//@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		//@SetVariable(GetVolonteerVarNameByIndex(iVol), c_iVolonteerUsed);
		
		@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		@SetVariable(GetVolonteerVarNameByIndex(iVol), (iVal | c_iVolonteerDiseased | c_iVolonteerUsed | c_iVolonteerLocked) - c_iVolonteerDiseased - c_iVolonteerUsed - c_iVolonteerLocked);
		object birdmask;
		m_BirdMasks->get(birdmask, iVol);
		if (birdmask != null) {
			birdmask->Remove();
		}
		object doors;
		m_Doors->get(doors, iVol);
		int iSize;
		doors->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			string door;
			doors->get(door, i);
			DLockDoorActor(door, c_iUnlocked);
		}
	}
	
	void KillVolonteerByIndex(int iVol)
	{
		int iVal;
		@SetVariable(GetVolonteerVarNameByIndex(iVol), c_iVolonteerDead | c_iVolonteerUsed);
		object birdmask;
		m_BirdMasks->get(birdmask, iVol);
		if (birdmask == null) {
			object scene = GetVolonteerMaskSceneByIndex(iVol);
			string strName = GetNPCInternalNameByID(GetVolonteerID(iVol));
			birdmask = SpawnStationaryActor(scene, "pt_volonteer_" + strName, "pers_birdmask", "vbirdmask_" + strName + ".xml");
			m_BirdMasks->set(iVol, birdmask);
		}
		object doors;
		m_Doors->get(doors, iVol);
		int iSize;
		doors->size(iSize);
		for (int i = 0; i < iSize; ++i) {
			string door;
			doors->get(door, i);
			DLockDoorActor(door, c_iDeadLock);
		}
	}	
	
	object GetVolonteerMaskSceneByIndex(int iVol) {
		string strScene;
		m_Scenes->get(strScene, iVol);
		if (strScene == "outdoor") {
			object scene;
			@GetMainOutdoorScene(scene);
			return scene;	
		}
		
		object scene;
		@GetSceneByName(scene, strScene);
		return scene;
	}

	void LockVolonteerByIndex(int iVol)
	{
		int iVal;
		@GetVariable(GetVolonteerVarNameByIndex(iVol), iVal);
		@SetVariable(GetVolonteerVarNameByIndex(iVol), (iVal & c_iVolonteerToRescue) | (c_iVolonteerLocked | c_iVolonteerUsed));
	}	
}
