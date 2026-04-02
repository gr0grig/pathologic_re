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
		@UISync();
		disable OnSee;
		enable OnSee;
		disable OnUse;
		enable OnUse;
		TaskCall(0);
		func_0(var_23_object, var_24_int, var_25_int, var_26_bool, "fin_termit.wmv", false);
		TaskReturn();
		@PlaySound("menumusic");
		TaskCall(1);
		func_89(var_34_object, 8);
		TaskReturn();
		func_152(var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, false);
	}

	// @pe
	void event_100(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(var_21_int == 27)
			func_622(var_20_object, var_21_int);
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
				EMIT "GOTO 0x26d";
				}
				if(var_22_string == "loadgame") {
					func_638(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
					@CreateWindow("load.xml", false, var_6_int);
					return 0;
				EMIT "GOTO 0x26d";
				}
				if(var_22_string == "savegame") {
					func_638(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
					@CreateWindow("save.xml", false, var_7_int);
					return 0;
				EMIT "GOTO 0x26d";
				}
				if(var_22_string == "gameoptions") {
					func_638(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
					@CreateWindow("options.xml", false, var_8_object);
					return 0;
				EMIT "GOTO 0x26d";
				}
				if(var_22_string == "continue") {
					var_2_int = 6;
					@StopEventProcessing();
					return 0;
				EMIT "GOTO 0x26d";
				}
				if(!(var_22_string == "credits")) goto Label_442;
				func_638(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
				TaskCall(1);
				func_89(var_52_object, 8);
				TaskReturn();
				object var_56_object;
				func_136(var_56_object);
				var_3_bool = var_56_object;
				object var_61_object;
				func_144(var_61_object);
				var_4_object = var_61_object;
				@ShowCursor(true);
				@CaptureKeyboard();
				func_920(var_23_object, "");
		}
	Label_621:
		for(;;) {
			return 0;

		}
	
	Label_442:
		if(var_22_string == "danko") {
			if(var_21_int == 0) {
				var_2_int = 1;
				@StopEventProcessing();
			} else if(var_21_int == 1) {
					@SendMessage(202, "player_name");
					@SendMessage(203, "player_desc");
			}
		Label_475:
			for(;;) {
				return 0;
			EMIT "GOTO 0x26d";

			}

			if(!(var_21_int == 2)) goto Label_475;
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
		Label_510:
			for(;;) {
				return 0;
			EMIT "GOTO 0x26d";

			}

			if(!(var_21_int == 2)) goto Label_510;
			@SendMessage(-1, "player_name");
			@SendMessage(-1, "player_desc");
		}
		if(var_22_string == "klara") {
			if(var_21_int == 0) {
				bool var_104_bool = false;
				bool var_105_bool;
				func_1139(var_105_bool);
				if(!var_105_bool) { //@nz
					bool var_112_bool;
					func_1131(var_112_bool);
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
						func_1139(var_124_bool);
						if(!var_124_bool) { //@nz
							bool var_126_bool;
							func_1131(var_126_bool);
							if(!var_126_bool) //@nz
								var_123_bool = true;
						}
						if(var_123_bool != 0)
							@SendMessage(213, "player_desc");
						else
							@SendMessage(209, "player_desc");
					if(!(var_21_int == 2)) goto Label_579;
					@SendMessage(-1, "player_name");
					@SendMessage(-1, "player_desc");
		}
				if(var_22_string == "load") {
					if(var_21_int == 0) {
						var_2_int = 4;
						var_23_object->GetFileName(var_10_object);
						@StopEventProcessing();
					} else {
						func_622(var_22_string, var_23_object);
				}
					if(var_22_string == "save") {
						if(var_21_int == 0) {
							var_2_int = 5;
							var_9_object = var_23_object;
							@StopEventProcessing();
						} else {
							func_622(var_22_string, var_23_object);
					}
						if(!(var_22_string == "options")) goto Label_621;
						func_622(var_22_string, var_23_object);
						return 0;
					}
					return 0;
				EMIT "GOTO 0x26d";
				}
				return 0;
			EMIT "GOTO 0x26d";
				}
		}
	Label_579:
		for(;;) {
			return 0;
		EMIT "GOTO 0x26d";

		}
	
	}

	// @pe
	void event_102(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(!var_14_object) { //@nz
			if(var_21_int == 272) {
				@HideCursor();
				func_928();
			} else {
					if(var_21_int == 274) {
						@HideCursor();
						func_825();
		}
					if(var_21_int == 271) {
						@HideCursor();
						func_699();
				}
				}
				} else if(var_21_int == 273) {
			@HideCursor();
			func_762();
				}
	
	}

	// @pe
	void event_101(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(!var_14_object) { //@nz
			if(var_21_int == 267) {
				@HideCursor();
				func_928();
			} else {
					if(var_21_int == 268) {
						@HideCursor();
						func_825();
				}
			Label_1096:
				for(;;) {
					} else {
				if(!(var_21_int == 256)) goto Label_1096;
				string var_111_string;
				func_918(var_21_int, var_111_string);
				if(!(var_111_string != "")) goto Label_1096;
				var_114_int = 2;
				string var_115_string;
				func_918(var_114_int, var_115_string);
				@SendMessage(var_114_int, var_115_string);
		}
			if(var_21_int == 270) {
				@HideCursor();
				func_699();
			} else if(var_21_int == 269) {
				@HideCursor();
				func_762();
			} else if(var_21_int == 256) {
				string var_176_string;
				func_923(var_21_int, var_176_string);
				if(!(var_176_string != "")) goto Label_1130;
				var_179_int = 2;
				string var_180_string;
				func_923(var_179_int, var_180_string);
				@SendMessage(var_179_int, var_180_string);
				}
			}
		Label_1130:

		}
	
	}

}


// @pe
void func_0(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, string var_21_string, bool var_22_bool)
{
	var_3_bool = var_22_bool;
	@SetOwnerDraw(true);
	@ShowCursor(false);
	@CaptureKeyboard();
	@GetWindowSize(var_1_int, var_2_int);
	@LoadVideo(var_21_string);
	@FindVideo(var_0_object, var_21_string);
	var_0_object->Play(false); //@t
	@ProcessEvents();
	@SetOwnerDraw(false);
	@ShowCursor(true);
	@ReleaseVideo(var_21_string);
}


void func_136(object var_114_object)
{
	object var_116_object;
	@CreateWindow("game_buttons.xml", false, var_116_object);
	var_116_object = var_114_object;
}
EMIT "Stack[-1] = 0";


void func_144(object var_119_object)
{
	object var_121_object;
	@CreateWindow("game_logo.xml", false, var_121_object);
	var_121_object = var_119_object;
}
EMIT "Stack[-1] = 0";


void func_918(object var_11_object, string var_35_string)
{
	var_35_string = var_11_object;
}


// @pe
void func_920(object var_11_object, string var_51_string)
{
	var_11_object = var_51_string;
}


void func_665(void)
{
	@SendMessage(0, "newgame");
	@SendMessage(0, "loadgame");
	@SendMessage(0, "gameoptions");
	@SendMessage(0, "credits");
	@SendMessage(0, "quitgame");
}


void func_152(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, object var_9_object, object var_10_object, object var_14_object, bool var_38_bool)
{
	var_14_object = var_38_bool;
	@CaptureKeyboard();
	var_2_int = 0;
	@GetWindowSize(var_0_object, var_1_int);
	@SetCursor("default");
	@SetBackground("default");
	@PlaySound("menumusic");
	@ShowCursor(true);
	string var_46_string;
	func_920(var_46_string, "");
	func_925(var_46_string, "");
	if(var_38_bool != 0) {
		@CreateWindow("game_choose_pers.xml", false, var_5_int);
	} else {
			object var_114_object;
			func_136(var_114_object);
			var_3_bool = var_114_object;
			object var_119_object;
			func_144(var_119_object);
			var_4_object = var_119_object;
	}
	for(;;) {
		var_56_bool = !var_2_int; //@nz
		if(var_56_bool == 0) goto Label_199;
		@ProcessEvents();
	}
	
Label_199:
	bool var_41_bool;
	string var_42_string;
	bool var_43_bool;
	bool var_44_bool;
	bool var_45_bool;
	func_638(var_41_bool, var_42_string, var_43_bool, var_44_bool, var_45_bool, var_46_string);
	if(var_2_int == 1) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_89(var_67_object, 1);
		TaskReturn();
		TaskCall(0);
		func_0(var_70_object, var_71_int, var_72_int, var_73_bool, "intro_danko.wmv", true);
		TaskReturn();
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_danko.xml", "player_danko.xml");
	} else if(var_2_int == 2) {
			@PauseSound("menumusic");
			TaskCall(1);
			func_89(var_80_object, 2);
			TaskReturn();
			TaskCall(0);
			func_0(var_83_object, var_84_int, var_85_int, var_86_bool, "intro_burah.wmv", true);
			TaskReturn();
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_burah.xml", "player_burah.xml");
	}
Label_341:
	for(;;) {

	}
	
	if(var_2_int == 3) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_89(var_93_object, 3);
		TaskReturn();
		TaskCall(0);
		func_0(var_96_object, var_97_int, var_98_int, var_99_bool, "intro_klara.wmv", true);
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
		@LoadGame(var_43_bool, var_10_object);
	}
	if(var_2_int == 5) {
		if(!var_9_object) { //@nz
			@DestroyWindow();
			@SaveGame(var_44_bool);
		} else {
			@DestroyWindow();
			var_9_object->GetFileName(var_46_string); //@t
			@SaveGame(var_45_bool, var_46_string);
	}
		if(!(var_2_int == 7)) goto Label_341;
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_intro.xml", "player_intro.xml");

	}
	goto Label_341;
	
}


