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
		@PlaySound("menumusic");
		TaskCall(1);
		func_89(var_23_object, 8);
		TaskReturn();
		func_139(var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, false);
	}

	// @pe
	void event_100(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(var_21_int == 27)
			func_609(var_20_object, var_21_int);
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
				EMIT "GOTO 0x260";
				}
				if(var_22_string == "loadgame") {
					func_625(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
					@CreateWindow("load.xml", false, var_6_int);
					return 0;
				EMIT "GOTO 0x260";
				}
				if(var_22_string == "savegame") {
					func_625(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
					@CreateWindow("save.xml", false, var_7_int);
					return 0;
				EMIT "GOTO 0x260";
				}
				if(var_22_string == "gameoptions") {
					func_625(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
					@CreateWindow("options.xml", false, var_8_object);
					return 0;
				EMIT "GOTO 0x260";
				}
				if(var_22_string == "continue") {
					var_2_int = 6;
					@StopEventProcessing();
					return 0;
				EMIT "GOTO 0x260";
				}
				if(!(var_22_string == "credits")) goto Label_429;
				func_625(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
				TaskCall(1);
				func_89(var_52_object, 8);
				TaskReturn();
				object var_56_object;
				func_123(var_56_object);
				var_3_bool = var_56_object;
				object var_61_object;
				func_131(var_61_object);
				var_4_object = var_61_object;
				@ShowCursor(true);
				@CaptureKeyboard();
				func_907(var_23_object, "");
		}
	Label_608:
		for(;;) {
			return 0;

		}
	
	Label_429:
		if(var_22_string == "danko") {
			if(var_21_int == 0) {
				var_2_int = 1;
				@StopEventProcessing();
			} else if(var_21_int == 1) {
					@SendMessage(202, "player_name");
					@SendMessage(203, "player_desc");
			}
		Label_462:
			for(;;) {
				return 0;
			EMIT "GOTO 0x260";

			}

			if(!(var_21_int == 2)) goto Label_462;
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
		Label_497:
			for(;;) {
				return 0;
			EMIT "GOTO 0x260";

			}

			if(!(var_21_int == 2)) goto Label_497;
			@SendMessage(-1, "player_name");
			@SendMessage(-1, "player_desc");
		}
		if(var_22_string == "klara") {
			if(var_21_int == 0) {
				bool var_104_bool = false;
				bool var_105_bool;
				func_1126(var_105_bool);
				if(!var_105_bool) { //@nz
					bool var_112_bool;
					func_1118(var_112_bool);
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
						func_1126(var_124_bool);
						if(!var_124_bool) { //@nz
							bool var_126_bool;
							func_1118(var_126_bool);
							if(!var_126_bool) //@nz
								var_123_bool = true;
						}
						if(var_123_bool != 0)
							@SendMessage(213, "player_desc");
						else
							@SendMessage(209, "player_desc");
					if(!(var_21_int == 2)) goto Label_566;
					@SendMessage(-1, "player_name");
					@SendMessage(-1, "player_desc");
		}
				if(var_22_string == "load") {
					if(var_21_int == 0) {
						var_2_int = 4;
						var_23_object->GetFileName(var_10_object);
						@StopEventProcessing();
					} else {
						func_609(var_22_string, var_23_object);
				}
					if(var_22_string == "save") {
						if(var_21_int == 0) {
							var_2_int = 5;
							var_9_object = var_23_object;
							@StopEventProcessing();
						} else {
							func_609(var_22_string, var_23_object);
					}
						if(!(var_22_string == "options")) goto Label_608;
						func_609(var_22_string, var_23_object);
						return 0;
					}
					return 0;
				EMIT "GOTO 0x260";
				}
				return 0;
			EMIT "GOTO 0x260";
				}
		}
	Label_566:
		for(;;) {
			return 0;
		EMIT "GOTO 0x260";

		}
	
	}

	// @pe
	void event_102(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(!var_14_object) { //@nz
			if(var_21_int == 272) {
				@HideCursor();
				func_915();
			} else {
					if(var_21_int == 274) {
						@HideCursor();
						func_812();
		}
					if(var_21_int == 271) {
						@HideCursor();
						func_686();
				}
				}
				} else if(var_21_int == 273) {
			@HideCursor();
			func_749();
				}
	
	}

	// @pe
	void event_101(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(!var_14_object) { //@nz
			if(var_21_int == 267) {
				@HideCursor();
				func_915();
			} else {
					if(var_21_int == 268) {
						@HideCursor();
						func_812();
				}
			Label_1083:
				for(;;) {
					} else {
				if(!(var_21_int == 256)) goto Label_1083;
				string var_111_string;
				func_905(var_21_int, var_111_string);
				if(!(var_111_string != "")) goto Label_1083;
				var_114_int = 2;
				string var_115_string;
				func_905(var_114_int, var_115_string);
				@SendMessage(var_114_int, var_115_string);
		}
			if(var_21_int == 270) {
				@HideCursor();
				func_686();
			} else if(var_21_int == 269) {
				@HideCursor();
				func_749();
			} else if(var_21_int == 256) {
				string var_176_string;
				func_910(var_21_int, var_176_string);
				if(!(var_176_string != "")) goto Label_1117;
				var_179_int = 2;
				string var_180_string;
				func_910(var_179_int, var_180_string);
				@SendMessage(var_179_int, var_180_string);
				}
			}
		Label_1117:

		}
	
	}

}


// @pe
void func_0(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, string var_57_string, bool var_58_bool)
{
	var_3_bool = var_58_bool;
	@SetOwnerDraw(true);
	@ShowCursor(false);
	@CaptureKeyboard();
	@GetWindowSize(var_1_int, var_2_int);
	@LoadVideo(var_57_string);
	@FindVideo(var_0_object, var_57_string);
	var_0_object->Play(false); //@t
	@ProcessEvents();
	@SetOwnerDraw(false);
	@ShowCursor(true);
	@ReleaseVideo(var_57_string);
}


void func_131(object var_113_object)
{
	object var_115_object;
	@CreateWindow("game_logo.xml", false, var_115_object);
	var_115_object = var_113_object;
}
EMIT "Stack[-1] = 0";


void func_905(object var_11_object, string var_35_string)
{
	var_35_string = var_11_object;
}


void func_139(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, object var_9_object, object var_10_object, object var_14_object, bool var_27_bool)
{
	var_14_object = var_27_bool;
	@CaptureKeyboard();
	var_2_int = 0;
	@GetWindowSize(var_0_object, var_1_int);
	@SetCursor("default");
	@SetBackground("default");
	@PlaySound("menumusic");
	@ShowCursor(true);
	string var_35_string;
	func_907(var_35_string, "");
	func_912(var_35_string, "");
	if(var_27_bool != 0) {
		@CreateWindow("game_choose_pers.xml", false, var_5_int);
	} else {
			object var_108_object;
			func_123(var_108_object);
			var_3_bool = var_108_object;
			object var_113_object;
			func_131(var_113_object);
			var_4_object = var_113_object;
	}
	for(;;) {
		var_45_bool = !var_2_int; //@nz
		if(var_45_bool == 0) goto Label_186;
		@ProcessEvents();
	}
	
Label_186:
	bool var_30_bool;
	string var_31_string;
	bool var_32_bool;
	bool var_33_bool;
	bool var_34_bool;
	func_625(var_30_bool, var_31_string, var_32_bool, var_33_bool, var_34_bool, var_35_string);
	if(var_2_int == 1) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_89(var_56_object, 1);
		TaskReturn();
		TaskCall(0);
		func_0(var_59_object, var_60_int, var_61_int, var_62_bool, "intro_danko.wmv", true);
		TaskReturn();
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_danko.xml", "player_danko.xml");
	} else if(var_2_int == 2) {
			@PauseSound("menumusic");
			TaskCall(1);
			func_89(var_74_object, 2);
			TaskReturn();
			TaskCall(0);
			func_0(var_77_object, var_78_int, var_79_int, var_80_bool, "intro_burah.wmv", true);
			TaskReturn();
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_burah.xml", "player_burah.xml");
	}
Label_328:
	for(;;) {

	}
	
	if(var_2_int == 3) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_89(var_87_object, 3);
		TaskReturn();
		TaskCall(0);
		func_0(var_90_object, var_91_int, var_92_int, var_93_bool, "intro_klara.wmv", true);
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
		@LoadGame(var_32_bool, var_10_object);
	}
	if(var_2_int == 5) {
		if(!var_9_object) { //@nz
			@DestroyWindow();
			@SaveGame(var_33_bool);
		} else {
			@DestroyWindow();
			var_9_object->GetFileName(var_35_string); //@t
			@SaveGame(var_34_bool, var_35_string);
	}
		if(!(var_2_int == 7)) goto Label_328;
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_intro.xml", "player_intro.xml");

	}
	goto Label_328;
	
}


