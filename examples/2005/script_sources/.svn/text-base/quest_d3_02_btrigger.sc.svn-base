include std.sci
include actor_disp_base.sci

maintask TTrigger : TDispBase
{
	void OnIntersection(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			disable OnIntersection;
			TriggerActor("quest_d3_02", "butcher_trigger");
			@RemoveActor(self());
		}
	}
}
