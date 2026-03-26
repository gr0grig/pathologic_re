// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:powder is given|W:powder|W:ood11ULittleGirl1|W:d11q02|W:quest_d11_02|W:init_graveyard|W:completed|W:ood11ULittleGirl2|A:SetReturnValue|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:player|W:Adding diary entry|W:ui/NPC_None.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1c5
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd0 vars=int,int
// @TASK_2: vars=bool,bool params=0
// @EVENT_0: op=0x1ca vars=object
// @EVENT_26: op=0x1dc vars=string
// @EVENT_6: op=0x1f8 vars=
// @PE: 0x3f,0xc0,0xd0,0x1ca,0x242,0x29a,0x2a0,0x2ab,0x2b1,0x2c2,0x2d3,0x2d9,0x2de,0x2ea,0x2f6,0x302,0x30e,0x31a

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	if((int)1 != 0) {
		func_600();
		var_12_bool = var_8_bool == (int)15373;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_689();
		}
		var_58_bool = var_8_bool == (int)15376;
		if(var_58_bool != 0) {
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_723();
		}
		var_64_bool = var_8_bool == (int)15378;
		if(var_64_bool != 0) {
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_706();
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_672(var_86_object);
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_666();
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_729(var_109_object);
		}
		var_112_bool = var_8_bool == (int)15379;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_683();
		}
		var_118_bool = var_8_bool == (int)15381;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_729(var_120_object);
		}
		var_122_bool = var_7_bool == (int)15370;
		if(var_122_bool != 0) {
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_746(var_124_object);
			if(var_123_bool != 0) {
				var_129_string = "";
				func_192(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)14156);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14169, (int)15384, (int)15383);
				return 0;
			}
			var_148_string = "";
			func_192(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14161);
			@@@var_0_object:ClearReplies();
			var_150_bool = 0;
			var_150_bool = 1;
			var_151_bool = 0;
			var_151_bool = 0;
			var_152_bool = 0; var_153_object = Obj();
			var_153_object = var_1_object;
			func_758(var_153_object);
			if(var_152_bool != 0) {
				var_158_bool = 0; var_159_object = Obj();
				var_159_object = var_1_object;
				func_782(var_159_object);
				if(var_158_bool != 0) {
					var_151_bool = 1;
				}
			}
			if(var_151_bool != 1) {
				var_164_bool = 0;
				var_164_bool = 0;
				var_165_bool = 0; var_166_object = Obj();
				var_166_object = var_1_object;
				func_794(var_166_object);
				if(var_165_bool != 0) {
					var_171_bool = 0; var_172_object = Obj();
					var_172_object = var_1_object;
					func_782(var_172_object);
					if(var_171_bool != 0) {
						var_164_bool = 1;
					}
				}
				if(var_164_bool != 1) {
					var_150_bool = 0;
				}
			}
			if(var_150_bool != 0) {
				@@@var_0_object:AddReply((int)14162, (int)15377, (int)15376);
			}
			var_176_bool = 0;
			var_176_bool = 0;
			var_177_bool = 0; var_178_object = Obj();
			var_178_object = var_1_object;
			func_770(var_178_object);
			if(var_177_bool != 0) {
				var_183_bool = 0; var_184_object = Obj();
				var_184_object = var_1_object;
				func_734(var_184_object);
				if(var_183_bool != 0) {
					var_176_bool = 1;
				}
			}
			if(var_176_bool != 0) {
				@@@var_0_object:AddReply((int)14165, (int)15380, (int)15379);
			}
			@@@var_0_object:AddReply((int)14168, (int)-1, (int)15382);
			return 0;
		}
		var_196_bool = var_7_bool == (int)15380;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_192(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14166);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14167, (int)-1, (int)15381);
			return 0;
		}
		var_203_bool = var_7_bool == (int)15377;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_192(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14163);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14164, (int)-1, (int)15378);
			return 0;
		}
		var_210_bool = var_7_bool == (int)15384;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_192(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14157, (int)15372, (int)15371);
			return 0;
		}
		var_217_bool = var_7_bool == (int)15372;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_192(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14158);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14159, (int)-1, (int)15373);
			@@@var_0_object:AddReply((int)14160, (int)-1, (int)15374);
			return 0;
		}
		var_3_string = true;
		var_226_bool = 0;
		func_917(var_226_bool);
		if(var_226_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd1";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_object = var_1_object;
	if(var_8_object != 0) {
		var_9_int = 0; var_10_object = Obj();
		var_7_object = var_10_object;
		TaskCall(0);
		func_0(var_11_object, var_9_int, var_10_object);
		TaskReturn();
		var_164_bool = var_11_object == (int)1000;
		if(var_164_bool != 0) {
			var_1_object = false;
		}
	}
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_0_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = 0;
		var_12_bool = 0;
		var_13_bool = var_9_bool == 0; //@nz
		if(var_13_bool != 0) {
			var_14_bool = 0;
			func_520(var_14_bool);
			if(var_14_bool != 0) {
				var_12_bool = 1;
			}
		}
		if(var_12_bool != 0) {
			var_15_object = Obj();
			func_607(var_15_object);
			RemoveActor(var_15_object);
		}
	} else {
		var_19_bool = var_7_string == "restore";
		if(var_19_bool == 0) goto Label_503;
		var_0_object = false;
	}
