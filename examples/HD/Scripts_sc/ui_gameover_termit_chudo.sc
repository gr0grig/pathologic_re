event OnDraw 0;
event OnKeyDown 101;
event OnUpdate 1;

task t0
{
	var object tv0;
	var int tv1;
	var int tv2;
	var bool tv3;

	void init(string a0, bool a1)
	{
		tv3 = a1;
		@SetOwnerDraw(true);
		@ShowCursor(false);
		@CaptureKeyboard();
		@GetWindowSize(tv1, tv2);
		@LoadVideo(a0);
		@FindVideo(tv0, a0);
		tv0->Play(false);
		@ProcessEvents();
		@SetOwnerDraw(false);
		@ShowCursor(true);
		@ReleaseVideo(a0);
	}

	void OnDraw(void)
	{
		bool L0;
		tv0->IsLost(L0);
		if (L0) {
			bool L1;
			tv0->Restore(L1);
			if (!L1) {
				return;
			}
		}
		bool L2;
		tv0->IsPlaying(L2);
		if (L2) {
			tv0->StretchBlit(0, 0, tv1, tv2);
		} else {
			tv0->StretchBlit(0, 0, tv1, tv2);
			@StopEventProcessing();
		}
	}

	void OnKeyDown(int a0)
	{
		if (!tv3) {
			return;
		}
		if (a0 == 27 || a0 == 32 || a0 == 257 || a0 == 262) {
			@StopEventProcessing();
			tv0->Stop();
		}
	}
}

maintask t1
{
	void init(void)
	{
		disable OnUpdate;
		disable OnDraw;
		@UISync();
		enable OnUpdate;
		enable OnDraw;
		t0{"fin_termit.wmv", false};
		@DestroyWindow();
		@NewGame("world_final.xml", "player_final.xml");
	}
}

