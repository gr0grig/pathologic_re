include std.sci
include actor_item_disp_base.sci

maintask TInventoryObject : TDispItem
{
	void OnTaken(object actor) {
		TriggerActor("quest_k4_01", "meshok_taken");
		@RemoveActor(self());
	}
}
