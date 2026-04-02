include std.sci
include game.sci
include NPC_Doberman.sci

// CONSTANTS
const int c_iRaceLength = 12;
const int c_iMaxRaceLength = 72;
const int c_iMaxRunForward = 3;
const int c_iMaxRunBack = 2;
const float c_fRunForwardProbability = 2.0 / 3.0;
const float c_fIdleProbability = 0.5;
const float c_fMinWinProbability = 0.1;
const float c_fMaxWinProbability = 0.5;
// CONSTANTS

maintask TRatRacesManager
{
	var int m_iResult;

	void init(void) {
		m_iResult = -1;

		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		if (m_iResult == 0) {
			TDlg_RatsManagerLose{actor};
			m_iResult = -1;
		}
		else if (m_iResult == 1) {
			TDlg_RatsManagerWin{actor};
			m_iResult = -1;
		}
		else {
			if (TDlg_RatsManager{actor} == 1) {
				object items = CreateObjectVector();
				object indices;
				@CreateIntVector(indices);
				int iCount;
				actor->GetItemCount(iCount, 4);
				
				int RatID1, RatID2;
				@GetInvItemByName(RatID1, "rat");
				@GetInvItemByName(RatID2, "rat_big");
				
				for (int i = 0; i < iCount; ++i) {
					object item;
					actor->GetItem(item, i, 4);
					int id;
					item->GetItemID(id);
					if (id == RatID1 || id == RatID2) {
						items->add(item);
						indices->add(i);
					}
				}
				
				items->size(iCount);
				if (iCount) {
					int index;
					if (iCount == 1) {
						index = 0;
					}
					else {
						object sel;
						@CreateIntVector(sel);
						@ChooseItem(items, sel);
						sel->size(iCount);
						if (iCount) {
							sel->get(index, 0);
						}
						else {
							return;
						}
					}
					
					object item;
					items->get(item, index);
					int cindex;
					indices->get(cindex, index);
					actor->RemoveItem(cindex, 1, 4);
					
					float fQuality;
					item->GetProperty(fQuality, "quality");
					int id;
					item->GetItemID(id);
					Race((id == RatID2)? "pers_rat_big" : "pers_rat", fQuality);
				}
			}
		}
	}
	
	void Race(string rat_name, float fQuality) {
		m_iResult = TRacing{rat_name, fQuality};
		if (!IsLoaded()) {
			m_iResult = -1;
		}
		else {
			if (m_iResult == 1) {
				@Trace("You've won a rat race");
			}
			else if (m_iResult == 0) {
				@Trace("Looser!");
			}
		}
	}

	void OnTrigger(string name) {
		if (name == "race_begin") {
			Race("pers_rat_big", 1.0);
		}
	}
	
	void OnUnload(void) {
		m_iResult = -1;
	}
}

