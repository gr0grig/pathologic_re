include std.sci

property string Name;

maintask TTrigger
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnIntersection(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			string strTriggerName;
			@GetActorName(strTriggerName);
			TriggerActor(Name, strTriggerName);
		}
	}
}
