// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Sorrow|W:Smile|W:Doubt|W:Agression|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:map_chertez_state|W:map_chertez_force|W:pt_map_aglaja|A:ShowMap|W:ood11Burah1|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Burah.png|W:ui/NPC_Burah_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x239
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xba vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x23d vars=string
// @EVENT_6: op=0x251 vars=
// @EVENT_5: op=0x25e vars=
// @EVENT_7: op=0x2a7 vars=int
// @EVENT_45: op=0x2e9 vars=bool
// @EVENT_0: op=0x2f5 vars=object
// @PE: 0x51,0xa4,0xba,0x231,0x239,0x25e,0x2a7,0x2cd,0x2e9,0x4ca,0x4db,0x4eb,0x4f1

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1165();
		var_12_bool = var_8_bool == (int)15565;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1226();
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_object;
			func_1243(var_26_object);
		}
		var_58_bool = var_8_bool == (int)41689;
		if(var_58_bool != 0) {
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_1226();
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_1243(var_62_object);
		}
		var_64_bool = var_7_cvector == (int)15548;
		if(var_64_bool != 0) {
			var_65_bool = 0; var_66_object = Obj();
			var_66_object = var_1_object;
			func_1265(var_66_object);
			if(var_65_bool != 0) {
				var_71_object = Obj(); var_72_object = Obj();
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_1259();
				var_75_string = "";
				func_164(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)514326);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514327, (int)15550, (int)15549);
				return 0;
			}
			var_96_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514533, (int)-1, (int)15764);
			@@@var_0_object:AddReply((int)539713, (int)-1, (int)41672);
			return 0;
		}
		var_105_bool = var_7_cvector == (int)15550;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_164(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)514328);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514329, (int)15552, (int)15551);
			@@@var_0_object:AddReply((int)539714, (int)41674, (int)41673);
			return 0;
		}
		var_115_bool = var_7_cvector == (int)41674;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539715);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539716, (int)15552, (int)41675);
			return 0;
		}
		var_122_bool = var_7_cvector == (int)15552;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_164(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)514330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514331, (int)15554, (int)15553);
			@@@var_0_object:AddReply((int)514344, (int)15567, (int)15566);
			return 0;
		}
		var_132_bool = var_7_cvector == (int)15567;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_164(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)514345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514346, (int)15569, (int)15568);
			return 0;
		}
		var_139_bool = var_7_cvector == (int)15569;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_164(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)514347);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514348, (int)15554, (int)15570);
			return 0;
		}
		var_146_bool = var_7_cvector == (int)15554;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_164(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)514332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514333, (int)15556, (int)15555);
			@@@var_0_object:AddReply((int)539717, (int)41678, (int)41677);
			return 0;
		}
		var_156_bool = var_7_cvector == (int)41678;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539719, (int)41680, (int)41679);
			return 0;
		}
		var_163_bool = var_7_cvector == (int)41680;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539721, (int)15560, (int)41681);
			return 0;
		}
		var_170_bool = var_7_cvector == (int)15556;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_164(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)514334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514335, (int)15558, (int)15557);
			return 0;
		}
		var_177_bool = var_7_cvector == (int)15558;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514336);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514337, (int)15560, (int)15559);
			return 0;
		}
		var_184_bool = var_7_cvector == (int)15560;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_164(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)514338);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514339, (int)15562, (int)15561);
			@@@var_0_object:AddReply((int)539722, (int)41684, (int)41683);
			return 0;
		}
		var_194_bool = var_7_cvector == (int)41684;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539724, (int)15562, (int)41685);
			return 0;
		}
		var_201_bool = var_7_cvector == (int)15562;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_164(var_8_bool, "Agression");
			@@@var_0_object:SetMessage((int)514340);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514341, (int)15564, (int)15563);
			@@@var_0_object:AddReply((int)539725, (int)15564, (int)41687);
			return 0;
		}
		var_211_bool = var_7_cvector == (int)15564;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_164(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514342);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514343, (int)-1, (int)15565);
			@@@var_0_object:AddReply((int)539726, (int)-1, (int)41689);
			return 0;
		}
		var_3_string = true;
		var_220_bool = 0;
		func_1352(var_220_bool);
		if(var_220_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbb";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_1_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = var_9_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_object = Obj();
			func_1172(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_592;
		var_1_object = false;
	}
Label_592:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1172(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_717();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_732();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_675();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_889(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_644(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_624(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1172(Obj());
				var_53_object = var_52_object;
				func_1039(var_51_bool, var_52_object);
			}
		} else {
			func_639(var_7_int);
			func_666();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_666();
	} else {
		var_14_string = "";
		func_1119("Neutral");
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		EventDisable(0);
		func_857();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_880(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_561(var_25_object);
		var_268_string = "";
		func_1119("Neutral");
		func_675();
		func_666();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_610(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_894(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1346(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1344(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1348(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1350(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1327(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1172(Obj());
	var_100_object = var_99_object;
	func_981(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_259_bool = var_36_bool == 0; //@nz
	if(var_259_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_963();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_644(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	FindActor(var_18_object, "player");
	var_21_bool = var_18_object == 0; //@nz
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_float = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_862(var_22_float, var_23_object);
	var_31_bool = var_22_float > (float)90000.0;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_18_object);
	var_19_bool = var_15_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1165()
{
	var_10_bool = 0;
	func_1352(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1294(var_27_object, var_28_string, var_29_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_object = Obj(); var_44_bool = 0;
	GetMainOutdoorScene(var_43_object);
	var_45_bool = var_43_object == 0; //@ne
	if(var_45_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_43_object:GetLocator(var_28_string, var_44_bool, var_41_cvector, var_42_cvector);
	var_47_bool = var_44_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_49_int = "Warning: outdoor scene locator " + var_28_string;
		var_51_int = var_49_int + " doesnt exist";
		Trace(var_51_int);
	}
	@@var_43_object:GetMap(var_27_object);
	var_52_bool = var_27_object == 0; //@ne
	if(var_52_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_54_float = GetByIndex(var_41_cvector, 0);
	var_55_float = GetByIndex(var_41_cvector, 2);
	@@var_27_object:SetMapParams(var_54_float, var_55_float, var_29_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1039(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1042:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1042;
		}
	}
	var_126_bool = var_117_int == 0; //@nz
	if(var_126_bool != 0) {
		var_109_bool = 0;
		return 10;
	}
	var_119_int = 0;
	var_128_bool = var_117_int > (int)1;
	if(var_128_bool != 0) {
		irand(var_119_int, var_117_int);
	}
	var_130_int = var_119_int + (int)1;
	var_131_int = var_116_string + var_130_int;
	@@var_110_object:GetProperty(var_131_int, var_120_string);
	var_132_bool = 0; var_133_string = "";
	var_120_string = var_133_string;
	func_1150(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_786()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_889(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1209((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_800:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_889(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_42_bool = var_17_int == 0; //@nz
		if(var_42_bool != 0) {
			Sleep((int)3, var_19_bool);
			var_44_bool = var_19_bool == 0; //@nz
			if(var_44_bool != 0) {
			} else {
		} else {
				irand(var_20_int, var_17_int);
				irand(var_21_int, (int)5);
				var_50_bool = var_21_int != (int)0;
				if(var_50_bool != 0) {
					var_20_int = 0;
				}
				var_52_string = ""; var_53_int = 0;
				var_20_int = var_53_int;
				func_1202(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_841;
				goto Label_852;
		}
		Label_841:
			var_45_bool = 0;
			func_855(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_852;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_800;

		}
	}
Label_852:
	ResetAAS();
	return 12;
	
}


func_894(var_37_bool, var_38_object, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0;
	@@var_38_object:GetPosition(var_50_cvector);
	@@var_38_object:GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_49_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	GetPosition(var_51_cvector);
	GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_49_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_62_float = sqrt(var_61_int);
	var_52_cvector = var_52_cvector / var_62_float;
	var_53_cvector = -var_52_cvector;
	var_63_float = var_52_cvector * var_39_float;
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_53_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1178(var_64_cvector, var_65_cvector);
	var_73_float = var_64_cvector * (int)25;
	var_74_int = var_63_float + var_73_float;
	var_54_cvector = var_74_int - CVector(0.0, 10.0, 0.0);
	var_55_cvector = var_51_cvector + var_54_cvector;
	IsOverrideActive(var_56_bool);
	var_76_bool = var_56_bool;
	if(var_76_bool != 0) {
		var_37_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_55_cvector, var_53_cvector, (bool)1);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_78_float, var_79_float);
	var_80_bool = 0;
	func_1352(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_957;
		LookAsyncCamera("head");
	}
Label_957:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_1172(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1178(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0;
	var_69_int = var_65_cvector | var_65_cvector;
	var_68_float = sqrt(var_69_int);
	var_70_float = 9.999999974752427e-07;
	var_71_bool = var_68_float < var_70_float;
	if(var_71_bool != 0) {
		var_64_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_64_cvector = var_65_cvector / var_68_float;
	return 2;
}


func_666()
{
	var_270_float = 0; var_271_float = 0;
	rand(var_271_float, (int)8, (int)16);
	SetTimer((int)10, var_271_float);
	return 2;
}


func_675()
{
	KillTimer((int)10);
	return 0;
}


func_164(var_2_object, var_212_string)
{
	var_213_bool = 0;
	func_1352(var_213_bool);
	var_214_bool = var_213_bool == 0; //@nz
	if(var_214_bool != 0) {
		return 0;
	}
	var_215_bool = var_212_string == var_2_object;
	if(var_215_bool != 0) {
		return 0;
	}
	var_216_string = ""; var_217_bool = 0;
	var_212_string = var_216_string;
	var_219_bool = var_212_string == "";
	if(var_219_bool != 0) {
		var_217_bool = 0;
	} else {
		var_217_bool = 1;
	}
	func_1135(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	return 0;
	
}


func_1188(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0;
	GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
	return 2;
}


func_1193(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_1327(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x53e";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_561(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1202(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1076(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1193(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1085:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1085;
		}
	}
	var_166_bool = var_148_int == 0; //@nz
	if(var_166_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_168_bool = var_148_int > (int)1;
	if(var_168_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_170_int = var_150_int + (int)1;
	var_171_int = var_147_string + var_170_int;
	@@var_141_object:GetProperty(var_171_int, var_151_string);
	var_172_bool = 0; var_173_string = "";
	var_151_string = var_173_string;
	func_1150(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1209(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1211:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1202(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1211;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1344(var_86_int)
{
	var_86_int = 515592;
	return 0;
}


func_1346(var_85_int)
{
	var_85_int = 511961;
	return 0;
}


func_963()
{
	var_261_bool = 0; var_262_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_264_bool = 0;
	func_1352(var_264_bool);
	if(var_264_bool != 0) {
	} else {
		HasAnimationTrack(var_262_bool, "head");
		var_266_bool = var_262_bool;
		if(var_266_bool == 0) goto Label_980;
		UnlookAsync("head");
	}
Label_980:
	return 2;
	
}


func_1348(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png";
	return 0;
}


func_1350(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png";
	return 0;
}


func_1352(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1226()
{
	var_15_int = 0; var_16_string = "";
	func_1188(var_15_int, "map_chertez_state");
	var_20_bool = var_15_int <= (int)5;
	if(var_20_bool != 0) {
		SetVariable("map_chertez_state", (int)5);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_717()
{
	func_857();
	func_675();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0; var_201_object = Obj();
		var_201_object = var_1_object;
		func_1265(var_201_object);
		if(var_200_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1259();
			var_212_string = "";
			func_164(var_194_object, "Neutral");
			@@@var_0_object:SetMessage((int)514326);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514327, (int)15550, (int)15549);
		} else {
				var_251_string = "";
				func_164(var_194_object, "Neutral");
				@@@var_0_object:SetMessage((int)514532);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514533, (int)-1, (int)15764);
				@@@var_0_object:AddReply((int)539713, (int)-1, (int)41672);
				goto Label_134;
		}
	}
Label_134:
	var_233_bool = 0;
	func_1352(var_233_bool);
	if(var_233_bool != 0) {

	Label_138:
		lshWaitForAnimEnd();
		var_234_string = var_3_string;
		if(var_234_string != 0) {
		} else {
			var_235_string = "";
			var_235_string = var_2_object;
			func_1119(var_235_string);
			goto Label_138;
	}
		PlayAnimation("all", "idle");

	Label_153:
		WaitForAnimEnd();
		var_248_string = var_3_string;
		if(var_248_string != 0) {
			goto Label_163;
		}
		PlayAnimation("all", "idle");
		goto Label_153;

	}
	goto Label_163;
	
Label_163:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_981(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1039(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1076(var_140_bool, var_141_object);
			var_175_bool = var_140_bool == 0; //@nz
			if(var_175_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		irand(var_106_int, (int)2);
		var_177_int = var_106_int;
		if(var_177_int != 0) {
			var_180_int = var_105_int + (int)1;
			var_182_int = var_180_int % (int)3;
			SetVariable("voice_common", var_182_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_185_bool = 0; var_186_object = Obj();
		var_99_object = var_186_object;
		func_1076(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1039(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1037;
	
Label_1037:
	var_98_bool = 1;
	return 4;
	
}


func_855(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_857()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1243(var_26_object)
{
	var_27_object = Obj(); var_28_string = ""; var_29_float = 0;
	func_1277(Obj());
	var_30_object = var_27_object;
	func_1294(var_27_object, "pt_map_aglaja", (float)-1);
	var_56_object = Obj();
	func_1277(var_56_object);
	@@var_26_object:ShowMap(var_56_object);
	return 0;
}


func_732()
{
	StopGroup0();
	func_675();
	var_8_string = "";
	func_1119("Neutral");
	func_666();
	return 0;
}


func_862(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1119(var_235_string)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0;
	lshHasAnimation(var_239_bool, var_235_string);
	var_242_bool = var_239_bool;
	if(var_242_bool != 0) {
		lshGetAnimTimes(var_235_string, var_240_float, var_241_float);
		lshPlayAnimation(var_240_float, var_241_float, (bool)0);
	} else {
		var_245_int = "Can't find lsh animation : " + var_235_string;
		Trace(var_245_int);
	}
	return 6;
	
}


func_610(var_0_object)
{
	var_7_bool = 0;
	func_889(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_619:
	func_786();
	goto Label_619;
}
EMIT "Return(); Pop(0)";


func_870(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0;
	GetPosition(var_20_cvector);
	var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
	return 6;
}


func_1259()
{
	SetVariable("ood11Burah1", (int)1);
	return 0;
}


func_1135(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0;
	lshHasAnimation(var_223_bool, var_216_string);
	var_226_bool = var_223_bool;
	if(var_226_bool != 0) {
		lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		var_228_int = "Can't find lsh animation : " + var_216_string;
		Trace(var_228_int);
	}
	return 6;
	
}


func_880(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_870(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_1265(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_1188(var_202_int, "ood11Burah1");
	var_207_bool = var_202_int == (int)0;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_624(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, "player");
	var_36_bool = var_34_object == 0; //@nz
	if(var_36_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj();
	var_34_object = var_38_object;
	func_880(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_889(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1277(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj();
	GetMainOutdoorScene(var_33_object);
	var_35_bool = var_33_object == 0; //@ne
	if(var_35_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_34_object = 0;
		var_34_object = var_30_object;
		return 4;
	}
	@@var_33_object:GetMap(var_34_object);
	var_34_object = var_30_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1150(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1352(var_136_bool);
	if(var_136_bool != 0) {
		lshHasSpeech(var_135_bool, var_133_string);
		var_137_bool = var_135_bool;
		if(var_137_bool != 0) {
			lshPlaySpeech(var_133_string);
			var_132_bool = 1;
			return 2;
		}
	}
	var_132_bool = 0;
	return 2;
}


func_639(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


