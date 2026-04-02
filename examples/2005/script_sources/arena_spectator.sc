include std.sci

maintask TSpectator
{
	void init(void) {
		object player;
		@FindActor(player, "player");
		HeadLook(player);
		@Hold();
	}
}
