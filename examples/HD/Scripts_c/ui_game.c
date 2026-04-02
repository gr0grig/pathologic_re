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
		if(false != 0) {
			@NewGame("world_danko.xml", "player_danko.xml");
			@DestroyWindow();
			return 0;
		}
		TaskCall(0);
		func_0(var_26_object, var_27_int, var_28_int, var_29_bool, "logo_gambitious.wmv", true);
		TaskReturn();
		TaskCall(0);
		func_0(var_37_object, var_38_int, var_39_int, var_40_bool, "logo_devolver.wmv", true);
		TaskReturn();
		TaskCall(0);
		func_0(var_43_object, var_44_int, var_45_int, var_46_bool, "logo_generalarcade.wmv", true);
		TaskReturn();
		TaskCall(0);
		func_0(var_49_object, var_50_int, var_51_int, var_52_bool, "logo_icepick.wmv", true);
		TaskReturn();
		TaskCall(1);
		func_89(var_54_object, 0);
		TaskReturn();
		TaskCall(0);
		func_0(var_60_object, var_61_int, var_62_int, var_63_bool, "intro.wmv", true);
		TaskReturn();
		func_201(var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, false);
	}

	void event_200(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int, string var_22_string, object var_23_object)
	{
		string var_25_string;
		if(var_22_string == "editbox") {
			var_23_object->get(var_25_string, 0);
			@DestroyWindow();
			string var_29_string;
			var_25_string = var_29_string;
			func_1196(var_29_string);
		}
		int var_34_int; string var_35_string; object var_36_object;
		string var_24_string;
		func_399(var_18_string, var_19_bool, var_20_object, var_34_int, var_35_string, var_36_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object);
	}

	// @pe
	void event_100(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(var_21_int == 27)
			func_671(var_20_object, var_21_int);
	}

	// @pe
	void event_102(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(!var_14_object) { //@nz
			if(var_21_int == 272) {
				@HideCursor();
				func_977();
			} else {
					if(var_21_int == 274) {
						@HideCursor();
						func_874();
		}
					if(var_21_int == 271) {
						@HideCursor();
						func_748();
				}
				}
				} else if(var_21_int == 273) {
			@HideCursor();
			func_811();
				}
	
	}

	// @pe
	void event_101(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string, string var_18_string, bool var_19_bool, object var_20_object, int var_21_int)
	{
		if(!var_14_object) { //@nz
			if(var_21_int == 267) {
				@HideCursor();
				func_977();
			} else {
					if(var_21_int == 268) {
						@HideCursor();
						func_874();
				}
			Label_1145:
				for(;;) {
					} else {
				if(!(var_21_int == 256)) goto Label_1145;
				string var_111_string;
				func_967(var_21_int, var_111_string);
				if(!(var_111_string != "")) goto Label_1145;
				var_114_int = 2;
				string var_115_string;
				func_967(var_114_int, var_115_string);
				@SendMessage(var_114_int, var_115_string);
		}
			if(var_21_int == 270) {
				@HideCursor();
				func_748();
			} else if(var_21_int == 269) {
				@HideCursor();
				func_811();
			} else if(var_21_int == 256) {
				string var_176_string;
				func_972(var_21_int, var_176_string);
				if(!(var_176_string != "")) goto Label_1179;
				var_179_int = 2;
				string var_180_string;
				func_972(var_179_int, var_180_string);
				@SendMessage(var_179_int, var_180_string);
				}
			}
		Label_1179:

		}
	
	}

}


// @pe
void func_0(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, string var_24_string, bool var_25_bool)
{
	var_3_bool = var_25_bool;
	@SetOwnerDraw(true);
	@ShowCursor(false);
	@CaptureKeyboard();
	@GetWindowSize(var_1_int, var_2_int);
	@LoadVideo(var_24_string);
	@FindVideo(var_0_object, var_24_string);
	var_0_object->Play(false); //@t
	@ProcessEvents();
	@SetOwnerDraw(false);
	@ShowCursor(true);
	@ReleaseVideo(var_24_string);
}


