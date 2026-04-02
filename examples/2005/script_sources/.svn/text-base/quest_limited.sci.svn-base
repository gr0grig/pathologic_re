include std.sci

task TQuestLimited
{
	void init(int iDay) {
		float fTime;
		@GetGameTime(fTime);
		if (fTime >= iDay * 24) {
			Cleanup();
		}
		else {
			@SetTimeEvent(0, iDay * 24);
			@Hold();
		}
	}
	
	void OnGameTime(int id, float fTime) {
		Limit();
	}
	
	// void Limit(void) = 0
}
