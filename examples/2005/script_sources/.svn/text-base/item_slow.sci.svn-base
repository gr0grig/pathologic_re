include std.sci

task TSlow
{
	var bool m_bStop;

	void init(float fWorkTime) {
		float fStartTime;
		@GetGameTime(fStartTime);
		float fEndTime = fStartTime + fWorkTime;
		
		float fLastTime = fStartTime;
		for (;;) {
			@sync();
			
			if (m_bStop)
				break;
			
			float fTime;
			@GetGameTime(fTime);
			
			if (fTime <= fLastTime)
				continue;
			
			if (fTime >= fEndTime) {
				Tick(fEndTime - fLastTime);
				break;
			}
			else {
				if (Tick(fTime - fLastTime))
					break;
				fLastTime = fTime;
			}
		}
	}
	
	void Stop(void) {
		m_bStop = true;
	}
	
	// return true to stop
	// bool Tick(float fDeltaTime) = 0
}
