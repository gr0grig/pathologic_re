// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:Sly|W:all|W:idle|W:Saveyouall|W:Smile|W:Grin|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ook12Klara2Sobor1|W:ook12Klara2Sobor2|W:ook12Klara2Sobor3|W:game_final|W:branch|W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x2d0
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe2 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x2d4 vars=object
// @EVENT_26: op=0x2dc vars=string
// @EVENT_6: op=0x2f8 vars=
// @PE: 0x51,0xcc,0xe2,0x2d4,0x43e,0x444,0x44a,0x450,0x45c,0x468,0x474,0x480

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_1049();
		var_11_bool = var_7_bool == (int)41158;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1086();
		}
		var_17_bool = var_7_bool == (int)41160;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1092();
		}
		var_23_bool = var_7_bool == (int)43422;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_1098();
		}
		var_29_bool = var_6_int == (int)41157;
		if(var_29_bool != 0) {
			var_30_bool = 0; var_31_object = Obj();
			var_31_object = var_1_object;
			func_1104(var_31_object);
			var_38_bool = var_30_bool == 0; //@nz
			if(var_38_bool != 0) {
				var_39_string = "";
				func_204(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)539214);
				@@@var_0_object:ClearReplies();
				var_57_bool = 0; var_58_object = Obj();
				var_58_object = var_1_object;
				func_1128(var_58_object);
				if(var_57_bool != 0) {
					@@@var_0_object:AddReply((int)539215, (int)43417, (int)41158);
				}
				@@@var_0_object:AddReply((int)541312, (int)-1, (int)43448);
				return 0;
			}
			var_69_string = "";
			func_204(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)539216);
			@@@var_0_object:ClearReplies();
			var_71_bool = 0;
			var_71_bool = 0;
			var_72_bool = 0; var_73_object = Obj();
			var_73_object = var_1_object;
			func_1116(var_73_object);
			var_78_bool = var_72_bool == 0; //@nz
			if(var_78_bool != 0) {
				var_79_bool = 0; var_80_object = Obj();
				var_80_object = var_1_object;
				func_1140(var_80_object);
				if(var_79_bool != 0) {
					var_71_bool = 1;
				}
			}
			if(var_71_bool != 0) {
				@@@var_0_object:AddReply((int)539217, (int)43420, (int)41160);
			}
			var_88_bool = 0;
			var_88_bool = 0;
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_1116(var_90_object);
			if(var_89_bool != 0) {
				var_91_bool = 0; var_92_object = Obj();
				var_92_object = var_1_object;
				func_1152(var_92_object);
				if(var_91_bool != 0) {
					var_88_bool = 1;
				}
			}
			if(var_88_bool != 0) {
				@@@var_0_object:AddReply((int)541289, (int)43423, (int)43422);
			}
			@@@var_0_object:AddReply((int)541288, (int)-1, (int)43421);
			return 0;
		}
		var_104_bool = var_6_int == (int)43423;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_204(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541290);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541303, (int)43441, (int)43438);
			@@@var_0_object:AddReply((int)541304, (int)43441, (int)43439);
			return 0;
		}
		var_114_bool = var_6_int == (int)43441;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_204(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541306);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541307, (int)-1, (int)43443);
			@@@var_0_object:AddReply((int)541308, (int)43445, (int)43444);
			return 0;
		}
		var_124_bool = var_6_int == (int)43445;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_204(var_7_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)541309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541310, (int)-1, (int)43446);
			@@@var_0_object:AddReply((int)541311, (int)-1, (int)43447);
			return 0;
		}
		var_134_bool = var_6_int == (int)43420;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_204(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)541287);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541296, (int)43430, (int)43429);
			@@@var_0_object:AddReply((int)541291, (int)43425, (int)43424);
			return 0;
		}
		var_144_bool = var_6_int == (int)43425;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_204(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541292);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541293, (int)43427, (int)43426);
			@@@var_0_object:AddReply((int)541298, (int)-1, (int)43431);
			return 0;
		}
		var_154_bool = var_6_int == (int)43427;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_204(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541295, (int)-1, (int)43428);
			return 0;
		}
		var_161_bool = var_6_int == (int)43430;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_204(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)541297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541299, (int)43433, (int)43432);
			return 0;
		}
		var_168_bool = var_6_int == (int)43433;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_204(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)541300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541301, (int)43427, (int)43434);
			@@@var_0_object:AddReply((int)541302, (int)43427, (int)43436);
			return 0;
		}
		var_178_bool = var_6_int == (int)43417;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_204(var_7_bool, "Grin");
			@@@var_0_object:SetMessage((int)541284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541320, (int)43457, (int)43456);
			@@@var_0_object:AddReply((int)541285, (int)43419, (int)43418);
			return 0;
		}
		var_188_bool = var_6_int == (int)43457;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_204(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)541321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541322, (int)43459, (int)43458);
			@@@var_0_object:AddReply((int)541325, (int)43450, (int)43462);
			return 0;
		}
		var_198_bool = var_6_int == (int)43459;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_204(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)541323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541324, (int)43419, (int)43460);
			@@@var_0_object:AddReply((int)541326, (int)43419, (int)43464);
			return 0;
		}
		var_208_bool = var_6_int == (int)43419;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_204(var_7_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)541286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541313, (int)43450, (int)43449);
			@@@var_0_object:AddReply((int)541327, (int)43452, (int)43466);
			return 0;
		}
		var_218_bool = var_6_int == (int)43450;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_204(var_7_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)541314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541315, (int)43452, (int)43451);
			@@@var_0_object:AddReply((int)541328, (int)43474, (int)43468);
			@@@var_0_object:AddReply((int)541330, (int)43474, (int)43470);
			return 0;
		}
		var_231_bool = var_6_int == (int)43452;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_204(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)541316);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541317, (int)43474, (int)43453);
			@@@var_0_object:AddReply((int)541334, (int)43474, (int)43477);
			return 0;
		}
		var_241_bool = var_6_int == (int)43474;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_204(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541331);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541332, (int)-1, (int)43475);
			@@@var_0_object:AddReply((int)541335, (int)43482, (int)43481);
			return 0;
		}
		var_251_bool = var_6_int == (int)43482;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_204(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)541336);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541333, (int)-1, (int)43476);
			@@@var_0_object:AddReply((int)541337, (int)-1, (int)43483);
			return 0;
		}
		var_3_string = true;
		var_260_bool = 0;
		func_1189(var_260_bool);
		if(var_260_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe3";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_776(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_1056(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_759;
		var_0_object = false;
	}
