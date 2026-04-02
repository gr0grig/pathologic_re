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
		@PlaySound("menumusic");
		TaskCall(1);
		func_65(var_19_object, 8);
		TaskReturn();
		func_115(var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, false);
	}

	// @pe
	void event_100(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, object var_16_object, int var_17_int)
	{
		if(var_17_int == 27)
			func_551(var_16_object, var_17_int);
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
				EMIT "GOTO 0x226";
				}
				if(var_18_string == "loadgame") {
					func_563(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object);
					@CreateWindow("load.xml", false, var_6_int);
					return 0;
				EMIT "GOTO 0x226";
				}
				if(var_18_string == "savegame") {
					func_563(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object);
					@CreateWindow("save.xml", false, var_7_int);
					return 0;
				EMIT "GOTO 0x226";
				}
				if(var_18_string == "gameoptions") {
					func_563(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object);
					@CreateWindow("options.xml", false, var_8_object);
					return 0;
				EMIT "GOTO 0x226";
				}
				if(var_18_string == "continue") {
					var_2_int = 6;
					@StopEventProcessing();
					return 0;
				EMIT "GOTO 0x226";
				}
				if(!(var_18_string == "credits")) goto Label_390;
				func_563(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object);
				TaskCall(1);
				func_65(var_48_object, 8);
				TaskReturn();
				object var_52_object;
				func_99(var_52_object);
				var_3_bool = var_52_object;
				object var_57_object;
				func_107(var_57_object);
				var_4_object = var_57_object;
				@ShowCursor(true);
		}
	Label_550:
		for(;;) {
			return 0;

		}
	
	Label_390:
		if(var_18_string == "danko") {
			if(var_17_int == 0) {
				var_2_int = 1;
				@StopEventProcessing();
			} else if(var_17_int == 1) {
					@SendMessage(202, "player_name");
					@SendMessage(203, "player_desc");
			}
		Label_423:
			for(;;) {
				return 0;
			EMIT "GOTO 0x226";

			}

			if(!(var_17_int == 2)) goto Label_423;
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
		Label_458:
			for(;;) {
				return 0;
			EMIT "GOTO 0x226";

			}

			if(!(var_17_int == 2)) goto Label_458;
			@SendMessage(-1, "player_name");
			@SendMessage(-1, "player_desc");
		}
		if(var_18_string == "klara") {
			bool var_97_bool = false;
			bool var_98_bool;
			func_598(var_98_bool);
			if(!var_98_bool) { //@nz
				bool var_105_bool;
				func_590(var_105_bool);
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
		Label_508:
			for(;;) {
				return 0;
			EMIT "GOTO 0x226";

			}

			if(!(var_17_int == 2)) goto Label_508;
			@SendMessage(-1, "player_name");
			@SendMessage(-1, "player_desc");
		}
		if(var_18_string == "load") {
			if(var_17_int == 0) {
				var_2_int = 4;
				var_19_object->GetFileName(var_10_object);
				@StopEventProcessing();
			} else {
				func_551(var_18_string, var_19_object);
		}
			if(var_18_string == "save") {
				if(var_17_int == 0) {
					var_2_int = 5;
					var_9_object = var_19_object;
					@StopEventProcessing();
				} else {
					func_551(var_18_string, var_19_object);
			}
				if(!(var_18_string == "options")) goto Label_550;
				func_551(var_18_string, var_19_object);
				return 0;
			}
			return 0;
		EMIT "GOTO 0x226";
		}
		return 0;
	EMIT "GOTO 0x226";
	
	}

}


// @pe
void func_0(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, string var_51_string, bool var_52_bool)
{
	var_3_bool = var_52_bool;
	@SetOwnerDraw(true);
	@ShowCursor(false);
	@CaptureKeyboard();
	@GetWindowSize(var_1_int, var_2_int);
	@LoadVideo(var_51_string);
	@FindVideo(var_0_object, var_51_string);
	var_0_object->Play(false); //@t
	@ProcessEvents();
	@SetOwnerDraw(false);
	@ShowCursor(true);
	@ReleaseVideo(var_51_string);
}


