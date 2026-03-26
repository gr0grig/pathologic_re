// @IMPORTS: SetOwnerDraw/1,ShowCursor/1,CaptureKeyboard/0,GetWindowSize/2,LoadVideo/1,FindVideo/2,ProcessEvents/0,ReleaseVideo/1,StopEventProcessing/0,CreateWindow/3,SendMessage/2,UISync/0,PlaySound/1,SetCursor/1,SetBackground/1,PauseSound/1,RemoveWorld/0,DestroyWindow/0,NewGame/2,Trace/1,LoadGame/2,SaveGame/1,SaveGame/2,UITrace/1,Quit/0,HideCursor/0,GetRegistryData/3
// @STRINGS: A:Play|A:IsLost|A:Restore|A:IsPlaying|A:StretchBlit|A:Stop|W:intro.xml|W:intro|A:DestroyWindow|W:fin_smiren.wmv|W:menumusic|W:game_buttons.xml|W:game_logo.xml|W:default|W:game_choose_pers.xml|W:intro_danko.wmv|W:world_danko.xml|W:player_danko.xml|W:intro_burah.wmv|W:world_burah.xml|W:player_burah.xml|W:intro_klara.wmv|W:world_klara.xml|W:player_klara.xml|W:Loading : |A:GetFileName|W:world_intro.xml|W:player_intro.xml|W:newgame|W:quitgame|W:Quit game|W:loadgame|W:load.xml|W:savegame|W:save.xml|W:gameoptions|W:options.xml|W:continue|W:credits|W:danko|W:player_name|W:player_desc|W:burah|W:klara|W:load|W:save|W:BurahCompleted|W:DankoCompleted
// @RUN_OP: 0x6d
// @RUN_TASK: 2
// @TASK_0: vars=object,int,int,bool params=2
// @EVENT_0: op=0x1e vars=
// @EVENT_101: op=0x38 vars=int
// @TASK_1: vars=object params=1
// @EVENT_200: op=0x64 vars=int,string,object
// @TASK_2: vars=int,int,int,object,object,object,object,object,object,object,string,string,string,string,bool,object params=0
// @EVENT_100: op=0x156 vars=int
// @EVENT_200: op=0x15e vars=int,string,object
// @EVENT_102: op=0x3fd vars=int
// @EVENT_101: op=0x424 vars=int
// @PE: 0x0,0x38,0x59,0x64,0x156,0x15e,0x2bb,0x2fa,0x339,0x398,0x39d,0x3a0,0x3fd,0x424

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
	var_23_bool = var_21_int == (int)27;
	if(var_23_bool != 0) {
		func_622(var_20_object, var_21_int);
	}
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
		EMIT "GOTO 0x26d";
		}
		var_30_bool = var_22_string == "loadgame";
		if(var_30_bool != 0) {
			func_638(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
			CreateWindow("load.xml", (bool)0, var_6_int);
			return 0;
		EMIT "GOTO 0x26d";
		}
		var_40_bool = var_22_string == "savegame";
		if(var_40_bool != 0) {
			func_638(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
			CreateWindow("save.xml", (bool)0, var_7_int);
			return 0;
		EMIT "GOTO 0x26d";
		}
		var_44_bool = var_22_string == "gameoptions";
		if(var_44_bool != 0) {
			func_638(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
			CreateWindow("options.xml", (bool)0, var_8_object);
			return 0;
		EMIT "GOTO 0x26d";
		}
		var_48_bool = var_22_string == "continue";
		if(var_48_bool != 0) {
			var_2_int = 6;
			StopEventProcessing();
			return 0;
		EMIT "GOTO 0x26d";
		}
		var_50_bool = var_22_string == "credits";
		if(var_50_bool != 0) {
			func_638(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
			var_51_int = 0;
			TaskCall(1);
			func_89(var_52_object, (int)8);
			TaskReturn();
			var_56_object = Obj();
			func_136(var_56_object);
			var_3_bool = var_56_object;
			var_61_object = Obj();
			func_144(var_61_object);
			var_4_object = var_61_object;
			ShowCursor((bool)1);
			CaptureKeyboard();
			var_67_string = "";
			func_920(var_23_object, "");
			goto Label_621;
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
					goto Label_475;
				}
				var_79_bool = var_21_int == (int)2;
				if(var_79_bool == 0) goto Label_475;
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
						goto Label_510;
					}
					var_95_bool = var_21_int == (int)2;
					if(var_95_bool == 0) goto Label_510;
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
						func_1139(var_105_bool);
						var_111_bool = var_105_bool == 0; //@nz
						if(var_111_bool != 0) {
							var_112_bool = 0;
							func_1131(var_112_bool);
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
							func_1139(var_124_bool);
							var_125_bool = var_124_bool == 0; //@nz
							if(var_125_bool != 0) {
								var_126_bool = 0;
								func_1131(var_126_bool);
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
							if(var_133_bool == 0) goto Label_579;
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
								func_622(var_22_string, var_23_object);
						}
							var_146_bool = var_22_string == "save";
							if(var_146_bool != 0) {
								var_148_bool = var_21_int == (int)0;
								if(var_148_bool != 0) {
									var_2_int = 5;
									var_9_object = var_23_object;
									StopEventProcessing();
								} else {
									func_622(var_22_string, var_23_object);
							}
								var_150_bool = var_22_string == "options";
								if(var_150_bool == 0) goto Label_621;
								func_622(var_22_string, var_23_object);
								return 0;
							}
							return 0;
						EMIT "GOTO 0x26d";
						}
						return 0;
					EMIT "GOTO 0x26d";
					}
					goto Label_579;
				}
			Label_579:
				return 0;
			EMIT "GOTO 0x26d";
			}
		Label_510:
			return 0;
		EMIT "GOTO 0x26d";
		}
	Label_475:
		return 0;
	EMIT "GOTO 0x26d";
	}
