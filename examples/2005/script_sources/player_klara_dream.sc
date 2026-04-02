include std.sci

// CONSTANTS
const float c_fSleepThreshold = 4.0;
// CONSTANTS

maintask TPlayerKlaraDream
{
	var float m_fSleepTime;
	
	void init(void) {
		@Trace("dream effect inited");
		float fStartTime;
		@GetGameTime(fStartTime);
		
		float fLastTime = fStartTime;
		for (;;) {
			@sync();
			
			float fTime;
			@GetGameTime(fTime);
			
			if (fTime <= fLastTime)
				continue;
			
			Tick(fTime - fLastTime);
			fLastTime = fTime;
		}
	}

	void Tick(float fDeltaTime) {
		if (IsSleeping()) {		
			m_fSleepTime += fDeltaTime;
		}
		else {
			if (m_fSleepTime > c_fSleepThreshold) {
				@Trace("dream time");
				m_fSleepTime -= c_fSleepThreshold;
				@sync();
				// sending notification
				TriggerActor("klara2_positioner", "sleep_end");
			}
		}
	}
}
