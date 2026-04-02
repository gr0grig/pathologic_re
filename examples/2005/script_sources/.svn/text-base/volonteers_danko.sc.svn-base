include volonteers_danko_base.sci

maintask TVolonteers_Danko : TVolonteers
{
	void SendTheaterLetter(float fTime) {
		AddMessage_D12_Danko_Theater(fTime);
	}
	
	void SendChildsLetter(float fTime) {
		AddMessage_D12_Danko_Childs(fTime);
		TriggerActor("quest_d12_01", "init_hidden_room");
	}
	
	void AddSmirennikDiaryFinish(void) {
		AddDiaryEntry_d12q01KlaraPeopleSaved();
	}

	void AddUtopistDiaryFinish(void) {
		// empty as danko is utopist
	}

	void AddTermitDiaryFinish(void) {
		AddDiaryEntry_d12q01BurahPeopleSaved();
	}	
	
	bool IsMyVolonteer(int iNPCID) {
		return IsUtopistVolonteer(iNPCID);
	}
	
	void PerformVolonteerInit(object daylist, object daylist_other)
	{
		object list;
		@CreateIntVector(list);
		FillUtopistsVector(list, true, c_iBranchDanko);

		object list_other;
		@CreateIntVector(list_other);
		FillTermitsVector(list_other, true, c_iBranchDanko);
		FillSmirenniksVector(list_other, true, c_iBranchDanko);
		
		for (int i = 0; i < 12; ++i) {
			daylist->add(list);
			daylist_other->add(list_other);
		}
	}

	int GetVolonteerCount(int iDay)  // iDay [0..11]
	{
		if (iDay < 1 || iDay >= 11)
			return 0;
			
		return 1;	
	}
	
	int GetOtherVolonteerCount(int iDay) // iDay [0..11]
	{
		if (iDay < 5)
			return 0;
			
		return 1;
	}
}	