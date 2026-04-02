include std.sci

maintask TFire
{
	void init(void) {
		if (!IsLoaded()) {
			TWaitForLoad{};
		}
		
		object fire;
		@FindParticleSystem("fire", fire);
		if (fire == null) {
			@Trace("Can't find fire particle system");
			return;
		}
				
		fire->AddSource([0,0,0], [0,1,0], 0.0);
		fire->Enable();
		
		for (;;) {
			@Hold();
		}
	}
	
	void OnUnload(void) {
		TWaitForLoad{};
	}
}

