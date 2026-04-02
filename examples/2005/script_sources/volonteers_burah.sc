include volonteers_burah_base.sci

maintask TVolonteers_Burah : TVolonteers
{
	void SendTheaterLetter(float fTime) {
		AddMessage_D12_Burah_Theater(fTime);
	}
	
	void SendChildsLetter(float fTime) {
		AddMessage_D12_Burah_Childs(fTime);
		TriggerActor("quest_b12_01", "init_hidden_room");
	}
	
	void AddSmirennikDiaryFinish(void) {
		AddDiaryEntry_b12q01KlaraPeopleSaved();
	}

	void AddUtopistDiaryFinish(void) {
		AddDiaryEntry_b12q01DankoPeopleSaved();
	}

	void AddTermitDiaryFinish(void) {
		// empty as burah is termit
	}
	
	bool IsMyVolonteer(int iNPCID) {
		return IsTermitVolonteer(iNPCID);
	}
	
	void PerformVolonteerInit(object daylist, object daylist_other)
	{
		object list;
		@CreateIntVector(list);
		FillTermitsVector(list, true, c_iBranchBurah);

		object list_other;
		@CreateIntVector(list_other);
		FillUtopistsVector(list_other, true, c_iBranchBurah);
		FillSmirenniksVector(list_other, true, c_iBranchBurah);
		
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