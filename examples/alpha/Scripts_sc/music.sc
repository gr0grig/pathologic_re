event OnTimer 7;
event OnConsole 1000;

maintask t0
{
	var string tv0;
	var string tv1;
	var string tv2;
	var bool tv3;

	void init(void)
	{
		tv3 = false;
		for (; ; ) {
			if (!tv3) {
				bool L0;
				@IsExistingLoop(tv1, L0);
				if (!L0) {
					@IsExistingLoop(tv2, L0);
					if (!L0) {
						@KillTimer(0);
						@FadeMusic2();
						@WaitForMusicEnd2();
						f_33_a0_v();
					}
				}
			}
			@GetRegionMusic(tv0);
			@AdvanceRegionMusic();
			@SetTimer(1, 15);
			if (tv0) {
				@Trace("Playing music: " + tv0);
				@PlayMusic1(tv0);
				@WaitForMusicEnd1();
			} else {
				@Trace("Nothing to play");
				@Hold();
			}
			@KillTimer(1);
		}
	}

	void f_33_a0_v(void)
	{
		int L0;
		@GetRegionLoopCount(L0);
		if (L0) {
			int L1;
			int L2;
			@irand(L1, 40);
			L1 = L1 + 30;
			@irand(L2, L0);
			@GetRegionLoop(L2, tv2);
			@Trace("Next loop: " + tv2);
			@SetTimer(0, L1);
		} else {
			@KillTimer(0);
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 0) {
			bool L0;
			@IsPlayingMusic2(L0);
			if (!L0) {
				tv1 = tv2;
				@Trace("Playing loop: " + tv2);
				@PlayMusic2(tv2);
				tv3 = false;
				f_33_a0_v();
			}
		} else {
			if (a0 == 1) {
				bool L1;
				@IsExistingMusic(tv0, L1);
				if (!L1) {
					@KillTimer(1);
					if (tv0) {
						@FadeMusic1();
					} else {
						@StopGroup0();
					}
					@Trace("Music time limit reached");
				}
			}
		}
	}

	void OnConsole(string a0, string a1)
	{
		if (a0 == "loop") {
			@Trace("Playing loop: " + a1);
			@PlayMusic2(a1);
			tv3 = true;
		} else {
			if (a0 == "loop_stop") {
				@StopMusic2();
				tv3 = false;
			} else {
				a0 = "play";
				if (a0) {
					@PlayGlobalMusic("music1.ogg");
				}
			}
		}
	}
}

