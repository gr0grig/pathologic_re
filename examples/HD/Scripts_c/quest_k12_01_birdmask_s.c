// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateIntVector/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png|W:quest_k12_01|W:init_sobor|W:ook12BirdmaskS1|W:sobor@door1|W:branch|A:add|W:vol_|A:size|A:get|W:game_final
// @GLOBALS: 0:object:
// @RUN_OP: 0x207
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe7 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x213 vars=object
// @EVENT_7: op=0x24e vars=int
// @PE: 0x4a,0xd1,0xe7,0x213,0x224,0x24e,0x265,0x3b4,0x3bb,0x3c1,0x3c8,0x3d2,0x3dc,0x3e8,0x3ee,0x40a

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_855();
		var_15_bool = var_11_object == (int)41167;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_961();
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_object;
			var_29_object = var_0_object;
			func_948();
		}
		var_37_bool = var_10_bool == (int)41164;
		if(var_37_bool != 0) {
			var_38_bool = 0; var_39_object = Obj();
			var_39_object = var_1_object;
			func_968(var_38_bool, var_39_object);
			var_86_bool = var_38_bool == 0; //@nz
			if(var_86_bool != 0) {
				var_87_string = "";
				func_209(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)539221);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541225, (int)45255, (int)43355);
				@@@var_0_object:AddReply((int)539222, (int)45249, (int)41165);
				return 0;
			}
			var_111_bool = 0; var_112_object = Obj();
			var_112_object = var_1_object;
			func_978(var_111_bool, var_112_object);
			var_122_bool = var_111_bool == 0; //@nz
			if(var_122_bool != 0) {
				var_123_string = "";
				func_209(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)539219);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541260, (int)-1, (int)43390);
				@@@var_0_object:AddReply((int)542837, (int)45265, (int)45264);
				return 0;
			}
			var_131_bool = 0; var_132_object = Obj();
			var_132_object = var_1_object;
			func_988(var_132_object);
			if(var_131_bool != 0) {
				var_139_object = Obj(); var_140_object = Obj();
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_955();
				var_143_string = "";
				func_209(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)539223);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539224, (int)-1, (int)41167);
				return 0;
			}
			var_148_string = "";
			func_209(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)539225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539226, (int)-1, (int)41169);
			@@@var_0_object:AddReply((int)542845, (int)-1, (int)45271);
			return 0;
		}
		var_157_bool = var_10_bool == (int)45265;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_209(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)542838);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542839, (int)45268, (int)45266);
			@@@var_0_object:AddReply((int)542840, (int)-1, (int)45267);
			return 0;
		}
		var_167_bool = var_10_bool == (int)45268;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_209(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)542841);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542842, (int)-1, (int)45269);
			@@@var_0_object:AddReply((int)542844, (int)-1, (int)45270);
			return 0;
		}
		var_177_bool = var_10_bool == (int)45249;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_209(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)542823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542824, (int)45251, (int)45250);
			@@@var_0_object:AddReply((int)542827, (int)-1, (int)45254);
			return 0;
		}
		var_187_bool = var_10_bool == (int)45255;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_209(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)542828);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542829, (int)45251, (int)45256);
			@@@var_0_object:AddReply((int)542830, (int)-1, (int)45257);
			return 0;
		}
		var_197_bool = var_10_bool == (int)45251;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_209(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)542825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542826, (int)45259, (int)45252);
			@@@var_0_object:AddReply((int)542831, (int)-1, (int)45258);
			return 0;
		}
		var_207_bool = var_10_bool == (int)45259;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_209(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)542832);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542833, (int)-1, (int)45260);
			@@@var_0_object:AddReply((int)542834, (int)45262, (int)45261);
			return 0;
		}
		var_217_bool = var_10_bool == (int)45262;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_209(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)542835);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542836, (int)-1, (int)45263);
			return 0;
		}
		var_3_string = true;
		var_223_bool = 0;
		func_946(var_223_bool);
		if(var_223_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe8";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_int = 0;
	func_1124(var_11_int);
	var_16_bool = var_11_int == (int)0;
	if(var_16_bool != 0) {
		func_613(var_9_object, var_10_object);
		var_20_int = 0; var_21_object = Obj();
		var_10_object = var_21_object;
		TaskCall(0);
		func_0(var_22_object, var_20_int, var_21_object);
		TaskReturn();
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_575(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_844(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_612;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_612:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_519:
	if((bool)1 != 0) {
		var_11_float = 0; var_12_float = 0;
		func_548(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		Sleep((int)1);
		goto Label_519;
	}
	return 0;
}


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	var_0_object = var_21_object;
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0;
	var_21_object = var_32_object;
	func_726(var_31_bool, var_32_object, (float)130.0);
	var_78_bool = var_31_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	CreateDialog(var_27_object);
	var_79_int = 0;
	func_940(var_79_int);
	@@var_27_object:SetNPCName(var_79_int);
	var_80_int = 0;
	func_938(var_80_int);
	@@var_27_object:SetNPCDescription(var_80_int);
	var_81_string = "";
	func_942(var_81_string);
	@@var_27_object:SetPhoto(var_81_string);
	var_82_string = "";
	func_944(var_82_string);
	@@var_27_object:SetPhoto2(var_82_string);
	var_83_int = 0;
	func_1017(var_83_int);
	@@var_27_object:SetPlayerName(var_83_int);
	IsOverrideActive(var_28_bool);
	var_91_bool = var_28_bool;
	if(var_91_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	DoDialog(var_27_object);
	var_92_object = Obj(); var_93_object = Obj();
	var_21_object = var_92_object;
	var_27_object = var_93_object;
	TaskCall(1);
	func_74(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object);
	TaskReturn();
	@@var_27_object:IsDialogEnd(var_30_bool);
	
Label_56:
	var_235_bool = var_30_bool == 0; //@nz
	if(var_235_bool != 0) {
		sync();
		@@var_27_object:IsDialogEnd(var_30_bool);
		goto Label_56;
	}
	var_21_object = Obj();
	func_795();
	StopDialog(var_27_object);
	@@var_27_object:GetReturnValue((int)-1);
	var_29_int = var_20_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_906(var_194_int)
{
	var_195_float = 0; var_196_float = 0;
	GetGameTime(var_196_float);
	var_197_int = 0;
	var_196_float = var_197_int;
	var_194_int = var_197_int % (int)24;
	return 2;
}


func_1034(var_112_object, var_113_bool)
{
	@@var_112_object:add((int)7);
	@@var_112_object:add((int)23);
	@@var_112_object:add((int)21);
	@@var_112_object:add((int)9);
	@@var_112_object:add((int)3);
	@@var_112_object:add((int)1);
	@@var_112_object:add((int)11);
	@@var_112_object:add((int)13);
	var_124_bool = var_113_bool == (bool)0;
	if(var_124_bool != 0) {
		@@var_112_object:add((int)25);
	}
	return 0;
}


func_914(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_921(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_923:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_914(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_923;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_795()
{
	var_237_bool = 0; var_238_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_240_bool = 0;
	func_946(var_240_bool);
	if(var_240_bool != 0) {
	} else {
		HasAnimationTrack(var_238_bool, "head");
		var_242_bool = var_238_bool;
		if(var_242_bool == 0) goto Label_812;
		UnlookAsync("head");
	}
Label_812:
	return 2;
	
}


func_548(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_721(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	SetTimer((int)10, (float)1.0);
	func_627();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_938(var_80_int)
{
	var_80_int = 515571;
	return 0;
}


func_1066(var_137_bool, var_138_int)
{
	var_139_int = 0; var_140_int = 0;
	var_142_int = "vol_" + var_138_int;
	GetVariable(var_142_int, var_140_int);
	var_144_int = var_140_int & (int)4;
	var_137_bool = var_144_int != (int)0;
	return 2;
}


func_940(var_79_int)
{
	var_79_int = 504029;
	return 0;
}


func_813(var_174_string)
{
	var_175_bool = 0; var_176_float = 0; var_177_float = 0; var_178_bool = 0; var_179_float = 0; var_180_float = 0;
	lshHasAnimation(var_178_bool, var_174_string);
	var_181_bool = var_178_bool;
	if(var_181_bool != 0) {
		lshGetAnimTimes(var_174_string, var_179_float, var_180_float);
		lshPlayAnimation(var_179_float, var_180_float, (bool)0);
	} else {
		var_184_int = "Can't find lsh animation : " + var_174_string;
		Trace(var_184_int);
	}
	return 6;
	
}


func_942(var_81_string)
{
	var_81_string = "ui/NPC_bmask.png";
	return 0;
}


func_944(var_82_string)
{
	var_82_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_946(var_74_bool)
{
	var_74_bool = 0;
	return 0;
}


func_948()
{
	var_30_bool = 0; var_31_string = ""; var_32_string = "";
	func_894(var_30_bool, "quest_k12_01", "init_sobor");
	return 0;
}


func_1076(var_128_bool, var_129_int)
{
	var_130_int = 0; var_131_int = 0;
	var_133_int = "vol_" + var_129_int;
	GetVariable(var_133_int, var_131_int);
	var_135_int = var_131_int & (int)16;
	var_128_bool = var_135_int != (int)0;
	return 2;
}


func_955()
{
	SetVariable("ook12BirdmaskS1", (int)1);
	return 0;
}


func_829(var_152_string, var_153_bool)
{
	var_156_bool = 0; var_157_float = 0; var_158_float = 0; var_159_bool = 0; var_160_float = 0; var_161_float = 0;
	lshHasAnimation(var_159_bool, var_152_string);
	var_162_bool = var_159_bool;
	if(var_162_bool != 0) {
		lshGetAnimTimes(var_152_string, var_160_float, var_161_float);
		lshPlayAnimation(var_160_float, var_161_float, var_153_bool);
	} else {
		var_164_int = "Can't find lsh animation : " + var_152_string;
		Trace(var_164_int);
	}
	return 6;
	
}


func_1086(var_103_bool)
{
	var_104_object = Obj(); var_105_int = 0; var_106_int = 0; var_107_int = 0; var_108_object = Obj(); var_109_int = 0; var_110_int = 0; var_111_int = 0;
	CreateIntVector(var_108_object);
	var_112_object = Obj(); var_113_bool = 0; var_114_int = 0;
	var_108_object = var_112_object;
	func_1034((bool)0, (int)-1);
	@@var_108_object:size(var_109_int);
	var_110_int = 0;
	
Label_1098:
	var_126_bool = var_110_int < var_109_int;
	if(var_126_bool != 0) {
		@@var_108_object:get(var_111_int, var_110_int);
		var_127_bool = 0;
		var_127_bool = 1;
		var_128_bool = 0; var_129_int = 0;
		var_111_int = var_129_int;
		func_1076(var_128_bool, var_129_int);
		if(var_128_bool != 1) {
			var_137_bool = 0; var_138_int = 0;
			var_111_int = var_138_int;
			func_1066(var_137_bool, var_138_int);
			if(var_137_bool != 1) {
				var_127_bool = 0;
			}
		}
		if(var_127_bool != 0) {
			var_103_bool = 0;
			var_110_int = var_110_int + (int)1;
			goto Label_1098;
		}
		return 8;
	}
	var_103_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_575(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_713(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_961()
{
	var_18_string = ""; var_19_bool = 0;
	func_877("sobor@door1", (bool)0);
	return 0;
}


func_706(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_708()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_968(var_99_bool, var_100_object)
{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_1000(var_102_object);
	if(var_101_bool != 0) {
		var_99_bool = 1;
		return 0;
	}
	var_99_bool = 0;
	return 0;
}


func_713(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_92_object, var_93_object)
{
	var_0_object = var_93_object;
	var_1_object = var_92_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_99_bool = 0; var_100_object = Obj();
		var_100_object = var_1_object;
		func_968(var_99_bool, var_100_object);
		var_147_bool = var_99_bool == 0; //@nz
		if(var_147_bool != 0) {
			var_148_string = "";
			func_209(var_93_object, "Neutral");
			@@@var_0_object:SetMessage((int)539221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541225, (int)45255, (int)43355);
			@@@var_0_object:AddReply((int)539222, (int)45249, (int)41165);
		} else {
				var_190_bool = 0; var_191_object = Obj();
				var_191_object = var_1_object;
				func_978(var_190_bool, var_191_object);
				var_201_bool = var_190_bool == 0; //@nz
				if(var_201_bool != 0) {
					var_202_string = "";
					func_209(var_93_object, "Neutral");
					@@@var_0_object:SetMessage((int)539219);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)541260, (int)-1, (int)43390);
					@@@var_0_object:AddReply((int)542837, (int)45265, (int)45264);
					goto Label_179;
				}
				var_210_bool = 0; var_211_object = Obj();
				var_211_object = var_1_object;
				func_988(var_211_object);
				if(var_210_bool != 0) {
					var_218_object = Obj(); var_219_object = Obj();
					var_218_object = var_1_object;
					var_219_object = var_0_object;
					func_955();
					var_222_string = "";
					func_209(var_93_object, "Neutral");
					@@@var_0_object:SetMessage((int)539223);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)539224, (int)-1, (int)41167);
					goto Label_179;
				}
				var_227_string = "";
				func_209(var_93_object, "Neutral");
				@@@var_0_object:SetMessage((int)539225);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539226, (int)-1, (int)41169);
				@@@var_0_object:AddReply((int)542845, (int)-1, (int)45271);
				goto Label_179;
		}
	}
Label_179:
	var_172_bool = 0;
	func_946(var_172_bool);
	if(var_172_bool != 0) {

	Label_183:
		lshWaitForAnimEnd();
		var_173_string = var_3_string;
		if(var_173_string != 0) {
		} else {
			var_174_string = "";
			var_174_string = var_2_object;
			func_813(var_174_string);
			goto Label_183;
	}
		PlayAnimation("all", "idle");

	Label_198:
		WaitForAnimEnd();
		var_187_string = var_3_string;
		if(var_187_string != 0) {
			goto Label_208;
		}
		PlayAnimation("all", "idle");
		goto Label_198;

	}
	goto Label_208;
	
Label_208:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_844(var_27_object)
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


func_209(var_2_object, var_148_string)
{
	var_149_bool = 0;
	func_946(var_149_bool);
	var_150_bool = var_149_bool == 0; //@nz
	if(var_150_bool != 0) {
		return 0;
	}
	var_151_bool = var_148_string == var_2_object;
	if(var_151_bool != 0) {
		return 0;
	}
	var_152_string = ""; var_153_bool = 0;
	var_148_string = var_152_string;
	var_155_bool = var_148_string == "";
	if(var_155_bool != 0) {
		var_153_bool = 0;
	} else {
		var_153_bool = 1;
	}
	func_829(var_152_string, var_153_bool);
	var_2_object = var_148_string;
	return 0;
	
}


func_978(var_190_bool, var_191_object)
{
	var_192_bool = 0; var_193_object = Obj();
	var_191_object = var_193_object;
	func_1006(var_193_object);
	if(var_192_bool != 0) {
		var_190_bool = 1;
		return 0;
	}
	var_190_bool = 0;
	return 0;
}


func_721(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_726(var_31_bool, var_32_object, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0;
	@@var_32_object:GetPosition(var_44_cvector);
	@@var_32_object:GetEyesHeight(var_43_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	var_52_float = var_52_float + var_43_float;
	SetByIndex(var_44_cvector, 1) = var_52_float;
	GetPosition(var_45_cvector);
	GetEyesHeight(var_43_float);
	var_53_float = GetByIndex(var_45_cvector, 1);
	var_53_float = var_53_float + var_43_float;
	SetByIndex(var_45_cvector, 1) = var_53_float;
	var_46_cvector = var_44_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_46_cvector, 1);
	SetByIndex(var_46_cvector, 1) = (float)0;
	var_55_int = var_46_cvector | var_46_cvector;
	var_56_float = sqrt(var_55_int);
	var_46_cvector = var_46_cvector / var_56_float;
	var_47_cvector = -var_46_cvector;
	var_57_float = var_46_cvector * var_33_float;
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0);
	var_59_cvector = var_47_cvector ^ CVector(0.0, 1.0, 0.0);
	func_862(var_58_cvector, var_59_cvector);
	var_67_float = var_58_cvector * (int)25;
	var_68_int = var_57_float + var_67_float;
	var_48_cvector = var_68_int - CVector(0.0, 10.0, 0.0);
	var_49_cvector = var_45_cvector + var_48_cvector;
	IsOverrideActive(var_50_bool);
	var_70_bool = var_50_bool;
	if(var_70_bool != 0) {
		var_31_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_49_cvector, var_47_cvector, (bool)1);
	var_72_float = GetByIndex(var_48_cvector, 0);
	var_73_float = GetByIndex(var_48_cvector, 2);
	Rotate(var_72_float, var_73_float);
	var_74_bool = 0;
	func_946(var_74_bool);
	if(var_74_bool != 0) {
	} else {
		HasAnimationTrack(var_51_bool, "head");
		var_76_bool = var_51_bool;
		if(var_76_bool == 0) goto Label_789;
		LookAsyncCamera("head");
	}
Label_789:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_31_bool = 1;
	return 18;
	
}


func_855()
{
	var_13_bool = 0;
	func_946(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_988(var_210_bool)
{
	var_212_int = 0; var_213_string = "";
	func_872(var_212_int, "ook12BirdmaskS1");
	var_217_bool = var_212_int == (int)0;
	if(var_217_bool != 0) {
		var_210_bool = 1;
		return 0;
	}
	var_210_bool = 0;
	return 0;
}


func_862(var_58_cvector, var_59_cvector)
{
	var_61_float = 0; var_62_float = 0;
	var_63_int = var_59_cvector | var_59_cvector;
	var_62_float = sqrt(var_63_int);
	var_64_float = 9.999999974752427e-07;
	var_65_bool = var_62_float < var_64_float;
	if(var_65_bool != 0) {
		var_58_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_58_cvector = var_59_cvector / var_62_float;
	return 2;
}


func_1124(var_11_int)
{
	var_12_int = 0; var_13_int = 0;
	GetVariable("game_final", var_13_int);
	var_13_int = var_11_int;
	return 2;
}


func_613(var_2_object, var_3_string)
{
	func_708();
	KillTimer((int)10);
	var_18_object = var_2_object;
	if(var_18_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1000(var_101_bool)
{
	func_1086((bool)0);
	var_103_bool = var_101_bool;
	return 0;
}


func_872(var_212_int, var_213_string)
{
	var_214_int = 0; var_215_int = 0;
	GetVariable(var_213_string, var_215_int);
	var_215_int = var_212_int;
	return 2;
}


func_877(var_18_string, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj();
	FindActor(var_21_object, var_18_string);
	var_22_bool = var_21_object == 0; //@nz
	if(var_22_bool != 0) {
		var_24_int = "Door " + var_18_string;
		var_26_int = var_24_int + " not found";
		Trace(var_26_int);
	} else {
		@@var_21_object:SetProperty("locked", var_19_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_1006(var_192_bool)
{
	var_194_int = 0;
	func_906(var_194_int);
	var_200_bool = var_194_int >= (int)19;
	if(var_200_bool != 0) {
		var_192_bool = 1;
		return 0;
	}
	var_192_bool = 0;
	return 0;
}


func_627()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_721(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_921((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_641:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_721(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_674;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_914(var_58_string, var_59_int);
			PlayAnimation("all", var_58_string);
			WaitForAnimEnd(var_31_bool);
			var_60_bool = var_31_bool == 0; //@nz
			if(var_60_bool != 0) {
			} else {
		} else {
				var_65_bool = var_29_int == (int)1;
				if(var_65_bool != 0) {
					rand(var_32_float, (int)4);
					var_68_int = var_32_float + (int)1;
					Sleep(var_68_int, var_33_bool);
					var_69_bool = var_33_bool == 0; //@nz
					if(var_69_bool != 0) {
						goto Label_703;
					}
					goto Label_692;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_692;
				goto Label_703;
		}
		Label_692:
			var_61_bool = 0;
			func_706(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_703;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_641;

		}
	}
Label_703:
	ResetAAS();
	return 14;
	
}


func_1017(var_83_int)
{
	var_84_int = 0; var_85_int = 0;
	GetVariable("branch", var_85_int);
	var_88_bool = var_85_int == (int)0;
	if(var_88_bool != 0) {
		var_83_int = 1;
		return 2;
	EMIT "GOTO 0x408";
	}
	var_90_bool = var_85_int == (int)1;
	if(var_90_bool != 0) {
		var_83_int = 2;
		return 2;
	}
	var_83_int = 3;
	return 2;
}


func_894(var_30_bool, var_31_string, var_32_string)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, var_31_string);
	var_35_bool = var_34_object == 0; //@ne
	if(var_35_bool != 0) {
		var_30_bool = 0;
		return 2;
	}
	Trigger(var_34_object, var_32_string);
	var_30_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


