task task_0
{
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, object var_16_object)
	{
		bool var_20_bool; bool var_21_bool;
		actor->IsLost(var_20_bool); //@t
		if(var_20_bool != 0) {
			actor->Restore(var_21_bool); //@t
			if(!var_21_bool) { //@nz
			}
		}
		bool var_22_bool;
		actor->IsPlaying(var_22_bool); //@t
		if(var_22_bool != 0) {
			actor->StretchBlit(0, 0, var_1_int, var_2_int); //@t
		} else {
			actor->StretchBlit(0, 0, var_1_int, var_2_int); //@t
			@StopEventProcessing();
		}
	
	}

	// @pe
	void event_101(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, object var_5_object, int var_6_int, int var_7_int, int var_8_int, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, object var_17_object)
	{
		if(!var_3_bool) { //@nz
		}
		@StopEventProcessing();
		var_0_object->Stop(); //@t
	}

}


task task_1
{
	// @pe
	void event_200(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, string var_6_string, object var_7_object, int var_8_int, int var_9_int, int var_10_int, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, object var_16_object, object var_17_object, string var_18_string, object var_19_object)
	{
		if(var_18_string == "intro") {
			var_0_object->DestroyWindow(); //@t
			@StopEventProcessing();
		}
	}

}


maintask task_2
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, object var_16_object)
	{
		if(false != 0) {
			@NewGame("world_danko.xml", "player_danko.xml");
			@DestroyWindow();
			return 0;
		}
		TaskCall(0);
		func_0(var_22_object, var_23_int, var_24_int, var_25_bool, "logo_buka.wmv", true);
		TaskReturn();
		TaskCall(0);
		func_0(var_33_object, var_34_int, var_35_int, var_36_bool, "logo_icepick.wmv", true);
		TaskReturn();
		TaskCall(1);
		func_65(var_38_object, 0);
		TaskReturn();
		TaskCall(0);
		func_0(var_44_object, var_45_int, var_46_int, var_47_bool, "intro.wmv", true);
		TaskReturn();
		func_163(var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, false);
	}

	void event_200(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, object var_16_object, int var_17_int, string var_18_string, object var_19_object)
	{
		string var_21_string;
		if(var_18_string == "editbox") {
			var_19_object->get(var_21_string, 0);
			@DestroyWindow();
			string var_25_string;
			var_21_string = var_25_string;
			func_654(var_25_string);
		}
		int var_30_int; string var_31_string; object var_32_object;
		string var_20_string;
		func_352(var_14_object, var_15_string, var_16_object, var_30_int, var_31_string, var_32_object, var_20_string, var_21_string, var_30_int, var_31_string, var_32_object);
	}

	// @pe
	void event_100(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, object var_16_object, int var_17_int)
	{
		if(var_17_int == 27)
			func_599(var_16_object, var_17_int);
	}

}


// @pe
void func_0(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, string var_20_string, bool var_21_bool)
{
	var_3_bool = var_21_bool;
	@SetOwnerDraw(true);
	@ShowCursor(false);
	@CaptureKeyboard();
	@GetWindowSize(var_1_int, var_2_int);
	@LoadVideo(var_20_string);
	@FindVideo(var_0_object, var_20_string);
	var_0_object->Play(false); //@t
	@ProcessEvents();
	@SetOwnerDraw(false);
	@ShowCursor(true);
	@ReleaseVideo(var_20_string);
}


// @pe
void func_65(object var_0_object, int var_37_int)
{
	@CreateWindow("intro.xml", false, var_0_object);
	@SendMessage(var_37_int, "intro");
	@ProcessEvents();
}


