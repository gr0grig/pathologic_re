include std.sci
include actor_item_disp_base.sci

maintask TItem : TDispItem
{
	void OnTaken(object actor) {
		TriggerActor("quest_b8_02", "book_taken");
		super.OnTaken(actor);
	}
}
