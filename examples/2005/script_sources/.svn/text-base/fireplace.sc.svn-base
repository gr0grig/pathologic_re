include std.sci

maintask TBonFire
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
		
		object sound;
		@PlayLoopedGlobalSound(sound, "fire_loop", [0, 10, 0]);
				
		fire->AddSource([0,0,0], [0,1,0], 0.0);
		fire->AddSource([10,0,0], [0,1,0], 0.0);
		fire->AddSource([0,0,10], [0,1,0], 0.0);
		fire->AddSource([-10,0,0], [0,1,0], 0.0);
		fire->AddSource([0,0,-10], [0,1,0], 0.0);
		fire->AddSource([10,0,10], [0,1,0], 0.0);
		fire->AddSource([-10,0,-10], [0,1,0], 0.0);
		fire->AddSource([-10,0,10], [0,1,0], 0.0);
		fire->AddSource([10,0,-10], [0,1,0], 0.0);
		
		fire->Enable();
				
		for (;;) {
			@Hold();
		}
	}
	
	void OnUnload(void) {
		TWaitForLoad{};
	}
}