// @pe
void func_352(int var_2_int, bool var_3_bool, object var_4_object, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, int var_30_int, string var_31_string, object var_32_object)
{
	if(var_31_string == "newgame") {
		var_2_int = 7;
		@StopEventProcessing();
	} else {
			if(var_31_string == "quitgame") {
				@UITrace("Quit game");
				@Quit();
				return 0;
			EMIT "GOTO 0x256";
			}
			if(var_31_string == "loadgame") {
				func_611(var_19_object, var_20_string, var_21_string, var_30_int, var_31_string, var_32_object);
				@CreateWindow("load.xml", false, var_6_int);
				return 0;
			EMIT "GOTO 0x256";
			}
			if(var_31_string == "savegame") {
				func_611(var_19_object, var_20_string, var_21_string, var_30_int, var_31_string, var_32_object);
				@CreateWindow("save.xml", false, var_7_int);
				return 0;
			EMIT "GOTO 0x256";
			}
			if(var_31_string == "gameoptions") {
				func_611(var_19_object, var_20_string, var_21_string, var_30_int, var_31_string, var_32_object);
				@CreateWindow("options.xml", false, var_8_object);
				return 0;
			EMIT "GOTO 0x256";
			}
			if(var_31_string == "continue") {
				var_2_int = 6;
				@StopEventProcessing();
				return 0;
			EMIT "GOTO 0x256";
			}
			if(!(var_31_string == "credits")) goto Label_438;
			func_611(var_19_object, var_20_string, var_21_string, var_30_int, var_31_string, var_32_object);
			TaskCall(1);
			func_65(var_61_object, 8);
			TaskReturn();
			object var_65_object;
			func_126(var_65_object);
			var_3_bool = var_65_object;
			object var_70_object;
			func_155(var_70_object);
			var_4_object = var_70_object;
			@ShowCursor(true);
	}
Label_598:
	for(;;) {
		return 0;

	}
	
Label_438:
	if(var_31_string == "danko") {
		if(var_30_int == 0) {
			var_2_int = 1;
			@StopEventProcessing();
		} else if(var_30_int == 1) {
				@SendMessage(202, "player_name");
				@SendMessage(203, "player_desc");
		}
	Label_471:
		for(;;) {
			return 0;
		EMIT "GOTO 0x256";

		}

		if(!(var_30_int == 2)) goto Label_471;
		@SendMessage(-1, "player_name");
		@SendMessage(-1, "player_desc");
	}
	if(var_31_string == "burah") {
		if(var_30_int == 0) {
			var_2_int = 2;
			@StopEventProcessing();
		} else if(var_30_int == 1) {
				@SendMessage(205, "player_name");
				@SendMessage(206, "player_desc");
		}
	Label_506:
		for(;;) {
			return 0;
		EMIT "GOTO 0x256";

		}

		if(!(var_30_int == 2)) goto Label_506;
		@SendMessage(-1, "player_name");
		@SendMessage(-1, "player_desc");
	}
	if(var_31_string == "klara") {
		bool var_110_bool = false;
		bool var_111_bool;
		func_646(var_111_bool);
		if(!var_111_bool) { //@nz
			bool var_118_bool;
			func_638(var_118_bool);
			if(!var_118_bool) //@nz
				var_110_bool = true;
		}
		if(var_110_bool != 0)
			return 0;
		if(var_30_int == 0) {
			var_2_int = 3;
			@StopEventProcessing();
		} else if(var_30_int == 1) {
				@SendMessage(208, "player_name");
				@SendMessage(209, "player_desc");
		}
	Label_556:
		for(;;) {
			return 0;
		EMIT "GOTO 0x256";

		}

		if(!(var_30_int == 2)) goto Label_556;
		@SendMessage(-1, "player_name");
		@SendMessage(-1, "player_desc");
	}
	if(var_31_string == "load") {
		if(var_30_int == 0) {
			var_2_int = 4;
			var_32_object->GetFileName(var_10_object);
			@StopEventProcessing();
		} else {
			func_599(var_31_string, var_32_object);
	}
		if(var_31_string == "save") {
			if(var_30_int == 0) {
				var_2_int = 5;
				var_9_object = var_32_object;
				@StopEventProcessing();
			} else {
				func_599(var_31_string, var_32_object);
		}
			if(!(var_31_string == "options")) goto Label_598;
			func_599(var_31_string, var_32_object);
			return 0;
		}
		return 0;
	EMIT "GOTO 0x256";
	}
	return 0;
EMIT "GOTO 0x256";
	
}


