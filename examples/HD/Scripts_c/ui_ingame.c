task task_0
{
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object)
	{
		bool var_24_bool; bool var_25_bool;
		actor->IsLost(var_24_bool); //@t
		if(var_24_bool != 0) {
			actor->Restore(var_25_bool); //@t
			if(!var_25_bool) { //@nz
			}
		}
		bool var_26_bool;
		actor->IsPlaying(var_26_bool); //@t
		if(var_26_bool != 0) {
			actor->StretchBlit(0, 0, var_1_int, var_2_int); //@t
		} else {
			actor->StretchBlit(0, 0, var_1_int, var_2_int); //@t
			@StopEventProcessing();
		}
	
	}

	// @pe
	void event_101(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, object var_5_object, int var_6_int, int var_7_int, int var_8_int, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, string var_17_string, string var_18_string, string var_19_string, bool var_20_bool, object var_21_object)
	{
		if(!var_3_bool) //@nz
			return 0;
		bool var_23_bool = true;
		bool var_24_bool = true;
		bool var_25_bool = true;
		var_27_bool = var_21_object == 27;
		if(var_27_bool != 1) {
			var_29_bool = var_21_object == 32;
			if(var_29_bool != 1)
				var_25_bool = false;
		}
		if(var_25_bool != 1) {
			var_31_bool = var_21_object == 257;
			if(var_31_bool != 1)
				var_24_bool = false;
		}
		if(var_24_bool != 1) {
			var_33_bool = var_21_object == 262;
			if(var_33_bool != 1)
				var_23_bool = false;
		}
		if(var_23_bool != 0) {
			@StopEventProcessing();
			var_0_object->Stop(); //@t
		}
	}

}


task task_1
{
	// @pe
	void event_200(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, string var_6_string, object var_7_object, int var_8_int, int var_9_int, int var_10_int, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, string var_18_string, string var_19_string, string var_20_string, string var_21_string, bool var_22_bool, object var_23_object)
	{
		if(var_22_bool == "intro") {
			var_0_object->DestroyWindow(); //@t
			@StopEventProcessing();
		}
	}

}


