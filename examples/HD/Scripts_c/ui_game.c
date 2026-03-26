// @IMPORTS: SetOwnerDraw/1,ShowCursor/1,CaptureKeyboard/0,GetWindowSize/2,LoadVideo/1,FindVideo/2,ProcessEvents/0,ReleaseVideo/1,StopEventProcessing/0,CreateWindow/3,SendMessage/2,NewGame/2,DestroyWindow/0,SetCursor/1,SetBackground/1,PlaySound/1,PauseSound/1,RemoveWorld/0,UISync/0,Trace/1,LoadGame/2,SaveGame/1,SaveGame/2,UITrace/1,Quit/0,HideCursor/0,GetRegistryData/3,LoadMap/2
// @STRINGS: A:Play|A:IsLost|A:Restore|A:IsPlaying|A:StretchBlit|A:Stop|W:intro.xml|W:intro|A:DestroyWindow|W:world_danko.xml|W:player_danko.xml|W:logo_gambitious.wmv|W:logo_devolver.wmv|W:logo_generalarcade.wmv|W:logo_icepick.wmv|W:intro.wmv|W:game_buttons.xml|W:editbox|A:get|W:game_logo.xml|W:default|W:menumusic|W:game_choose_pers.xml|W:intro_danko.wmv|W:intro_burah.wmv|W:world_burah.xml|W:player_burah.xml|W:intro_klara.wmv|W:world_klara.xml|W:player_klara.xml|W:Loading : |A:GetFileName|W:world_intro.xml|W:player_intro.xml|W:newgame|W:quitgame|W:Quit game|W:loadgame|W:load.xml|W:savegame|W:save.xml|W:gameoptions|W:options.xml|W:continue|W:credits|W:danko|W:player_name|W:player_desc|W:burah|W:klara|W:load|W:save|W:BurahCompleted|W:DankoCompleted|W:loading map: 
// @RUN_OP: 0x6d
// @RUN_TASK: 2
// @TASK_0: vars=object,int,int,bool params=2
// @EVENT_0: op=0x1e vars=
// @EVENT_101: op=0x38 vars=int
// @TASK_1: vars=object params=1
// @EVENT_200: op=0x64 vars=int,string,object
// @TASK_2: vars=int,int,int,object,object,object,object,object,object,object,string,string,string,string,bool,object params=0
// @EVENT_200: op=0xac vars=int,string,object
// @EVENT_100: op=0x187 vars=int
// @EVENT_102: op=0x42e vars=int
// @EVENT_101: op=0x455 vars=int
// @PE: 0x0,0x38,0x59,0x64,0x187,0x18f,0x2ec,0x32b,0x36a,0x3c9,0x3ce,0x3d1,0x42e,0x455

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


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object)
{
	var_24_string = ""; var_25_string = "";
	var_27_bool = var_22_string == "editbox";
	if(var_27_bool != 0) {
		@@var_23_object:get(var_25_string, (int)0);
		DestroyWindow();
		var_29_string = "";
		var_25_string = var_29_string;
		func_1196(var_29_string);
		return 2;
	}
	var_34_int = 0; var_35_string = ""; var_36_object = Obj();
	var_21_int = var_34_int;
	var_22_string = var_35_string;
	var_23_object = var_36_object;
	func_399(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object);
	return 2;
}


task_2_event_100(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_23_bool = var_21_int == (int)27;
	if(var_23_bool != 0) {
		func_671(var_20_object, var_21_int);
	}
	return 0;
}


task_2_event_102(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; //@nz
	if(var_22_bool != 0) {
		var_24_bool = var_21_int == (int)272;
		if(var_24_bool != 0) {
			HideCursor();
			func_977();
		} else {
			var_72_bool = var_21_int == (int)274;
			if(var_72_bool == 0) goto Label_1090;
			HideCursor();
			func_874();
	}
		var_110_bool = var_21_int == (int)271;
		if(var_110_bool != 0) {
			HideCursor();
			func_748();
			goto Label_1108;
		}
		var_142_bool = var_21_int == (int)273;
		if(var_142_bool == 0) goto Label_1108;
		HideCursor();
		func_811();
	}
Label_1090:
	goto Label_1108;
	
Label_1108:
	return 0;
	
}


