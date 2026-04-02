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
		func_117(var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, false);
		@DestroyWindow();
	}

	// @pe
	void event_100(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, object var_16_object, int var_17_int)
	{
		@Trace(var_17_int);
		if(var_17_int == 27)
			@DestroyWindow();
	}

	// @pe
	void event_200(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, object var_16_object, int var_17_int, string var_18_string, object var_19_object)
	{
		if(var_18_string == "newgame") {
			var_2_int = 7;
			@StopEventProcessing();
		} else {
				if(var_18_string == "quitgame") {
					@UITrace("Quit game");
					@Quit();
					return 0;
				EMIT "GOTO 0x220";
				}
				if(var_18_string == "loadgame") {
					func_557(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object);
					@CreateWindow("load.xml", false, var_6_int);
					return 0;
				EMIT "GOTO 0x220";
				}
				if(var_18_string == "savegame") {
					func_557(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object);
					@CreateWindow("save.xml", false, var_7_int);
					return 0;
				EMIT "GOTO 0x220";
				}
				if(var_18_string == "gameoptions") {
					func_557(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object);
					@CreateWindow("options.xml", false, var_8_object);
					return 0;
				EMIT "GOTO 0x220";
				}
				if(var_18_string == "continue") {
					var_2_int = 6;
					@StopEventProcessing();
					return 0;
				EMIT "GOTO 0x220";
				}
				if(!(var_18_string == "credits")) goto Label_384;
				func_557(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object);
				TaskCall(1);
				func_65(var_48_object, 8);
				TaskReturn();
				object var_52_object;
				func_92(var_52_object);
				var_3_bool = var_52_object;
				object var_57_object;
				func_109(var_57_object);
				var_4_object = var_57_object;
				@ShowCursor(true);
		}
	Label_544:
		for(;;) {
			return 0;

		}
	
	Label_384:
		if(var_18_string == "danko") {
			if(var_17_int == 0) {
				var_2_int = 1;
				@StopEventProcessing();
			} else if(var_17_int == 1) {
					@SendMessage(202, "player_name");
					@SendMessage(203, "player_desc");
			}
		Label_417:
			for(;;) {
				return 0;
			EMIT "GOTO 0x220";

			}

			if(!(var_17_int == 2)) goto Label_417;
			@SendMessage(-1, "player_name");
			@SendMessage(-1, "player_desc");
		}
		if(var_18_string == "burah") {
			if(var_17_int == 0) {
				var_2_int = 2;
				@StopEventProcessing();
			} else if(var_17_int == 1) {
					@SendMessage(205, "player_name");
					@SendMessage(206, "player_desc");
			}
		Label_452:
			for(;;) {
				return 0;
			EMIT "GOTO 0x220";

			}

			if(!(var_17_int == 2)) goto Label_452;
			@SendMessage(-1, "player_name");
			@SendMessage(-1, "player_desc");
		}
		if(var_18_string == "klara") {
			bool var_97_bool = false;
			bool var_98_bool;
			func_592(var_98_bool);
			if(!var_98_bool) { //@nz
				bool var_105_bool;
				func_584(var_105_bool);
				if(!var_105_bool) //@nz
					var_97_bool = true;
			}
			if(var_97_bool != 0)
				return 0;
			if(var_17_int == 0) {
				var_2_int = 3;
				@StopEventProcessing();
			} else if(var_17_int == 1) {
					@SendMessage(208, "player_name");
					@SendMessage(209, "player_desc");
			}
		Label_502:
			for(;;) {
				return 0;
			EMIT "GOTO 0x220";

			}

			if(!(var_17_int == 2)) goto Label_502;
			@SendMessage(-1, "player_name");
			@SendMessage(-1, "player_desc");
		}
		if(var_18_string == "load") {
			if(var_17_int == 0) {
				var_2_int = 4;
				var_19_object->GetFileName(var_10_object);
				@StopEventProcessing();
			} else {
				func_545(var_18_string, var_19_object);
		}
			if(var_18_string == "save") {
				if(var_17_int == 0) {
					var_2_int = 5;
					var_9_object = var_19_object;
					@StopEventProcessing();
				} else {
					func_545(var_18_string, var_19_object);
			}
				if(!(var_18_string == "options")) goto Label_544;
				func_545(var_18_string, var_19_object);
				return 0;
			}
			return 0;
		EMIT "GOTO 0x220";
		}
		return 0;
	EMIT "GOTO 0x220";
	
	}

}