void func_923(object var_12_object, string var_124_string)
{
	var_124_string = var_12_object;
}


// @pe
void func_925(object var_12_object, string var_52_string)
{
	var_12_object = var_52_string;
}


// @pe
void func_928(void)
{
	func_665();
	string var_35_string;
	func_918(var_21_int, var_35_string);
	if(var_35_string == "") {
		@SendMessage(1, "quitgame");
		func_920(var_21_int, "quitgame");
	} else {
			string var_41_string;
			func_918(var_21_int, var_41_string);
			if(!(var_41_string == "newgame")) goto Label_961;
			@SendMessage(1, "quitgame");
			func_920(var_21_int, "quitgame");
	}
Label_1020:
	for(;;) {

	}
	
Label_961:
	string var_47_string;
	func_918(var_21_int, var_47_string);
	if(var_47_string == "loadgame") {
		@SendMessage(1, "newgame");
		func_920(var_21_int, "newgame");
		goto Label_1020;
	}
	string var_53_string;
	func_918(var_21_int, var_53_string);
	if(var_53_string == "gameoptions") {
		@SendMessage(1, "loadgame");
		func_920(var_21_int, "loadgame");
		goto Label_1020;
	}
	string var_59_string;
	func_918(var_21_int, var_59_string);
	if(var_59_string == "credits") {
		@SendMessage(1, "gameoptions");
		func_920(var_21_int, "gameoptions");
		goto Label_1020;
	}
	string var_65_string;
	func_918(var_21_int, var_65_string);
	if(!(var_65_string == "quitgame")) goto Label_1020;
	@SendMessage(1, "credits");
	func_920(var_21_int, "credits");
}