// @pe
void func_399(int var_2_int, bool var_3_bool, object var_4_object, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, int var_34_int, string var_35_string, object var_36_object)
{
	if(var_35_string == "newgame") {
		var_2_int = 7;
		@StopEventProcessing();
	} else {
			if(var_35_string == "quitgame") {
				@UITrace("Quit game");
				@Quit();
				return 0;
			EMIT "GOTO 0x29e";
			}
			if(var_35_string == "loadgame") {
				func_687(var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object);
				@CreateWindow("load.xml", false, var_6_int);
				return 0;
			EMIT "GOTO 0x29e";
			}
			if(var_35_string == "savegame") {
				func_687(var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object);
				@CreateWindow("save.xml", false, var_7_int);
				return 0;
			EMIT "GOTO 0x29e";
			}
			if(var_35_string == "gameoptions") {
				func_687(var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object);
				@CreateWindow("options.xml", false, var_8_object);
				return 0;
			EMIT "GOTO 0x29e";
			}
			if(var_35_string == "continue") {
				var_2_int = 6;
				@StopEventProcessing();
				return 0;
			EMIT "GOTO 0x29e";
			}
			if(!(var_35_string == "credits")) goto Label_491;
			func_687(var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object);
			TaskCall(1);
			func_89(var_65_object, 8);
			TaskReturn();
			object var_69_object;
			func_164(var_69_object);
			var_3_bool = var_69_object;
			object var_74_object;
			func_193(var_74_object);
			var_4_object = var_74_object;
			@ShowCursor(true);
			@CaptureKeyboard();
			func_969(var_36_object, "");
	}
Label_670:
	for(;;) {
		return 0;

	}
	
Label_491:
	if(var_35_string == "danko") {
		if(var_34_int == 0) {
			var_2_int = 1;
			@StopEventProcessing();
		} else if(var_34_int == 1) {
				@SendMessage(202, "player_name");
				@SendMessage(203, "player_desc");
		}
	Label_524:
		for(;;) {
			return 0;
		EMIT "GOTO 0x29e";

		}

		if(!(var_34_int == 2)) goto Label_524;
		@SendMessage(-1, "player_name");
		@SendMessage(-1, "player_desc");
	}
	if(var_35_string == "burah") {
		if(var_34_int == 0) {
			var_2_int = 2;
			@StopEventProcessing();
		} else if(var_34_int == 1) {
				@SendMessage(205, "player_name");
				@SendMessage(206, "player_desc");
		}
	Label_559:
		for(;;) {
			return 0;
		EMIT "GOTO 0x29e";

		}

		if(!(var_34_int == 2)) goto Label_559;
		@SendMessage(-1, "player_name");
		@SendMessage(-1, "player_desc");
	}
	if(var_35_string == "klara") {
		if(var_34_int == 0) {
			bool var_117_bool = false;
			bool var_118_bool;
			func_1188(var_118_bool);
			if(!var_118_bool) { //@nz
				bool var_125_bool;
				func_1180(var_125_bool);
				if(!var_125_bool) //@nz
					var_117_bool = true;
			}
			if(var_117_bool != 0)
				return 0;
			var_2_int = 3;
			@StopEventProcessing();
		} else {
				if(var_34_int == 1) {
					@SendMessage(208, "player_name");
					bool var_136_bool = false;
					bool var_137_bool;
					func_1188(var_137_bool);
					if(!var_137_bool) { //@nz
						bool var_139_bool;
						func_1180(var_139_bool);
						if(!var_139_bool) //@nz
							var_136_bool = true;
					}
					if(var_136_bool != 0)
						@SendMessage(213, "player_desc");
					else
						@SendMessage(209, "player_desc");
				if(!(var_34_int == 2)) goto Label_628;
				@SendMessage(-1, "player_name");
				@SendMessage(-1, "player_desc");
	}
			if(var_35_string == "load") {
				if(var_34_int == 0) {
					var_2_int = 4;
					var_36_object->GetFileName(var_10_object);
					@StopEventProcessing();
				} else {
					func_671(var_35_string, var_36_object);
			}
				if(var_35_string == "save") {
					if(var_34_int == 0) {
						var_2_int = 5;
						var_9_object = var_36_object;
						@StopEventProcessing();
					} else {
						func_671(var_35_string, var_36_object);
				}
					if(!(var_35_string == "options")) goto Label_670;
					func_671(var_35_string, var_36_object);
					return 0;
				}
				return 0;
			EMIT "GOTO 0x29e";
			}
			return 0;
		EMIT "GOTO 0x29e";
			}
	}
Label_628:
	for(;;) {
		return 0;
	EMIT "GOTO 0x29e";

	}
	
}


void func_1180(bool var_125_bool)
{
	int var_127_int;
	@GetRegistryData(var_127_int, "BurahCompleted", 0);
	var_125_bool = var_127_int != 0;
}


void func_671(bool var_3_bool, object var_4_object)
{
	func_969(var_21_int, "");
	func_687(var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int);
	object var_31_object;
	func_164(var_31_object);
	var_3_bool = var_31_object;
	object var_36_object;
	func_193(var_36_object);
	var_4_object = var_36_object;
}


