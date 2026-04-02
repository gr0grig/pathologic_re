include std.sci

property string Name;

maintask TTrigger
{
	void init(void) {
		@Trace("Triggered actor: " + Name);
		for (;;) {
			@Hold();
		}
	}
	
	void OnIntersection(object actor) {
		bool bPlayer;
		@IsPlayerActor(actor, bPlayer);
		if (bPlayer) {
			object scene;
			@GetScene(scene);
			@Trigger(scene, Name);
		}
	}
}