Label_503:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0;
	var_7_bool = 0;
	var_8_object = var_0_object;
	if(var_8_object != 0) {
		var_9_bool = 0;
		func_520(var_9_bool);
		if(var_9_bool != 0) {
			var_7_bool = 1;
		}
	}
	if(var_7_bool != 0) {
		var_10_object = Obj();
		func_607(var_10_object);
		RemoveActor(var_10_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = true;
	func_472();
	return 0;
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	var_0_object = var_10_object;
	var_20_bool = 0; var_21_object = Obj();
	var_10_object = var_21_object;
	func_522(var_20_bool, var_21_object);
	var_60_bool = var_20_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	CreateDialog(var_16_object);
	var_61_int = 0;
	func_913(var_61_int);
	@@var_16_object:SetNPCName(var_61_int);
	var_62_string = "";
	func_915(var_62_string);
	@@var_16_object:SetPhoto(var_62_string);
	var_63_int = 0;
	func_848(var_63_int);
	@@var_16_object:SetPlayerName(var_63_int);
	IsOverrideActive(var_17_bool);
	var_71_bool = var_17_bool;
	if(var_71_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	DoDialog(var_16_object);
	var_72_object = Obj(); var_73_object = Obj();
	var_10_object = var_72_object;
	var_16_object = var_73_object;
	TaskCall(1);
	func_63(var_74_object, var_75_object, var_76_string, var_77_bool, var_72_object, var_73_object);
	TaskReturn();
	@@var_16_object:IsDialogEnd(var_19_bool);
	
Label_45:
	var_161_bool = var_19_bool == 0; //@nz
	if(var_161_bool != 0) {
		sync();
		@@var_16_object:IsDialogEnd(var_19_bool);
		goto Label_45;
	}
	var_10_object = Obj();
	func_578();
	StopDialog(var_16_object);
	@@var_16_object:GetReturnValue((int)-1);
	var_18_int = var_9_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_641(var_88_object, var_89_string, var_90_int)
{
	var_91_object = Obj(); var_92_object = Obj();
	CreateInvItem(var_92_object);
	@@var_92_object:SetItemName(var_89_string);
	var_93_object = Obj(); var_94_object = Obj(); var_95_int = 0;
	var_88_object = var_93_object;
	var_92_object = var_94_object;
	var_90_int = var_95_int;
	func_628(var_93_object, var_94_object, var_95_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_770(var_143_bool)
{
	var_145_int = 0; var_146_string = "";
	func_623(var_145_int, "d11q02");
	var_148_bool = var_145_int == (int)-1;
	if(var_148_bool != 0) {
		var_143_bool = 1;
		return 0;
	}
	var_143_bool = 0;
	return 0;
}


func_897()
{
	var_42_object = Obj(); var_43_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_43_object, (int)199, (int)2, (int)15487);
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0;
	var_43_object = var_49_object;
	func_819(var_48_bool, var_49_object, (int)197);
	return 2;
}
EMIT "Stack[-1] = 0";


func_520(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_522(var_20_bool, var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0;
	@@var_21_object:GetPosition(var_31_cvector);
	@@var_21_object:GetEyesHeight(var_30_float);
	var_38_float = GetByIndex(var_31_cvector, 1);
	var_38_float = var_38_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_38_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_32_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_39_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_40_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_41_int = var_33_cvector | var_33_cvector;
	var_42_float = sqrt(var_41_int);
	var_33_cvector = var_33_cvector / var_42_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * (int)70;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_613(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_20_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector);
	var_58_float = GetByIndex(var_35_cvector, 0);
	var_59_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_58_float, var_59_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_20_bool = 1;
	return 16;
}


func_782(var_124_bool)
{
	var_126_int = 0; var_127_string = "";
	func_623(var_126_int, "ood11ULittleGirl2");
	var_129_bool = var_126_int == (int)0;
	if(var_129_bool != 0) {
		var_124_bool = 1;
		return 0;
	}
	var_124_bool = 0;
	return 0;
}


func_654(var_51_bool, var_52_string, var_53_string)
{
	var_54_object = Obj(); var_55_object = Obj();
	FindActor(var_55_object, var_52_string);
	var_56_bool = var_55_object == 0; //@ne
	if(var_56_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	Trigger(var_55_object, var_53_string);
	var_51_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_913(var_61_int)
{
	var_61_int = 3346;
	return 0;
}


func_915(var_62_string)
{
	var_62_string = "ui/NPC_None.png";
	return 0;
}


func_917(var_88_bool)
{
	var_88_bool = 0;
	return 0;
}


func_666()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_794(var_131_bool)
{
	var_133_int = 0; var_134_string = "";
	func_623(var_133_int, "d11q02");
	var_136_bool = var_133_int == (int)1000;
	if(var_136_bool != 0) {
		var_131_bool = 1;
		return 0;
	}
	var_131_bool = 0;
	return 0;
}


func_672(var_85_object)
{
	Trace("powder is given");
	var_88_object = Obj(); var_89_string = ""; var_90_int = 0;
	var_85_object = var_88_object;
	func_641(var_88_object, "powder", (int)1);
	return 0;
}


func_806(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj();
	GetDiaryRoot(var_34_object);
	var_35_bool = var_34_object == 0; //@nz
	if(var_35_bool != 0) {
		Trace("Can't retrieve diary root");
		var_32_object = 0;
		return 2;
	}
	var_34_object = var_32_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_683()
{
	SetVariable("ood11ULittleGirl1", (int)1);
	return 0;
}


func_689()
{
	SetVariable("d11q02", (int)1);
	func_865();
	func_897();
	var_51_bool = 0; var_52_string = ""; var_53_string = "";
	func_654(var_51_bool, "quest_d11_02", "init_graveyard");
	return 0;
}


func_819(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0;
	func_806(Obj());
	var_32_object = var_29_object;
	@@var_29_object:Find(var_25_int, var_30_object);
	var_37_bool = var_30_object == 0; //@nz
	if(var_37_bool != 0) {
		var_39_int = "Can't find diary parent with id: " + var_25_int;
		Trace(var_39_int);
		var_23_bool = 0;
		return 6;
	}
	@@var_30_object:AddChild(var_24_object);
	SetVariable("player_diary", (int)1);
	@@var_24_object:GetCategory(var_31_int);
	SetDiarySection(var_31_int);
	var_23_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_72_object, var_73_object)
{
	var_0_object = var_73_object;
	var_1_object = var_72_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_79_bool = 0; var_80_object = Obj();
		var_80_object = var_1_object;
		func_746(var_80_object);
		if(var_79_bool != 0) {
			var_87_string = "";
			func_192(var_73_object, "Neutral");
			@@@var_0_object:SetMessage((int)14156);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14169, (int)15384, (int)15383);
		} else {
				var_114_string = "";
				func_192(var_73_object, "Neutral");
				@@@var_0_object:SetMessage((int)14161);
				@@@var_0_object:ClearReplies();
				var_116_bool = 0;
				var_116_bool = 1;
				var_117_bool = 0;
				var_117_bool = 0;
				var_118_bool = 0; var_119_object = Obj();
				var_119_object = var_1_object;
				func_758(var_119_object);
				if(var_118_bool != 0) {
					var_124_bool = 0; var_125_object = Obj();
					var_125_object = var_1_object;
					func_782(var_125_object);
					if(var_124_bool != 0) {
						var_117_bool = 1;
					}
				}
				if(var_117_bool != 1) {
					var_130_bool = 0;
					var_130_bool = 0;
					var_131_bool = 0; var_132_object = Obj();
					var_132_object = var_1_object;
					func_794(var_132_object);
					if(var_131_bool != 0) {
						var_137_bool = 0; var_138_object = Obj();
						var_138_object = var_1_object;
						func_782(var_138_object);
						if(var_137_bool != 0) {
							var_130_bool = 1;
						}
					}
					if(var_130_bool != 1) {
						var_116_bool = 0;
					}
				}
				if(var_116_bool != 0) {
					@@@var_0_object:AddReply((int)14162, (int)15377, (int)15376);
				}
				var_142_bool = 0;
				var_142_bool = 0;
				var_143_bool = 0; var_144_object = Obj();
				var_144_object = var_1_object;
				func_770(var_144_object);
				if(var_143_bool != 0) {
					var_149_bool = 0; var_150_object = Obj();
					var_150_object = var_1_object;
					func_734(var_150_object);
					if(var_149_bool != 0) {
						var_142_bool = 1;
					}
				}
				if(var_142_bool != 0) {
					@@@var_0_object:AddReply((int)14165, (int)15380, (int)15379);
				}
				@@@var_0_object:AddReply((int)14168, (int)-1, (int)15382);
				goto Label_162;
		}
	}
Label_162:
	var_106_bool = 0;
	func_917(var_106_bool);
	if(var_106_bool != 0) {

	Label_166:
		lshWaitForAnimEnd();
		var_107_string = var_3_string;
		if(var_107_string != 0) {
		} else {
			var_108_string = "";
			var_108_string = var_2_object;
			func_582(var_108_string);
			goto Label_166;
	}
		PlayAnimation("all", "idle");

	Label_181:
		WaitForAnimEnd();
		var_111_string = var_3_string;
		if(var_111_string != 0) {
			goto Label_191;
		}
		PlayAnimation("all", "idle");
		goto Label_181;

	}
	goto Label_191;
	
Label_191:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


func_192(var_2_object, var_87_string)
{
	var_88_bool = 0;
	func_917(var_88_bool);
	var_89_bool = var_88_bool == 0; //@nz
	if(var_89_bool != 0) {
		return 0;
	}
	var_90_bool = var_87_string == var_2_object;
	if(var_90_bool != 0) {
		return 0;
	}
	var_91_string = "";
	var_87_string = var_91_string;
	func_582(var_91_string);
	var_2_object = var_87_string;
	return 0;
}


func_578()
{
	CameraSwitchToNormal();
	return 0;
}


func_706()
{
	var_67_int = 0; var_68_string = "";
	func_623(var_67_int, "d11q02");
	var_72_bool = var_67_int != (int)1000;
	if(var_72_bool != 0) {
		func_881();
		var_82_bool = 0; var_83_string = ""; var_84_string = "";
		func_654(var_82_bool, "quest_d11_02", "completed");
	}
	return 0;
}


func_582(var_91_string)
{
	var_92_float = 0; var_93_float = 0; var_94_float = 0; var_95_float = 0;
	var_97_int = "playing " + var_91_string;
	Trace(var_97_int);
	lshGetAnimTimes(var_91_string, var_94_float, var_95_float);
	lshPlayAnimation(var_94_float, var_95_float);
	var_99_int = "start: " + var_94_float;
	Trace(var_99_int);
	var_101_int = "end: " + var_95_float;
	Trace(var_101_int);
	return 4;
}


func_848(var_63_int)
{
	var_64_int = 0; var_65_int = 0;
	GetVariable("player", var_65_int);
	var_68_bool = var_65_int == (int)0;
	if(var_68_bool != 0) {
		var_63_int = 200001;
		return 2;
	EMIT "GOTO 0x35f";
	}
	var_70_bool = var_65_int == (int)1;
	if(var_70_bool != 0) {
		var_63_int = 200002;
		return 2;
	}
	var_63_int = 200003;
	return 2;
}


func_723()
{
	SetVariable("ood11ULittleGirl2", (int)1);
	return 0;
}


func_600()
{
	var_10_bool = 0;
	func_917(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_729(var_109_object)
{
	@@var_109_object:SetReturnValue((int)1000);
	return 0;
}


func_472()
{
	
Label_472:
	Hold();
	goto Label_472;
}
EMIT "Return(); Pop(0)";


func_734(var_149_bool)
{
	var_151_int = 0; var_152_string = "";
	func_623(var_151_int, "ood11ULittleGirl1");
	var_154_bool = var_151_int == (int)0;
	if(var_154_bool != 0) {
		var_149_bool = 1;
		return 0;
	}
	var_149_bool = 0;
	return 0;
}


func_607(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_865()
{
	var_17_object = Obj(); var_18_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_18_object, (int)197, (int)2, (int)15485);
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0;
	var_18_object = var_24_object;
	func_819(var_23_bool, var_24_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_613(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_746(var_79_bool)
{
	var_81_int = 0; var_82_string = "";
	func_623(var_81_int, "d11q02");
	var_86_bool = var_81_int == (int)0;
	if(var_86_bool != 0) {
		var_79_bool = 1;
		return 0;
	}
	var_79_bool = 0;
	return 0;
}


func_623(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0;
	GetVariable(var_82_string, var_84_int);
	var_84_int = var_81_int;
	return 2;
}


func_881()
{
	var_73_object = Obj(); var_74_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_74_object, (int)198, (int)2, (int)15486);
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0;
	var_74_object = var_80_object;
	func_819(var_79_bool, var_80_object, (int)197);
	return 2;
}
EMIT "Stack[-1] = 0";


func_628(var_93_object, var_94_object, var_95_int)
{
	var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_bool = 0;
	@@var_94_object:GetItemID(var_99_int);
	GetInvItemProperty(var_100_int, var_99_int, "Category");
	@@var_93_object:AddItem(var_101_bool, var_94_object, var_100_int, var_95_int);
	var_103_bool = var_101_bool == 0; //@nz
	if(var_103_bool != 0) {
		@@var_93_object:DropItems(var_94_object, var_95_int);
	}
	return 6;
}


func_758(var_118_bool)
{
	var_120_int = 0; var_121_string = "";
	func_623(var_120_int, "d11q02");
	var_123_bool = var_120_int == (int)2;
	if(var_123_bool != 0) {
		var_118_bool = 1;
		return 0;
	}
	var_118_bool = 0;
	return 0;
}


