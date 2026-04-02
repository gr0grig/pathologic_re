maintask task_0
{
	void init(string var_0_string, string var_1_string, string var_2_string, bool var_3_bool)
	{
		bool var_5_bool;
	
		for(;;) {
			if(!false) { //@nz
				@IsExistingLoop(var_1_string, var_5_bool);
				if(!var_5_bool) { //@nz
					@IsExistingLoop(var_2_string, var_5_bool);
					if(!var_5_bool) { //@nz
						@KillTimer(0);
						@FadeMusic2();
						@WaitForMusicEnd2();
						func_51(var_5_bool);
					}
				}
			}
			@GetRegionMusic(var_0_string);
			@AdvanceRegionMusic();
			@SetTimer(1, 15);
			if(var_0_string != 0) {
				@Trace("Playing music: " + var_0_string);
				@PlayMusic1(var_0_string);
				@WaitForMusicEnd1();
			} else {
			@Trace("Nothing to play");
			@Hold();
			}
			@KillTimer(1);
		}
	
	}
	EMIT "Return(); Pop(2)";

	void OnTimer(string var_0_string, string var_1_string, string var_2_string, bool var_3_bool, int var_4_int)
	{
		bool var_7_bool; bool var_8_bool;
		if(var_4_int == 0) {
			@IsPlayingMusic2(var_7_bool);
			if(!var_7_bool) { //@nz
				var_1_string = var_2_string;
				@Trace("Playing loop: " + var_2_string);
				@PlayMusic2(var_2_string);
				var_3_bool = false;
				func_51(var_8_bool);
			}
		} else {
			if(!(var_4_int == 1)) goto Label_117;
			@IsExistingMusic(var_0_string, var_8_bool);
			var_29_bool = !var_8_bool; //@nz
			if(var_29_bool == 0) goto Label_117;
			@KillTimer(1);
			if(var_0_string != 0)
				@FadeMusic1();
			else
				@StopGroup0();
			@Trace("Music time limit reached");
		}
	Label_117:
	
	}

	// @pe
	void OnConsole(string var_0_string, string var_1_string, string var_2_string, bool var_3_bool, string var_4_string, string var_5_string)
	{
		if(var_4_string == "loop") {
			@Trace("Playing loop: " + var_5_string);
			@PlayMusic2(var_5_string);
			var_3_bool = true;
		} else if(var_4_string == "loop_stop") {
				@StopMusic2();
				var_3_bool = false;
		}
	Label_143:
		for(;;) {
			return 0;

		}
	
		if("play" == 0) goto Label_143;
		@PlayGlobalMusic("music1.ogg");
	}

}


void func_51(string var_2_string)
{
	int var_13_int; int var_14_int; int var_15_int;
	@GetRegionLoopCount(var_13_int);
	if(var_13_int != 0) {
		@irand(var_14_int, 40);
		@irand(var_15_int, var_13_int);
		@GetRegionLoop(var_15_int, var_2_string);
		@Trace("Next loop: " + var_2_string);
		@SetTimer(0, (var_14_int + 30));
	} else {
		@KillTimer(0);
	}
	
}


