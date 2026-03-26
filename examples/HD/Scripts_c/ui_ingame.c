// @IMPORTS: SetOwnerDraw/1,ShowCursor/1,CaptureKeyboard/0,GetWindowSize/2,LoadVideo/1,FindVideo/2,ProcessEvents/0,ReleaseVideo/1,StopEventProcessing/0,CreateWindow/3,SendMessage/2,DestroyWindow/0,Trace/1,HideCursor/0,SetCursor/1,SetBackground/1,PlaySound/1,PauseSound/1,RemoveWorld/0,UISync/0,NewGame/2,LoadGame/2,SaveGame/1,SaveGame/2,UITrace/1,Quit/0,GetRegistryData/3
// @STRINGS: A:Play|A:IsLost|A:Restore|A:IsPlaying|A:StretchBlit|A:Stop|W:intro.xml|W:intro|A:DestroyWindow|W:ingame_buttons.xml|W:continue|W:newgame|W:loadgame|W:savegame|W:gameoptions|W:quitgame|W:game_logo.xml|W:default|W:menumusic|W:game_choose_pers.xml|W:intro_danko.wmv|W:world_danko.xml|W:player_danko.xml|W:intro_burah.wmv|W:world_burah.xml|W:player_burah.xml|W:intro_klara.wmv|W:world_klara.xml|W:player_klara.xml|W:Loading : |A:GetFileName|W:world_intro.xml|W:player_intro.xml|W:Quit game|W:load.xml|W:save.xml|W:options.xml|W:credits|W:danko|W:player_name|W:player_desc|W:burah|W:klara|W:load|W:save|W:BurahCompleted|W:DankoCompleted
// @RUN_OP: 0x6d
// @RUN_TASK: 2
// @TASK_0: vars=object,int,int,bool params=2
// @EVENT_0: op=0x1e vars=
// @EVENT_101: op=0x38 vars=int
// @TASK_1: vars=object params=1
// @EVENT_200: op=0x64 vars=int,string,object
// @TASK_2: vars=int,int,int,object,object,object,object,object,object,object,string,string,string,string,bool,object params=0
// @EVENT_100: op=0x7c vars=int
// @EVENT_102: op=0x18a vars=int
// @EVENT_101: op=0x19d vars=int
// @EVENT_200: op=0x288 vars=int,string,object
// @PE: 0x0,0x38,0x59,0x64,0x7c,0xad,0x11b,0x11e,0x18a,0x19d,0x288,0x3c3

task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_bool = 0; var_26_bool = 0;
	@@@var_0_object:IsLost(var_24_bool);
	var_27_bool = var_24_bool;
	if(var_27_bool != 0) {
		@@@var_0_object:Restore(var_25_bool);
		var_28_bool = var_25_bool == 0; //@nz
		if(var_28_bool != 0) {
			return 6;
		}
	}
	@@@var_0_object:IsPlaying(var_26_bool);
	var_29_bool = var_26_bool;
	if(var_29_bool != 0) {
		@@@var_0_object:StretchBlit((int)0, (int)0, var_1_int, var_2_int);
	} else {
		@@@var_0_object:StretchBlit((int)0, (int)0, var_1_int, var_2_int);
		StopEventProcessing();
	}
	return 6;
	
}


task_0_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_object, var_6_int, var_7_int, var_8_int, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_string, var_18_string, var_19_string, var_20_bool, var_21_object)
{
	var_22_bool = var_3_bool == 0; //@nz
	if(var_22_bool != 0) {
		return 0;
	}
	var_23_bool = 0;
	var_23_bool = 1;
	var_24_bool = 0;
	var_24_bool = 1;
	var_25_bool = 0;
	var_25_bool = 1;
	var_27_bool = var_21_object == (int)27;
	if(var_27_bool != 1) {
		var_29_bool = var_21_object == (int)32;
		if(var_29_bool != 1) {
			var_25_bool = 0;
		}
	}
	if(var_25_bool != 1) {
		var_31_bool = var_21_object == (int)257;
		if(var_31_bool != 1) {
			var_24_bool = 0;
		}
	}
	if(var_24_bool != 1) {
		var_33_bool = var_21_object == (int)262;
		if(var_33_bool != 1) {
			var_23_bool = 0;
		}
	}
	if(var_23_bool != 0) {
		StopEventProcessing();
		@@@var_0_object:Stop();
	}
	return 0;
}