void func_164(object var_140_object)
{
	object var_142_object;
	@CreateWindow("game_buttons.xml", false, var_142_object);
	var_142_object = var_140_object;
}
EMIT "Stack[-1] = 0";


void func_1188(bool var_118_bool)
{
	int var_120_int;
	@GetRegistryData(var_120_int, "DankoCompleted", 0);
	var_118_bool = var_120_int != 0;
}


// @pe
void func_811(void)
{
	func_735();
	string var_150_string;
	func_972(var_21_int, var_150_string);
	if(var_150_string == "") {
		@SendMessage(1, "klara");
		func_974(var_21_int, "klara");
	} else {
			string var_156_string;
			func_972(var_21_int, var_156_string);
			if(!(var_156_string == "klara")) goto Label_844;
			@SendMessage(1, "burah");
			func_974(var_21_int, "burah");
	}
Label_873:
	for(;;) {

	}
	
Label_844:
	string var_162_string;
	func_972(var_21_int, var_162_string);
	if(var_162_string == "burah") {
		@SendMessage(1, "danko");
		func_974(var_21_int, "danko");
		goto Label_873;
	}
	string var_168_string;
	func_972(var_21_int, var_168_string);
	if(!(var_168_string == "danko")) goto Label_873;
	@SendMessage(1, "klara");
	func_974(var_21_int, "klara");
}


void func_1196(string var_29_string)
{
	@UITrace("loading map: " + var_29_string);
	bool var_31_bool;
	@LoadMap(var_31_bool, var_29_string);
}


void func_687(bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object)
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


void func_193(object var_145_object)
{
	object var_147_object;
	@CreateWindow("game_logo.xml", false, var_147_object);
	var_147_object = var_145_object;
}
EMIT "Stack[-1] = 0";


void func_967(object var_11_object, string var_35_string)
{
	var_35_string = var_11_object;
}


void func_201(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, object var_9_object, object var_10_object, object var_14_object, bool var_64_bool)
{
	var_14_object = var_64_bool;
	@CaptureKeyboard();
	var_2_int = 0;
	@GetWindowSize(var_0_object, var_1_int);
	@SetCursor("default");
	@SetBackground("default");
	@PlaySound("menumusic");
	@ShowCursor(true);
	string var_72_string;
	func_969(var_72_string, "");
	func_974(var_72_string, "");
	if(var_64_bool != 0) {
		@CreateWindow("game_choose_pers.xml", false, var_5_int);
	} else {
			object var_140_object;
			func_164(var_140_object);
			var_3_bool = var_140_object;
			object var_145_object;
			func_193(var_145_object);
			var_4_object = var_145_object;
	}
	for(;;) {
		var_82_bool = !var_2_int; //@nz
		if(var_82_bool == 0) goto Label_248;
		@ProcessEvents();
	}
	
Label_248:
	bool var_67_bool;
	string var_68_string;
	bool var_69_bool;
	bool var_70_bool;
	bool var_71_bool;
	func_687(var_67_bool, var_68_string, var_69_bool, var_70_bool, var_71_bool, var_72_string);
	if(var_2_int == 1) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_89(var_93_object, 1);
		TaskReturn();
		TaskCall(0);
		func_0(var_96_object, var_97_int, var_98_int, var_99_bool, "intro_danko.wmv", true);
		TaskReturn();
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_danko.xml", "player_danko.xml");
	} else if(var_2_int == 2) {
			@PauseSound("menumusic");
			TaskCall(1);
			func_89(var_106_object, 2);
			TaskReturn();
			TaskCall(0);
			func_0(var_109_object, var_110_int, var_111_int, var_112_bool, "intro_burah.wmv", true);
			TaskReturn();
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_burah.xml", "player_burah.xml");
	}
Label_390:
	for(;;) {

	}
	
	if(var_2_int == 3) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_89(var_119_object, 3);
		TaskReturn();
		TaskCall(0);
		func_0(var_122_object, var_123_int, var_124_int, var_125_bool, "intro_klara.wmv", true);
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
		@LoadGame(var_69_bool, var_10_object);
	}
	if(var_2_int == 5) {
		if(!var_9_object) { //@nz
			@DestroyWindow();
			@SaveGame(var_70_bool);
		} else {
			@DestroyWindow();
			var_9_object->GetFileName(var_72_string); //@t
			@SaveGame(var_71_bool, var_72_string);
	}
		if(!(var_2_int == 7)) goto Label_390;
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_intro.xml", "player_intro.xml");

	}
	goto Label_390;
	
}


// @pe
void func_969(object var_11_object, string var_77_string)
{
	var_11_object = var_77_string;
}


