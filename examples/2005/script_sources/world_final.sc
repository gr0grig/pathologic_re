include std.sci
include actor_std.sci
include game_ext.sci

maintask TWorld
{
	var object m_Scene;

	void init(void) {
		@Trace("World inited");
		@SetSaveProperty(0, c_iBranchFinal);

		PlacePlayer();
		@sync();
		
		//@PlaySharedSound("intro");
		object actor;
		@AddBlankActorFromXml(actor, m_Scene, "final_quest_actor", "final_quest_actor.xml");
		
		for (;;) {
			@Hold();
		}
	}
	
	void PlacePlayer(void) {
		object player;
		@FindActor(player, "player");
		@GetSceneByName(m_Scene, "final_theater");
		if (!m_Scene) {
			@Trace("Final scene not found");
			return;
		}
		bool bFound;
		Vector vPos, vDir;
		m_Scene->GetLocator("birth", bFound, vPos, vDir);
		if (bFound) {
			@Teleport(player, m_Scene, vPos, vDir);
		}
	}
	
	void OnTrigger(string name) {
		@Trace("world trigger " + name);
		if (name == "open") {
			ProcessExit();
		}
		else
		if (name == "exit") {
			@RemoveWorld();
			@GameOver("gameover_credits.xml");
		}
	}
	
	void TriggerDoors(void) {
		object doors;
		m_Scene->GetGroupActors(doors, 0);
		@Trace("door begin");
		object door;
		bool bMore;
		while(doors->Next(bMore, door), bMore) {
			if (doors) {
				@Trace("door");
				@Trigger(door, "open");
			}
		}
	}
	
	void ProcessExit(void) {
		@Trace("exiting from game");
		TriggerDoors();
		TriggerActor("final_quest_actor", "whiten");
	}
}