task_1_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_string, var_7_object, var_8_int, var_9_int, var_10_int, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_string, var_19_string, var_20_string, var_21_string, var_22_bool, var_23_object)
{
	var_25_bool = var_22_bool == "intro";
	if(var_25_bool != 0) {
		@@@var_0_object:DestroyWindow();
		StopEventProcessing();
	}
	return 0;
}


task_2_event_100(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	Trace(var_21_int);
	var_23_bool = var_21_int == (int)27;
	if(var_23_bool != 0) {
		DestroyWindow();
	}
	var_25_bool = var_21_int == (int)262;
	if(var_25_bool != 0) {
		DestroyWindow();
	}
	var_27_bool = var_21_int == (int)260;
	if(var_27_bool != 0) {
		DestroyWindow();
	}
	var_29_bool = var_21_int == (int)257;
	if(var_29_bool != 0) {
		DestroyWindow();
	}
	return 0;
}


task_2_event_102(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_23_bool = var_21_int == (int)272;
	if(var_23_bool != 0) {
		HideCursor();
		func_286();
	} else {
		var_79_bool = var_21_int == (int)274;
		if(var_79_bool == 0) goto Label_412;
		HideCursor();
		func_173();
	}
Label_412:
	return 0;
	
}


task_2_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_23_bool = var_21_int == (int)267;
	if(var_23_bool != 0) {
		HideCursor();
		func_286();
	} else {
		var_79_bool = var_21_int == (int)268;
		if(var_79_bool != 0) {
			HideCursor();
			func_173();
			goto Label_449;
		}
		var_123_bool = var_21_int == (int)256;
		if(var_123_bool == 0) goto Label_449;
		var_124_string = "";
		func_281(var_21_int, var_124_string);
		var_126_bool = var_124_string != "";
		if(var_126_bool == 0) goto Label_449;
		HideCursor();
		var_127_int = 2;
		var_128_string = "";
		func_281(var_127_int, var_128_string);
		SendMessage(var_127_int, var_128_string);
	}