void func_714(void)
{
	@SendMessage(0, "newgame");
	@SendMessage(0, "loadgame");
	@SendMessage(0, "gameoptions");
	@SendMessage(0, "credits");
	@SendMessage(0, "quitgame");
}


void func_972(object var_12_object, string var_124_string)
{
	var_124_string = var_12_object;
}


// @pe
void func_974(object var_12_object, string var_78_string)
{
	var_12_object = var_78_string;
}


// @pe
void func_977(void)
{
	func_714();
	string var_35_string;
	func_967(var_21_int, var_35_string);
	if(var_35_string == "") {
		@SendMessage(1, "quitgame");
		func_969(var_21_int, "quitgame");
	} else {
			string var_41_string;
			func_967(var_21_int, var_41_string);
			if(!(var_41_string == "newgame")) goto Label_1010;
			@SendMessage(1, "quitgame");
			func_969(var_21_int, "quitgame");
	}
Label_1069:
	for(;;) {

	}
	
Label_1010:
	string var_47_string;
	func_967(var_21_int, var_47_string);
	if(var_47_string == "loadgame") {
		@SendMessage(1, "newgame");
		func_969(var_21_int, "newgame");
		goto Label_1069;
	}
	string var_53_string;
	func_967(var_21_int, var_53_string);
	if(var_53_string == "gameoptions") {
		@SendMessage(1, "loadgame");
		func_969(var_21_int, "loadgame");
		goto Label_1069;
	}
	string var_59_string;
	func_967(var_21_int, var_59_string);
	if(var_59_string == "credits") {
		@SendMessage(1, "gameoptions");
		func_969(var_21_int, "gameoptions");
		goto Label_1069;
	}
	string var_65_string;
	func_967(var_21_int, var_65_string);
	if(!(var_65_string == "quitgame")) goto Label_1069;
	@SendMessage(1, "credits");
	func_969(var_21_int, "credits");
}


// @pe
void func_89(object var_0_object, int var_53_int)
{
	@CreateWindow("intro.xml", false, var_0_object);
	@SendMessage(var_53_int, "intro");
	@ProcessEvents();
}


void func_735(void)
{
	@SendMessage(0, "danko");
	@SendMessage(0, "burah");
	@SendMessage(0, "klara");
}


// @pe
void func_874(void)
{
	func_714();
	string var_73_string;
	func_967(var_21_int, var_73_string);
	if(var_73_string == "") {
		@SendMessage(1, "newgame");
		func_969(var_21_int, "newgame");
	} else {
			string var_79_string;
			func_967(var_21_int, var_79_string);
			if(!(var_79_string == "newgame")) goto Label_907;
			@SendMessage(1, "loadgame");
			func_969(var_21_int, "loadgame");
	}
Label_966:
	for(;;) {

	}
	
Label_907:
	string var_85_string;
	func_967(var_21_int, var_85_string);
	if(var_85_string == "loadgame") {
		@SendMessage(1, "gameoptions");
		func_969(var_21_int, "gameoptions");
		goto Label_966;
	}
	string var_91_string;
	func_967(var_21_int, var_91_string);
	if(var_91_string == "gameoptions") {
		@SendMessage(1, "credits");
		func_969(var_21_int, "credits");
		goto Label_966;
	}
	string var_97_string;
	func_967(var_21_int, var_97_string);
	if(var_97_string == "credits") {
		@SendMessage(1, "quitgame");
		func_969(var_21_int, "quitgame");
		goto Label_966;
	}
	string var_103_string;
	func_967(var_21_int, var_103_string);
	if(!(var_103_string == "quitgame")) goto Label_966;
	@SendMessage(1, "newgame");
	func_969(var_21_int, "newgame");
}


// @pe
void func_748(void)
{
	func_735();
	string var_124_string;
	func_972(var_21_int, var_124_string);
	if(var_124_string == "") {
		@SendMessage(1, "danko");
		func_974(var_21_int, "danko");
	} else {
			string var_130_string;
			func_972(var_21_int, var_130_string);
			if(!(var_130_string == "danko")) goto Label_781;
			@SendMessage(1, "burah");
			func_974(var_21_int, "burah");
	}
Label_810:
	for(;;) {

	}
	
Label_781:
	string var_136_string;
	func_972(var_21_int, var_136_string);
	if(var_136_string == "burah") {
		@SendMessage(1, "klara");
		func_974(var_21_int, "klara");
		goto Label_810;
	}
	string var_142_string;
	func_972(var_21_int, var_142_string);
	if(!(var_142_string == "klara")) goto Label_810;
	@SendMessage(1, "danko");
	func_974(var_21_int, "danko");
}


