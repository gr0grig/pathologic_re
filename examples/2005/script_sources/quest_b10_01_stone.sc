include std.sci

maintask TStone
{
	var bool m_bStop;

	void init(void) {
		@SetVisibility(true);
		
		while (!m_bStop) {
			@Hold();
		}
		
		@SetUsable(false);
	}

	void OnUse(object actor) {
		AddQuestActor("quest_b10_01_cutscene");
		Stop();
	}
	
	void Stop(void) {
		m_bStop = true;
		@StopGroup0();
		disable OnUse;
	}

	void OnTrigger(string name) {
		if (name == "enable_use") {
			@SetUsable();
		}
		else if (name == "disable_use") {
			Stop();
		}
	}
}
