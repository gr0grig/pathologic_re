include std.sci

property string Name;

var bool m_bNotTriggered;

task TTriggerBase
{
	var bool m_bToBeRemoved;

	void init(void) {
		m_bNotTriggered = true;
		
		for (;;) {
			@Hold();
		}
	}
	
	void OnIntersection(object actor) {
		if (!m_bNotTriggered)
			return;

		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			m_bNotTriggered = false;

			string strTriggerName;
			@GetActorName(strTriggerName);
			TriggerActor(Name, strTriggerName);
		}
	}

	void OnTrigger(string name) {
		if (name == "cleanup") {
			m_bToBeRemoved = true;
			bool bLoaded;
			@IsLoaded(bLoaded);
			if (!bLoaded)
				@RemoveActor(self());
		}
		else if (name == "restore") {
			m_bToBeRemoved = false;
		}
	}

	void OnUnload(void) {
		if (m_bToBeRemoved)
			@RemoveActor(self());
	}
}