task TRacing
{
	var bool m_bStop;
	
	var int m_iDoneCount;
	var int m_iResult;

	int init(string rat_name, float fQuality) {
		m_iDoneCount = 0;
		BeginRace(rat_name, fQuality);

		do {
			@Hold();
		} while(!m_bStop);
		
		for (int i = 0; i < 6; ++i) {
			OpenDoor(i, false);
		}

		return m_iResult;
	}
	
	void BeginRace(string rat_name, float fQuality) {
		object race1, race2, race3;
		@CreateIntVector(race1);
		@CreateIntVector(race2);
		@CreateIntVector(race3);
		int iLength1, iLength2, iLength3;
		for (;;) {
			iLength1 = SimulateRace(race1);
			if (iLength1 > c_iMaxRaceLength)
				continue;
			iLength2 = SimulateRace(race2);
			if (iLength2 > c_iMaxRaceLength)
				continue;
			iLength3 = SimulateRace(race3);
			if (iLength3 > c_iMaxRaceLength)
				continue;
			
			if (iLength1 != iLength2 && iLength1 != iLength3 && iLength2 != iLength3)
				break;
		}
		
		int iIndex;

		if (rndbool(c_fMinWinProbability + fQuality * (c_fMaxWinProbability - c_fMinWinProbability))) {
			iIndex = min_of(iLength1, iLength2, iLength3);
			@Trace("winner");
		}
		else {
			iIndex = max_of(iLength1, iLength2, iLength3);
			@Trace("looser");
		}

		if (iIndex == 1) {
			object tmp = race1;
			race1 = race2;
			race2 = tmp;
		}
		else if (iIndex == 2) {
			object tmp = race1;
			race1 = race3;
			race3 = tmp;
		}
		
		object scene;
		@GetScene(scene);
		object rat;
		rat = SpawnActor(scene, "pt_rat1", rat_name, "rat_race.xml");
		rat->SetScriptProperty("Index", 1);
		rat->SetScriptProperty("Race", race1);
		rat = SpawnActor(scene, "pt_rat2", "pers_rat", "rat_race.xml");
		rat->SetScriptProperty("Index", 2);
		rat->SetScriptProperty("Race", race2);
		rat = SpawnActor(scene, "pt_rat3", "pers_rat", "rat_race.xml");
		rat->SetScriptProperty("Index", 3);
		rat->SetScriptProperty("Race", race3);
		
		for (int i = 0; i < 6; ++i) {
			OpenDoor(i, true);
		}
	}

	void OnUse(object actor) {
		TDlg_RatsManagerRace{actor};
	}

	void OnTrigger(string name) {
		if (name == "race_over1") {
			OpenDoor(3, false);
			++m_iDoneCount;
			if (m_iDoneCount == 1) {
				m_iResult = 1;
			}
			else if (m_iDoneCount == 3) {
				m_bStop = true;
				@StopGroup0();
			}
		}
		else if (name == "race_over2") {
			OpenDoor(4, false);
			++m_iDoneCount;
			if (m_iDoneCount == 1) {
				m_iResult = 0;
			}
			else if (m_iDoneCount == 3) {
				m_bStop = true;
				@StopGroup0();
			}
		}
		else if (name == "race_over3") {
			OpenDoor(5, false);
			++m_iDoneCount;
			if (m_iDoneCount == 1) {
				m_iResult = 0;
			}
			else if (m_iDoneCount == 3) {
				m_bStop = true;
				@StopGroup0();
			}
		}
	}
	
	int SimulateRace(object race) {
		int iCurPosition = 0;
		int iLength = 0;
		bool bNoRunBack = true;
		bool bNoIdle = false;
		for (;;) {
			int iAmount;
			if (bNoRunBack || !iCurPosition) {
				@irand(iAmount, c_iMaxRunForward);
				++iAmount;
			}
			else {
				if (rndbool(c_fRunForwardProbability)) {
					@irand(iAmount, c_iMaxRunForward);
					++iAmount;
				}
				else {
					if (!bNoIdle && rndbool(c_fIdleProbability)) {
						iAmount = 0;
					}
					else {
						@irand(iAmount, c_iMaxRunBack);
						iAmount = -(iAmount + 1);
						if (iCurPosition + iAmount < 0)
							continue;
					}
				}
			}
			iCurPosition += iAmount;
			if (iCurPosition >= c_iRaceLength) {
				iLength += iAmount - (iCurPosition - c_iRaceLength);
				break;
			}
			else {
				iLength += (iAmount)? abs(iAmount) : 1;
				race->add(iCurPosition);
				bNoIdle = (iAmount == 0);
				bNoRunBack = (iAmount < 0);
			}
		}
		
		return iLength;
	}
	
	void OpenDoor(int iIndex, bool bOpen) {
		object actor;
		@FindActor(actor, "rats_track_door" + (iIndex + 1));
		if (bOpen)
			actor->Open(false);
		else
			actor->Close();
	}
	
	void OnUnload(void) {
		m_iResult = -1;
		m_bStop = true;
		@StopGroup0();
	}
}
