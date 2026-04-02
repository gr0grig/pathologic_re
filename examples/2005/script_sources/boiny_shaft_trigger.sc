include std.sci

maintask TTrigger
{
	var bool m_bActive;

	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		if (name == "activate") {
			m_bActive = true;
		}
		else if (name == "deactivate") {
			m_bActive = false;
		}
	}
	
	void OnIntersection(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			if (m_bActive) {
				TriggerActor("quest_b11_01", "shaft_drop");
			}
			else {
				actor->SetProperty("health", 0);
			}
		}
	}
}