// @pe
void func_0(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, string var_48_string, bool var_49_bool)
{
	var_3_bool = var_49_bool;
	@SetOwnerDraw(true);
	@ShowCursor(false);
	@CaptureKeyboard();
	@GetWindowSize(var_1_int, var_2_int);
	@LoadVideo(var_48_string);
	@FindVideo(var_0_object, var_48_string);
	var_0_object->Play(false); //@t
	@ProcessEvents();
	@SetOwnerDraw(false);
	@ShowCursor(true);
	@ReleaseVideo(var_48_string);
}


// @pe
void func_65(object var_0_object, int var_43_int)
{
	@CreateWindow("intro.xml", false, var_0_object);
	@SendMessage(var_43_int, "intro");
	@ProcessEvents();
}


// @pe
void func_545(bool var_3_bool, object var_4_object)
{
	func_557(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object);
	object var_130_object;
	func_92(var_130_object);
	var_3_bool = var_130_object;
	object var_131_object;
	func_109(var_131_object);
	var_4_object = var_131_object;
}


void func_584(bool var_105_bool)
{
	int var_107_int;
	@GetRegistryData(var_107_int, "BurahCompleted", 0);
	var_105_bool = var_107_int != 0;
}


void func_109(object var_104_object)
{
	object var_106_object;
	@CreateWindow("game_logo.xml", false, var_106_object);
	var_106_object = var_104_object;
}
EMIT "Stack[-1] = 0";


void func_557(bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object)
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


void func_592(bool var_98_bool)
{
	int var_100_int;
	@GetRegistryData(var_100_int, "DankoCompleted", 0);
	var_98_bool = var_100_int != 0;
}


void func_117(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, object var_9_object, object var_10_object, bool var_17_bool)
{
	@CaptureKeyboard();
	var_2_int = 0;
	@GetWindowSize(var_0_object, var_1_int);
	@SetCursor("default");
	@SetBackground("default");
	@PlaySound("menumusic");
	@ShowCursor(true);
	if(var_17_bool != 0) {
		@CreateWindow("game_choose_pers.xml", false, var_5_int);
	} else {
			object var_99_object;
			func_92(var_99_object);
			var_3_bool = var_99_object;
			object var_104_object;
			func_109(var_104_object);
			var_4_object = var_104_object;
	}
	for(;;) {
		var_33_bool = !var_2_int; //@nz
		if(var_33_bool == 0) goto Label_155;
		@ProcessEvents();
	}
	
Label_155:
	bool var_20_bool;
	string var_21_string;
	bool var_22_bool;
	bool var_23_bool;
	bool var_24_bool;
	string var_25_string;
	func_557(var_20_bool, var_21_string, var_22_bool, var_23_bool, var_24_bool, var_25_string);
	if(var_2_int == 1) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_65(var_44_object, 1);
		TaskReturn();
		TaskCall(0);
		func_0(var_50_object, var_51_int, var_52_int, var_53_bool, "intro_danko.wmv", true);
		TaskReturn();
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_danko.xml", "player_danko.xml");
	} else if(var_2_int == 2) {
			@PauseSound("menumusic");
			TaskCall(1);
			func_65(var_65_object, 2);
			TaskReturn();
			TaskCall(0);
			func_0(var_68_object, var_69_int, var_70_int, var_71_bool, "intro_burah.wmv", true);
			TaskReturn();
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_burah.xml", "player_burah.xml");
	}
Label_297:
	for(;;) {

	}
	
	if(var_2_int == 3) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_65(var_78_object, 3);
		TaskReturn();
		TaskCall(0);
		func_0(var_81_object, var_82_int, var_83_int, var_84_bool, "intro_klara.wmv", true);
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
		@LoadGame(var_22_bool, var_10_object);
	}
	if(var_2_int == 5) {
		if(!var_9_object) { //@nz
			@DestroyWindow();
			@SaveGame(var_23_bool);
		} else {
			@DestroyWindow();
			var_9_object->GetFileName(var_25_string); //@t
			@SaveGame(var_24_bool, var_25_string);
	}
		if(!(var_2_int == 7)) goto Label_297;
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_intro.xml", "player_intro.xml");

	}
	goto Label_297;
	
}


void func_92(object var_99_object)
{
	object var_101_object;
	@CreateWindow("ingame_buttons.xml", false, var_101_object);
	var_101_object = var_99_object;
}
EMIT "Stack[-1] = 0";