void func_163(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, object var_9_object, object var_10_object, bool var_48_bool)
{
	@CaptureKeyboard();
	var_2_int = 0;
	@GetWindowSize(var_0_object, var_1_int);
	@SetCursor("default");
	@SetBackground("default");
	@PlaySound("menumusic");
	@ShowCursor(true);
	if(var_48_bool != 0) {
		@CreateWindow("game_choose_pers.xml", false, var_5_int);
	} else {
			object var_122_object;
			func_126(var_122_object);
			var_3_bool = var_122_object;
			object var_127_object;
			func_155(var_127_object);
			var_4_object = var_127_object;
	}
	for(;;) {
		var_64_bool = !var_2_int; //@nz
		if(var_64_bool == 0) goto Label_201;
		@ProcessEvents();
	}
	
Label_201:
	bool var_51_bool;
	string var_52_string;
	bool var_53_bool;
	bool var_54_bool;
	bool var_55_bool;
	string var_56_string;
	func_611(var_51_bool, var_52_string, var_53_bool, var_54_bool, var_55_bool, var_56_string);
	if(var_2_int == 1) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_65(var_75_object, 1);
		TaskReturn();
		TaskCall(0);
		func_0(var_78_object, var_79_int, var_80_int, var_81_bool, "intro_danko.wmv", true);
		TaskReturn();
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_danko.xml", "player_danko.xml");
	} else if(var_2_int == 2) {
			@PauseSound("menumusic");
			TaskCall(1);
			func_65(var_88_object, 2);
			TaskReturn();
			TaskCall(0);
			func_0(var_91_object, var_92_int, var_93_int, var_94_bool, "intro_burah.wmv", true);
			TaskReturn();
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_burah.xml", "player_burah.xml");
	}
Label_343:
	for(;;) {

	}
	
	if(var_2_int == 3) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_65(var_101_object, 3);
		TaskReturn();
		TaskCall(0);
		func_0(var_104_object, var_105_int, var_106_int, var_107_bool, "intro_klara.wmv", true);
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
		@LoadGame(var_53_bool, var_10_object);
	}
	if(var_2_int == 5) {
		if(!var_9_object) { //@nz
			@DestroyWindow();
			@SaveGame(var_54_bool);
		} else {
			@DestroyWindow();
			var_9_object->GetFileName(var_56_string); //@t
			@SaveGame(var_55_bool, var_56_string);
	}
		if(!(var_2_int == 7)) goto Label_343;
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_intro.xml", "player_intro.xml");

	}
	goto Label_343;
	
}


void func_611(bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object)
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


void func_646(bool var_111_bool)
{
	int var_113_int;
	@GetRegistryData(var_113_int, "DankoCompleted", 0);
	var_111_bool = var_113_int != 0;
}


void func_638(bool var_118_bool)
{
	int var_120_int;
	@GetRegistryData(var_120_int, "BurahCompleted", 0);
	var_118_bool = var_120_int != 0;
}


void func_654(string var_25_string)
{
	@UITrace("loading map: " + var_25_string);
	bool var_27_bool;
	@LoadMap(var_27_bool, var_25_string);
}


// @pe
void func_599(bool var_3_bool, object var_4_object)
{
	func_611(var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int);
	object var_26_object;
	func_126(var_26_object);
	var_3_bool = var_26_object;
	object var_31_object;
	func_155(var_31_object);
	var_4_object = var_31_object;
}


void func_155(object var_127_object)
{
	object var_129_object;
	@CreateWindow("game_logo.xml", false, var_129_object);
	var_129_object = var_127_object;
}
EMIT "Stack[-1] = 0";


void func_126(object var_122_object)
{
	object var_124_object;
	@CreateWindow("game_buttons.xml", false, var_124_object);
	var_124_object = var_122_object;
}
EMIT "Stack[-1] = 0";


