event OnUnload 6;

maintask t0
{
	void init(void)
	{
		object L0;
		Vector L1;
		object L2;
		@FindActor(L0, "player");
		if (L0 == null) {
			return;
		}
		L0->GetDirection(L1);
		@CreateSmoke(L2, "smoke", 20);
		L2->AddSource(L1 * 100, L1);
		L2->SetOpacity(0.800000011920929);
		L2->SetSpeed(500, 100);
		L2->SetLifeTime(1.5);
		L2->Enable();
		L2->Fade(false);
		@Sleep(1.5);
		L2->Fade();
		@Sleep(1.5);
		@SetDeathStateAndRemove();
	}

	void OnUnload(void)
	{
		@SetDeathStateAndRemove();
		@sync();
	}
}

