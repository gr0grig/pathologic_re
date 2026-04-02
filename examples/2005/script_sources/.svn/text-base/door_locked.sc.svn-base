include std.sci

maintask TLockedDoor
{
	void init(void) {
		@SetVisibility(true);
		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		@PlaySound("door_closed");
		@Trace("Door is locked");
	}
}