Label_759:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_776(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_1056(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_720:
	Hold();
	goto Label_720;
}
EMIT "Return(); Pop(0)";


func_1152(var_260_bool)
{
	var_262_int = 0; var_263_string = "";
	func_1072(var_262_int, "ook12Klara2Sobor3");
	var_265_bool = var_262_int == (int)0;
	if(var_265_bool != 0) {
		var_260_bool = 1;
		return 0;
	}
	var_260_bool = 0;
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_778(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1183(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1181(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1185(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1187(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1164(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_1056(Obj());
	var_81_object = var_80_object;
	func_865(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_272_bool = var_17_bool == 0; //@nz
	if(var_272_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_847();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_960(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_1077(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_969:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_969;
		}
	}
	var_147_bool = var_129_int == 0; //@nz
	if(var_147_bool != 0) {
		var_121_bool = 0;
		return 10;
	}
	var_131_int = 0;
	var_149_bool = var_129_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_131_int, var_129_int);
	}
	var_151_int = var_131_int + (int)1;
	var_152_int = var_128_string + var_151_int;
	@@var_122_object:GetProperty(var_152_int, var_132_string);
	var_153_bool = 0; var_154_string = "";
	var_132_string = var_154_string;
	func_1034(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_1092()
{
	SetVariable("ook12Klara2Sobor2", (int)1);
	return 0;
}


func_776(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_778(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1062(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_1189(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_841;
		LookAsyncCamera("head");
	}
Label_841:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_1034(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1189(var_117_bool);
	if(var_117_bool != 0) {
		lshHasSpeech(var_116_bool, var_114_string);
		var_118_bool = var_116_bool;
		if(var_118_bool != 0) {
			lshPlaySpeech(var_114_string);
			var_113_bool = 1;
			return 2;
		}
	}
	var_113_bool = 0;
	return 2;
}


func_1164(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x49b";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_1098()
{
	SetVariable("ook12Klara2Sobor3", (int)1);
	return 0;
}


func_204(var_2_object, var_190_string)
{
	var_191_bool = 0;
	func_1189(var_191_bool);
	var_192_bool = var_191_bool == 0; //@nz
	if(var_192_bool != 0) {
		return 0;
	}
	var_193_bool = var_190_string == var_2_object;
	if(var_193_bool != 0) {
		return 0;
	}
	var_194_string = ""; var_195_bool = 0;
	var_190_string = var_194_string;
	var_197_bool = var_190_string == "";
	if(var_197_bool != 0) {
		var_195_bool = 0;
	} else {
		var_195_bool = 1;
	}
	func_1019(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	return 0;
	
}


func_847()
{
	var_274_bool = 0; var_275_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_277_bool = 0;
	func_1189(var_277_bool);
	if(var_277_bool != 0) {
	} else {
		HasAnimationTrack(var_275_bool, "head");
		var_279_bool = var_275_bool;
		if(var_279_bool == 0) goto Label_864;
		UnlookAsync("head");
	}
Label_864:
	return 2;
	
}


func_1104(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_1072(var_183_int, "game_final");
	var_188_bool = var_183_int != (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_1104(var_182_object);
		var_189_bool = var_181_bool == 0; //@nz
		if(var_189_bool != 0) {
			var_190_string = "";
			func_204(var_175_object, "Neutral");
			@@@var_0_object:SetMessage((int)539214);
			@@@var_0_object:ClearReplies();
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_1128(var_209_object);
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)539215, (int)43417, (int)41158);
			}
			@@@var_0_object:AddReply((int)541312, (int)-1, (int)43448);
		} else {
				var_238_string = "";
				func_204(var_175_object, "Sly");
				@@@var_0_object:SetMessage((int)539216);
				@@@var_0_object:ClearReplies();
				var_240_bool = 0;
				var_240_bool = 0;
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_1116(var_242_object);
				var_247_bool = var_241_bool == 0; //@nz
				if(var_247_bool != 0) {
					var_248_bool = 0; var_249_object = Obj();
					var_249_object = var_1_object;
					func_1140(var_249_object);
					if(var_248_bool != 0) {
						var_240_bool = 1;
					}
				}
				if(var_240_bool != 0) {
					@@@var_0_object:AddReply((int)539217, (int)43420, (int)41160);
				}
				var_257_bool = 0;
				var_257_bool = 0;
				var_258_bool = 0; var_259_object = Obj();
				var_259_object = var_1_object;
				func_1116(var_259_object);
				if(var_258_bool != 0) {
					var_260_bool = 0; var_261_object = Obj();
					var_261_object = var_1_object;
					func_1152(var_261_object);
					if(var_260_bool != 0) {
						var_257_bool = 1;
					}
				}
				if(var_257_bool != 0) {
					@@@var_0_object:AddReply((int)541289, (int)43423, (int)43422);
				}
				@@@var_0_object:AddReply((int)541288, (int)-1, (int)43421);
				goto Label_174;
		}
	}
Label_174:
	var_220_bool = 0;
	func_1189(var_220_bool);
	if(var_220_bool != 0) {

	Label_178:
		lshWaitForAnimEnd();
		var_221_string = var_3_string;
		if(var_221_string != 0) {
		} else {
			var_222_string = "";
			var_222_string = var_2_object;
			func_1003(var_222_string);
			goto Label_178;
	}
		PlayAnimation("all", "idle");

	Label_193:
		WaitForAnimEnd();
		var_235_string = var_3_string;
		if(var_235_string != 0) {
			goto Label_203;
		}
		PlayAnimation("all", "idle");
		goto Label_193;

	}
	goto Label_203;
	
Label_203:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1049()
{
	var_9_bool = 0;
	func_1189(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_923(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_926:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_926;
		}
	}
	var_107_bool = var_98_int == 0; //@nz
	if(var_107_bool != 0) {
		var_90_bool = 0;
		return 10;
	}
	var_100_int = 0;
	var_109_bool = var_98_int > (int)1;
	if(var_109_bool != 0) {
		irand(var_100_int, var_98_int);
	}
	var_111_int = var_100_int + (int)1;
	var_112_int = var_97_string + var_111_int;
	@@var_91_object:GetProperty(var_112_int, var_101_string);
	var_113_bool = 0; var_114_string = "";
	var_101_string = var_114_string;
	func_1034(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_1116(var_241_bool)
{
	var_243_int = 0; var_244_string = "";
	func_1072(var_243_int, "game_final");
	var_246_bool = var_243_int == (int)3;
	if(var_246_bool != 0) {
		var_241_bool = 1;
		return 0;
	}
	var_241_bool = 0;
	return 0;
}


func_1181(var_67_int)
{
	var_67_int = 515540;
	return 0;
}


func_1183(var_66_int)
{
	var_66_int = 502865;
	return 0;
}


func_1056(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1185(var_68_string)
{
	var_68_string = "ui/NPC_Klara.png";
	return 0;
}


func_865(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_923(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_960(var_121_bool, var_122_object);
			var_156_bool = var_121_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		irand(var_87_int, (int)2);
		var_158_int = var_87_int;
		if(var_158_int != 0) {
			var_161_int = var_86_int + (int)1;
			var_163_int = var_161_int % (int)3;
			SetVariable("voice_common", var_163_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_166_bool = 0; var_167_object = Obj();
		var_80_object = var_167_object;
		func_960(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_923(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_921;
	
Label_921:
	var_79_bool = 1;
	return 4;
	
}


func_1187(var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1189(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_1062(var_45_cvector, var_46_cvector)
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


func_1128(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_1072(var_210_int, "ook12Klara2Sobor1");
	var_213_bool = var_210_int == (int)0;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_1003(var_222_string)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0;
	lshHasAnimation(var_226_bool, var_222_string);
	var_229_bool = var_226_bool;
	if(var_229_bool != 0) {
		lshGetAnimTimes(var_222_string, var_227_float, var_228_float);
		lshPlayAnimation(var_227_float, var_228_float, (bool)0);
	} else {
		var_232_int = "Can't find lsh animation : " + var_222_string;
		Trace(var_232_int);
	}
	return 6;
	
}


func_1072(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_1140(var_248_bool)
{
	var_250_int = 0; var_251_string = "";
	func_1072(var_250_int, "ook12Klara2Sobor2");
	var_253_bool = var_250_int == (int)0;
	if(var_253_bool != 0) {
		var_248_bool = 1;
		return 0;
	}
	var_248_bool = 0;
	return 0;
}


func_1077(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_1019(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0;
	lshHasAnimation(var_201_bool, var_194_string);
	var_204_bool = var_201_bool;
	if(var_204_bool != 0) {
		lshGetAnimTimes(var_194_string, var_202_float, var_203_float);
		lshPlayAnimation(var_202_float, var_203_float, var_195_bool);
	} else {
		var_206_int = "Can't find lsh animation : " + var_194_string;
		Trace(var_206_int);
	}
	return 6;
	
}


func_1086()
{
	SetVariable("ook12Klara2Sobor1", (int)1);
	return 0;
}