Label_621:
	return 0;
	
}


task_2_event_102(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; //@nz
	if(var_22_bool != 0) {
		var_24_bool = var_21_int == (int)272;
		if(var_24_bool != 0) {
			HideCursor();
			func_928();
		} else {
			var_72_bool = var_21_int == (int)274;
			if(var_72_bool == 0) goto Label_1041;
			HideCursor();
			func_825();
	}
		var_110_bool = var_21_int == (int)271;
		if(var_110_bool != 0) {
			HideCursor();
			func_699();
			goto Label_1059;
		}
		var_142_bool = var_21_int == (int)273;
		if(var_142_bool == 0) goto Label_1059;
		HideCursor();
		func_762();
	}
Label_1041:
	goto Label_1059;
	
Label_1059:
	return 0;
	
}


task_2_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; //@nz
	if(var_22_bool != 0) {
		var_24_bool = var_21_int == (int)267;
		if(var_24_bool != 0) {
			HideCursor();
			func_928();
		} else {
			var_72_bool = var_21_int == (int)268;
			if(var_72_bool != 0) {
				HideCursor();
				func_825();
				goto Label_1096;
			}
			var_110_bool = var_21_int == (int)256;
			if(var_110_bool == 0) goto Label_1096;
			var_111_string = "";
			func_918(var_21_int, var_111_string);
			var_113_bool = var_111_string != "";
			if(var_113_bool == 0) goto Label_1096;
			var_114_int = 2;
			var_115_string = "";
			func_918(var_114_int, var_115_string);
			SendMessage(var_114_int, var_115_string);
	}
		var_117_bool = var_21_int == (int)270;
		if(var_117_bool != 0) {
			HideCursor();
			func_699();
			goto Label_1130;
		}
		var_149_bool = var_21_int == (int)269;
		if(var_149_bool != 0) {
			HideCursor();
			func_762();
			goto Label_1130;
		}
		var_175_bool = var_21_int == (int)256;
		if(var_175_bool == 0) goto Label_1130;
		var_176_string = "";
		func_923(var_21_int, var_176_string);
		var_178_bool = var_176_string != "";
		if(var_178_bool == 0) goto Label_1130;
		var_179_int = 2;
		var_180_string = "";
		func_923(var_179_int, var_180_string);
		SendMessage(var_179_int, var_180_string);
	}
Label_1096:
	goto Label_1130;
	
Label_1130:
	return 0;
	
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	EventDisable(1);
	EventDisable(0);
	UISync();
	EventEnable(1);
	EventEnable(0);
	var_21_string = ""; var_22_bool = 0;
	TaskCall(0);
	func_0(var_23_object, var_24_int, var_25_int, var_26_bool, "fin_smiren.wmv", (bool)0);
	TaskReturn();
	PlaySound("menumusic");
	var_33_int = 0;
	TaskCall(1);
	func_89(var_34_object, (int)8);
	TaskReturn();
	var_38_bool = 0;
	func_152(var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, (bool)0);
	return 0;
}


