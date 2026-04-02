include std.sci

property string Name;

var bool m_bNotTriggered;

maintask TTrigger
{
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
}
