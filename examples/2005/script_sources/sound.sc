include std.sci

const int c_iPlayerWaitTimer = 101;
const float c_fCheckInterval = 1;

maintask Sound {
	var object sound;
	var float fWorkDistance, fMinDistance;
	
	void init() {
		sound = null;
		if (!IsLoaded()) {
			TWaitForLoad{};
		}
		
		if (!HasProperty(self(), "distance"))
			fWorkDistance = 500 * 500;
		else {
			@GetProperty("distance", fWorkDistance);
			fWorkDistance *= fWorkDistance;
		}
		
		if (!HasProperty(self(), "mindistance"))
			fMinDistance = 100;
		else
			@GetProperty("mindistance", fMinDistance);
			
		@SetTimer(c_iPlayerWaitTimer, c_fCheckInterval);
		for (;;) {
			@Hold();
		}
	}
	
	void OnTimer(int id) {
		object player = GetPlayerActor();
		if (player == null) {
			@Trace("Null player");
			return;
		}
		
		Vector vPlayerPos = GetActorPosition(player);
		Vector vPos = GetActorPosition();
		Vector vDist = vPlayerPos - vPos;
		float fDist = (vDist | vDist);
		
		if (sound != null && fDist > fWorkDistance) {
			@Trace("stopped");
			sound->Stop(); sound = null;
			return;
		}
		
		if (sound == null && fDist < fWorkDistance) {
			disable OnTimer;
			@Trace("started");
			@WaitFor3DSoundToLoad("envsound");
			@PlayLoopedGlobalSound(sound, "envsound", [0, 0, 0], 0.0, fMinDistance);
			if (sound == null)
				@Trace("Sound was not found");
			else
				sound->FadeIn(0.5);
				
			enable OnTimer;
		}
	}
	
	void OnUnload() {
		@KillTimer(c_iPlayerWaitTimer);
		TWaitForLoad{};
		@SetTimer(c_iPlayerWaitTimer, c_fCheckInterval);
	}
}