task_2_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; //@nz
	if(var_22_bool != 0) {
		var_24_bool = var_21_int == (int)267;
		if(var_24_bool != 0) {
			HideCursor();
			func_977();
		} else {
			var_72_bool = var_21_int == (int)268;
			if(var_72_bool != 0) {
				HideCursor();
				func_874();
				goto Label_1145;
			}
			var_110_bool = var_21_int == (int)256;
			if(var_110_bool == 0) goto Label_1145;
			var_111_string = "";
			func_967(var_21_int, var_111_string);
			var_113_bool = var_111_string != "";
			if(var_113_bool == 0) goto Label_1145;
			var_114_int = 2;
			var_115_string = "";
			func_967(var_114_int, var_115_string);
			SendMessage(var_114_int, var_115_string);
	}
		var_117_bool = var_21_int == (int)270;
		if(var_117_bool != 0) {
			HideCursor();
			func_748();
			goto Label_1179;
		}
		var_149_bool = var_21_int == (int)269;
		if(var_149_bool != 0) {
			HideCursor();
			func_811();
			goto Label_1179;
		}
		var_175_bool = var_21_int == (int)256;
		if(var_175_bool == 0) goto Label_1179;
		var_176_string = "";
		func_972(var_21_int, var_176_string);
		var_178_bool = var_176_string != "";
		if(var_178_bool == 0) goto Label_1179;
		var_179_int = 2;
		var_180_string = "";
		func_972(var_179_int, var_180_string);
		SendMessage(var_179_int, var_180_string);
	}
Label_1145:
	goto Label_1179;
	
Label_1179:
	return 0;
	
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	if((bool)0 != 0) {
		NewGame("world_danko.xml", "player_danko.xml");
		DestroyWindow();
		return 0;
	}
	var_24_string = ""; var_25_bool = 0;
	TaskCall(0);
	func_0(var_26_object, var_27_int, var_28_int, var_29_bool, "logo_gambitious.wmv", (bool)1);
	TaskReturn();
	var_35_string = ""; var_36_bool = 0;
	TaskCall(0);
	func_0(var_37_object, var_38_int, var_39_int, var_40_bool, "logo_devolver.wmv", (bool)1);
	TaskReturn();
	var_41_string = ""; var_42_bool = 0;
	TaskCall(0);
	func_0(var_43_object, var_44_int, var_45_int, var_46_bool, "logo_generalarcade.wmv", (bool)1);
	TaskReturn();
	var_47_string = ""; var_48_bool = 0;
	TaskCall(0);
	func_0(var_49_object, var_50_int, var_51_int, var_52_bool, "logo_icepick.wmv", (bool)1);
	TaskReturn();
	var_53_int = 0;
	TaskCall(1);
	func_89(var_54_object, (int)0);
	TaskReturn();
	var_58_string = ""; var_59_bool = 0;
	TaskCall(0);
	func_0(var_60_object, var_61_int, var_62_int, var_63_bool, "intro.wmv", (bool)1);
	TaskReturn();
	var_64_bool = 0;
	func_201(var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, (bool)0);
	return 0;
}


func_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_24_string, var_25_bool)
{
	var_3_bool = var_25_bool;
	SetOwnerDraw((bool)1);
	ShowCursor((bool)0);
	CaptureKeyboard();
	GetWindowSize(var_1_int, var_2_int);
	LoadVideo(var_24_string);
	FindVideo(var_0_object, var_24_string);
	@@@var_0_object:Play((bool)0);
	ProcessEvents();
	SetOwnerDraw((bool)0);
	ShowCursor((bool)1);
	ReleaseVideo(var_24_string);
	return 0;
}


