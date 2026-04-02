include std.sci
include game.sci
include citymanager_base.sci

void PutToContainer(object actor, object items, object amounts)
{
	int iCount;
	items->size(iCount);
	for (int i = 0; i < iCount; ++i) {
		object item;
		items->get(item, i);
		int iAmount;
		amounts->get(iAmount, i);
		bool bAdded;
		actor->AddItem(bAdded, item, 0, iAmount);
	}
}


maintask TQuest
{
	var object m_Girl;
	var object m_Soldiers;
	var object m_Officer;
	var object m_GraveyardFire;
	var object m_Guard1, m_Guard2;
	var object m_PlayerContainer1, m_PlayerContainerAmounts1;
	var object m_PlayerContainer2, m_PlayerContainerAmounts2;
	var object m_PlayerContainer3, m_PlayerContainerAmounts3;
	var object m_PlayerContainer4, m_PlayerContainerAmounts4;
	var object m_PlayerContainer5, m_PlayerContainerAmounts5;
	var bool m_bTeleport, m_bRestored;
	
	void InitGraveyardActors(void) {
		object scene;
		@GetMainOutdoorScene(scene);
		@AddActor(m_GraveyardFire, "d3q01_graveyard_fire", scene, [0, 0, 0], [0, 0, 1], "d3q01_graveyard_fire.xml");
	}	

	void init(void) {
		m_Soldiers = CreateObjectVector();
		
		m_PlayerContainer1 = CreateObjectVector();
		m_PlayerContainerAmounts1 = CreateIntVector();
		m_PlayerContainer2 = CreateObjectVector();
		m_PlayerContainerAmounts2 = CreateIntVector();
		m_PlayerContainer3 = CreateObjectVector();
		m_PlayerContainerAmounts3 = CreateIntVector();
		m_PlayerContainer4 = CreateObjectVector();
		m_PlayerContainerAmounts4 = CreateIntVector();
		m_PlayerContainer5 = CreateObjectVector();
		m_PlayerContainerAmounts5 = CreateIntVector();
		
		LockDoorActor("cot_maria@door1", true);
		
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "init_soldiers") {
			object scene;
			@GetMainOutdoorScene(scene);
			for (int i = 1; i <= 10; ++i) {
				m_Soldiers->add(SpawnStationaryActor(scene, "pt_d11q01_soldier" + i, "pers_soldat", "d11q01_soldier.xml"));
			}
			m_Officer = SpawnStationaryActor(scene, "pt_d11q01_msoldier", "pers_soldat_hand", "d11q01_msoldier.xml");
		}
		else if (name == "init_girl") {
			object scene;
			@GetSceneByName(scene, "shouse1_kabak");
			m_Girl = SpawnActor(scene, "pt_d11q01_girl", "pers_nudegirl", "d11q01_girl.xml");
		}
		else if (name == "remove_andrei") {
			object scene;
			@GetSceneByName(scene, "shouse1_kabak");
			@Trigger(scene, "noandrei");
		}
		else if (name == "restore_andrei") {
			object scene;
			@GetSceneByName(scene, "shouse1_kabak");
			@Trigger(scene, "andrei");
			
			if (m_Girl)
				@Trigger(m_Girl, "cleanup");
		}
		else if (name == "soldier_attack") {
			int iCount;
			m_Soldiers->size(iCount);
			for (int i = 0; i < iCount; ++i) {
				object actor;
				m_Soldiers->get(actor, i);
				if (actor) {
					object ractor;
					actor->GetActor(ractor);
					if (!ractor) {
						actor->Remove();
					}
					else {
						@Trigger(ractor, "attack");
					}
				}
			}
			if (m_Officer) {
				object ractor;
				m_Officer->GetActor(ractor);
				if (!ractor) {
					m_Officer->Remove();
				}
				else {
					@Trigger(ractor, "attack");
				}
			}
		}
		else if (name == "teleport") {
			object player;
			@FindActor(player, "player");
			
			m_bTeleport = true;
			
			if (player) {
				m_PlayerContainer1 = GetContainerItems(player, 0, m_PlayerContainerAmounts1);
				m_PlayerContainer2 = GetContainerItems(player, 1, m_PlayerContainerAmounts2);
				m_PlayerContainer3 = GetContainerItems(player, 2, m_PlayerContainerAmounts3);
				m_PlayerContainer4 = GetContainerItems(player, 3, m_PlayerContainerAmounts4);
				m_PlayerContainer5 = GetContainerItems(player, 4, m_PlayerContainerAmounts5);
				
				for (int i = 0; i < 5; ++i) {
					player->RemoveAllItems(i);
				}			
				player->SelectWeapon();
			}
			InitGraveyardActors();
			
			AddQuestActor("quest_d11_01_teleport");
			
			object scene;
			@GetMainOutdoorScene(scene);
			m_Guard1 = SpawnStationaryActorForce(scene, "pt_d11q01_guard1", "pers_soldat", "d11q01_guard1.xml");
			m_Guard2 = SpawnStationaryActorForce(scene, "pt_d11q01_guard2", "pers_soldat", "d11q01_guard2.xml");
			
			m_Officer->Remove();
			// changins officer to soldier
			m_Officer = SpawnStationaryActor(scene, "pt_d11q01_msoldier", "pers_soldat", "d11q01_soldier.xml");
		}
		else if (name == "soldier_death") {
			if (!m_bTeleport)
				return;
			if (m_bRestored)
				return;
				
			if (m_Officer) {
				object ractor;
				m_Officer->GetActor(ractor);	
				bool bDead;
				ractor->IsDead(bDead);
				if (bDead) {
					PutToContainer(ractor, m_PlayerContainer1, m_PlayerContainerAmounts1);
					PutToContainer(ractor, m_PlayerContainer2, m_PlayerContainerAmounts2);
					PutToContainer(ractor, m_PlayerContainer3, m_PlayerContainerAmounts3);
					PutToContainer(ractor, m_PlayerContainer4, m_PlayerContainerAmounts4);
					PutToContainer(ractor, m_PlayerContainer5, m_PlayerContainerAmounts5);
					bool bSuccess;
					ractor->AddItem(bSuccess, GetItemByName("burah_serum"), 0, 1);
					m_bRestored = true;
				}
			}
		}
		else if (name == "cleanup") {
			int iState;
			@GetVariable("d11q01", iState);
			if (iState != c_iQuestCompleted) {
				Fail();
			}
			else {
				PreCleanup();
			}
			Cleanup();
		}
		else if (name == "fail") {
			Fail();
		}
		else if (name == "completed") {
			Completed();
		}
	}
	
	void Fail(void) {
		TriggerActor2("volonteers_danko", "disease", "andrei");
		@SetVariable("d11q01", c_iQuestFailed);
		PreCleanup();
	}

	void Completed(void) {
		@SetVariable("d11q01", c_iQuestCompleted);
		PreCleanup();
	}
	
	void PreCleanup(void) {
		if (m_Girl)
			@Trigger(m_Girl, "cleanup");
			
		if (m_GraveyardFire)
			@Trigger(m_GraveyardFire, "cleanup");
			
		if (m_Guard1)
			m_Guard1->Remove();
		if (m_Guard2) 
			m_Guard2->Remove();
	}
	
	void Cleanup(void) {
		disable OnTrigger;
		RemoveStationaryActorsFromVector(m_Soldiers);
		if (m_Officer)
			m_Officer->Remove();
			
		LockDoorActor("cot_maria@door1", false);
			
		@RemoveActor(self());
	}
}