// @pe
void func_907(object var_11_object, string var_40_string)
{
	var_11_object = var_40_string;
}


void func_652(void)
{
	@SendMessage(0, "newgame");
	@SendMessage(0, "loadgame");
	@SendMessage(0, "gameoptions");
	@SendMessage(0, "credits");
	@SendMessage(0, "quitgame");
}


void func_910(object var_12_object, string var_124_string)
{
	var_124_string = var_12_object;
}


// @pe
void func_912(object var_12_object, string var_41_string)
{
	var_12_object = var_41_string;
}


// @pe
void func_915(void)
{
	func_652();
	string var_35_string;
	func_905(var_21_int, var_35_string);
	if(var_35_string == "") {
		@SendMessage(1, "quitgame");
		func_907(var_21_int, "quitgame");
	} else {
			string var_41_string;
			func_905(var_21_int, var_41_string);
			if(!(var_41_string == "newgame")) goto Label_948;
			@SendMessage(1, "quitgame");
			func_907(var_21_int, "quitgame");
	}
Label_1007:
	for(;;) {

	}
	
Label_948:
	string var_47_string;
	func_905(var_21_int, var_47_string);
	if(var_47_string == "loadgame") {
		@SendMessage(1, "newgame");
		func_907(var_21_int, "newgame");
		goto Label_1007;
	}
	string var_53_string;
	func_905(var_21_int, var_53_string);
	if(var_53_string == "gameoptions") {
		@SendMessage(1, "loadgame");
		func_907(var_21_int, "loadgame");
		goto Label_1007;
	}
	string var_59_string;
	func_905(var_21_int, var_59_string);
	if(var_59_string == "credits") {
		@SendMessage(1, "gameoptions");
		func_907(var_21_int, "gameoptions");
		goto Label_1007;
	}
	string var_65_string;
	func_905(var_21_int, var_65_string);
	if(!(var_65_string == "quitgame")) goto Label_1007;
	@SendMessage(1, "credits");
	func_907(var_21_int, "credits");
}


