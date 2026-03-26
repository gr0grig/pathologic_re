// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,StopGroup0/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Menace|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Sorrow|W:Untrust|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:oob9Danko1|W:oob9Danko2|W:b9q01|W:b9q01DankoAmmo|W:oob9Danko3|W:oob9Danko4|W:map_chertez_state|W:map_chertez_force|W:pt_map_aglaja|A:ShowMap|W:b9q01DankoFree|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Bakalavr.png|W:ui/NPC_Bakalavr_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x2ca
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf1 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_6: op=0x2db vars=
// @EVENT_5: op=0x2de vars=
// @EVENT_0: op=0x2e1 vars=object
// @PE: 0x51,0xdb,0xf1,0x2c2,0x43d,0x443,0x449,0x452,0x458,0x45e,0x464,0x475,0x485,0x491,0x49d,0x4a9,0x4b5

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_1048();
		var_10_bool = var_6_int == (int)22745;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_1097();
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_object;
			func_1124();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_1141(var_51_object);
		}
		var_83_bool = var_6_int == (int)23541;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_1097();
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_1124();
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_1141(var_89_object);
		}
		var_91_bool = var_6_int == (int)22739;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_1091();
		}
		var_97_bool = var_6_int == (int)22741;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_1106();
		}
		var_103_bool = var_6_int == (int)23549;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_1106();
		}
		var_107_bool = var_6_int == (int)23546;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_1118();
		}
		var_113_bool = var_6_int == (int)23550;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_1112();
		}
		var_119_bool = var_5_int == (int)22742;
		if(var_119_bool != 0) {
			var_120_bool = 0;
			var_120_bool = 0;
			var_121_bool = 0; var_122_object = Obj();
			var_122_object = var_1_object;
			func_1157(var_122_object);
			if(var_121_bool != 0) {
				var_127_bool = 0; var_128_object = Obj();
				var_128_object = var_1_object;
				func_1169(var_128_object);
				if(var_127_bool != 0) {
					var_120_bool = 1;
				}
			}
			if(var_120_bool != 0) {
				var_133_object = Obj(); var_134_object = Obj();
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_1085();
				var_137_string = "";
				func_219(var_6_int, "Menace");
				@@@var_0_object:SetMessage((int)521581);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531554, (int)32918, (int)32917);
				return 0;
			}
			var_158_bool = 0; var_159_object = Obj();
			var_159_object = var_1_object;
			func_1157(var_159_object);
			var_160_bool = var_158_bool == 0; //@nz
			if(var_160_bool != 0) {
				var_161_string = "";
				func_219(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)521577);
				@@@var_0_object:ClearReplies();
				var_163_bool = 0; var_164_object = Obj();
				var_164_object = var_1_object;
				func_1181(var_164_object);
				if(var_163_bool != 0) {
					@@@var_0_object:AddReply((int)521578, (int)22740, (int)22739);
				}
				var_172_bool = 0; var_173_object = Obj();
				var_173_object = var_1_object;
				func_1205(var_173_object);
				if(var_172_bool != 0) {
					@@@var_0_object:AddReply((int)522381, (int)23547, (int)23546);
				}
				@@@var_0_object:AddReply((int)521586, (int)-1, (int)22747);
				return 0;
			}
			var_184_string = "";
			func_219(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)521601);
			@@@var_0_object:ClearReplies();
			var_186_bool = 0; var_187_object = Obj();
			var_187_object = var_1_object;
			func_1193(var_187_object);
			if(var_186_bool != 0) {
				@@@var_0_object:AddReply((int)522385, (int)23551, (int)23550);
			}
			@@@var_0_object:AddReply((int)521602, (int)-1, (int)22767);
			return 0;
		}
		var_199_bool = var_5_int == (int)23551;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_219(var_6_int, "Sorrow");
			@@@var_0_object:SetMessage((int)522386);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522387, (int)23553, (int)23552);
			return 0;
		}
		var_206_bool = var_5_int == (int)23553;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_219(var_6_int, "Sorrow");
			@@@var_0_object:SetMessage((int)522388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522389, (int)-1, (int)23554);
			return 0;
		}
		var_213_bool = var_5_int == (int)23547;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_219(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)522382);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522383, (int)-1, (int)23548);
			return 0;
		}
		var_220_bool = var_5_int == (int)22740;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_219(var_6_int, "Sorrow");
			@@@var_0_object:SetMessage((int)521579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522377, (int)23543, (int)23542);
			return 0;
		}
		var_227_bool = var_5_int == (int)23543;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_219(var_6_int, "Sorrow");
			@@@var_0_object:SetMessage((int)522378);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521580, (int)-1, (int)22741);
			@@@var_0_object:AddReply((int)522379, (int)23545, (int)23544);
			return 0;
		}
		var_237_bool = var_5_int == (int)23545;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_219(var_6_int, "Sorrow");
			@@@var_0_object:SetMessage((int)522380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522384, (int)-1, (int)23549);
			return 0;
		}
		var_244_bool = var_5_int == (int)32918;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_219(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)531555);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521582, (int)23526, (int)22743);
			return 0;
		}
		var_251_bool = var_5_int == (int)23526;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_219(var_6_int, "Untrust");
			@@@var_0_object:SetMessage((int)522363);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522364, (int)23528, (int)23527);
			@@@var_0_object:AddReply((int)522369, (int)23533, (int)23532);
			return 0;
		}
		var_261_bool = var_5_int == (int)23533;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_219(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)522370);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522371, (int)22744, (int)23534);
			return 0;
		}
		var_268_bool = var_5_int == (int)23528;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_219(var_6_int, "Untrust");
			@@@var_0_object:SetMessage((int)522365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522366, (int)23530, (int)23529);
			return 0;
		}
		var_275_bool = var_5_int == (int)23530;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_219(var_6_int, "Untrust");
			@@@var_0_object:SetMessage((int)522367);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522368, (int)22744, (int)23531);
			return 0;
		}
		var_282_bool = var_5_int == (int)22744;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_219(var_6_int, "Untrust");
			@@@var_0_object:SetMessage((int)521583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522372, (int)23538, (int)23537);
			return 0;
		}
		var_289_bool = var_5_int == (int)23538;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_219(var_6_int, "Untrust");
			@@@var_0_object:SetMessage((int)522373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522374, (int)23540, (int)23539);
			return 0;
		}
		var_296_bool = var_5_int == (int)23540;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_219(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)522375);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521584, (int)-1, (int)22745);
			@@@var_0_object:AddReply((int)522376, (int)-1, (int)23541);
			return 0;
		}
		var_3_string = true;
		var_305_bool = 0;
		func_1346(var_305_bool);
		if(var_305_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf2";
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	Hold();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0();
	return 0;
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_bool = 0;
	IsOverrideActive(var_7_bool);
	var_8_bool = var_7_bool == 0; //@nz
	if(var_8_bool != 0) {
		EventDisable(0);
		var_9_bool = 0; var_10_object = Obj();
		var_5_object = var_10_object;
		func_763(var_9_bool, var_10_object);
		EventEnable(0);
		var_23_object = Obj();
		var_5_object = var_23_object;
		func_706(var_23_object);
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = 0;
	func_772(var_5_bool);
	var_8_bool = var_5_bool == 0; //@nz
	if(var_8_bool != 0) {
		Hold();
	}
Label_721:
	var_9_string = "";
	func_1002("Neutral");
	lshWaitForAnimEnd();
	goto Label_721;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_0_object = var_25_object;
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0;
	var_25_object = var_36_object;
	func_777(var_35_bool, var_36_object, (float)70.0);
	var_82_bool = var_35_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	CreateDialog(var_31_object);
	var_83_int = 0;
	func_1340(var_83_int);
	@@var_31_object:SetNPCName(var_83_int);
	var_84_int = 0;
	func_1338(var_84_int);
	@@var_31_object:SetNPCDescription(var_84_int);
	var_85_string = "";
	func_1342(var_85_string);
	@@var_31_object:SetPhoto(var_85_string);
	var_86_string = "";
	func_1344(var_86_string);
	@@var_31_object:SetPhoto2(var_86_string);
	var_87_int = 0;
	func_1321(var_87_int);
	@@var_31_object:SetPlayerName(var_87_int);
	IsOverrideActive(var_32_bool);
	var_95_bool = var_32_bool;
	if(var_95_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	DoDialog(var_31_object);
	var_96_bool = 0; var_97_object = Obj();
	func_1055(Obj());
	var_98_object = var_97_object;
	func_864(var_96_bool, var_97_object);
	var_191_object = Obj(); var_192_object = Obj();
	var_25_object = var_191_object;
	var_31_object = var_192_object;
	TaskCall(1);
	func_81(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object);
	TaskReturn();
	@@var_31_object:IsDialogEnd(var_34_bool);
	
Label_63:
	var_296_bool = var_34_bool == 0; //@nz
	if(var_296_bool != 0) {
		sync();
		@@var_31_object:IsDialogEnd(var_34_bool);
		goto Label_63;
	}
	var_25_object = Obj();
	func_846();
	StopDialog(var_31_object);
	@@var_31_object:GetReturnValue((int)-1);
	var_33_int = var_24_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_772(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0;
	IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
	return 2;
}


func_1157(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_1071(var_201_int, "b9q01DankoFree");
	var_206_bool = var_201_int != (int)0;
	if(var_206_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_1288(var_52_object, var_53_string, var_54_float)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_object = Obj(); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_object = Obj(); var_69_bool = 0;
	GetMainOutdoorScene(var_68_object);
	var_70_bool = var_68_object == 0; //@ne
	if(var_70_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_68_object:GetLocator(var_53_string, var_69_bool, var_66_cvector, var_67_cvector);
	var_72_bool = var_69_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_74_int = "Warning: outdoor scene locator " + var_53_string;
		var_76_int = var_74_int + " doesnt exist";
		Trace(var_76_int);
	}
	@@var_68_object:GetMap(var_52_object);
	var_77_bool = var_52_object == 0; //@ne
	if(var_77_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_79_float = GetByIndex(var_66_cvector, 0);
	var_80_float = GetByIndex(var_66_cvector, 2);
	@@var_52_object:SetMapParams(var_79_float, var_80_float, var_54_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_777(var_35_bool, var_36_object, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0;
	@@var_36_object:GetPosition(var_48_cvector);
	@@var_36_object:GetEyesHeight(var_47_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	var_56_float = var_56_float + var_47_float;
	SetByIndex(var_48_cvector, 1) = var_56_float;
	GetPosition(var_49_cvector);
	GetEyesHeight(var_47_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	var_57_float = var_57_float + var_47_float;
	SetByIndex(var_49_cvector, 1) = var_57_float;
	var_50_cvector = var_48_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (float)0;
	var_59_int = var_50_cvector | var_50_cvector;
	var_60_float = sqrt(var_59_int);
	var_50_cvector = var_50_cvector / var_60_float;
	var_51_cvector = -var_50_cvector;
	var_61_float = var_50_cvector * var_37_float;
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	var_63_cvector = var_51_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1061(var_62_cvector, var_63_cvector);
	var_71_float = var_62_cvector * (int)25;
	var_72_int = var_61_float + var_71_float;
	var_52_cvector = var_72_int - CVector(0.0, 10.0, 0.0);
	var_53_cvector = var_49_cvector + var_52_cvector;
	IsOverrideActive(var_54_bool);
	var_74_bool = var_54_bool;
	if(var_74_bool != 0) {
		var_35_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_53_cvector, var_51_cvector, (bool)1);
	var_76_float = GetByIndex(var_52_cvector, 0);
	var_77_float = GetByIndex(var_52_cvector, 2);
	Rotate(var_76_float, var_77_float);
	var_78_bool = 0;
	func_1346(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		HasAnimationTrack(var_55_bool, "head");
		var_80_bool = var_55_bool;
		if(var_80_bool == 0) goto Label_840;
		LookAsyncCamera("head");
	}
Label_840:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_35_bool = 1;
	return 18;
	
}


func_1033(var_130_bool, var_131_string)
{
	var_132_bool = 0; var_133_bool = 0;
	var_134_bool = 0;
	func_1346(var_134_bool);
	if(var_134_bool != 0) {
		lshHasSpeech(var_133_bool, var_131_string);
		var_135_bool = var_133_bool;
		if(var_135_bool != 0) {
			lshPlaySpeech(var_131_string);
			var_130_bool = 1;
			return 2;
		}
	}
	var_130_bool = 0;
	return 2;
}


func_1169(var_207_bool)
{
	var_209_int = 0; var_210_string = "";
	func_1071(var_209_int, "oob9Danko1");
	var_212_bool = var_209_int == (int)0;
	if(var_212_bool != 0) {
		var_207_bool = 1;
		return 0;
	}
	var_207_bool = 0;
	return 0;
}


func_1048()
{
	var_8_bool = 0;
	func_1346(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_922(var_107_bool, var_108_object)
{
	var_109_string = ""; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_string = ""; var_114_string = ""; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_string = "";
	var_114_string = "c";
	var_115_int = 0;
	
Label_925:
	if((int)1 != 0) {
		var_121_int = var_115_int + (int)1;
		var_122_int = var_114_string + var_121_int;
		@@var_108_object:HasProperty(var_122_int, var_116_bool);
		var_123_bool = var_116_bool == 0; //@nz
		if(var_123_bool != 0) {
		} else {
			var_115_int = var_115_int + (int)1;
			goto Label_925;
		}
	}
	var_124_bool = var_115_int == 0; //@nz
	if(var_124_bool != 0) {
		var_107_bool = 0;
		return 10;
	}
	var_117_int = 0;
	var_126_bool = var_115_int > (int)1;
	if(var_126_bool != 0) {
		irand(var_117_int, var_115_int);
	}
	var_128_int = var_117_int + (int)1;
	var_129_int = var_114_string + var_128_int;
	@@var_108_object:GetProperty(var_129_int, var_118_string);
	var_130_bool = 0; var_131_string = "";
	var_118_string = var_131_string;
	func_1033(var_130_bool, var_131_string);
	var_130_bool = var_107_bool;
	return 10;
	
}


func_1181(var_261_bool)
{
	var_263_int = 0; var_264_string = "";
	func_1071(var_263_int, "oob9Danko2");
	var_266_bool = var_263_int == (int)0;
	if(var_266_bool != 0) {
		var_261_bool = 1;
		return 0;
	}
	var_261_bool = 0;
	return 0;
}


func_1055(var_98_object)
{
	var_99_object = Obj(); var_100_object = Obj();
	self(var_100_object);
	var_100_object = var_98_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1061(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0;
	var_67_int = var_63_cvector | var_63_cvector;
	var_66_float = sqrt(var_67_int);
	var_68_float = 9.999999974752427e-07;
	var_69_bool = var_66_float < var_68_float;
	if(var_69_bool != 0) {
		var_62_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_62_cvector = var_63_cvector / var_66_float;
	return 2;
}


func_1321(var_87_int)
{
	var_88_int = 0; var_89_int = 0;
	GetVariable("branch", var_89_int);
	var_92_bool = var_89_int == (int)0;
	if(var_92_bool != 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x538";
	}
	var_94_bool = var_89_int == (int)1;
	if(var_94_bool != 0) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
	return 2;
}


func_1193(var_284_bool)
{
	var_286_int = 0; var_287_string = "";
	func_1071(var_286_int, "oob9Danko3");
	var_289_bool = var_286_int == (int)0;
	if(var_289_bool != 0) {
		var_284_bool = 1;
		return 0;
	}
	var_284_bool = 0;
	return 0;
}


func_1071(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0;
	GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
	return 2;
}


func_1076(var_151_int)
{
	var_152_float = 0; var_153_float = 0;
	GetGameTime(var_153_float);
	var_155_int = 0;
	var_155_int = var_153_float / (int)24;
	var_151_int = (int)1 + var_155_int;
	return 2;
}


func_1205(var_270_bool)
{
	var_272_int = 0; var_273_string = "";
	func_1071(var_272_int, "oob9Danko4");
	var_275_bool = var_272_int == (int)0;
	if(var_275_bool != 0) {
		var_270_bool = 1;
		return 0;
	}
	var_270_bool = 0;
	return 0;
}


func_1338(var_84_int)
{
	var_84_int = 515573;
	return 0;
}


func_1340(var_83_int)
{
	var_83_int = 504032;
	return 0;
}


func_1085()
{
	SetVariable("oob9Danko1", (int)1);
	return 0;
}


func_1342(var_85_string)
{
	var_85_string = "ui/NPC_Bakalavr.png";
	return 0;
}


func_959(var_138_bool, var_139_object)
{
	var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = "";
	var_151_int = 0;
	func_1076(var_151_int);
	var_157_int = "d" + var_151_int;
	var_145_string = var_157_int + "m";
	var_146_int = 0;
	
Label_968:
	if((int)1 != 0) {
		var_161_int = var_146_int + (int)1;
		var_162_int = var_145_string + var_161_int;
		@@var_139_object:HasProperty(var_162_int, var_147_bool);
		var_163_bool = var_147_bool == 0; //@nz
		if(var_163_bool != 0) {
		} else {
			var_146_int = var_146_int + (int)1;
			goto Label_968;
		}
	}
	var_164_bool = var_146_int == 0; //@nz
	if(var_164_bool != 0) {
		var_138_bool = 0;
		return 10;
	}
	var_148_int = 0;
	var_166_bool = var_146_int > (int)1;
	if(var_166_bool != 0) {
		irand(var_148_int, var_146_int);
	}
	var_168_int = var_148_int + (int)1;
	var_169_int = var_145_string + var_168_int;
	@@var_139_object:GetProperty(var_169_int, var_149_string);
	var_170_bool = 0; var_171_string = "";
	var_149_string = var_171_string;
	func_1033(var_170_bool, var_171_string);
	var_170_bool = var_138_bool;
	return 10;
	
}


func_1344(var_86_string)
{
	var_86_string = "ui/NPC_Bakalavr_b.png";
	return 0;
}


func_1217()
{
	var_15_object = Obj(); var_16_object = Obj();
	CreateDiaryEntry(var_16_object, (int)303, (int)1, (int)521618);
	var_20_bool = 0; var_21_object = Obj(); var_22_int = 0;
	var_16_object = var_21_object;
	func_1243(var_20_bool, var_21_object, (int)297);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1346(var_78_bool)
{
	var_78_bool = 1;
	return 0;
}


func_1091()
{
	SetVariable("oob9Danko2", (int)1);
	return 0;
}


func_706(var_23_object)
{
	var_24_int = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	TaskCall(0);
	func_0(var_26_object, var_24_int, var_25_object);
	TaskReturn();
	return 0;
}


func_1097()
{
	SetVariable("b9q01", (int)3);
	func_1217();
	return 0;
}


func_846()
{
	var_298_bool = 0; var_299_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_301_bool = 0;
	func_1346(var_301_bool);
	if(var_301_bool != 0) {
	} else {
		HasAnimationTrack(var_299_bool, "head");
		var_303_bool = var_299_bool;
		if(var_303_bool == 0) goto Label_863;
		UnlookAsync("head");
	}
Label_863:
	return 2;
	
}


func_1230(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj();
	GetDiaryRoot(var_31_object);
	var_32_bool = var_31_object == 0; //@nz
	if(var_32_bool != 0) {
		Trace("Can't retrieve diary root");
		var_29_object = 0;
		return 2;
	}
	var_31_object = var_29_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_191_object, var_192_object)
{
	var_0_object = var_192_object;
	var_1_object = var_191_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_198_bool = 0;
		var_198_bool = 0;
		var_199_bool = 0; var_200_object = Obj();
		var_200_object = var_1_object;
		func_1157(var_200_object);
		if(var_199_bool != 0) {
			var_207_bool = 0; var_208_object = Obj();
			var_208_object = var_1_object;
			func_1169(var_208_object);
			if(var_207_bool != 0) {
				var_198_bool = 1;
			}
		}
		if(var_198_bool != 0) {
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_1085();
			var_217_string = "";
			func_219(var_192_object, "Menace");
			@@@var_0_object:SetMessage((int)521581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531554, (int)32918, (int)32917);
		} else {
				var_256_bool = 0; var_257_object = Obj();
				var_257_object = var_1_object;
				func_1157(var_257_object);
				var_258_bool = var_256_bool == 0; //@nz
				if(var_258_bool != 0) {
					var_259_string = "";
					func_219(var_192_object, "Neutral");
					@@@var_0_object:SetMessage((int)521577);
					@@@var_0_object:ClearReplies();
					var_261_bool = 0; var_262_object = Obj();
					var_262_object = var_1_object;
					func_1181(var_262_object);
					if(var_261_bool != 0) {
						@@@var_0_object:AddReply((int)521578, (int)22740, (int)22739);
					}
					var_270_bool = 0; var_271_object = Obj();
					var_271_object = var_1_object;
					func_1205(var_271_object);
					if(var_270_bool != 0) {
						@@@var_0_object:AddReply((int)522381, (int)23547, (int)23546);
					}
					@@@var_0_object:AddReply((int)521586, (int)-1, (int)22747);
					goto Label_189;
				}
				var_282_string = "";
				func_219(var_192_object, "Neutral");
				@@@var_0_object:SetMessage((int)521601);
				@@@var_0_object:ClearReplies();
				var_284_bool = 0; var_285_object = Obj();
				var_285_object = var_1_object;
				func_1193(var_285_object);
				if(var_284_bool != 0) {
					@@@var_0_object:AddReply((int)522385, (int)23551, (int)23550);
				}
				@@@var_0_object:AddReply((int)521602, (int)-1, (int)22767);
				goto Label_189;
		}
	}
Label_189:
	var_238_bool = 0;
	func_1346(var_238_bool);
	if(var_238_bool != 0) {

	Label_193:
		lshWaitForAnimEnd();
		var_239_string = var_3_string;
		if(var_239_string != 0) {
		} else {
			var_240_string = "";
			var_240_string = var_2_object;
			func_1002(var_240_string);
			goto Label_193;
	}
		PlayAnimation("all", "idle");

	Label_208:
		WaitForAnimEnd();
		var_253_string = var_3_string;
		if(var_253_string != 0) {
			goto Label_218;
		}
		PlayAnimation("all", "idle");
		goto Label_208;

	}
	goto Label_218;
	
Label_218:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1106()
{
	SetVariable("b9q01DankoAmmo", (int)1);
	return 0;
}


func_1112()
{
	SetVariable("oob9Danko3", (int)1);
	return 0;
}


func_219(var_2_object, var_217_string)
{
	var_218_bool = 0;
	func_1346(var_218_bool);
	var_219_bool = var_218_bool == 0; //@nz
	if(var_219_bool != 0) {
		return 0;
	}
	var_220_bool = var_217_string == var_2_object;
	if(var_220_bool != 0) {
		return 0;
	}
	var_221_string = ""; var_222_bool = 0;
	var_217_string = var_221_string;
	var_224_bool = var_217_string == "";
	if(var_224_bool != 0) {
		var_222_bool = 0;
	} else {
		var_222_bool = 1;
	}
	func_1018(var_221_string, var_222_bool);
	var_2_object = var_217_string;
	return 0;
	
}


func_1243(var_20_bool, var_21_object, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0;
	func_1230(Obj());
	var_29_object = var_26_object;
	@@var_26_object:Find(var_22_int, var_27_object);
	var_34_bool = var_27_object == 0; //@nz
	if(var_34_bool != 0) {
		var_36_int = "Can't find diary parent with id: " + var_22_int;
		Trace(var_36_int);
		var_20_bool = 0;
		return 6;
	}
	@@var_27_object:AddChild(var_21_object);
	SendWorldWndMessage((int)7);
	@@var_21_object:GetCategory(var_28_int);
	SetDiarySection(var_28_int);
	var_20_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1118()
{
	SetVariable("oob9Danko4", (int)1);
	return 0;
}


func_864(var_96_bool, var_97_object)
{
	var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0;
	GetVariable("voice_common", var_103_int);
	var_106_int = var_103_int;
	if(var_106_int != 0) {
		var_107_bool = 0; var_108_object = Obj();
		var_97_object = var_108_object;
		func_922(var_107_bool, var_108_object);
		var_137_bool = var_107_bool == 0; //@nz
		if(var_137_bool != 0) {
			var_138_bool = 0; var_139_object = Obj();
			var_97_object = var_139_object;
			func_959(var_138_bool, var_139_object);
			var_173_bool = var_138_bool == 0; //@nz
			if(var_173_bool != 0) {
				var_96_bool = 0;
				return 4;
			}
		}
		irand(var_104_int, (int)2);
		var_175_int = var_104_int;
		if(var_175_int != 0) {
			var_178_int = var_103_int + (int)1;
			var_180_int = var_178_int % (int)3;
			SetVariable("voice_common", var_180_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_183_bool = 0; var_184_object = Obj();
		var_97_object = var_184_object;
		func_959(var_183_bool, var_184_object);
		var_185_bool = var_183_bool == 0; //@nz
		if(var_185_bool != 0) {
			var_186_bool = 0; var_187_object = Obj();
			var_97_object = var_187_object;
			func_922(var_186_bool, var_187_object);
			var_188_bool = var_186_bool == 0; //@nz
			if(var_188_bool != 0) {
				var_96_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_920;
	
Label_920:
	var_96_bool = 1;
	return 4;
	
}


func_1124()
{
	var_40_int = 0; var_41_string = "";
	func_1071(var_40_int, "map_chertez_state");
	var_45_bool = var_40_int <= (int)4;
	if(var_45_bool != 0) {
		SetVariable("map_chertez_state", (int)4);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_1002(var_9_string)
{
	var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; var_15_float = 0;
	lshHasAnimation(var_13_bool, var_9_string);
	var_16_bool = var_13_bool;
	if(var_16_bool != 0) {
		lshGetAnimTimes(var_9_string, var_14_float, var_15_float);
		lshPlayAnimation(var_14_float, var_15_float, (bool)0);
	} else {
		var_19_int = "Can't find lsh animation : " + var_9_string;
		Trace(var_19_int);
	}
	return 6;
	
}


func_753(var_13_bool, var_14_cvector)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0;
	GetPosition(var_18_cvector);
	var_19_cvector = var_14_cvector - var_18_cvector;
	var_21_float = GetByIndex(var_19_cvector, 0);
	var_22_float = GetByIndex(var_19_cvector, 2);
	Rotate(var_21_float, var_22_float, var_20_bool);
	var_20_bool = var_13_bool;
	return 6;
}


func_1141(var_51_object)
{
	var_52_object = Obj(); var_53_string = ""; var_54_float = 0;
	func_1271(Obj());
	var_55_object = var_52_object;
	func_1288(var_52_object, "pt_map_aglaja", (float)-1);
	var_81_object = Obj();
	func_1271(var_81_object);
	@@var_51_object:ShowMap(var_81_object);
	return 0;
}


func_1271(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj();
	GetMainOutdoorScene(var_58_object);
	var_60_bool = var_58_object == 0; //@ne
	if(var_60_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_59_object = 0;
		var_59_object = var_55_object;
		return 4;
	}
	@@var_58_object:GetMap(var_59_object);
	var_59_object = var_55_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1018(var_221_string, var_222_bool)
{
	var_225_bool = 0; var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_float = 0; var_230_float = 0;
	lshHasAnimation(var_228_bool, var_221_string);
	var_231_bool = var_228_bool;
	if(var_231_bool != 0) {
		lshGetAnimTimes(var_221_string, var_229_float, var_230_float);
		lshPlayAnimation(var_229_float, var_230_float, var_222_bool);
	} else {
		var_233_int = "Can't find lsh animation : " + var_221_string;
		Trace(var_233_int);
	}
	return 6;
	
}


func_763(var_9_bool, var_10_object)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0);
	@@var_10_object:GetPosition(var_12_cvector);
	var_13_bool = 0; var_14_cvector = CVector(0,0,0);
	var_12_cvector = var_14_cvector;
	func_753(var_13_bool, var_14_cvector);
	var_13_bool = var_9_bool;
	return 2;
}