func_399(var_2_int, var_3_bool, var_4_object, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_34_int, var_35_string, var_36_object)
{
	var_38_bool = var_35_string == "newgame";
	if(var_38_bool != 0) {
		var_2_int = 7;
		StopEventProcessing();
	} else {
		var_40_bool = var_35_string == "quitgame";
		if(var_40_bool != 0) {
			UITrace("Quit game");
			Quit();
			return 0;
		EMIT "GOTO 0x29e";
		}
		var_43_bool = var_35_string == "loadgame";
		if(var_43_bool != 0) {
			func_687(var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object);
			CreateWindow("load.xml", (bool)0, var_6_int);
			return 0;
		EMIT "GOTO 0x29e";
		}
		var_53_bool = var_35_string == "savegame";
		if(var_53_bool != 0) {
			func_687(var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object);
			CreateWindow("save.xml", (bool)0, var_7_int);
			return 0;
		EMIT "GOTO 0x29e";
		}
		var_57_bool = var_35_string == "gameoptions";
		if(var_57_bool != 0) {
			func_687(var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object);
			CreateWindow("options.xml", (bool)0, var_8_object);
			return 0;
		EMIT "GOTO 0x29e";
		}
		var_61_bool = var_35_string == "continue";
		if(var_61_bool != 0) {
			var_2_int = 6;
			StopEventProcessing();
			return 0;
		EMIT "GOTO 0x29e";
		}
		var_63_bool = var_35_string == "credits";
		if(var_63_bool != 0) {
			func_687(var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object);
			var_64_int = 0;
			TaskCall(1);
			func_89(var_65_object, (int)8);
			TaskReturn();
			var_69_object = Obj();
			func_164(var_69_object);
			var_3_bool = var_69_object;
			var_74_object = Obj();
			func_193(var_74_object);
			var_4_object = var_74_object;
			ShowCursor((bool)1);
			CaptureKeyboard();
			var_80_string = "";
			func_969(var_36_object, "");
			goto Label_670;
		}
		var_82_bool = var_35_string == "danko";
		if(var_82_bool != 0) {
			var_84_bool = var_34_int == (int)0;
			if(var_84_bool != 0) {
				var_2_int = 1;
				StopEventProcessing();
			} else {
				var_86_bool = var_34_int == (int)1;
				if(var_86_bool != 0) {
					SendMessage((int)202, "player_name");
					SendMessage((int)203, "player_desc");
					goto Label_524;
				}
				var_92_bool = var_34_int == (int)2;
				if(var_92_bool == 0) goto Label_524;
				SendMessage((int)-1, "player_name");
				SendMessage((int)-1, "player_desc");
		}
			var_98_bool = var_35_string == "burah";
			if(var_98_bool != 0) {
				var_100_bool = var_34_int == (int)0;
				if(var_100_bool != 0) {
					var_2_int = 2;
					StopEventProcessing();
				} else {
					var_102_bool = var_34_int == (int)1;
					if(var_102_bool != 0) {
						SendMessage((int)205, "player_name");
						SendMessage((int)206, "player_desc");
						goto Label_559;
					}
					var_108_bool = var_34_int == (int)2;
					if(var_108_bool == 0) goto Label_559;
					SendMessage((int)-1, "player_name");
					SendMessage((int)-1, "player_desc");
			}
				var_114_bool = var_35_string == "klara";
				if(var_114_bool != 0) {
					var_116_bool = var_34_int == (int)0;
					if(var_116_bool != 0) {
						var_117_bool = 0;
						var_117_bool = 0;
						var_118_bool = 0;
						func_1188(var_118_bool);
						var_124_bool = var_118_bool == 0; //@nz
						if(var_124_bool != 0) {
							var_125_bool = 0;
							func_1180(var_125_bool);
							var_131_bool = var_125_bool == 0; //@nz
							if(var_131_bool != 0) {
								var_117_bool = 1;
							}
						}
						if(var_117_bool != 0) {
							return 0;
						}
						var_2_int = 3;
						StopEventProcessing();
					} else {
						var_133_bool = var_34_int == (int)1;
						if(var_133_bool != 0) {
							SendMessage((int)208, "player_name");
							var_136_bool = 0;
							var_136_bool = 0;
							var_137_bool = 0;
							func_1188(var_137_bool);
							var_138_bool = var_137_bool == 0; //@nz
							if(var_138_bool != 0) {
								var_139_bool = 0;
								func_1180(var_139_bool);
								var_140_bool = var_139_bool == 0; //@nz
								if(var_140_bool != 0) {
									var_136_bool = 1;
								}
							}
							if(var_136_bool != 0) {
								SendMessage((int)213, "player_desc");
							} else {
								SendMessage((int)209, "player_desc");
						}
							var_146_bool = var_34_int == (int)2;
							if(var_146_bool == 0) goto Label_628;
							SendMessage((int)-1, "player_name");
							SendMessage((int)-1, "player_desc");
				}
						var_152_bool = var_35_string == "load";
						if(var_152_bool != 0) {
							var_154_bool = var_34_int == (int)0;
							if(var_154_bool != 0) {
								var_2_int = 4;
								@@var_36_object:GetFileName(var_10_object);
								StopEventProcessing();
							} else {
								func_671(var_35_string, var_36_object);
						}
							var_159_bool = var_35_string == "save";
							if(var_159_bool != 0) {
								var_161_bool = var_34_int == (int)0;
								if(var_161_bool != 0) {
									var_2_int = 5;
									var_9_object = var_36_object;
									StopEventProcessing();
								} else {
									func_671(var_35_string, var_36_object);
							}
								var_163_bool = var_35_string == "options";
								if(var_163_bool == 0) goto Label_670;
								func_671(var_35_string, var_36_object);
								return 0;
							}
							return 0;
						EMIT "GOTO 0x29e";
						}
						return 0;
					EMIT "GOTO 0x29e";
					}
					goto Label_628;
				}
			Label_628:
				return 0;
			EMIT "GOTO 0x29e";
			}
		Label_559:
			return 0;
		EMIT "GOTO 0x29e";
		}
	Label_524:
		return 0;
	EMIT "GOTO 0x29e";
	}
Label_670:
	return 0;
	
}