void func_673(void)
{
	@SendMessage(0, "danko");
	@SendMessage(0, "burah");
	@SendMessage(0, "klara");
}


// @pe
void func_812(void)
{
	func_652();
	string var_73_string;
	func_905(var_21_int, var_73_string);
	if(var_73_string == "") {
		@SendMessage(1, "newgame");
		func_907(var_21_int, "newgame");
	} else {
			string var_79_string;
			func_905(var_21_int, var_79_string);
			if(!(var_79_string == "newgame")) goto Label_845;
			@SendMessage(1, "loadgame");
			func_907(var_21_int, "loadgame");
	}
Label_904:
	for(;;) {

	}
	
Label_845:
	string var_85_string;
	func_905(var_21_int, var_85_string);
	if(var_85_string == "loadgame") {
		@SendMessage(1, "gameoptions");
		func_907(var_21_int, "gameoptions");
		goto Label_904;
	}
	string var_91_string;
	func_905(var_21_int, var_91_string);
	if(var_91_string == "gameoptions") {
		@SendMessage(1, "credits");
		func_907(var_21_int, "credits");
		goto Label_904;
	}
	string var_97_string;
	func_905(var_21_int, var_97_string);
	if(var_97_string == "credits") {
		@SendMessage(1, "quitgame");
		func_907(var_21_int, "quitgame");
		goto Label_904;
	}
	string var_103_string;
	func_905(var_21_int, var_103_string);
	if(!(var_103_string == "quitgame")) goto Label_904;
	@SendMessage(1, "newgame");
	func_907(var_21_int, "newgame");
}


