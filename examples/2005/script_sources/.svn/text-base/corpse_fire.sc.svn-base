include std.sci

const int c_iFireTimer = 1;
const float c_fTimerPeriod = 5.0;

maintask TCorpseFire
{
	void init(void) {
		@SetTimer(c_iFireTimer, c_fTimerPeriod);
		
		object fire;
		@FindParticleSystem("fire", fire);
		if (fire == null) {
			@Trace("Can't find fire particle system");
			return;
		}
				
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
		@Hold();
		@KillTimer(c_iFireTimer);

		fire->Fade(true);
		@Sleep(2);
		@RemoveActor(self());
	}
	
	void OnTimer(int id) {
		if (id == c_iFireTimer) {
			@StopGroup0();
		}
	}
	
	void OnTrigger(string name) {
		if (name == "continue") {
			@SetTimer(c_iFireTimer, c_fTimerPeriod);
		}	
	}
}

