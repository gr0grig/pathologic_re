include std.sci

maintask TContainer
{
	void init(void) {
		@SetVisibility(true);
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		if (!IsAccessible(actor) || !ContainerUseEnabled())
			return;

		object item;
		@GetItem(item, 0);
		int iAmount;
		@GetItemAmount(iAmount, 0);
		if (PlayerAddItem(actor, item, iAmount)) {
			@RemoveActor(self());
		}
	}
}