// @pe
void func_686(void)
{
	func_673();
	string var_124_string;
	func_910(var_21_int, var_124_string);
	if(var_124_string == "") {
		@SendMessage(1, "danko");
		func_912(var_21_int, "danko");
	} else {
			string var_130_string;
			func_910(var_21_int, var_130_string);
			if(!(var_130_string == "danko")) goto Label_719;
			@SendMessage(1, "burah");
			func_912(var_21_int, "burah");
	}
Label_748:
	for(;;) {

	}
	
Label_719:
	string var_136_string;
	func_910(var_21_int, var_136_string);
	if(var_136_string == "burah") {
		@SendMessage(1, "klara");
		func_912(var_21_int, "klara");
		goto Label_748;
	}
	string var_142_string;
	func_910(var_21_int, var_142_string);
	if(!(var_142_string == "klara")) goto Label_748;
	@SendMessage(1, "danko");
	func_912(var_21_int, "danko");
}


// @pe
void func_89(object var_0_object, int var_22_int)
{
	@CreateWindow("intro.xml", false, var_0_object);
	@SendMessage(var_22_int, "intro");
	@ProcessEvents();
}


void func_1118(bool var_112_bool)
{
	int var_114_int;
	@GetRegistryData(var_114_int, "BurahCompleted", 0);
	var_112_bool = var_114_int != 0;
}


void func_609(bool var_3_bool, object var_4_object)
{
	func_907(var_23_object, "");
	func_625(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
	object var_143_object;
	func_123(var_143_object);
	var_3_bool = var_143_object;
	object var_144_object;
	func_131(var_144_object);
	var_4_object = var_144_object;
}


void func_1126(bool var_105_bool)
{
	int var_107_int;
	@GetRegistryData(var_107_int, "DankoCompleted", 0);
	var_105_bool = var_107_int != 0;
}


// @pe
void func_749(void)
{
	func_673();
	string var_150_string;
	func_910(var_21_int, var_150_string);
	if(var_150_string == "") {
		@SendMessage(1, "klara");
		func_912(var_21_int, "klara");
	} else {
			string var_156_string;
			func_910(var_21_int, var_156_string);
			if(!(var_156_string == "klara")) goto Label_782;
			@SendMessage(1, "burah");
			func_912(var_21_int, "burah");
	}
Label_811:
	for(;;) {

	}
	
Label_782:
	string var_162_string;
	func_910(var_21_int, var_162_string);
	if(var_162_string == "burah") {
		@SendMessage(1, "danko");
		func_912(var_21_int, "danko");
		goto Label_811;
	}
	string var_168_string;
	func_910(var_21_int, var_168_string);
	if(!(var_168_string == "danko")) goto Label_811;
	@SendMessage(1, "klara");
	func_912(var_21_int, "klara");
}


void func_625(bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object)
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


void func_123(object var_108_object)
{
	object var_110_object;
	@CreateWindow("game_buttons.xml", false, var_110_object);
	var_110_object = var_108_object;
}
EMIT "Stack[-1] = 0";


