include std.sci
include quest_limited.sci
include game.sci

const int c_iMaxStelsKills = 3;

const string c_strIndoorDoor = "iwarehouse_gangster@door1";
const string c_strOutdoorDoor = "warehouse_gangster@door1";

maintask TQuest : TQuestLimited
{
	var object m_Gangsters;
	var int iAttacks;
	
	void init(void) {
		@SetVariable("d4q03", c_iQuestEnabled);
		
		LockDoorActor(c_strOutdoorDoor, false);
		LockDoorActor(c_strIndoorDoor, true);

		m_Gangsters = CreateObjectVector();

		object scene = GetSceneByName("warehouse_gangster");
		for (int i = 0; i < 7; ++i) {
			m_Gangsters->add(SpawnActor(scene, "pt_gangster" + (i + 1), "pers_grabitel", "d4q03_grabitel.xml"));
		}

		super.init(4);
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "scene_load") {
			//TriggerActorsInVector(m_Gangsters, "attack");
			@PlaySound("door");
		}
		if (name == "gang_attack") {
			iAttacks++;
			if (iAttacks >= c_iMaxStelsKills)
				TriggerActorsInVector(m_Gangsters, "attack");
		}
		else if (name == "death") {
			int iCount;
			m_Gangsters->size(iCount);
			int i;
			for (i = 0; i < iCount; ++i) {
				object actor;
				m_Gangsters->get(actor, i);
				bool bDead;
				actor->IsDead(bDead);
				if (!bDead)
					break;
			}
			if (i == iCount) {
				@SetVariable("d4q03_alldead", 1);
				LockDoorActor(c_strIndoorDoor, false);
				LockDoorActor(c_strOutdoorDoor, true);
			}
		}
		else if (name == "completed") {
			Completed();
		}
	}

	void Limit(void) {
		int iState;
		@GetVariable("d4q03", iState);
		if (iState != c_iQuestCompleted) {
			Fail();
		}
	}

	void Fail(void) {
		@SetVariable("d4q03", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		int iState;
		@GetVariable("d4q03", iState);
		if (iState != c_iQuestCompleted && iState != c_iQuestFailed) {
			@SetVariable("d4q03", c_iQuestCompleted);
			Cleanup();
		}
	}

	void Cleanup(void) {
		disable OnTrigger;
		TriggerActorsInVector(m_Gangsters, "cleanup"); m_Gangsters = null;
		LockDoorActor(c_strIndoorDoor, false);
		LockDoorActor(c_strOutdoorDoor, true);
		@RemoveActor(self());
	}
}
