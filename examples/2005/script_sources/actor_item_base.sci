include std.sci

task TActorItem
{
	void init(void) {
		//@SetUsable(true, 50);
		object geo;
		@FindGeometry("object", geo);
		geo->Enable(true);

		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		if (!IsAccessible(actor))
			return;

		object item;
		@GetItem(item, 0);
		int iAmount;
		@GetItemAmount(iAmount, 0);
		if (PlayerAddItem(actor, item, iAmount)) {
			OnTaken(actor);
		}
	}
	
	void OnTaken(object actor) {
		@RemoveActor(self());
	}
}
