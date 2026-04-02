include std.sci
include actor_item_base.sci

maintask TInventoryObject : TActorItem
{
	var bool m_bToBeRemoved;

	void init(void) {
		m_bToBeRemoved = false;
		super.init();
	}
	
	void CheckRemove(void) {
		if (m_bToBeRemoved)
			@RemoveActor(self());
	}

	void OnTrigger(string name) {
		if (name == "cleanup") {
			m_bToBeRemoved = true;
			bool bLoaded;
			@IsLoaded(bLoaded);
			if (!bLoaded)
				@RemoveActor(self());
		}
	}

	void OnUnload(void) {
		CheckRemove();
	}
	
	void OnTaken(object actor) {
		TriggerActor("quest_d10_01", "soldier_fight");
		super.OnTaken(actor);
	}
}
