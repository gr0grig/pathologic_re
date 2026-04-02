include std.sci

maintask TSoldierFire
{
	void init(void) {
		bool bLoaded;
		@IsLoaded(bLoaded);
		if (bLoaded) {
			@sync();
			@sync();
		}
		else
			@Trace("Unloaded dynamic light");
		
		@RemoveActor(self());
	}
}