maintask task_2
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object)
	{
		func_458(var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, false);
		@DestroyWindow();
	}

	// @pe
	void event_100(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		@Trace(var_21_int);
		if(var_21_int == 27)
			@DestroyWindow();
		if(var_21_int == 262)
			@DestroyWindow();
		if(var_21_int == 260)
			@DestroyWindow();
		if(var_21_int == 257)
			@DestroyWindow();
	}

	// @pe
	void event_102(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(var_21_int == 272) {
			@HideCursor();
			func_286();
		} else if(var_21_int == 274) {
			@HideCursor();
			func_173();
		}
	
	}

	// @pe
	void event_101(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(var_21_int == 267) {
			@HideCursor();
			func_286();
		} else if(var_21_int == 268) {
				@HideCursor();
				func_173();
		}
	Label_449:
		for(;;) {

		}
	
		if(!(var_21_int == 256)) goto Label_449;
		string var_124_string;
		func_281(var_21_int, var_124_string);
		if(!(var_124_string != "")) goto Label_449;
		@HideCursor();
		var_127_int = 2;
		string var_128_string;
		func_281(var_127_int, var_128_string);
		@SendMessage(var_127_int, var_128_string);
	}

	// @pe
	void event_200(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int, string var_22_string, object var_23_object)
	{
		if(var_22_string == "newgame") {
			var_2_int = 7;
			@StopEventProcessing();
		} else {
				if(var_22_string == "quitgame") {
					@UITrace("Quit game");
					@Quit();
					return 0;
				EMIT "GOTO 0x397";
				}
				if(var_22_string == "loadgame") {
					func_936(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
					@CreateWindow("load.xml", false, var_6_int);
					return 0;
				EMIT "GOTO 0x397";
				}
				if(var_22_string == "savegame") {
					func_936(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
					@CreateWindow("save.xml", false, var_7_int);
					return 0;
				EMIT "GOTO 0x397";
				}
				if(var_22_string == "gameoptions") {
					func_936(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
					@CreateWindow("options.xml", false, var_8_object);
					return 0;
				EMIT "GOTO 0x397";
				}
				if(var_22_string == "continue") {
					var_2_int = 6;
					@StopEventProcessing();
					return 0;
				EMIT "GOTO 0x397";
				}
				if(!(var_22_string == "credits")) goto Label_740;
				func_936(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
				TaskCall(1);
				func_89(var_52_object, 8);
				TaskReturn();
				object var_56_object;
				func_116(var_56_object);
				var_3_bool = var_56_object;
				object var_61_object;
				func_450(var_61_object);
				var_4_object = var_61_object;
				@ShowCursor(true);
				@CaptureKeyboard();
				func_283(var_23_object, "");
		}
	Label_919:
		for(;;) {
			return 0;

		}
	
	Label_740:
		if(var_22_string == "danko") {
			if(var_21_int == 0) {
				var_2_int = 1;
				@StopEventProcessing();
			} else if(var_21_int == 1) {
					@SendMessage(202, "player_name");
					@SendMessage(203, "player_desc");
			}
		Label_773:
			for(;;) {
				return 0;
			EMIT "GOTO 0x397";

			}

			if(!(var_21_int == 2)) goto Label_773;
			@SendMessage(-1, "player_name");
			@SendMessage(-1, "player_desc");
		}
		if(var_22_string == "burah") {
			if(var_21_int == 0) {
				var_2_int = 2;
				@StopEventProcessing();
			} else if(var_21_int == 1) {
					@SendMessage(205, "player_name");
					@SendMessage(206, "player_desc");
			}
		Label_808:
			for(;;) {
				return 0;
			EMIT "GOTO 0x397";

			}

			if(!(var_21_int == 2)) goto Label_808;
			@SendMessage(-1, "player_name");
			@SendMessage(-1, "player_desc");
		}
		if(var_22_string == "klara") {
			if(var_21_int == 0) {
				bool var_104_bool = false;
				bool var_105_bool;
				func_974(var_105_bool);
				if(!var_105_bool) { //@nz
					bool var_112_bool;
					func_966(var_112_bool);
					if(!var_112_bool) //@nz
						var_104_bool = true;
				}
				if(var_104_bool != 0)
					return 0;
				var_2_int = 3;
				@StopEventProcessing();
			} else {
					if(var_21_int == 1) {
						@SendMessage(208, "player_name");
						bool var_123_bool = false;
						bool var_124_bool;
						func_974(var_124_bool);
						if(!var_124_bool) { //@nz
							bool var_126_bool;
							func_966(var_126_bool);
							if(!var_126_bool) //@nz
								var_123_bool = true;
						}
						if(var_123_bool != 0)
							@SendMessage(213, "player_desc");
						else
							@SendMessage(209, "player_desc");
					if(!(var_21_int == 2)) goto Label_877;
					@SendMessage(-1, "player_name");
					@SendMessage(-1, "player_desc");
		}
				if(var_22_string == "load") {
					if(var_21_int == 0) {
						var_2_int = 4;
						var_23_object->GetFileName(var_10_object);
						@StopEventProcessing();
					} else {
						func_920(var_22_string, var_23_object);
				}
					if(var_22_string == "save") {
						if(var_21_int == 0) {
							var_2_int = 5;
							var_9_object = var_23_object;
							@StopEventProcessing();
						} else {
							func_920(var_22_string, var_23_object);
					}
						if(!(var_22_string == "options")) goto Label_919;
						func_920(var_22_string, var_23_object);
						return 0;
					}
					return 0;
				EMIT "GOTO 0x397";
				}
				return 0;
			EMIT "GOTO 0x397";
				}
		}
	Label_877:
		for(;;) {
			return 0;
		EMIT "GOTO 0x397";

		}
	
	}

}


// @pe
void func_0(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, string var_54_string, bool var_55_bool)
{
	var_3_bool = var_55_bool;
	@SetOwnerDraw(true);
	@ShowCursor(false);
	@CaptureKeyboard();
	@GetWindowSize(var_1_int, var_2_int);
	@LoadVideo(var_54_string);
	@FindVideo(var_0_object, var_54_string);
	var_0_object->Play(false); //@t
	@ProcessEvents();
	@SetOwnerDraw(false);
	@ShowCursor(true);
	@ReleaseVideo(var_54_string);
}


// @pe
void func_89(object var_0_object, int var_49_int)
{
	@CreateWindow("intro.xml", false, var_0_object);
	@SendMessage(var_49_int, "intro");
	@ProcessEvents();
}


void func_450(object var_110_object)
{
	object var_112_object;
	@CreateWindow("game_logo.xml", false, var_112_object);
	var_112_object = var_110_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_963(object var_12_object, string var_35_string)
{
	var_12_object = var_35_string;
}


void func_966(bool var_112_bool)
{
	int var_114_int;
	@GetRegistryData(var_114_int, "BurahCompleted", 0);
	var_112_bool = var_114_int != 0;
}


void func_936(bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object)
{
	if(var_3_bool != 0)
		var_3_bool->DestroyWindow(); //@t
	if(var_4_object != 0)
		var_4_object->DestroyWindow(); //@t
	if(var_5_int != 0)
		var_5_int->DestroyWindow(); //@t
	if(var_6_int != 0)
		var_6_int->DestroyWindow(); //@t
	if(var_7_int != 0)
		var_7_int->DestroyWindow(); //@t
	if(var_8_object != 0)
		var_8_object->DestroyWindow(); //@t
	@CaptureKeyboard();
}


void func_458(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, object var_9_object, object var_10_object, object var_14_object, bool var_21_bool)
{
	var_14_object = var_21_bool;
	@CaptureKeyboard();
	var_2_int = 0;
	@GetWindowSize(var_0_object, var_1_int);
	@SetCursor("default");
	@SetBackground("default");
	@PlaySound("menumusic");
	@ShowCursor(true);
	string var_29_string;
	func_283(var_29_string, "");
	func_963(var_29_string, "");
	if(var_21_bool != 0) {
		@CreateWindow("game_choose_pers.xml", false, var_5_int);
	} else {
			object var_105_object;
			func_116(var_105_object);
			var_3_bool = var_105_object;
			object var_110_object;
			func_450(var_110_object);
			var_4_object = var_110_object;
	}
	for(;;) {
		var_39_bool = !var_2_int; //@nz
		if(var_39_bool == 0) goto Label_505;
		@ProcessEvents();
	}
	
Label_505:
	bool var_24_bool;
	string var_25_string;
	bool var_26_bool;
	bool var_27_bool;
	bool var_28_bool;
	func_936(var_24_bool, var_25_string, var_26_bool, var_27_bool, var_28_bool, var_29_string);
	if(var_2_int == 1) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_89(var_50_object, 1);
		TaskReturn();
		TaskCall(0);
		func_0(var_56_object, var_57_int, var_58_int, var_59_bool, "intro_danko.wmv", true);
		TaskReturn();
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_danko.xml", "player_danko.xml");
	} else if(var_2_int == 2) {
			@PauseSound("menumusic");
			TaskCall(1);
			func_89(var_71_object, 2);
			TaskReturn();
			TaskCall(0);
			func_0(var_74_object, var_75_int, var_76_int, var_77_bool, "intro_burah.wmv", true);
			TaskReturn();
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_burah.xml", "player_burah.xml");
	}
Label_647:
	for(;;) {

	}
	
	if(var_2_int == 3) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_89(var_84_object, 3);
		TaskReturn();
		TaskCall(0);
		func_0(var_87_object, var_88_int, var_89_int, var_90_bool, "intro_klara.wmv", true);
		TaskReturn();
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_klara.xml", "player_klara.xml");
	} else if(var_2_int == 4) {
		@PauseSound("menumusic");
		@Trace("Loading : " + var_10_object);
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@LoadGame(var_26_bool, var_10_object);
	}
	if(var_2_int == 5) {
		if(!var_9_object) { //@nz
			@DestroyWindow();
			@SaveGame(var_27_bool);
		} else {
			@DestroyWindow();
			var_9_object->GetFileName(var_29_string); //@t
			@SaveGame(var_28_bool, var_29_string);
	}
		if(!(var_2_int == 7)) goto Label_647;
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_intro.xml", "player_intro.xml");

	}
	goto Label_647;
	
}


// @pe
void func_173(void)
{
	func_148();
	string var_80_string;
	func_281(var_21_int, var_80_string);
	if(var_80_string == "") {
		@SendMessage(1, "continue");
		func_283(var_21_int, "continue");
	} else {
			string var_86_string;
			func_281(var_21_int, var_86_string);
			if(!(var_86_string == "continue")) goto Label_206;
			@SendMessage(1, "newgame");
			func_283(var_21_int, "newgame");
	}
Label_280:
	for(;;) {

	}
	
Label_206:
	string var_92_string;
	func_281(var_21_int, var_92_string);
	if(var_92_string == "newgame") {
		@SendMessage(1, "loadgame");
		func_283(var_21_int, "loadgame");
		goto Label_280;
	}
	string var_98_string;
	func_281(var_21_int, var_98_string);
	if(var_98_string == "loadgame") {
		@SendMessage(1, "savegame");
		func_283(var_21_int, "savegame");
		goto Label_280;
	}
	string var_104_string;
	func_281(var_21_int, var_104_string);
	if(var_104_string == "savegame") {
		@SendMessage(1, "gameoptions");
		func_283(var_21_int, "gameoptions");
		goto Label_280;
	}
	string var_110_string;
	func_281(var_21_int, var_110_string);
	if(var_110_string == "gameoptions") {
		@SendMessage(1, "quitgame");
		func_283(var_21_int, "quitgame");
		goto Label_280;
	}
	string var_116_string;
	func_281(var_21_int, var_116_string);
	if(!(var_116_string == "quitgame")) goto Label_280;
	@SendMessage(1, "continue");
	func_283(var_21_int, "continue");
}


void func_974(bool var_105_bool)
{
	int var_107_int;
	@GetRegistryData(var_107_int, "DankoCompleted", 0);
	var_105_bool = var_107_int != 0;
}


void func_148(void)
{
	@SendMessage(0, "continue");
	@SendMessage(0, "newgame");
	@SendMessage(0, "loadgame");
	@SendMessage(0, "savegame");
	@SendMessage(0, "gameoptions");
	@SendMessage(0, "quitgame");
}


void func_116(object var_105_object)
{
	object var_107_object;
	@CreateWindow("ingame_buttons.xml", false, var_107_object);
	var_107_object = var_105_object;
}
EMIT "Stack[-1] = 0";


void func_920(bool var_3_bool, object var_4_object)
{
	func_283(var_23_object, "");
	func_936(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
	object var_143_object;
	func_116(var_143_object);
	var_3_bool = var_143_object;
	object var_144_object;
	func_450(var_144_object);
	var_4_object = var_144_object;
}


void func_281(object var_11_object, string var_36_string)
{
	var_36_string = var_11_object;
}


// @pe
void func_283(object var_11_object, string var_34_string)
{
	var_11_object = var_34_string;
}


// @pe
void func_286(void)
{
	func_148();
	string var_36_string;
	func_281(var_21_int, var_36_string);
	if(var_36_string == "") {
		@SendMessage(1, "quitgame");
		func_283(var_21_int, "quitgame");
	} else {
			string var_42_string;
			func_281(var_21_int, var_42_string);
			if(!(var_42_string == "continue")) goto Label_319;
			@SendMessage(1, "quitgame");
			func_283(var_21_int, "quitgame");
	}
Label_393:
	for(;;) {

	}
	
Label_319:
	string var_48_string;
	func_281(var_21_int, var_48_string);
	if(var_48_string == "newgame") {
		@SendMessage(1, "continue");
		func_283(var_21_int, "continue");
		goto Label_393;
	}
	string var_54_string;
	func_281(var_21_int, var_54_string);
	if(var_54_string == "loadgame") {
		@SendMessage(1, "newgame");
		func_283(var_21_int, "newgame");
		goto Label_393;
	}
	string var_60_string;
	func_281(var_21_int, var_60_string);
	if(var_60_string == "savegame") {
		@SendMessage(1, "loadgame");
		func_283(var_21_int, "loadgame");
		goto Label_393;
	}
	string var_66_string;
	func_281(var_21_int, var_66_string);
	if(var_66_string == "gameoptions") {
		@SendMessage(1, "savegame");
		func_283(var_21_int, "savegame");
		goto Label_393;
	}
	string var_72_string;
	func_281(var_21_int, var_72_string);
	if(!(var_72_string == "quitgame")) goto Label_393;
	@SendMessage(1, "gameoptions");
	func_283(var_21_int, "gameoptions");
}


