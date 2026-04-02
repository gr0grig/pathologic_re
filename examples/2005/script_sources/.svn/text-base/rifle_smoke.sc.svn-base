include std.sci

// CONSTANTS
// CONSTANTS

maintask TRifleSmoke
{
	void init(void) {
		object player;
		@FindActor(player, "player");
		
		if (player == null)
			return;
			
		Vector vDir; player->GetDirection(vDir);
		
		object smoke; @CreateSmoke(smoke, "smoke", 20);
		smoke->AddSource(vDir * 100, vDir);
		smoke->SetOpacity(0.8);
		smoke->SetSpeed(500, 100);
		smoke->SetLifeTime(1.5);
		smoke->Enable();
		smoke->Fade(false);

		@Sleep(1.5);
		smoke->Fade();
		@Sleep(1.5);
		
		@RemoveActor(self());		
	}
	
	void OnUnload() {
		@RemoveActor(self());		
		@sync();
	}
}