func_1180(var_125_bool)
{
	var_126_int = 0; var_127_int = 0;
	GetRegistryData(var_127_int, "BurahCompleted", (int)0);
	var_125_bool = var_127_int != (int)0;
	return 2;
}


func_671(var_3_bool, var_4_object)
{
	var_24_string = "";
	func_969(var_21_int, "");
	func_687(var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int);
	var_31_object = Obj();
	func_164(var_31_object);
	var_3_bool = var_31_object;
	var_36_object = Obj();
	func_193(var_36_object);
	var_4_object = var_36_object;
	return 0;
}


func_164(var_140_object)
{
	var_141_object = Obj(); var_142_object = Obj();
	CreateWindow("game_buttons.xml", (bool)0, var_142_object);
	var_142_object = var_140_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1188(var_118_bool)
{
	var_119_int = 0; var_120_int = 0;
	GetRegistryData(var_120_int, "DankoCompleted", (int)0);
	var_118_bool = var_120_int != (int)0;
	return 2;
}


func_811()
{
	func_735();
	var_150_string = "";
	func_972(var_21_int, var_150_string);
	var_152_bool = var_150_string == "";
	if(var_152_bool != 0) {
		SendMessage((int)1, "klara");
		var_155_string = "";
		func_974(var_21_int, "klara");
	} else {
		var_156_string = "";
		func_972(var_21_int, var_156_string);
		var_158_bool = var_156_string == "klara";
		if(var_158_bool != 0) {
			SendMessage((int)1, "burah");
			var_161_string = "";
			func_974(var_21_int, "burah");
			goto Label_873;
		}
		var_162_string = "";
		func_972(var_21_int, var_162_string);
		var_164_bool = var_162_string == "burah";
		if(var_164_bool != 0) {
			SendMessage((int)1, "danko");
			var_167_string = "";
			func_974(var_21_int, "danko");
			goto Label_873;
		}
		var_168_string = "";
		func_972(var_21_int, var_168_string);
		var_170_bool = var_168_string == "danko";
		if(var_170_bool == 0) goto Label_873;
		SendMessage((int)1, "klara");
		var_173_string = "";
		func_974(var_21_int, "klara");
	}
Label_873:
	return 0;
	
}


func_1196(var_29_string)
{
	var_30_bool = 0; var_31_bool = 0;
	var_33_int = "loading map: " + var_29_string;
	UITrace(var_33_int);
	LoadMap(var_31_bool, var_29_string);
	return 2;
}


func_687(var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object)
{
	var_83_bool = var_3_bool;
	if(var_83_bool != 0) {
		@@@var_3_bool:DestroyWindow();
	}
	var_84_object = var_4_object;
	if(var_84_object != 0) {
		@@@var_4_object:DestroyWindow();
	}
	var_85_int = var_5_int;
	if(var_85_int != 0) {
		@@@var_5_int:DestroyWindow();
	}
	var_86_int = var_6_int;
	if(var_86_int != 0) {
		@@@var_6_int:DestroyWindow();
	}
	var_87_int = var_7_int;
	if(var_87_int != 0) {
		@@@var_7_int:DestroyWindow();
	}
	var_88_object = var_8_object;
	if(var_88_object != 0) {
		@@@var_8_object:DestroyWindow();
	}
	CaptureKeyboard();
	return 0;
}


func_193(var_145_object)
{
	var_146_object = Obj(); var_147_object = Obj();
	CreateWindow("game_logo.xml", (bool)0, var_147_object);
	var_147_object = var_145_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_967(var_11_object, var_35_string)
{
	var_35_string = var_11_object;
	return 0;
}


func_201(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_9_object, var_10_object, var_14_object, var_64_bool)
{
	var_65_bool = 0; var_66_bool = 0; var_67_bool = 0; var_68_string = ""; var_69_bool = 0; var_70_bool = 0; var_71_bool = 0; var_72_string = "";
	var_14_object = var_64_bool;
	CaptureKeyboard();
	var_2_int = 0;
	GetWindowSize(var_0_object, var_1_int);
	SetCursor("default");
	SetBackground("default");
	PlaySound("menumusic");
	ShowCursor((bool)1);
	var_77_string = "";
	func_969(var_72_string, "");
	var_78_string = "";
	func_974(var_72_string, "");
	var_79_bool = var_64_bool;
	if(var_79_bool != 0) {
		CreateWindow("game_choose_pers.xml", (bool)0, var_5_int);
	} else {
				var_140_object = Obj();
				func_164(var_140_object);
				var_3_bool = var_140_object;
				var_145_object = Obj();
				func_193(var_145_object);
				var_4_object = var_145_object;
	}
Label_243:
	var_82_bool = var_2_int == 0; //@nz
	if(var_82_bool != 0) {
		ProcessEvents();
		goto Label_243;
	}
	func_687(var_67_bool, var_68_string, var_69_bool, var_70_bool, var_71_bool, var_72_string);
	var_90_bool = var_2_int == (int)1;
	if(var_90_bool != 0) {
		PauseSound("menumusic");
		var_92_int = 0;
		TaskCall(1);
		func_89(var_93_object, (int)1);
		TaskReturn();
		var_94_string = ""; var_95_bool = 0;
		TaskCall(0);
		func_0(var_96_object, var_97_int, var_98_int, var_99_bool, "intro_danko.wmv", (bool)1);
		TaskReturn();
		RemoveWorld();
		UISync();
		DestroyWindow();
		NewGame("world_danko.xml", "player_danko.xml");
	} else {
		var_103_bool = var_2_int == (int)2;
		if(var_103_bool != 0) {
			PauseSound("menumusic");
			var_105_int = 0;
			TaskCall(1);
			func_89(var_106_object, (int)2);
			TaskReturn();
			var_107_string = ""; var_108_bool = 0;
			TaskCall(0);
			func_0(var_109_object, var_110_int, var_111_int, var_112_bool, "intro_burah.wmv", (bool)1);
			TaskReturn();
			RemoveWorld();
			UISync();
			DestroyWindow();
			NewGame("world_burah.xml", "player_burah.xml");
			goto Label_390;
		}
		var_116_bool = var_2_int == (int)3;
		if(var_116_bool != 0) {
			PauseSound("menumusic");
			var_118_int = 0;
			TaskCall(1);
			func_89(var_119_object, (int)3);
			TaskReturn();
			var_120_string = ""; var_121_bool = 0;
			TaskCall(0);
			func_0(var_122_object, var_123_int, var_124_int, var_125_bool, "intro_klara.wmv", (bool)1);
			TaskReturn();
			RemoveWorld();
			UISync();
			DestroyWindow();
			NewGame("world_klara.xml", "player_klara.xml");
			goto Label_390;
		}
		var_129_bool = var_2_int == (int)4;
		if(var_129_bool != 0) {
			PauseSound("menumusic");
			var_132_int = "Loading : " + var_10_object;
			Trace(var_132_int);
			RemoveWorld();
			UISync();
			DestroyWindow();
			LoadGame(var_69_bool, var_10_object);
			goto Label_390;
		}
		var_134_bool = var_2_int == (int)5;
		if(var_134_bool != 0) {
			var_135_bool = var_9_object == 0; //@nz
			if(var_135_bool != 0) {
				DestroyWindow();
				SaveGame(var_70_bool);
			} else {
				DestroyWindow();
				@@@var_9_object:GetFileName(var_72_string);
				SaveGame(var_71_bool, var_72_string);
		}
			var_137_bool = var_2_int == (int)7;
			if(var_137_bool == 0) goto Label_390;
			RemoveWorld();
			UISync();
			DestroyWindow();
			NewGame("world_intro.xml", "player_intro.xml");

		}
		goto Label_390;
	}
Label_390:
	return 8;
	
}


func_969(var_11_object, var_77_string)
{
	var_11_object = var_77_string;
	return 0;
}


func_714()
{
	SendMessage((int)0, "newgame");
	SendMessage((int)0, "loadgame");
	SendMessage((int)0, "gameoptions");
	SendMessage((int)0, "credits");
	SendMessage((int)0, "quitgame");
	return 0;
}


func_972(var_12_object, var_124_string)
{
	var_124_string = var_12_object;
	return 0;
}


func_974(var_12_object, var_78_string)
{
	var_12_object = var_78_string;
	return 0;
}


func_977()
{
	func_714();
	var_35_string = "";
	func_967(var_21_int, var_35_string);
	var_37_bool = var_35_string == "";
	if(var_37_bool != 0) {
		SendMessage((int)1, "quitgame");
		var_40_string = "";
		func_969(var_21_int, "quitgame");
	} else {
		var_41_string = "";
		func_967(var_21_int, var_41_string);
		var_43_bool = var_41_string == "newgame";
		if(var_43_bool != 0) {
			SendMessage((int)1, "quitgame");
			var_46_string = "";
			func_969(var_21_int, "quitgame");
			goto Label_1069;
		}
		var_47_string = "";
		func_967(var_21_int, var_47_string);
		var_49_bool = var_47_string == "loadgame";
		if(var_49_bool != 0) {
			SendMessage((int)1, "newgame");
			var_52_string = "";
			func_969(var_21_int, "newgame");
			goto Label_1069;
		}
		var_53_string = "";
		func_967(var_21_int, var_53_string);
		var_55_bool = var_53_string == "gameoptions";
		if(var_55_bool != 0) {
			SendMessage((int)1, "loadgame");
			var_58_string = "";
			func_969(var_21_int, "loadgame");
			goto Label_1069;
		}
		var_59_string = "";
		func_967(var_21_int, var_59_string);
		var_61_bool = var_59_string == "credits";
		if(var_61_bool != 0) {
			SendMessage((int)1, "gameoptions");
			var_64_string = "";
			func_969(var_21_int, "gameoptions");
			goto Label_1069;
		}
		var_65_string = "";
		func_967(var_21_int, var_65_string);
		var_67_bool = var_65_string == "quitgame";
		if(var_67_bool == 0) goto Label_1069;
		SendMessage((int)1, "credits");
		var_70_string = "";
		func_969(var_21_int, "credits");
	}
Label_1069:
	return 0;
	
}


func_89(var_0_object, var_53_int)
{
	CreateWindow("intro.xml", (bool)0, var_0_object);
	SendMessage(var_53_int, "intro");
	ProcessEvents();
	return 0;
}


func_735()
{
	SendMessage((int)0, "danko");
	SendMessage((int)0, "burah");
	SendMessage((int)0, "klara");
	return 0;
}


func_874()
{
	func_714();
	var_73_string = "";
	func_967(var_21_int, var_73_string);
	var_75_bool = var_73_string == "";
	if(var_75_bool != 0) {
		SendMessage((int)1, "newgame");
		var_78_string = "";
		func_969(var_21_int, "newgame");
	} else {
		var_79_string = "";
		func_967(var_21_int, var_79_string);
		var_81_bool = var_79_string == "newgame";
		if(var_81_bool != 0) {
			SendMessage((int)1, "loadgame");
			var_84_string = "";
			func_969(var_21_int, "loadgame");
			goto Label_966;
		}
		var_85_string = "";
		func_967(var_21_int, var_85_string);
		var_87_bool = var_85_string == "loadgame";
		if(var_87_bool != 0) {
			SendMessage((int)1, "gameoptions");
			var_90_string = "";
			func_969(var_21_int, "gameoptions");
			goto Label_966;
		}
		var_91_string = "";
		func_967(var_21_int, var_91_string);
		var_93_bool = var_91_string == "gameoptions";
		if(var_93_bool != 0) {
			SendMessage((int)1, "credits");
			var_96_string = "";
			func_969(var_21_int, "credits");
			goto Label_966;
		}
		var_97_string = "";
		func_967(var_21_int, var_97_string);
		var_99_bool = var_97_string == "credits";
		if(var_99_bool != 0) {
			SendMessage((int)1, "quitgame");
			var_102_string = "";
			func_969(var_21_int, "quitgame");
			goto Label_966;
		}
		var_103_string = "";
		func_967(var_21_int, var_103_string);
		var_105_bool = var_103_string == "quitgame";
		if(var_105_bool == 0) goto Label_966;
		SendMessage((int)1, "newgame");
		var_108_string = "";
		func_969(var_21_int, "newgame");
	}
Label_966:
	return 0;
	
}


func_748()
{
	func_735();
	var_124_string = "";
	func_972(var_21_int, var_124_string);
	var_126_bool = var_124_string == "";
	if(var_126_bool != 0) {
		SendMessage((int)1, "danko");
		var_129_string = "";
		func_974(var_21_int, "danko");
	} else {
		var_130_string = "";
		func_972(var_21_int, var_130_string);
		var_132_bool = var_130_string == "danko";
		if(var_132_bool != 0) {
			SendMessage((int)1, "burah");
			var_135_string = "";
			func_974(var_21_int, "burah");
			goto Label_810;
		}
		var_136_string = "";
		func_972(var_21_int, var_136_string);
		var_138_bool = var_136_string == "burah";
		if(var_138_bool != 0) {
			SendMessage((int)1, "klara");
			var_141_string = "";
			func_974(var_21_int, "klara");
			goto Label_810;
		}
		var_142_string = "";
		func_972(var_21_int, var_142_string);
		var_144_bool = var_142_string == "klara";
		if(var_144_bool == 0) goto Label_810;
		SendMessage((int)1, "danko");
		var_147_string = "";
		func_974(var_21_int, "danko");
	}
Label_810:
	return 0;
	
}


