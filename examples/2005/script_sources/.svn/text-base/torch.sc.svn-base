include std.sci

var object g_Torch;

maintask TFire
{
	void init(void) {
		object torch;
		@FindParticleSystem("torch", torch);
		if (torch == null) {
			@Trace("Can't find torch particle system");
			return;
		}
		
		torch->AddSource([0,0,0], [0,1,0], 0.0);
		torch->Enable();
		
		g_Torch = torch;
		
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		if (name == "remove") {
			TRemove{};
		}
	}
}

task TRemove
{
	void init(void) {
		if (g_Torch)
			g_Torch->Fade();
		@Sleep(1);
		@RemoveActor(self());
		@Hold();
	}
}