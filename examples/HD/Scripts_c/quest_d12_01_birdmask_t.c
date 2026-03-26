// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,GetVariable/2,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,Trigger/2,HasAnimation/3,SetVariable/2,CreateIntVector/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:d12q01TheaterIsVisited|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png|W:ood12BirdmaskT|W:ood12BirdmaskT2|W:quest_d12_01|W:init_theater|W:d12q01ChildsAreVisited|W:branch|A:add|W:vol_|A:size|A:get
// @GLOBALS: 0:object:
// @RUN_OP: 0x205
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf9 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x211 vars=object
// @EVENT_7: op=0x24b vars=int
// @PE: 0x4a,0xe3,0xf9,0x221,0x24b,0x262,0x398,0x39e,0x3a4,0x3ab,0x3b5,0x3c1,0x3cd,0x3d9,0x3f0,0x411,0x432

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_852();
		var_15_bool = var_11_object == (int)37173;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_926();
		}
		var_21_bool = var_11_object == (int)37188;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_932();
		}
		var_31_bool = var_10_bool == (int)37172;
		if(var_31_bool != 0) {
			var_32_bool = 0; var_33_object = Obj();
			var_33_object = var_1_object;
			func_939(var_32_bool, var_33_object);
			var_144_bool = var_32_bool == 0; //@nz
			if(var_144_bool != 0) {
				var_145_string = "";
				func_227(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)535490);
				@@@var_0_object:ClearReplies();
				var_163_bool = 0; var_164_object = Obj();
				var_164_object = var_1_object;
				func_961(var_164_object);
				if(var_163_bool != 0) {
					@@@var_0_object:AddReply((int)535491, (int)37174, (int)37173);
				}
				@@@var_0_object:AddReply((int)535504, (int)-1, (int)37186);
				return 0;
			}
			var_177_bool = 0; var_178_object = Obj();
			var_178_object = var_1_object;
			func_973(var_178_object);
			var_183_bool = var_177_bool == 0; //@nz
			if(var_183_bool != 0) {
				var_184_string = "";
				func_227(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)541615);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541616, (int)43789, (int)43788);
				@@@var_0_object:AddReply((int)541620, (int)-1, (int)43792);
				return 0;
			}
			var_192_bool = 0;
			var_192_bool = 0;
			var_193_bool = 0;
			var_193_bool = 0;
			var_194_bool = 0; var_195_object = Obj();
			var_195_object = var_1_object;
			func_973(var_195_object);
			if(var_194_bool != 0) {
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_939(var_196_bool, var_197_object);
				if(var_196_bool != 0) {
					var_193_bool = 1;
				}
			}
			if(var_193_bool != 0) {
				var_198_bool = 0; var_199_object = Obj();
				var_199_object = var_1_object;
				func_949(var_199_object);
				if(var_198_bool != 0) {
					var_192_bool = 1;
				}
			}
			if(var_192_bool != 0) {
				var_204_object = Obj(); var_205_object = Obj();
				var_204_object = var_1_object;
				var_205_object = var_0_object;
				func_920();
				var_208_string = "";
				func_227(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)535505);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535506, (int)-1, (int)37188);
				return 0;
			}
			var_213_string = "";
			func_227(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)535507);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535508, (int)-1, (int)37190);
			return 0;
		}
		var_219_bool = var_10_bool == (int)43789;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_227(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)541617);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541618, (int)-1, (int)43790);
			@@@var_0_object:AddReply((int)541619, (int)-1, (int)43791);
			return 0;
		}
		var_229_bool = var_10_bool == (int)37174;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_227(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)535492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535493, (int)37176, (int)37175);
			@@@var_0_object:AddReply((int)535497, (int)37180, (int)37179);
			return 0;
		}
		var_239_bool = var_10_bool == (int)37180;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_227(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)535498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535499, (int)37182, (int)37181);
			@@@var_0_object:AddReply((int)535503, (int)-1, (int)37185);
			return 0;
		}
		var_249_bool = var_10_bool == (int)37182;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_227(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)535500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535501, (int)-1, (int)37183);
			@@@var_0_object:AddReply((int)535502, (int)-1, (int)37184);
			return 0;
		}
		var_259_bool = var_10_bool == (int)37176;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_227(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)535494);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535495, (int)-1, (int)37177);
			@@@var_0_object:AddReply((int)535496, (int)-1, (int)37178);
			return 0;
		}
		var_3_string = true;
		var_268_bool = 0;
		func_918(var_268_bool);
		if(var_268_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfa";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	GetVariable("d12q01TheaterIsVisited", var_12_int);
	var_14_bool = var_12_int == 0; //@nz
	if(var_14_bool != 0) {
		func_610(var_11_int, var_12_int);
		var_18_int = 0; var_19_object = Obj();
		var_10_object = var_19_object;
		TaskCall(0);
		func_0(var_20_object, var_18_int, var_19_object);
		TaskReturn();
	}
	return 2;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_572(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_841(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_609;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_609:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_517:
	if((bool)1 != 0) {
		var_11_float = 0; var_12_float = 0;
		func_545(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		Sleep((int)1);
		goto Label_517;
	}
	return 0;
}


func_0(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_0_object = var_19_object;
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0;
	var_19_object = var_30_object;
	func_723(var_29_bool, var_30_object, (float)130.0);
	var_76_bool = var_29_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	CreateDialog(var_25_object);
	var_77_int = 0;
	func_912(var_77_int);
	@@var_25_object:SetNPCName(var_77_int);
	var_78_int = 0;
	func_910(var_78_int);
	@@var_25_object:SetNPCDescription(var_78_int);
	var_79_string = "";
	func_914(var_79_string);
	@@var_25_object:SetPhoto(var_79_string);
	var_80_string = "";
	func_916(var_80_string);
	@@var_25_object:SetPhoto2(var_80_string);
	var_81_int = 0;
	func_991(var_81_int);
	@@var_25_object:SetPlayerName(var_81_int);
	IsOverrideActive(var_26_bool);
	var_89_bool = var_26_bool;
	if(var_89_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	DoDialog(var_25_object);
	var_90_object = Obj(); var_91_object = Obj();
	var_19_object = var_90_object;
	var_25_object = var_91_object;
	TaskCall(1);
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	@@var_25_object:IsDialogEnd(var_28_bool);
	
Label_56:
	var_301_bool = var_28_bool == 0; //@nz
	if(var_301_bool != 0) {
		sync();
		@@var_25_object:IsDialogEnd(var_28_bool);
		goto Label_56;
	}
	var_19_object = Obj();
	func_792();
	StopDialog(var_25_object);
	@@var_25_object:GetReturnValue((int)-1);
	var_27_int = var_18_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1164(var_147_bool)
{
	var_148_object = Obj(); var_149_int = 0; var_150_int = 0; var_151_int = 0; var_152_object = Obj(); var_153_int = 0; var_154_int = 0; var_155_int = 0;
	CreateIntVector(var_152_object);
	var_156_object = Obj(); var_157_bool = 0; var_158_int = 0;
	var_152_object = var_156_object;
	func_1041(var_156_object, (bool)0, (int)-1);
	@@var_152_object:size(var_153_int);
	var_154_int = 0;
	
Label_1176:
	var_171_bool = var_154_int < var_153_int;
	if(var_171_bool != 0) {
		@@var_152_object:get(var_155_int, var_154_int);
		var_172_bool = 0;
		var_172_bool = 1;
		var_173_bool = 0; var_174_int = 0;
		var_155_int = var_174_int;
		func_1116(var_173_bool, var_174_int);
		if(var_173_bool != 1) {
			var_175_bool = 0; var_176_int = 0;
			var_155_int = var_176_int;
			func_1106(var_175_bool, var_176_int);
			if(var_175_bool != 1) {
				var_172_bool = 0;
			}
		}
		if(var_172_bool != 0) {
			var_147_bool = 0;
			var_154_int = var_154_int + (int)1;
			goto Label_1176;
		}
		return 8;
	}
	var_147_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_910(var_78_int)
{
	var_78_int = 515571;
	return 0;
}


func_912(var_77_int)
{
	var_77_int = 504029;
	return 0;
}


func_1041(var_156_object, var_157_bool, var_158_int)
{
	@@var_156_object:add((int)6);
	@@var_156_object:add((int)26);
	@@var_156_object:add((int)2);
	@@var_156_object:add((int)22);
	var_164_bool = var_157_bool == (bool)0;
	if(var_164_bool != 0) {
		@@var_156_object:add((int)15);
		@@var_156_object:add((int)5);
		@@var_156_object:add((int)16);
	} else {
		var_169_bool = var_158_int != (int)0;
		if(var_169_bool == 0) goto Label_1073;
		@@var_156_object:add((int)15);
	}
Label_1073:
	return 0;
	
}


func_914(var_79_string)
{
	var_79_string = "ui/NPC_bmask.png";
	return 0;
}


func_916(var_80_string)
{
	var_80_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_918(var_72_bool)
{
	var_72_bool = 0;
	return 0;
}


func_792()
{
	var_303_bool = 0; var_304_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_306_bool = 0;
	func_918(var_306_bool);
	if(var_306_bool != 0) {
	} else {
		HasAnimationTrack(var_304_bool, "head");
		var_308_bool = var_304_bool;
		if(var_308_bool == 0) goto Label_809;
		UnlookAsync("head");
	}
Label_809:
	return 2;
	
}


func_920()
{
	SetVariable("ood12BirdmaskT", (int)1);
	return 0;
}


func_926()
{
	SetVariable("ood12BirdmaskT2", (int)1);
	return 0;
}


func_545(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_718(var_13_bool);
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
	func_624();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_932()
{
	var_24_bool = 0; var_25_string = ""; var_26_string = "";
	func_874(var_24_bool, "quest_d12_01", "init_theater");
	return 0;
}


func_810(var_244_string)
{
	var_245_bool = 0; var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_float = 0; var_250_float = 0;
	lshHasAnimation(var_248_bool, var_244_string);
	var_251_bool = var_248_bool;
	if(var_251_bool != 0) {
		lshGetAnimTimes(var_244_string, var_249_float, var_250_float);
		lshPlayAnimation(var_249_float, var_250_float, (bool)0);
	} else {
		var_254_int = "Can't find lsh animation : " + var_244_string;
		Trace(var_254_int);
	}
	return 6;
	
}


func_939(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_object = Obj();
	var_98_object = var_100_object;
	func_985(var_100_object);
	if(var_99_bool != 0) {
		var_97_bool = 1;
		return 0;
	}
	var_97_bool = 0;
	return 0;
}


func_1074(var_112_object, var_113_bool)
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


func_1202(var_103_bool)
{
	var_104_object = Obj(); var_105_int = 0; var_106_int = 0; var_107_int = 0; var_108_object = Obj(); var_109_int = 0; var_110_int = 0; var_111_int = 0;
	CreateIntVector(var_108_object);
	var_112_object = Obj(); var_113_bool = 0; var_114_int = 0;
	var_108_object = var_112_object;
	func_1074((bool)0, (int)-1);
	@@var_108_object:size(var_109_int);
	var_110_int = 0;
	
Label_1214:
	var_126_bool = var_110_int < var_109_int;
	if(var_126_bool != 0) {
		@@var_108_object:get(var_111_int, var_110_int);
		var_127_bool = 0;
		var_127_bool = 1;
		var_128_bool = 0; var_129_int = 0;
		var_111_int = var_129_int;
		func_1116(var_128_bool, var_129_int);
		if(var_128_bool != 1) {
			var_137_bool = 0; var_138_int = 0;
			var_111_int = var_138_int;
			func_1106(var_137_bool, var_138_int);
			if(var_137_bool != 1) {
				var_127_bool = 0;
			}
		}
		if(var_127_bool != 0) {
			var_103_bool = 0;
			var_110_int = var_110_int + (int)1;
			goto Label_1214;
		}
		return 8;
	}
	var_103_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_949(var_281_bool)
{
	var_283_int = 0; var_284_string = "";
	func_869(var_283_int, "ood12BirdmaskT");
	var_286_bool = var_283_int == (int)0;
	if(var_286_bool != 0) {
		var_281_bool = 1;
		return 0;
	}
	var_281_bool = 0;
	return 0;
}


func_826(var_214_string, var_215_bool)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0;
	lshHasAnimation(var_221_bool, var_214_string);
	var_224_bool = var_221_bool;
	if(var_224_bool != 0) {
		lshGetAnimTimes(var_214_string, var_222_float, var_223_float);
		lshPlayAnimation(var_222_float, var_223_float, var_215_bool);
	} else {
		var_226_int = "Can't find lsh animation : " + var_214_string;
		Trace(var_226_int);
	}
	return 6;
	
}


func_572(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_710(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_703(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_961(var_228_bool)
{
	var_230_int = 0; var_231_string = "";
	func_869(var_230_int, "ood12BirdmaskT2");
	var_235_bool = var_230_int == (int)0;
	if(var_235_bool != 0) {
		var_228_bool = 1;
		return 0;
	}
	var_228_bool = 0;
	return 0;
}


func_705()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_710(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_841(var_27_object)
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_90_object, var_91_object)
{
	var_0_object = var_91_object;
	var_1_object = var_90_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_97_bool = 0; var_98_object = Obj();
		var_98_object = var_1_object;
		func_939(var_97_bool, var_98_object);
		var_209_bool = var_97_bool == 0; //@nz
		if(var_209_bool != 0) {
			var_210_string = "";
			func_227(var_91_object, "Neutral");
			@@@var_0_object:SetMessage((int)535490);
			@@@var_0_object:ClearReplies();
			var_228_bool = 0; var_229_object = Obj();
			var_229_object = var_1_object;
			func_961(var_229_object);
			if(var_228_bool != 0) {
				@@@var_0_object:AddReply((int)535491, (int)37174, (int)37173);
			}
			@@@var_0_object:AddReply((int)535504, (int)-1, (int)37186);
		} else {
				var_260_bool = 0; var_261_object = Obj();
				var_261_object = var_1_object;
				func_973(var_261_object);
				var_266_bool = var_260_bool == 0; //@nz
				if(var_266_bool != 0) {
					var_267_string = "";
					func_227(var_91_object, "Neutral");
					@@@var_0_object:SetMessage((int)541615);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)541616, (int)43789, (int)43788);
					@@@var_0_object:AddReply((int)541620, (int)-1, (int)43792);
					goto Label_197;
				}
				var_275_bool = 0;
				var_275_bool = 0;
				var_276_bool = 0;
				var_276_bool = 0;
				var_277_bool = 0; var_278_object = Obj();
				var_278_object = var_1_object;
				func_973(var_278_object);
				if(var_277_bool != 0) {
					var_279_bool = 0; var_280_object = Obj();
					var_280_object = var_1_object;
					func_939(var_279_bool, var_280_object);
					if(var_279_bool != 0) {
						var_276_bool = 1;
					}
				}
				if(var_276_bool != 0) {
					var_281_bool = 0; var_282_object = Obj();
					var_282_object = var_1_object;
					func_949(var_282_object);
					if(var_281_bool != 0) {
						var_275_bool = 1;
					}
				}
				if(var_275_bool != 0) {
					var_287_object = Obj(); var_288_object = Obj();
					var_287_object = var_1_object;
					var_288_object = var_0_object;
					func_920();
					var_291_string = "";
					func_227(var_91_object, "Neutral");
					@@@var_0_object:SetMessage((int)535505);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)535506, (int)-1, (int)37188);
					goto Label_197;
				}
				var_296_string = "";
				func_227(var_91_object, "Neutral");
				@@@var_0_object:SetMessage((int)535507);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535508, (int)-1, (int)37190);
				goto Label_197;
		}
	}
Label_197:
	var_242_bool = 0;
	func_918(var_242_bool);
	if(var_242_bool != 0) {

	Label_201:
		lshWaitForAnimEnd();
		var_243_string = var_3_string;
		if(var_243_string != 0) {
		} else {
			var_244_string = "";
			var_244_string = var_2_object;
			func_810(var_244_string);
			goto Label_201;
	}
		PlayAnimation("all", "idle");

	Label_216:
		WaitForAnimEnd();
		var_257_string = var_3_string;
		if(var_257_string != 0) {
			goto Label_226;
		}
		PlayAnimation("all", "idle");
		goto Label_216;

	}
	goto Label_226;
	
Label_226:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_973(var_260_bool)
{
	var_262_int = 0; var_263_string = "";
	func_869(var_262_int, "d12q01ChildsAreVisited");
	var_265_bool = var_262_int != (int)0;
	if(var_265_bool != 0) {
		var_260_bool = 1;
		return 0;
	}
	var_260_bool = 0;
	return 0;
}


func_718(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_1106(var_137_bool, var_138_int)
{
	var_139_int = 0; var_140_int = 0;
	var_142_int = "vol_" + var_138_int;
	GetVariable(var_142_int, var_140_int);
	var_144_int = var_140_int & (int)4;
	var_137_bool = var_144_int != (int)0;
	return 2;
}


func_723(var_29_bool, var_30_object, var_31_float)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0;
	@@var_30_object:GetPosition(var_42_cvector);
	@@var_30_object:GetEyesHeight(var_41_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	var_50_float = var_50_float + var_41_float;
	SetByIndex(var_42_cvector, 1) = var_50_float;
	GetPosition(var_43_cvector);
	GetEyesHeight(var_41_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	var_51_float = var_51_float + var_41_float;
	SetByIndex(var_43_cvector, 1) = var_51_float;
	var_44_cvector = var_42_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (float)0;
	var_53_int = var_44_cvector | var_44_cvector;
	var_54_float = sqrt(var_53_int);
	var_44_cvector = var_44_cvector / var_54_float;
	var_45_cvector = -var_44_cvector;
	var_55_float = var_44_cvector * var_31_float;
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	var_57_cvector = var_45_cvector ^ CVector(0.0, 1.0, 0.0);
	func_859(var_56_cvector, var_57_cvector);
	var_65_float = var_56_cvector * (int)25;
	var_66_int = var_55_float + var_65_float;
	var_46_cvector = var_66_int - CVector(0.0, 10.0, 0.0);
	var_47_cvector = var_43_cvector + var_46_cvector;
	IsOverrideActive(var_48_bool);
	var_68_bool = var_48_bool;
	if(var_68_bool != 0) {
		var_29_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_47_cvector, var_45_cvector, (bool)1);
	var_70_float = GetByIndex(var_46_cvector, 0);
	var_71_float = GetByIndex(var_46_cvector, 2);
	Rotate(var_70_float, var_71_float);
	var_72_bool = 0;
	func_918(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		HasAnimationTrack(var_49_bool, "head");
		var_74_bool = var_49_bool;
		if(var_74_bool == 0) goto Label_786;
		LookAsyncCamera("head");
	}
Label_786:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_29_bool = 1;
	return 18;
	
}


func_852()
{
	var_13_bool = 0;
	func_918(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1240(var_101_bool)
{
	var_101_bool = 0;
	var_102_bool = 0;
	var_102_bool = 0;
	var_103_bool = 0;
	func_1202(var_103_bool);
	if(var_103_bool != 0) {
		var_147_bool = 0;
		func_1164(var_147_bool);
		if(var_147_bool != 0) {
			var_102_bool = 1;
		}
	}
	if(var_102_bool != 0) {
		var_178_bool = 0;
		func_1126(var_178_bool);
		if(var_178_bool != 0) {
			var_101_bool = 1;
		}
	}
	return 0;
}


func_985(var_99_bool)
{
	func_1240((bool)0);
	var_101_bool = var_99_bool;
	return 0;
}


func_859(var_56_cvector, var_57_cvector)
{
	var_59_float = 0; var_60_float = 0;
	var_61_int = var_57_cvector | var_57_cvector;
	var_60_float = sqrt(var_61_int);
	var_62_float = 9.999999974752427e-07;
	var_63_bool = var_60_float < var_62_float;
	if(var_63_bool != 0) {
		var_56_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_56_cvector = var_57_cvector / var_60_float;
	return 2;
}


func_1116(var_128_bool, var_129_int)
{
	var_130_int = 0; var_131_int = 0;
	var_133_int = "vol_" + var_129_int;
	GetVariable(var_133_int, var_131_int);
	var_135_int = var_131_int & (int)16;
	var_128_bool = var_135_int != (int)0;
	return 2;
}


func_991(var_81_int)
{
	var_82_int = 0; var_83_int = 0;
	GetVariable("branch", var_83_int);
	var_86_bool = var_83_int == (int)0;
	if(var_86_bool != 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x3ee";
	}
	var_88_bool = var_83_int == (int)1;
	if(var_88_bool != 0) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
	return 2;
}


func_610(var_2_object, var_3_string)
{
	func_705();
	KillTimer((int)10);
	var_16_object = var_2_object;
	if(var_16_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_227(var_2_object, var_210_string)
{
	var_211_bool = 0;
	func_918(var_211_bool);
	var_212_bool = var_211_bool == 0; //@nz
	if(var_212_bool != 0) {
		return 0;
	}
	var_213_bool = var_210_string == var_2_object;
	if(var_213_bool != 0) {
		return 0;
	}
	var_214_string = ""; var_215_bool = 0;
	var_210_string = var_214_string;
	var_217_bool = var_210_string == "";
	if(var_217_bool != 0) {
		var_215_bool = 0;
	} else {
		var_215_bool = 1;
	}
	func_826(var_214_string, var_215_bool);
	var_2_object = var_210_string;
	return 0;
	
}


func_869(var_230_int, var_231_string)
{
	var_232_int = 0; var_233_int = 0;
	GetVariable(var_231_string, var_233_int);
	var_233_int = var_230_int;
	return 2;
}


func_1126(var_178_bool)
{
	var_179_object = Obj(); var_180_int = 0; var_181_int = 0; var_182_int = 0; var_183_object = Obj(); var_184_int = 0; var_185_int = 0; var_186_int = 0;
	CreateIntVector(var_183_object);
	var_187_object = Obj(); var_188_bool = 0; var_189_int = 0;
	var_183_object = var_187_object;
	func_1008(var_187_object, (bool)0, (int)-1);
	@@var_183_object:size(var_184_int);
	var_185_int = 0;
	
Label_1138:
	var_202_bool = var_185_int < var_184_int;
	if(var_202_bool != 0) {
		@@var_183_object:get(var_186_int, var_185_int);
		var_203_bool = 0;
		var_203_bool = 1;
		var_204_bool = 0; var_205_int = 0;
		var_186_int = var_205_int;
		func_1116(var_204_bool, var_205_int);
		if(var_204_bool != 1) {
			var_206_bool = 0; var_207_int = 0;
			var_186_int = var_207_int;
			func_1106(var_206_bool, var_207_int);
			if(var_206_bool != 1) {
				var_203_bool = 0;
			}
		}
		if(var_203_bool != 0) {
			var_178_bool = 0;
			var_185_int = var_185_int + (int)1;
			goto Label_1138;
		}
		return 8;
	}
	var_178_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_874(var_24_bool, var_25_string, var_26_string)
{
	var_27_object = Obj(); var_28_object = Obj();
	FindActor(var_28_object, var_25_string);
	var_29_bool = var_28_object == 0; //@ne
	if(var_29_bool != 0) {
		var_24_bool = 0;
		return 2;
	}
	Trigger(var_28_object, var_26_string);
	var_24_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_624()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_718(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_893((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_638:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_718(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_671;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_886(var_58_string, var_59_int);
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
						goto Label_700;
					}
					goto Label_689;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_689;
				goto Label_700;
		}
		Label_689:
			var_61_bool = 0;
			func_703(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_700;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_638;

		}
	}
Label_700:
	ResetAAS();
	return 14;
	
}


func_1008(var_187_object, var_188_bool, var_189_int)
{
	@@var_187_object:add((int)18);
	@@var_187_object:add((int)24);
	@@var_187_object:add((int)20);
	@@var_187_object:add((int)14);
	var_195_bool = var_188_bool == (bool)0;
	if(var_195_bool != 0) {
		@@var_187_object:add((int)10);
		@@var_187_object:add((int)17);
		@@var_187_object:add((int)8);
	} else {
		var_200_bool = var_189_int != (int)1;
		if(var_200_bool == 0) goto Label_1040;
		@@var_187_object:add((int)10);
	}
Label_1040:
	return 0;
	
}


func_886(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_893(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_895:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_886(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_895;
	}
	var_39_int = var_36_int;
	return 4;
	
}