func_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_21_string, var_22_bool)
{
	var_3_bool = var_22_bool;
	SetOwnerDraw((bool)1);
	ShowCursor((bool)0);
	CaptureKeyboard();
	GetWindowSize(var_1_int, var_2_int);
	LoadVideo(var_21_string);
	FindVideo(var_0_object, var_21_string);
	@@@var_0_object:Play((bool)0);
	ProcessEvents();
	SetOwnerDraw((bool)0);
	ShowCursor((bool)1);
	ReleaseVideo(var_21_string);
	return 0;
}


func_136(var_114_object)
{
	var_115_object = Obj(); var_116_object = Obj();
	CreateWindow("game_buttons.xml", (bool)0, var_116_object);
	var_116_object = var_114_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_144(var_119_object)
{
	var_120_object = Obj(); var_121_object = Obj();
	CreateWindow("game_logo.xml", (bool)0, var_121_object);
	var_121_object = var_119_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_918(var_11_object, var_35_string)
{
	var_35_string = var_11_object;
	return 0;
}


func_920(var_11_object, var_51_string)
{
	var_11_object = var_51_string;
	return 0;
}


func_665()
{
	SendMessage((int)0, "newgame");
	SendMessage((int)0, "loadgame");
	SendMessage((int)0, "gameoptions");
	SendMessage((int)0, "credits");
	SendMessage((int)0, "quitgame");
	return 0;
}


func_152(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_9_object, var_10_object, var_14_object, var_38_bool)
{
	var_39_bool = 0; var_40_bool = 0; var_41_bool = 0; var_42_string = ""; var_43_bool = 0; var_44_bool = 0; var_45_bool = 0; var_46_string = "";
	var_14_object = var_38_bool;
	CaptureKeyboard();
	var_2_int = 0;
	GetWindowSize(var_0_object, var_1_int);
	SetCursor("default");
	SetBackground("default");
	PlaySound("menumusic");
	ShowCursor((bool)1);
	var_51_string = "";
	func_920(var_46_string, "");
	var_52_string = "";
	func_925(var_46_string, "");
	var_53_bool = var_38_bool;
	if(var_53_bool != 0) {
		CreateWindow("game_choose_pers.xml", (bool)0, var_5_int);
	} else {
				var_114_object = Obj();
				func_136(var_114_object);
				var_3_bool = var_114_object;
				var_119_object = Obj();
				func_144(var_119_object);
				var_4_object = var_119_object;
	}
Label_194:
	var_56_bool = var_2_int == 0; //@nz
	if(var_56_bool != 0) {
		ProcessEvents();
		goto Label_194;
	}
	func_638(var_41_bool, var_42_string, var_43_bool, var_44_bool, var_45_bool, var_46_string);
	var_64_bool = var_2_int == (int)1;
	if(var_64_bool != 0) {
		PauseSound("menumusic");
		var_66_int = 0;
		TaskCall(1);
		func_89(var_67_object, (int)1);
		TaskReturn();
		var_68_string = ""; var_69_bool = 0;
		TaskCall(0);
		func_0(var_70_object, var_71_int, var_72_int, var_73_bool, "intro_danko.wmv", (bool)1);
		TaskReturn();
		RemoveWorld();
		UISync();
		DestroyWindow();
		NewGame("world_danko.xml", "player_danko.xml");
	} else {
		var_77_bool = var_2_int == (int)2;
		if(var_77_bool != 0) {
			PauseSound("menumusic");
			var_79_int = 0;
			TaskCall(1);
			func_89(var_80_object, (int)2);
			TaskReturn();
			var_81_string = ""; var_82_bool = 0;
			TaskCall(0);
			func_0(var_83_object, var_84_int, var_85_int, var_86_bool, "intro_burah.wmv", (bool)1);
			TaskReturn();
			RemoveWorld();
			UISync();
			DestroyWindow();
			NewGame("world_burah.xml", "player_burah.xml");
			goto Label_341;
		}
		var_90_bool = var_2_int == (int)3;
		if(var_90_bool != 0) {
			PauseSound("menumusic");
			var_92_int = 0;
			TaskCall(1);
			func_89(var_93_object, (int)3);
			TaskReturn();
			var_94_string = ""; var_95_bool = 0;
			TaskCall(0);
			func_0(var_96_object, var_97_int, var_98_int, var_99_bool, "intro_klara.wmv", (bool)1);
			TaskReturn();
			RemoveWorld();
			UISync();
			DestroyWindow();
			NewGame("world_klara.xml", "player_klara.xml");
			goto Label_341;
		}
		var_103_bool = var_2_int == (int)4;
		if(var_103_bool != 0) {
			PauseSound("menumusic");
			var_106_int = "Loading : " + var_10_object;
			Trace(var_106_int);
			RemoveWorld();
			UISync();
			DestroyWindow();
			LoadGame(var_43_bool, var_10_object);
			goto Label_341;
		}
		var_108_bool = var_2_int == (int)5;
		if(var_108_bool != 0) {
			var_109_bool = var_9_object == 0; //@nz
			if(var_109_bool != 0) {
				DestroyWindow();
				SaveGame(var_44_bool);
			} else {
				DestroyWindow();
				@@@var_9_object:GetFileName(var_46_string);
				SaveGame(var_45_bool, var_46_string);
		}
			var_111_bool = var_2_int == (int)7;
			if(var_111_bool == 0) goto Label_341;
			RemoveWorld();
			UISync();
			DestroyWindow();
			NewGame("world_intro.xml", "player_intro.xml");

		}
		goto Label_341;
	}
Label_341:
	return 8;
	
}


func_923(var_12_object, var_124_string)
{
	var_124_string = var_12_object;
	return 0;
}


func_925(var_12_object, var_52_string)
{
	var_12_object = var_52_string;
	return 0;
}


func_928()
{
	func_665();
	var_35_string = "";
	func_918(var_21_int, var_35_string);
	var_37_bool = var_35_string == "";
	if(var_37_bool != 0) {
		SendMessage((int)1, "quitgame");
		var_40_string = "";
		func_920(var_21_int, "quitgame");
	} else {
		var_41_string = "";
		func_918(var_21_int, var_41_string);
		var_43_bool = var_41_string == "newgame";
		if(var_43_bool != 0) {
			SendMessage((int)1, "quitgame");
			var_46_string = "";
			func_920(var_21_int, "quitgame");
			goto Label_1020;
		}
		var_47_string = "";
		func_918(var_21_int, var_47_string);
		var_49_bool = var_47_string == "loadgame";
		if(var_49_bool != 0) {
			SendMessage((int)1, "newgame");
			var_52_string = "";
			func_920(var_21_int, "newgame");
			goto Label_1020;
		}
		var_53_string = "";
		func_918(var_21_int, var_53_string);
		var_55_bool = var_53_string == "gameoptions";
		if(var_55_bool != 0) {
			SendMessage((int)1, "loadgame");
			var_58_string = "";
			func_920(var_21_int, "loadgame");
			goto Label_1020;
		}
		var_59_string = "";
		func_918(var_21_int, var_59_string);
		var_61_bool = var_59_string == "credits";
		if(var_61_bool != 0) {
			SendMessage((int)1, "gameoptions");
			var_64_string = "";
			func_920(var_21_int, "gameoptions");
			goto Label_1020;
		}
		var_65_string = "";
		func_918(var_21_int, var_65_string);
		var_67_bool = var_65_string == "quitgame";
		if(var_67_bool == 0) goto Label_1020;
		SendMessage((int)1, "credits");
		var_70_string = "";
		func_920(var_21_int, "credits");
	}
Label_1020:
	return 0;
	
}


func_686()
{
	SendMessage((int)0, "danko");
	SendMessage((int)0, "burah");
	SendMessage((int)0, "klara");
	return 0;
}


func_825()
{
	func_665();
	var_73_string = "";
	func_918(var_21_int, var_73_string);
	var_75_bool = var_73_string == "";
	if(var_75_bool != 0) {
		SendMessage((int)1, "newgame");
		var_78_string = "";
		func_920(var_21_int, "newgame");
	} else {
		var_79_string = "";
		func_918(var_21_int, var_79_string);
		var_81_bool = var_79_string == "newgame";
		if(var_81_bool != 0) {
			SendMessage((int)1, "loadgame");
			var_84_string = "";
			func_920(var_21_int, "loadgame");
			goto Label_917;
		}
		var_85_string = "";
		func_918(var_21_int, var_85_string);
		var_87_bool = var_85_string == "loadgame";
		if(var_87_bool != 0) {
			SendMessage((int)1, "gameoptions");
			var_90_string = "";
			func_920(var_21_int, "gameoptions");
			goto Label_917;
		}
		var_91_string = "";
		func_918(var_21_int, var_91_string);
		var_93_bool = var_91_string == "gameoptions";
		if(var_93_bool != 0) {
			SendMessage((int)1, "credits");
			var_96_string = "";
			func_920(var_21_int, "credits");
			goto Label_917;
		}
		var_97_string = "";
		func_918(var_21_int, var_97_string);
		var_99_bool = var_97_string == "credits";
		if(var_99_bool != 0) {
			SendMessage((int)1, "quitgame");
			var_102_string = "";
			func_920(var_21_int, "quitgame");
			goto Label_917;
		}
		var_103_string = "";
		func_918(var_21_int, var_103_string);
		var_105_bool = var_103_string == "quitgame";
		if(var_105_bool == 0) goto Label_917;
		SendMessage((int)1, "newgame");
		var_108_string = "";
		func_920(var_21_int, "newgame");
	}
Label_917:
	return 0;
	
}


func_699()
{
	func_686();
	var_124_string = "";
	func_923(var_21_int, var_124_string);
	var_126_bool = var_124_string == "";
	if(var_126_bool != 0) {
		SendMessage((int)1, "danko");
		var_129_string = "";
		func_925(var_21_int, "danko");
	} else {
		var_130_string = "";
		func_923(var_21_int, var_130_string);
		var_132_bool = var_130_string == "danko";
		if(var_132_bool != 0) {
			SendMessage((int)1, "burah");
			var_135_string = "";
			func_925(var_21_int, "burah");
			goto Label_761;
		}
		var_136_string = "";
		func_923(var_21_int, var_136_string);
		var_138_bool = var_136_string == "burah";
		if(var_138_bool != 0) {
			SendMessage((int)1, "klara");
			var_141_string = "";
			func_925(var_21_int, "klara");
			goto Label_761;
		}
		var_142_string = "";
		func_923(var_21_int, var_142_string);
		var_144_bool = var_142_string == "klara";
		if(var_144_bool == 0) goto Label_761;
		SendMessage((int)1, "danko");
		var_147_string = "";
		func_925(var_21_int, "danko");
	}
Label_761:
	return 0;
	
}


func_89(var_0_object, var_33_int)
{
	CreateWindow("intro.xml", (bool)0, var_0_object);
	SendMessage(var_33_int, "intro");
	ProcessEvents();
	return 0;
}


func_1131(var_112_bool)
{
	var_113_int = 0; var_114_int = 0;
	GetRegistryData(var_114_int, "BurahCompleted", (int)0);
	var_112_bool = var_114_int != (int)0;
	return 2;
}


func_622(var_3_bool, var_4_object)
{
	var_142_string = "";
	func_920(var_23_object, "");
	func_638(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object);
	var_143_object = Obj();
	func_136(var_143_object);
	var_3_bool = var_143_object;
	var_144_object = Obj();
	func_144(var_144_object);
	var_4_object = var_144_object;
	return 0;
}


func_1139(var_105_bool)
{
	var_106_int = 0; var_107_int = 0;
	GetRegistryData(var_107_int, "DankoCompleted", (int)0);
	var_105_bool = var_107_int != (int)0;
	return 2;
}


func_762()
{
	func_686();
	var_150_string = "";
	func_923(var_21_int, var_150_string);
	var_152_bool = var_150_string == "";
	if(var_152_bool != 0) {
		SendMessage((int)1, "klara");
		var_155_string = "";
		func_925(var_21_int, "klara");
	} else {
		var_156_string = "";
		func_923(var_21_int, var_156_string);
		var_158_bool = var_156_string == "klara";
		if(var_158_bool != 0) {
			SendMessage((int)1, "burah");
			var_161_string = "";
			func_925(var_21_int, "burah");
			goto Label_824;
		}
		var_162_string = "";
		func_923(var_21_int, var_162_string);
		var_164_bool = var_162_string == "burah";
		if(var_164_bool != 0) {
			SendMessage((int)1, "danko");
			var_167_string = "";
			func_925(var_21_int, "danko");
			goto Label_824;
		}
		var_168_string = "";
		func_923(var_21_int, var_168_string);
		var_170_bool = var_168_string == "danko";
		if(var_170_bool == 0) goto Label_824;
		SendMessage((int)1, "klara");
		var_173_string = "";
		func_925(var_21_int, "klara");
	}
Label_824:
	return 0;
	
}


func_638(var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object)
{
	var_57_bool = var_3_bool;
	if(var_57_bool != 0) {
		@@@var_3_bool:DestroyWindow();
	}
	var_58_object = var_4_object;
	if(var_58_object != 0) {
		@@@var_4_object:DestroyWindow();
	}
	var_59_int = var_5_int;
	if(var_59_int != 0) {
		@@@var_5_int:DestroyWindow();
	}
	var_60_int = var_6_int;
	if(var_60_int != 0) {
		@@@var_6_int:DestroyWindow();
	}
	var_61_int = var_7_int;
	if(var_61_int != 0) {
		@@@var_7_int:DestroyWindow();
	}
	var_62_object = var_8_object;
	if(var_62_object != 0) {
		@@@var_8_object:DestroyWindow();
	}
	CaptureKeyboard();
	return 0;
}


