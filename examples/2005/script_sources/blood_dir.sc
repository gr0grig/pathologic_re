include std.sci

maintask TBlood
{
	var Vector vPos, vDir;
	void init(void) {
		
		object blood;
		if (!IsLoaded()) {
			@RemoveActor(self());
			return;
		}
		
		@FindParticleSystem("blood", blood);
		blood->Enable();
		
		vPos = [0,0,0];
		vDir = [-100, 100,0];
		
		blood->AddSource(vPos, vDir, 0.3);
		float fTime = 0.4;
		while(fTime > 0) {
			float fDeltaTime;
			@sync(fDeltaTime);
			fTime -=fDeltaTime;
			vPos.y -= 150 * fDeltaTime;
			blood->AddSource(vPos, vDir, 0.3);
		}
		
		blood->Fade(true);
		
		fTime = 0.4;
		while(fTime > 0) {
			float fDeltaTime;
			@sync(fDeltaTime);
			fTime -=fDeltaTime;
			vPos.y -= 150 * fDeltaTime;
			blood->AddSource(vPos, vDir, 0.3);
		}
		@RemoveActor(self());
	}
	
	void OnUnload(void) {
		@RemoveActor(self());
		@sync();
	}
}