void func_686(void)
{
	@SendMessage(0, "danko");
	@SendMessage(0, "burah");
	@SendMessage(0, "klara");
}


// @pe
void func_825(void)
{
	func_665();
	string var_73_string;
	func_918(var_21_int, var_73_string);
	if(var_73_string == "") {
		@SendMessage(1, "newgame");
		func_920(var_21_int, "newgame");
	} else {
			string var_79_string;
			func_918(var_21_int, var_79_string);
			if(!(var_79_string == "newgame")) goto Label_858;
			@SendMessage(1, "loadgame");
			func_920(var_21_int, "loadgame");
	}
Label_917:
	for(;;) {

	}
	
Label_858:
	string var_85_string;
	func_918(var_21_int, var_85_string);
	if(var_85_string == "loadgame") {
		@SendMessage(1, "gameoptions");
		func_920(var_21_int, "gameoptions");
		goto Label_917;
	}
	string var_91_string;
	func_918(var_21_int, var_91_string);
	if(var_91_string == "gameoptions") {
		@SendMessage(1, "credits");
		func_920(var_21_int, "credits");
		goto Label_917;
	}
	string var_97_string;
	func_918(var_21_int, var_97_string);
	if(var_97_string == "credits") {
		@SendMessage(1, "quitgame");
		func_920(var_21_int, "quitgame");
		goto Label_917;
	}
	string var_103_string;
	func_918(var_21_int, var_103_string);
	if(!(var_103_string == "quitgame")) goto Label_917;
	@SendMessage(1, "newgame");
	func_920(var_21_int, "newgame");
}


