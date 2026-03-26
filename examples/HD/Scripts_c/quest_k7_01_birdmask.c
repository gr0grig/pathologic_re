// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,GetInvItemByName/2,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png|W:ook7Birdmask1|W:k7q01CorpseMark|W:k7q01BirdmaskGotoCorpse|W:pt_d7q02_corpse|A:AddMark|W:quest_k7_01|W:place_corpse|A:ShowMap|W:ook7Birdmask2|W:ook7Birdmask3|W:sobor@door1|A:GetItemCount|W:bird_mask|W:bird_balahon|A:GetItem|A:GetItemID|A:IsItemSelected|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x2aa
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x10b vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x2b4 vars=object
// @EVENT_7: op=0x2e9 vars=int
// @PE: 0x4a,0xf5,0x10b,0x2b4,0x2bf,0x2e9,0x300,0x45d,0x483,0x493,0x499,0x49f,0x4a6,0x4b2,0x4be,0x4ca,0x4d4,0x4de,0x518,0x51f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_1010();
		var_15_bool = var_11_object == (int)27413;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1123();
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_1155(var_49_object);
		}
		var_75_bool = var_11_object == (int)43962;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_1123();
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_1155(var_79_object);
		}
		var_81_bool = var_11_object == (int)29630;
		if(var_81_bool != 0) {
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_1171();
		}
		var_87_bool = var_11_object == (int)29633;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_1177();
		}
		var_93_bool = var_10_bool == (int)31582;
		if(var_93_bool != 0) {
			var_94_bool = 0; var_95_object = Obj();
			var_95_object = var_1_object;
			func_1190(var_95_object);
			if(var_94_bool != 0) {
				var_100_object = Obj(); var_101_object = Obj();
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_1117();
				var_104_string = "";
				func_245(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)530193);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526124, (int)27404, (int)27403);
				return 0;
			}
			var_125_bool = 0;
			var_125_bool = 0;
			var_126_bool = 0; var_127_object = Obj();
			var_127_object = var_1_object;
			func_1236(var_126_bool, var_127_object);
			if(var_126_bool != 0) {
				var_137_bool = 0; var_138_object = Obj();
				var_138_object = var_1_object;
				func_1246(var_137_bool, var_138_object);
				if(var_137_bool != 0) {
					var_125_bool = 1;
				}
			}
			if(var_125_bool != 0) {
				var_152_string = "";
				func_245(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)526123);
				@@@var_0_object:ClearReplies();
				var_154_bool = 0;
				var_154_bool = 0;
				var_155_bool = 0; var_156_object = Obj();
				var_156_object = var_1_object;
				func_1226(var_155_bool, var_156_object);
				if(var_155_bool != 0) {
					var_193_bool = 0; var_194_object = Obj();
					var_194_object = var_1_object;
					func_1202(var_194_object);
					if(var_193_bool != 0) {
						var_154_bool = 1;
					}
				}
				if(var_154_bool != 0) {
					@@@var_0_object:AddReply((int)528266, (int)29631, (int)29630);
				}
				@@@var_0_object:AddReply((int)528258, (int)-1, (int)29621);
				@@@var_0_object:AddReply((int)526135, (int)-1, (int)27414);
				return 0;
			}
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_1226(var_208_bool, var_209_object);
			if(var_208_bool != 0) {
				var_210_object = Obj(); var_211_object = Obj();
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				func_1183();
				var_222_string = "";
				func_245(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)526136);
				@@@var_0_object:ClearReplies();
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_1_object;
				func_1214(var_225_object);
				if(var_224_bool != 0) {
					@@@var_0_object:AddReply((int)528269, (int)29634, (int)29633);
				}
				@@@var_0_object:AddReply((int)526137, (int)-1, (int)27416);
				@@@var_0_object:AddReply((int)528259, (int)-1, (int)29622);
				return 0;
			}
			var_239_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)530191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530192, (int)-1, (int)31581);
			return 0;
		}
		var_245_bool = var_10_bool == (int)29634;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)528270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528271, (int)29636, (int)29635);
			return 0;
		}
		var_252_bool = var_10_bool == (int)29636;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)528272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528273, (int)-1, (int)29637);
			@@@var_0_object:AddReply((int)528274, (int)-1, (int)29638);
			return 0;
		}
		var_262_bool = var_10_bool == (int)29631;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)528267);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526132, (int)27412, (int)27411);
			return 0;
		}
		var_269_bool = var_10_bool == (int)27412;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526133);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528268, (int)-1, (int)29632);
			return 0;
		}
		var_276_bool = var_10_bool == (int)27404;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528260, (int)29624, (int)29623);
			return 0;
		}
		var_283_bool = var_10_bool == (int)29624;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)528261);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526126, (int)27406, (int)27405);
			@@@var_0_object:AddReply((int)528262, (int)29626, (int)29625);
			return 0;
		}
		var_293_bool = var_10_bool == (int)29626;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)528263);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528264, (int)27408, (int)29627);
			return 0;
		}
		var_300_bool = var_10_bool == (int)27406;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526127);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526128, (int)27408, (int)27407);
			@@@var_0_object:AddReply((int)528265, (int)27408, (int)29629);
			return 0;
		}
		var_310_bool = var_10_bool == (int)27408;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526129);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526130, (int)27410, (int)27409);
			@@@var_0_object:AddReply((int)541756, (int)43961, (int)43960);
			return 0;
		}
		var_320_bool = var_10_bool == (int)43961;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)541757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541758, (int)-1, (int)43962);
			return 0;
		}
		var_327_bool = var_10_bool == (int)27410;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_245(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526131);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526134, (int)-1, (int)27413);
			return 0;
		}
		var_3_string = true;
		var_333_bool = 0;
		func_1091(var_333_bool);
		if(var_333_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x10c";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_768(var_9_object, var_10_object);
	var_14_int = 0; var_15_object = Obj();
	var_10_object = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_730(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_999(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_767;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_767:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_682:
	var_10_float = 0; var_11_float = 0;
	func_703(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_682;
}
EMIT "Return(); Pop(0)";


func_768(var_2_object, var_3_string)
{
	func_863();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_881(var_25_bool, var_26_object, (float)130.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_1085(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_1083(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_1087(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_1089(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_1382(var_77_int);
	@@var_21_object:SetPlayerName(var_77_int);
	IsOverrideActive(var_22_bool);
	var_85_bool = var_22_bool;
	if(var_85_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_86_object = Obj(); var_87_object = Obj();
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_56:
	var_263_bool = var_24_bool == 0; //@nz
	if(var_263_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_950();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1027(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
	return 2;
}


func_1155(var_49_object)
{
	var_50_object = Obj(); var_51_string = ""; var_52_float = 0;
	func_1332(Obj());
	var_53_object = var_50_object;
	func_1349(var_50_object, "pt_d7q02_corpse", (float)2);
	var_73_object = Obj();
	func_1332(var_73_object);
	@@var_49_object:ShowMap(var_73_object);
	return 0;
}


func_1032(var_231_string, var_232_bool)
{
	var_233_object = Obj(); var_234_object = Obj();
	FindActor(var_234_object, var_231_string);
	var_235_bool = var_234_object == 0; //@nz
	if(var_235_bool != 0) {
		var_237_int = "Door " + var_231_string;
		var_239_int = var_237_int + " not found";
		Trace(var_239_int);
	} else {
		@@var_234_object:SetProperty("locked", var_232_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_782()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0;
	WaitForAnimEnd();
	var_33_bool = 0;
	func_876(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		return 14;
	}
	func_1100((int)0);
	var_35_int = var_26_int;
	var_27_int = 0;
	
Label_796:
	var_48_bool = 0;
	var_48_bool = 0;
	var_50_bool = var_27_int < (int)5;
	if(var_50_bool != 0) {
		var_51_bool = 0;
		func_876(var_51_bool);
		if(var_51_bool != 0) {
			var_48_bool = 1;
		}
	}
	if(var_48_bool != 0) {
		irand(var_28_int, (int)3);
		var_54_bool = var_28_int == (int)0;
		if(var_54_bool != 0) {
			var_55_int = var_26_int;
			if(var_55_int == 0) goto Label_829;
			irand(var_29_int, var_26_int);
			var_57_string = ""; var_58_int = 0;
			var_29_int = var_58_int;
			func_1093(var_57_string, var_58_int);
			PlayAnimation("all", var_57_string);
			WaitForAnimEnd(var_30_bool);
			var_59_bool = var_30_bool == 0; //@nz
			if(var_59_bool != 0) {
			} else {
		} else {
				var_64_bool = var_28_int == (int)1;
				if(var_64_bool != 0) {
					rand(var_31_float, (int)4);
					var_67_int = var_31_float + (int)1;
					Sleep(var_67_int, var_32_bool);
					var_68_bool = var_32_bool == 0; //@nz
					if(var_68_bool != 0) {
						goto Label_858;
					}
					goto Label_847;
				}
				var_69_int = var_27_int;
				if(var_69_int == 0) goto Label_847;
				goto Label_858;
		}
		Label_847:
			var_60_bool = 0;
			func_861(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_858;
			}
			ResetAAS();
			var_27_int = var_27_int + (int)1;
			goto Label_796;

		}
	}
Label_858:
	ResetAAS();
	return 14;
	
}


func_1171()
{
	SetVariable("ook7Birdmask2", (int)1);
	return 0;
}


func_1304(var_147_bool)
{
	var_149_int = 0;
	func_1066(var_149_int);
	var_147_bool = var_149_int == (int)7;
	return 0;
}


func_1177()
{
	SetVariable("ook7Birdmask3", (int)1);
	return 0;
}


func_1049(var_42_bool, var_43_string, var_44_string)
{
	var_45_object = Obj(); var_46_object = Obj();
	FindActor(var_46_object, var_43_string);
	var_47_bool = var_46_object == 0; //@ne
	if(var_47_bool != 0) {
		var_42_bool = 0;
		return 2;
	}
	Trigger(var_46_object, var_44_string);
	var_42_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1311(var_158_bool)
{
	var_160_bool = 0;
	var_160_bool = 0;
	var_161_int = 0;
	func_1075(var_161_int);
	var_167_bool = var_161_int >= (int)0;
	if(var_167_bool != 0) {
		var_168_int = 0;
		func_1075(var_168_int);
		var_170_bool = var_168_int < (int)12;
		if(var_170_bool != 0) {
			var_160_bool = 1;
		}
	}
	if(var_160_bool != 0) {
		var_158_bool = 1;
		return 0;
	}
	var_158_bool = 0;
	return 0;
}


func_1183()
{
	var_231_string = ""; var_232_bool = 0;
	func_1032("sobor@door1", (bool)0);
	return 0;
}


func_1061(var_39_float)
{
	var_40_float = 0; var_41_float = 0;
	GetGameTime(var_41_float);
	var_41_float = var_39_float;
	return 2;
}


func_1190(var_93_bool)
{
	var_95_int = 0; var_96_string = "";
	func_1027(var_95_int, "ook7Birdmask1");
	var_100_bool = var_95_int == (int)0;
	if(var_100_bool != 0) {
		var_93_bool = 1;
		return 0;
	}
	var_93_bool = 0;
	return 0;
}


func_1066(var_149_int)
{
	var_150_float = 0; var_151_float = 0;
	GetGameTime(var_151_float);
	var_153_int = 0;
	var_153_int = var_151_float / (int)24;
	var_149_int = (int)1 + var_153_int;
	return 2;
}


func_1202(var_212_bool)
{
	var_214_int = 0; var_215_string = "";
	func_1027(var_214_int, "ook7Birdmask2");
	var_217_bool = var_214_int == (int)0;
	if(var_217_bool != 0) {
		var_212_bool = 1;
		return 0;
	}
	var_212_bool = 0;
	return 0;
}


func_1075(var_161_int)
{
	var_162_float = 0; var_163_float = 0;
	GetGameTime(var_163_float);
	var_164_int = 0;
	var_163_float = var_164_int;
	var_161_int = var_164_int % (int)24;
	return 2;
}


func_1332(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	GetMainOutdoorScene(var_31_object);
	var_33_bool = var_31_object == 0; //@ne
	if(var_33_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_32_object = 0;
		var_32_object = var_28_object;
		return 4;
	}
	@@var_31_object:GetMap(var_32_object);
	var_32_object = var_28_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_950()
{
	var_265_bool = 0; var_266_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_268_bool = 0;
	func_1091(var_268_bool);
	if(var_268_bool != 0) {
	} else {
		HasAnimationTrack(var_266_bool, "head");
		var_270_bool = var_266_bool;
		if(var_270_bool == 0) goto Label_967;
		UnlookAsync("head");
	}
Label_967:
	return 2;
	
}


func_1083(var_74_int)
{
	var_74_int = 515571;
	return 0;
}


func_1085(var_73_int)
{
	var_73_int = 504029;
	return 0;
}


func_1214(var_243_bool)
{
	var_245_int = 0; var_246_string = "";
	func_1027(var_245_int, "ook7Birdmask3");
	var_248_bool = var_245_int == (int)0;
	if(var_248_bool != 0) {
		var_243_bool = 1;
		return 0;
	}
	var_243_bool = 0;
	return 0;
}


func_1087(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
	return 0;
}


func_703(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_10_float, var_11_float)
{
	var_12_bool = 0;
	func_876(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	SetTimer((int)10, (float)1.0);
	func_782();
	var_70_bool = var_3_string == 0; //@nz
	if(var_70_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1089(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_1091(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_1093(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = "";
	var_45_int = var_42_int;
	if(var_45_int != 0) {
		"idle" = "idle" + var_42_int;
	}
	var_44_string = var_41_string;
	return 2;
}


func_1349(var_50_object, var_51_string, var_52_float)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_object = Obj(); var_57_bool = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_object = Obj(); var_61_bool = 0;
	GetMainOutdoorScene(var_60_object);
	var_62_bool = var_60_object == 0; //@ne
	if(var_62_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_60_object:GetLocator(var_51_string, var_61_bool, var_58_cvector, var_59_cvector);
	var_64_bool = var_61_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_66_int = "Warning: outdoor scene locator " + var_51_string;
		var_68_int = var_66_int + " doesnt exist";
		Trace(var_68_int);
	}
	@@var_60_object:GetMap(var_50_object);
	var_69_bool = var_50_object == 0; //@ne
	if(var_69_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_71_float = GetByIndex(var_58_cvector, 0);
	var_72_float = GetByIndex(var_58_cvector, 2);
	@@var_50_object:SetMapParams(var_71_float, var_72_float, var_52_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_968(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0;
	lshHasAnimation(var_132_bool, var_128_string);
	var_135_bool = var_132_bool;
	if(var_135_bool != 0) {
		lshGetAnimTimes(var_128_string, var_133_float, var_134_float);
		lshPlayAnimation(var_133_float, var_134_float, (bool)0);
	} else {
		var_138_int = "Can't find lsh animation : " + var_128_string;
		Trace(var_138_int);
	}
	return 6;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0; var_94_object = Obj();
		var_94_object = var_1_object;
		func_1190(var_94_object);
		if(var_93_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_1117();
			var_105_string = "";
			func_245(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)530193);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526124, (int)27404, (int)27403);
		} else {
				var_144_bool = 0;
				var_144_bool = 0;
				var_145_bool = 0; var_146_object = Obj();
				var_146_object = var_1_object;
				func_1236(var_145_bool, var_146_object);
				if(var_145_bool != 0) {
					var_156_bool = 0; var_157_object = Obj();
					var_157_object = var_1_object;
					func_1246(var_156_bool, var_157_object);
					if(var_156_bool != 0) {
						var_144_bool = 1;
					}
				}
				if(var_144_bool != 0) {
					var_171_string = "";
					func_245(var_87_object, "Neutral");
					@@@var_0_object:SetMessage((int)526123);
					@@@var_0_object:ClearReplies();
					var_173_bool = 0;
					var_173_bool = 0;
					var_174_bool = 0; var_175_object = Obj();
					var_175_object = var_1_object;
					func_1226(var_174_bool, var_175_object);
					if(var_174_bool != 0) {
						var_212_bool = 0; var_213_object = Obj();
						var_213_object = var_1_object;
						func_1202(var_213_object);
						if(var_212_bool != 0) {
							var_173_bool = 1;
						}
					}
					if(var_173_bool != 0) {
						@@@var_0_object:AddReply((int)528266, (int)29631, (int)29630);
					}
					@@@var_0_object:AddReply((int)528258, (int)-1, (int)29621);
					@@@var_0_object:AddReply((int)526135, (int)-1, (int)27414);
					goto Label_215;
				}
				var_227_bool = 0; var_228_object = Obj();
				var_228_object = var_1_object;
				func_1226(var_227_bool, var_228_object);
				if(var_227_bool != 0) {
					var_229_object = Obj(); var_230_object = Obj();
					var_229_object = var_1_object;
					var_230_object = var_0_object;
					func_1183();
					var_241_string = "";
					func_245(var_87_object, "Neutral");
					@@@var_0_object:SetMessage((int)526136);
					@@@var_0_object:ClearReplies();
					var_243_bool = 0; var_244_object = Obj();
					var_244_object = var_1_object;
					func_1214(var_244_object);
					if(var_243_bool != 0) {
						@@@var_0_object:AddReply((int)528269, (int)29634, (int)29633);
					}
					@@@var_0_object:AddReply((int)526137, (int)-1, (int)27416);
					@@@var_0_object:AddReply((int)528259, (int)-1, (int)29622);
					goto Label_215;
				}
				var_258_string = "";
				func_245(var_87_object, "Neutral");
				@@@var_0_object:SetMessage((int)530191);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530192, (int)-1, (int)31581);
				goto Label_215;
		}
	}
Label_215:
	var_126_bool = 0;
	func_1091(var_126_bool);
	if(var_126_bool != 0) {

	Label_219:
		lshWaitForAnimEnd();
		var_127_string = var_3_string;
		if(var_127_string != 0) {
		} else {
			var_128_string = "";
			var_128_string = var_2_object;
			func_968(var_128_string);
			goto Label_219;
	}
		PlayAnimation("all", "idle");

	Label_234:
		WaitForAnimEnd();
		var_141_string = var_3_string;
		if(var_141_string != 0) {
			goto Label_244;
		}
		PlayAnimation("all", "idle");
		goto Label_234;

	}
	goto Label_244;
	
Label_244:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_1226(var_174_bool, var_175_object)
{
	var_176_bool = 0; var_177_object = Obj();
	var_175_object = var_177_object;
	func_1256(var_176_bool, var_177_object);
	if(var_176_bool != 0) {
		var_174_bool = 1;
		return 0;
	}
	var_174_bool = 0;
	return 0;
}


func_1100(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0;
	var_38_int = 0;
	
Label_1102:
	var_41_string = ""; var_42_int = 0;
	var_38_int = var_42_int;
	func_1093(var_41_string, var_42_int);
	HasAnimation(var_39_bool, "all", var_41_string);
	var_46_bool = var_39_bool == 0; //@nz
	if(var_46_bool != 0) {
	} else {
		var_38_int = var_38_int + (int)1;
		goto Label_1102;
	}
	var_38_int = var_35_int;
	return 4;
	
}


func_1236(var_145_bool, var_146_object)
{
	var_147_bool = 0; var_148_object = Obj();
	var_146_object = var_148_object;
	func_1304(var_148_object);
	if(var_147_bool != 0) {
		var_145_bool = 1;
		return 0;
	}
	var_145_bool = 0;
	return 0;
}


func_984(var_109_string, var_110_bool)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0;
	lshHasAnimation(var_116_bool, var_109_string);
	var_119_bool = var_116_bool;
	if(var_119_bool != 0) {
		lshGetAnimTimes(var_109_string, var_117_float, var_118_float);
		lshPlayAnimation(var_117_float, var_118_float, var_110_bool);
	} else {
		var_121_int = "Can't find lsh animation : " + var_109_string;
		Trace(var_121_int);
	}
	return 6;
	
}


func_730(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_868(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_1117()
{
	SetVariable("ook7Birdmask1", (int)1);
	return 0;
}


func_1246(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_object = Obj();
	var_157_object = var_159_object;
	func_1311(var_159_object);
	if(var_158_bool != 0) {
		var_156_bool = 1;
		return 0;
	}
	var_156_bool = 0;
	return 0;
}


func_863()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_861(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_1123()
{
	var_18_object = Obj(); var_19_object = Obj();
	var_20_int = 0; var_21_string = "";
	func_1027(var_20_int, "k7q01CorpseMark");
	var_25_bool = var_20_int == (int)0;
	if(var_25_bool != 0) {
		SetVariable("k7q01CorpseMark", (int)1);
		func_1332(Obj());
		var_28_object = var_19_object;
		var_39_float = 0;
		func_1061(var_39_float);
		@@var_19_object:AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", (int)3, (int)526214, var_39_float);
		var_42_bool = 0; var_43_string = ""; var_44_string = "";
		func_1049(var_42_bool, "quest_k7_01", "place_corpse");
		var_19_object = 0;
	}
	return 2;
}


func_868(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_1382(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x575";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_999(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0);
	@@var_27_object:GetEyesHeight(var_30_float);
	var_31_cvector = CVector(0.0, 0.0, 0.0);
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	LookAsync(var_27_object, "head", var_31_cvector);
	return 4;
}


func_1256(var_176_bool, var_177_object)
{
	var_178_int = 0; var_179_int = 0; var_180_int = 0; var_181_bool = 0; var_182_bool = 0; var_183_int = 0; var_184_object = Obj(); var_185_int = 0; var_186_bool = 0; var_187_bool = 0; var_188_int = 0; var_189_int = 0; var_190_int = 0; var_191_bool = 0; var_192_bool = 0; var_193_int = 0; var_194_object = Obj(); var_195_int = 0; var_196_bool = 0; var_197_bool = 0;
	@@var_177_object:GetItemCount(var_188_int, (int)1);
	GetInvItemByName(var_189_int, "bird_mask");
	GetInvItemByName(var_190_int, "bird_balahon");
	var_191_bool = 0;
	var_192_bool = 0;
	var_193_int = 0;
	
Label_1269:
	var_201_bool = var_193_int < var_188_int;
	if(var_201_bool != 0) {
		@@var_177_object:GetItem(var_194_object, var_193_int, (int)1);
		@@var_194_object:GetItemID(var_195_int);
		var_203_bool = var_195_int == var_189_int;
		if(var_203_bool != 0) {
			@@var_177_object:IsItemSelected(var_196_bool, var_193_int, (int)1);
			var_205_bool = var_196_bool;
			if(var_205_bool != 0) {
				var_191_bool = 1;
			}
		} else {
			var_207_bool = var_195_int == var_190_int;
			if(var_207_bool == 0) goto Label_1293;
			@@var_177_object:IsItemSelected(var_197_bool, var_193_int, (int)1);
			var_209_bool = var_197_bool;
			if(var_209_bool == 0) goto Label_1293;
	}
		var_176_bool = 0;
		var_210_bool = var_191_bool;
		if(var_210_bool != 0) {
			var_211_bool = (bool)1;
			if(var_211_bool != 0) {
				var_176_bool = 1;
			}
		}
		var_194_object = 0;
		var_193_int = var_193_int + (int)1;
		goto Label_1269;
	}
	return 20;
	
}


func_876(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_881(var_25_bool, var_26_object, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0;
	@@var_26_object:GetPosition(var_38_cvector);
	@@var_26_object:GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_37_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	GetPosition(var_39_cvector);
	GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	var_47_float = var_47_float + var_37_float;
	SetByIndex(var_39_cvector, 1) = var_47_float;
	var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_49_int = var_40_cvector | var_40_cvector;
	var_50_float = sqrt(var_49_int);
	var_40_cvector = var_40_cvector / var_50_float;
	var_41_cvector = -var_40_cvector;
	var_51_float = var_40_cvector * var_27_float;
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_41_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1017(var_52_cvector, var_53_cvector);
	var_61_float = var_52_cvector * (int)25;
	var_62_int = var_51_float + var_61_float;
	var_42_cvector = var_62_int - CVector(0.0, 10.0, 0.0);
	var_43_cvector = var_39_cvector + var_42_cvector;
	IsOverrideActive(var_44_bool);
	var_64_bool = var_44_bool;
	if(var_64_bool != 0) {
		var_25_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_43_cvector, var_41_cvector, (bool)1);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	Rotate(var_66_float, var_67_float);
	var_68_bool = 0;
	func_1091(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_944;
		LookAsyncCamera("head");
	}
Label_944:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_1010()
{
	var_13_bool = 0;
	func_1091(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_245(var_2_object, var_105_string)
{
	var_106_bool = 0;
	func_1091(var_106_bool);
	var_107_bool = var_106_bool == 0; //@nz
	if(var_107_bool != 0) {
		return 0;
	}
	var_108_bool = var_105_string == var_2_object;
	if(var_108_bool != 0) {
		return 0;
	}
	var_109_string = ""; var_110_bool = 0;
	var_105_string = var_109_string;
	var_112_bool = var_105_string == "";
	if(var_112_bool != 0) {
		var_110_bool = 0;
	} else {
		var_110_bool = 1;
	}
	func_984(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	return 0;
	
}


func_1017(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_53_cvector | var_53_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_52_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_52_cvector = var_53_cvector / var_56_float;
	return 2;
}


