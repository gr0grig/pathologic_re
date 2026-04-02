include std.sci

maintask TBlood
{
	void init(void) {
		object blood;
		if (!IsLoaded()) {
			@RemoveActor(self());
			return;
		}
		
		@FindParticleSystem("blood", blood);
		blood->Enable();
		blood->AddSource([0,0,0], [0,-80,0], 2);
		@Sleep(0.4);
		blood->Fade(true);
		@Sleep(0.4);
		@RemoveActor(self());
	}
	
	void OnUnload(void) {
		@RemoveActor(self());
		@sync();
	}
}
