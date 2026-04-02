include std.sci
include actor_item_base.sci

task TDispItem : TActorItem
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
}
