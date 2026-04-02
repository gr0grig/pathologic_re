include std.sci
include game.sci
include citymanager_base.sci

const int c_iTimeEventPlaceDanko = 1;
const int c_iDay = 6;

void RestoreGameItems(object actor, object items, object amounts)
{
	int iSize;
	items->size(iSize);
	for (int i = 0; i < iSize; ++i) {
		object item;
		items->get(item, i);
		int iAmount;
		amounts->get(iAmount, i);
		PlayerPutItem(actor, item, iAmount);
	}
}

maintask TQuest
{
	var bool bRemoved;
	var object m_Danko;
	var object m_Container1, m_ContAmount1;
	var object m_Container2, m_ContAmount2;
	var object m_Container3, m_ContAmount3;
	var object m_Container4, m_ContAmount4;
	var object m_Container5, m_ContAmount5;

	void init(void) {
		bRemoved = false;
		for (;;) {
			@Hold();
		}
	}
	
	void RemoveEva() {
		object scene;
		@GetSceneByName(scene, "cot_eva");
		@Trigger(scene, "noeva");
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "lock_danko") {
			LockMovingDoor("icot_eva_door", true);
		}
		else
		if (name == "teleport") {
			object scene, scene_eva;
			RemoveEva();
			@GetScene(scene);
			@GetSceneByName(scene_eva, "cot_eva");
			LockMovingDoor("icot_eva_door", false);
			LockDoorActor("icot_eva@door1", true);
			@PlaySound("door_close");
			
			if (m_Danko)
				@Trigger(m_Danko, "cleanup");
			if (scene != scene_eva) {
				TeleportActor(GetPlayerActor(), "cot_eva", "pt_k6q01_klara");
				@sync();
			}
			
			object player;
			@FindActor(player, "player");
			if (player && bRemoved) {
				RestoreGameItems(player, m_Container1, m_ContAmount1);
				RestoreGameItems(player, m_Container2, m_ContAmount2);
				//RestoreGameItems(player, m_Container3, m_ContAmount3);
				RestoreGameItems(player, m_Container4, m_ContAmount4);
				RestoreGameItems(player, m_Container5, m_ContAmount5);
			}
		}
		else
		if (name == "cot_eva_load") {
			int iVal, iLocked;
			@GetVariable("k6q01", iVal);
			@GetVariable("k6q01DoorWasLocked", iLocked);
			if (iVal == 2 && !iLocked) {
				LockDoorActor("icot_eva@door1", true);
				@SetVariable("k6q01DoorWasLocked", 1);
				@PlaySound("door_close");
			}
		}
		else
		if (name == "unlock_eva") {
			LockDoorActor("icot_eva@door1", false);
			@PlaySound("door_open");
			
			@CreateIntVector(m_ContAmount1);
			@CreateIntVector(m_ContAmount2);
			@CreateIntVector(m_ContAmount3);
			@CreateIntVector(m_ContAmount4);
			@CreateIntVector(m_ContAmount5);
			
			object player;
			@FindActor(player, "player");
			if (player) {
				m_Container1 = GetContainerItems(player, 0, m_ContAmount1);
				m_Container2 = GetContainerItems(player, 1, m_ContAmount2);
				//m_Container3 = GetContainerItems(player, 2, m_ContAmount3);
				m_Container4 = GetContainerItems(player, 3, m_ContAmount4);
				m_Container5 = GetContainerItems(player, 4, m_ContAmount5);
				
				player->ClearSubContainer(0);
				player->ClearSubContainer(1);
				//player->ClearSubContainer(2);
				player->ClearSubContainer(3);
				player->ClearSubContainer(4);
				
				bRemoved = true;
			}			
			
		}
		else
		if (name == "place_danko") {
			float fTime;
			@GetGameTime(fTime);
			
			object scene;
			if (fTime < 14 + (c_iDay - 1) * 24) {
				@GetSceneByName(scene, "cot_anna");
				m_Danko = SpawnActor(scene, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
				@SetTimeEvent(c_iTimeEventPlaceDanko + 0, 14 + (c_iDay - 1) * 24);
				@SetTimeEvent(c_iTimeEventPlaceDanko + 1, 16 + (c_iDay - 1) * 24);
				@SetTimeEvent(c_iTimeEventPlaceDanko + 2, 18 + (c_iDay - 1) * 24);
				@SetVariable("k6q01DankoPos", 1);
			}
			else 
			if (fTime < 16 + (c_iDay - 1) * 24) {
				@GetSceneByName(scene, "cot_lara");
				m_Danko = SpawnActor(scene, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
				@SetTimeEvent(c_iTimeEventPlaceDanko + 1, 16 + (c_iDay - 1) * 24);
				@SetTimeEvent(c_iTimeEventPlaceDanko + 2, 18 + (c_iDay - 1) * 24);
				@SetVariable("k6q01DankoPos", 2);
			}
			else 
			if (fTime < 18 + (c_iDay - 1) * 24) {
				@GetSceneByName(scene, "dt_house_1_04");
				m_Danko = SpawnActor(scene, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
				@SetTimeEvent(c_iTimeEventPlaceDanko + 2, 18 + (c_iDay - 1) * 24);
				@SetVariable("k6q01DankoPos", 3);
			}
			else {
				LockMovingDoor("icot_eva_door", false);
				RemoveEva();
				@SetVariable("k6q01DankoPos", 4);
			}
			
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("k6q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				Cleanup();
			}
		}		
	}
	
	void OnGameTime(int id, float fTime) {
		int iPos;
		@GetVariable("k6q01DankoPos", iPos);
		if (id == c_iTimeEventPlaceDanko + 0) { // from anna to lara
			if (iPos != 1)
				return;
			object scene, scene_lara;
			@GetScene(scene);
			@GetSceneByName(scene_lara, "cot_lara");
			
			if (m_Danko)
				@Trigger(m_Danko, "cleanup");
				
			if (scene != scene_lara) {
				scene = scene_lara; // lara
				@Trace("0: placing danko to lara");
				@SetVariable("k6q01DankoPos", 2);
			}
			else {
				@GetSceneByName(scene, "dt_house_1_04"); // ospina
				@Trace("0: placing danko to ospina");
				@SetVariable("k6q01DankoPos", 3);
			}
				
			m_Danko = SpawnActor(scene, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
		}
		else
		if (id == c_iTimeEventPlaceDanko + 1) { // from lara to ospina
			if (iPos != 2)
				return;
			object scene, scene_ospina;
			@GetScene(scene);
			@GetSceneByName(scene_ospina, "dt_house_1_04");
			
			if (m_Danko)
				@Trigger(m_Danko, "cleanup");
				
			if (scene != scene_ospina) {
				m_Danko = SpawnActor(scene_ospina, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");		
				@Trace("1: placing danko to ospina");
				@SetVariable("k6q01DankoPos", 3);
			}
			else {
				object scene_eva;
				LockMovingDoor("icot_eva_door", false);
				RemoveEva();
				@SetVariable("k6q01DankoPos", 4);
				@Trace("1: placing danko to eva");
			}
		}
		else
		if (id == c_iTimeEventPlaceDanko + 2) { // from ospina to eva
			if (iPos != 3)
				return;
		
			object scene, scene_eva;
			@GetScene(scene);
			@GetSceneByName(scene_eva, "cot_eva");
			if (scene != scene_eva) {
				LockMovingDoor("icot_eva_door", false);
				@SetVariable("k6q01DankoPos", 4);
			}
		}
	}	
	
	void Fail(void) {
		@SetVariable("k6q01", c_iQuestFailed);
		Cleanup();
	}

	void Completed(void) {
		@SetVariable("k6q01", c_iQuestCompleted);
		//Cleanup();!!! important
	}

	void Cleanup(void) {
		disable OnTrigger;
		LockMovingDoor("icot_eva_door", false);
		if (m_Danko)
			@Trigger(m_Danko, "cleanup");

		int iStatus;			
		@GetVariable("k6q01", iStatus);
		
		LockDoorActor("icot_eva@door1", false);
		if (iStatus == c_iQuestCompleted) {
			@PlaySound("door_open");
		}
		
		RemoveEva();
		@RemoveActor(self());
	}
}
