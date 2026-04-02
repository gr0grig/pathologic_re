include volonteers_klara_base.sci

maintask TVolonteers_Klara : TVolonteers
{
	void SendTheaterLetter(float fTime) {
		AddMessage_D12_Klara_Theater(fTime);
	}
	
	void SendChildsLetter(float fTime) {
		AddMessage_D12_Klara_Childs(fTime);
		TriggerActor("quest_k12_01", "init_hidden_room");
	}
	
	void AddSmirennikDiaryFinish(void) {
		// empty as klara is smirennik
	}

	void AddUtopistDiaryFinish(void) {
		 AddDiaryEntry_k12q01DankoPeopleSaved();
	}

	void AddTermitDiaryFinish(void) {
		AddDiaryEntry_k12q01BurahPeopleSaved();
	}	
	
	bool IsMyVolonteer(int iNPCID) {
		return IsSmirennikVolonteer(iNPCID);
	}
	
	void PerformVolonteerInit(object daylist, object daylist_other)
	{
		object list;
		@CreateIntVector(list);
		FillSmirenniksVector(list, true, c_iBranchKlara);

		object list_other;
		@CreateIntVector(list_other);
		FillTermitsVector(list_other, true, c_iBranchKlara);
		FillUtopistsVector(list_other, true, c_iBranchKlara);
		
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