Label_449:
	return 0;
	
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object)
{
	var_25_bool = var_22_string == "newgame";
	if(var_25_bool != 0) {
		var_2_int = 7;
		StopEventProcessing();
	} else {
		var_27_bool = var_22_string == "quitgame";
		if(var_27_bool != 0) {
			UITrace("Quit game");
			Quit();
			return 0;
		EMIT "GOTO 0x397";
		}
		var_30_bool = var_22_string == "loadgame";
		if(var_30_bool != 0) {
			func_936(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
			CreateWindow("load.xml", (bool)0, var_6_int);
			return 0;
		EMIT "GOTO 0x397";
		}
		var_40_bool = var_22_string == "savegame";
		if(var_40_bool != 0) {
			func_936(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
			CreateWindow("save.xml", (bool)0, var_7_int);
			return 0;
		EMIT "GOTO 0x397";
		}
		var_44_bool = var_22_string == "gameoptions";
		if(var_44_bool != 0) {
			func_936(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
			CreateWindow("options.xml", (bool)0, var_8_object);
			return 0;
		EMIT "GOTO 0x397";
		}
		var_48_bool = var_22_string == "continue";
		if(var_48_bool != 0) {
			var_2_int = 6;
			StopEventProcessing();
			return 0;
		EMIT "GOTO 0x397";
		}
		var_50_bool = var_22_string == "credits";
		if(var_50_bool != 0) {
			func_936(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
			var_51_int = 0;
			TaskCall(1);
			func_89(var_52_object, (int)8);
			TaskReturn();
			var_56_object = Obj();
			func_116(var_56_object);
			var_3_bool = var_56_object;
			var_61_object = Obj();
			func_450(var_61_object);
			var_4_object = var_61_object;
			ShowCursor((bool)1);
			CaptureKeyboard();
			var_67_string = "";
			func_283(var_23_object, "");
			goto Label_919;
		}
		var_69_bool = var_22_string == "danko";
		if(var_69_bool != 0) {
			var_71_bool = var_21_int == (int)0;
			if(var_71_bool != 0) {
				var_2_int = 1;
				StopEventProcessing();
			} else {
				var_73_bool = var_21_int == (int)1;
				if(var_73_bool != 0) {
					SendMessage((int)202, "player_name");
					SendMessage((int)203, "player_desc");
					goto Label_773;
				}
				var_79_bool = var_21_int == (int)2;
				if(var_79_bool == 0) goto Label_773;
				SendMessage((int)-1, "player_name");
				SendMessage((int)-1, "player_desc");
		}
			var_85_bool = var_22_string == "burah";
			if(var_85_bool != 0) {
				var_87_bool = var_21_int == (int)0;
				if(var_87_bool != 0) {
					var_2_int = 2;
					StopEventProcessing();
				} else {
					var_89_bool = var_21_int == (int)1;
					if(var_89_bool != 0) {
						SendMessage((int)205, "player_name");
						SendMessage((int)206, "player_desc");
						goto Label_808;
					}
					var_95_bool = var_21_int == (int)2;
					if(var_95_bool == 0) goto Label_808;
					SendMessage((int)-1, "player_name");
					SendMessage((int)-1, "player_desc");
			}
				var_101_bool = var_22_string == "klara";
				if(var_101_bool != 0) {
					var_103_bool = var_21_int == (int)0;
					if(var_103_bool != 0) {
						var_104_bool = 0;
						var_104_bool = 0;
						var_105_bool = 0;
						func_974(var_105_bool);
						var_111_bool = var_105_bool == 0; //@nz
						if(var_111_bool != 0) {
							var_112_bool = 0;
							func_966(var_112_bool);
							var_118_bool = var_112_bool == 0; //@nz
							if(var_118_bool != 0) {
								var_104_bool = 1;
							}
						}
						if(var_104_bool != 0) {
							return 0;
						}
						var_2_int = 3;
						StopEventProcessing();
					} else {
						var_120_bool = var_21_int == (int)1;
						if(var_120_bool != 0) {
							SendMessage((int)208, "player_name");
							var_123_bool = 0;
							var_123_bool = 0;
							var_124_bool = 0;
							func_974(var_124_bool);
							var_125_bool = var_124_bool == 0; //@nz
							if(var_125_bool != 0) {
								var_126_bool = 0;
								func_966(var_126_bool);
								var_127_bool = var_126_bool == 0; //@nz
								if(var_127_bool != 0) {
									var_123_bool = 1;
								}
							}
							if(var_123_bool != 0) {
								SendMessage((int)213, "player_desc");
							} else {
								SendMessage((int)209, "player_desc");
						}
							var_133_bool = var_21_int == (int)2;
							if(var_133_bool == 0) goto Label_877;
							SendMessage((int)-1, "player_name");
							SendMessage((int)-1, "player_desc");
				}
						var_139_bool = var_22_string == "load";
						if(var_139_bool != 0) {
							var_141_bool = var_21_int == (int)0;
							if(var_141_bool != 0) {
								var_2_int = 4;
								@@var_23_object:GetFileName(var_10_object);
								StopEventProcessing();
							} else {
								func_920(var_22_string, var_23_object);
						}
							var_146_bool = var_22_string == "save";
							if(var_146_bool != 0) {
								var_148_bool = var_21_int == (int)0;
								if(var_148_bool != 0) {
									var_2_int = 5;
									var_9_object = var_23_object;
									StopEventProcessing();
								} else {
									func_920(var_22_string, var_23_object);
							}
								var_150_bool = var_22_string == "options";
								if(var_150_bool == 0) goto Label_919;
								func_920(var_22_string, var_23_object);
								return 0;
							}
							return 0;
						EMIT "GOTO 0x397";
						}
						return 0;
					EMIT "GOTO 0x397";
					}
					goto Label_877;
				}
			Label_877:
				return 0;
			EMIT "GOTO 0x397";
			}
		Label_808:
			return 0;
		EMIT "GOTO 0x397";
		}
	Label_773:
		return 0;
	EMIT "GOTO 0x397";
	}
Label_919:
	return 0;
	
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	var_21_bool = 0;
	func_458(var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, (bool)0);
	DestroyWindow();
	return 0;
}


func_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_54_string, var_55_bool)
{
	var_3_bool = var_55_bool;
	SetOwnerDraw((bool)1);
	ShowCursor((bool)0);
	CaptureKeyboard();
	GetWindowSize(var_1_int, var_2_int);
	LoadVideo(var_54_string);
	FindVideo(var_0_object, var_54_string);
	@@@var_0_object:Play((bool)0);
	ProcessEvents();
	SetOwnerDraw((bool)0);
	ShowCursor((bool)1);
	ReleaseVideo(var_54_string);
	return 0;
}


func_89(var_0_object, var_49_int)
{
	CreateWindow("intro.xml", (bool)0, var_0_object);
	SendMessage(var_49_int, "intro");
	ProcessEvents();
	return 0;
}


func_450(var_110_object)
{
	var_111_object = Obj(); var_112_object = Obj();
	CreateWindow("game_logo.xml", (bool)0, var_112_object);
	var_112_object = var_110_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_963(var_12_object, var_35_string)
{
	var_12_object = var_35_string;
	return 0;
}


func_966(var_112_bool)
{
	var_113_int = 0; var_114_int = 0;
	GetRegistryData(var_114_int, "BurahCompleted", (int)0);
	var_112_bool = var_114_int != (int)0;
	return 2;
}


func_936(var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object)
{
	var_40_bool = var_3_bool;
	if(var_40_bool != 0) {
		@@@var_3_bool:DestroyWindow();
	}
	var_41_object = var_4_object;
	if(var_41_object != 0) {
		@@@var_4_object:DestroyWindow();
	}
	var_42_int = var_5_int;
	if(var_42_int != 0) {
		@@@var_5_int:DestroyWindow();
	}
	var_43_int = var_6_int;
	if(var_43_int != 0) {
		@@@var_6_int:DestroyWindow();
	}
	var_44_int = var_7_int;
	if(var_44_int != 0) {
		@@@var_7_int:DestroyWindow();
	}
	var_45_object = var_8_object;
	if(var_45_object != 0) {
		@@@var_8_object:DestroyWindow();
	}
	CaptureKeyboard();
	return 0;
}


func_458(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_9_object, var_10_object, var_14_object, var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_string = ""; var_26_bool = 0; var_27_bool = 0; var_28_bool = 0; var_29_string = "";
	var_14_object = var_21_bool;
	CaptureKeyboard();
	var_2_int = 0;
	GetWindowSize(var_0_object, var_1_int);
	SetCursor("default");
	SetBackground("default");
	PlaySound("menumusic");
	ShowCursor((bool)1);
	var_34_string = "";
	func_283(var_29_string, "");
	var_35_string = "";
	func_963(var_29_string, "");
	var_36_bool = var_21_bool;
	if(var_36_bool != 0) {
		CreateWindow("game_choose_pers.xml", (bool)0, var_5_int);
	} else {
				var_105_object = Obj();
				func_116(var_105_object);
				var_3_bool = var_105_object;
				var_110_object = Obj();
				func_450(var_110_object);
				var_4_object = var_110_object;
	}
Label_500:
	var_39_bool = var_2_int == 0; //@nz
	if(var_39_bool != 0) {
		ProcessEvents();
		goto Label_500;
	}
	func_936(var_24_bool, var_25_string, var_26_bool, var_27_bool, var_28_bool, var_29_string);
	var_47_bool = var_2_int == (int)1;
	if(var_47_bool != 0) {
		PauseSound("menumusic");
		var_49_int = 0;
		TaskCall(1);
		func_89(var_50_object, (int)1);
		TaskReturn();
		var_54_string = ""; var_55_bool = 0;
		TaskCall(0);
		func_0(var_56_object, var_57_int, var_58_int, var_59_bool, "intro_danko.wmv", (bool)1);
		TaskReturn();
		RemoveWorld();
		UISync();
		DestroyWindow();
		NewGame("world_danko.xml", "player_danko.xml");
	} else {
		var_68_bool = var_2_int == (int)2;
		if(var_68_bool != 0) {
			PauseSound("menumusic");
			var_70_int = 0;
			TaskCall(1);
			func_89(var_71_object, (int)2);
			TaskReturn();
			var_72_string = ""; var_73_bool = 0;
			TaskCall(0);
			func_0(var_74_object, var_75_int, var_76_int, var_77_bool, "intro_burah.wmv", (bool)1);
			TaskReturn();
			RemoveWorld();
			UISync();
			DestroyWindow();
			NewGame("world_burah.xml", "player_burah.xml");
			goto Label_647;
		}
		var_81_bool = var_2_int == (int)3;
		if(var_81_bool != 0) {
			PauseSound("menumusic");
			var_83_int = 0;
			TaskCall(1);
			func_89(var_84_object, (int)3);
			TaskReturn();
			var_85_string = ""; var_86_bool = 0;
			TaskCall(0);
			func_0(var_87_object, var_88_int, var_89_int, var_90_bool, "intro_klara.wmv", (bool)1);
			TaskReturn();
			RemoveWorld();
			UISync();
			DestroyWindow();
			NewGame("world_klara.xml", "player_klara.xml");
			goto Label_647;
		}
		var_94_bool = var_2_int == (int)4;
		if(var_94_bool != 0) {
			PauseSound("menumusic");
			var_97_int = "Loading : " + var_10_object;
			Trace(var_97_int);
			RemoveWorld();
			UISync();
			DestroyWindow();
			LoadGame(var_26_bool, var_10_object);
			goto Label_647;
		}
		var_99_bool = var_2_int == (int)5;
		if(var_99_bool != 0) {
			var_100_bool = var_9_object == 0; //@nz
			if(var_100_bool != 0) {
				DestroyWindow();
				SaveGame(var_27_bool);
			} else {
				DestroyWindow();
				@@@var_9_object:GetFileName(var_29_string);
				SaveGame(var_28_bool, var_29_string);
		}
			var_102_bool = var_2_int == (int)7;
			if(var_102_bool == 0) goto Label_647;
			RemoveWorld();
			UISync();
			DestroyWindow();
			NewGame("world_intro.xml", "player_intro.xml");

		}
		goto Label_647;
	}
Label_647:
	return 8;
	
}


func_173()
{
	func_148();
	var_80_string = "";
	func_281(var_21_int, var_80_string);
	var_82_bool = var_80_string == "";
	if(var_82_bool != 0) {
		SendMessage((int)1, "continue");
		var_85_string = "";
		func_283(var_21_int, "continue");
	} else {
		var_86_string = "";
		func_281(var_21_int, var_86_string);
		var_88_bool = var_86_string == "continue";
		if(var_88_bool != 0) {
			SendMessage((int)1, "newgame");
			var_91_string = "";
			func_283(var_21_int, "newgame");
			goto Label_280;
		}
		var_92_string = "";
		func_281(var_21_int, var_92_string);
		var_94_bool = var_92_string == "newgame";
		if(var_94_bool != 0) {
			SendMessage((int)1, "loadgame");
			var_97_string = "";
			func_283(var_21_int, "loadgame");
			goto Label_280;
		}
		var_98_string = "";
		func_281(var_21_int, var_98_string);
		var_100_bool = var_98_string == "loadgame";
		if(var_100_bool != 0) {
			SendMessage((int)1, "savegame");
			var_103_string = "";
			func_283(var_21_int, "savegame");
			goto Label_280;
		}
		var_104_string = "";
		func_281(var_21_int, var_104_string);
		var_106_bool = var_104_string == "savegame";
		if(var_106_bool != 0) {
			SendMessage((int)1, "gameoptions");
			var_109_string = "";
			func_283(var_21_int, "gameoptions");
			goto Label_280;
		}
		var_110_string = "";
		func_281(var_21_int, var_110_string);
		var_112_bool = var_110_string == "gameoptions";
		if(var_112_bool != 0) {
			SendMessage((int)1, "quitgame");
			var_115_string = "";
			func_283(var_21_int, "quitgame");
			goto Label_280;
		}
		var_116_string = "";
		func_281(var_21_int, var_116_string);
		var_118_bool = var_116_string == "quitgame";
		if(var_118_bool == 0) goto Label_280;
		SendMessage((int)1, "continue");
		var_121_string = "";
		func_283(var_21_int, "continue");
	}
Label_280:
	return 0;
	
}


func_974(var_105_bool)
{
	var_106_int = 0; var_107_int = 0;
	GetRegistryData(var_107_int, "DankoCompleted", (int)0);
	var_105_bool = var_107_int != (int)0;
	return 2;
}


func_148()
{
	SendMessage((int)0, "continue");
	SendMessage((int)0, "newgame");
	SendMessage((int)0, "loadgame");
	SendMessage((int)0, "savegame");
	SendMessage((int)0, "gameoptions");
	SendMessage((int)0, "quitgame");
	return 0;
}


func_116(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj();
	CreateWindow("ingame_buttons.xml", (bool)0, var_107_object);
	var_107_object = var_105_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_920(var_3_bool, var_4_object)
{
	var_142_string = "";
	func_283(var_23_object, "");
	func_936(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
	var_143_object = Obj();
	func_116(var_143_object);
	var_3_bool = var_143_object;
	var_144_object = Obj();
	func_450(var_144_object);
	var_4_object = var_144_object;
	return 0;
}


func_281(var_11_object, var_36_string)
{
	var_36_string = var_11_object;
	return 0;
}


func_283(var_11_object, var_34_string)
{
	var_11_object = var_34_string;
	return 0;
}


func_286()
{
	func_148();
	var_36_string = "";
	func_281(var_21_int, var_36_string);
	var_38_bool = var_36_string == "";
	if(var_38_bool != 0) {
		SendMessage((int)1, "quitgame");
		var_41_string = "";
		func_283(var_21_int, "quitgame");
	} else {
		var_42_string = "";
		func_281(var_21_int, var_42_string);
		var_44_bool = var_42_string == "continue";
		if(var_44_bool != 0) {
			SendMessage((int)1, "quitgame");
			var_47_string = "";
			func_283(var_21_int, "quitgame");
			goto Label_393;
		}
		var_48_string = "";
		func_281(var_21_int, var_48_string);
		var_50_bool = var_48_string == "newgame";
		if(var_50_bool != 0) {
			SendMessage((int)1, "continue");
			var_53_string = "";
			func_283(var_21_int, "continue");
			goto Label_393;
		}
		var_54_string = "";
		func_281(var_21_int, var_54_string);
		var_56_bool = var_54_string == "loadgame";
		if(var_56_bool != 0) {
			SendMessage((int)1, "newgame");
			var_59_string = "";
			func_283(var_21_int, "newgame");
			goto Label_393;
		}
		var_60_string = "";
		func_281(var_21_int, var_60_string);
		var_62_bool = var_60_string == "savegame";
		if(var_62_bool != 0) {
			SendMessage((int)1, "loadgame");
			var_65_string = "";
			func_283(var_21_int, "loadgame");
			goto Label_393;
		}
		var_66_string = "";
		func_281(var_21_int, var_66_string);
		var_68_bool = var_66_string == "gameoptions";
		if(var_68_bool != 0) {
			SendMessage((int)1, "savegame");
			var_71_string = "";
			func_283(var_21_int, "savegame");
			goto Label_393;
		}
		var_72_string = "";
		func_281(var_21_int, var_72_string);
		var_74_bool = var_72_string == "quitgame";
		if(var_74_bool == 0) goto Label_393;
		SendMessage((int)1, "gameoptions");
		var_77_string = "";
		func_283(var_21_int, "gameoptions");
	}
Label_393:
	return 0;
	
}