// @pe
void func_65(object var_0_object, int var_18_int)
{
	@CreateWindow("intro.xml", false, var_0_object);
	@SendMessage(var_18_int, "intro");
	@ProcessEvents();
}


void func_99(object var_102_object)
{
	object var_104_object;
	@CreateWindow("game_buttons.xml", false, var_104_object);
	var_104_object = var_102_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_551(bool var_3_bool, object var_4_object)
{
	func_563(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object);
	object var_130_object;
	func_99(var_130_object);
	var_3_bool = var_130_object;
	object var_131_object;
	func_107(var_131_object);
	var_4_object = var_131_object;
}


void func_107(object var_107_object)
{
	object var_109_object;
	@CreateWindow("game_logo.xml", false, var_109_object);
	var_109_object = var_107_object;
}
EMIT "Stack[-1] = 0";


void func_590(bool var_105_bool)
{
	int var_107_int;
	@GetRegistryData(var_107_int, "BurahCompleted", 0);
	var_105_bool = var_107_int != 0;
}


void func_115(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_4_object, int var_5_int, object var_9_object, object var_10_object, bool var_23_bool)
{
	@CaptureKeyboard();
	var_2_int = 0;
	@GetWindowSize(var_0_object, var_1_int);
	@SetCursor("default");
	@SetBackground("default");
	@PlaySound("menumusic");
	@ShowCursor(true);
	if(var_23_bool != 0) {
		@CreateWindow("game_choose_pers.xml", false, var_5_int);
	} else {
			object var_102_object;
			func_99(var_102_object);
			var_3_bool = var_102_object;
			object var_107_object;
			func_107(var_107_object);
			var_4_object = var_107_object;
	}
	for(;;) {
		var_39_bool = !var_2_int; //@nz
		if(var_39_bool == 0) goto Label_153;
		@ProcessEvents();
	}
	
Label_153:
	bool var_26_bool;
	string var_27_string;
	bool var_28_bool;
	bool var_29_bool;
	bool var_30_bool;
	string var_31_string;
	func_563(var_26_bool, var_27_string, var_28_bool, var_29_bool, var_30_bool, var_31_string);
	if(var_2_int == 1) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_65(var_50_object, 1);
		TaskReturn();
		TaskCall(0);
		func_0(var_53_object, var_54_int, var_55_int, var_56_bool, "intro_danko.wmv", true);
		TaskReturn();
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_danko.xml", "player_danko.xml");
	} else if(var_2_int == 2) {
			@PauseSound("menumusic");
			TaskCall(1);
			func_65(var_68_object, 2);
			TaskReturn();
			TaskCall(0);
			func_0(var_71_object, var_72_int, var_73_int, var_74_bool, "intro_burah.wmv", true);
			TaskReturn();
			@RemoveWorld();
			@UISync();
			@DestroyWindow();
			@NewGame("world_burah.xml", "player_burah.xml");
	}
Label_295:
	for(;;) {

	}
	
	if(var_2_int == 3) {
		@PauseSound("menumusic");
		TaskCall(1);
		func_65(var_81_object, 3);
		TaskReturn();
		TaskCall(0);
		func_0(var_84_object, var_85_int, var_86_int, var_87_bool, "intro_klara.wmv", true);
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
		@LoadGame(var_28_bool, var_10_object);
	}
	if(var_2_int == 5) {
		if(!var_9_object) { //@nz
			@DestroyWindow();
			@SaveGame(var_29_bool);
		} else {
			@DestroyWindow();
			var_9_object->GetFileName(var_31_string); //@t
			@SaveGame(var_30_bool, var_31_string);
	}
		if(!(var_2_int == 7)) goto Label_295;
		@RemoveWorld();
		@UISync();
		@DestroyWindow();
		@NewGame("world_intro.xml", "player_intro.xml");

	}
	goto Label_295;
	
}


void func_563(bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, int var_7_int, object var_8_object)
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


void func_598(bool var_98_bool)
{
	int var_100_int;
	@GetRegistryData(var_100_int, "DankoCompleted", 0);
	var_98_bool = var_100_int != 0;
}