// @pe
void func_699(void)
{
	func_686();
	string var_124_string;
	func_923(var_21_int, var_124_string);
	if(var_124_string == "") {
		@SendMessage(1, "danko");
		func_925(var_21_int, "danko");
	} else {
			string var_130_string;
			func_923(var_21_int, var_130_string);
			if(!(var_130_string == "danko")) goto Label_732;
			@SendMessage(1, "burah");
			func_925(var_21_int, "burah");
	}
Label_761:
	for(;;) {

	}
	
Label_732:
	string var_136_string;
	func_923(var_21_int, var_136_string);
	if(var_136_string == "burah") {
		@SendMessage(1, "klara");
		func_925(var_21_int, "klara");
		goto Label_761;
	}
	string var_142_string;
	func_923(var_21_int, var_142_string);
	if(!(var_142_string == "klara")) goto Label_761;
	@SendMessage(1, "danko");
	func_925(var_21_int, "danko");
}


// @pe
void func_89(object var_0_object, int var_33_int)
{
	@CreateWindow("intro.xml", false, var_0_object);
	@SendMessage(var_33_int, "intro");
	@ProcessEvents();
}


void func_1131(bool var_112_bool)
{
	int var_114_int;
	@GetRegistryData(var_114_int, "BurahCompleted", 0);
	var_112_bool = var_114_int != 0;
}


void func_622(bool var_3_bool, object var_4_object)
{
	func_920(var_23_object, "");
	func_638(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
	object var_143_object;
	func_136(var_143_object);
	var_3_bool = var_143_object;
	object var_144_object;
	func_144(var_144_object);
	var_4_object = var_144_object;
}


void func_1139(bool var_105_bool)
{
	int var_107_int;
	@GetRegistryData(var_107_int, "DankoCompleted", 0);
	var_105_bool = var_107_int != 0;
}


// @pe
void func_762(void)
{
	func_686();
	string var_150_string;
	func_923(var_21_int, var_150_string);
	if(var_150_string == "") {
		@SendMessage(1, "klara");
		func_925(var_21_int, "klara");
	} else {
			string var_156_string;
			func_923(var_21_int, var_156_string);
			if(!(var_156_string == "klara")) goto Label_795;
			@SendMessage(1, "burah");
			func_925(var_21_int, "burah");
	}
Label_824:
	for(;;) {

	}
	
Label_795:
	string var_162_string;
	func_923(var_21_int, var_162_string);
	if(var_162_string == "burah") {
		@SendMessage(1, "danko");
		func_925(var_21_int, "danko");
		goto Label_824;
	}
	string var_168_string;
	func_923(var_21_int, var_168_string);
	if(!(var_168_string == "danko")) goto Label_824;
	@SendMessage(1, "klara");
	func_925(var_21_int, "klara");
}


void func_638(bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object)
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


