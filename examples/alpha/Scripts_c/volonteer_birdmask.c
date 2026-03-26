// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,GetProperty/2,Trace/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,IsLoaded/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetInvItemByName/2,FindActor/2,Trigger/3,HasAnimation/3,TriggerWorld/2,SetVariable/2,GetVariable/2,_strlwr/1
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:npc|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:HasItem|W:playsound|W:giveitem|W:oo|W:1|W:powder|A:RemoveItemByType|W:burah_serum|W:volonteers_danko|W:rescue|W:player|W:alexandr|W:andrei|W:anna|W:bigvlad|W:eva|W:georg|W:grif|W:han|W:julia|W:kapella|W:katerina|W:klara|W:laska|W:maria|W:mark|W:mat|W:mishka|W:mladvlad|W:notkin|W:ospina|W:petr|W:rubin|W:spi4ka|W:starshina|W:viktor|W:wasted_woman|W:wasted_male|W:alkash|W:boy|W:girl|W:littleboy|W:littlegirl|W:butcher|W:dohodyaga|W:unosha|W:vaxxabit|W:vaxxabitka|W:worker|W:whitemask|W:birdmask|W:patrol|W:alkash_d|W:boy_d|W:butcher_d|W:dohodyaga_d|W:girl_d|W:littleboy_d|W:littlegirl_d|W:unosha2|W:unosha_d|W:unosha2_d|W:vaxxabit_d|W:vaxxabitka_d|W:wasted_male_d|W:wasted_woman_d|W:worker2|W:worker_d|W:worker2_d|W:burah|W:gorbun_daughter|W:gorbun|W:albinos|W:aglaja|W:nude|W:block|W:officer|W:vol_|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x15d
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb1 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x165 vars=object
// @PE: 0x3f,0xa1,0xb1,0x203,0x255,0x27e,0x289,0x294,0x2bc

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_537();
		var_10_bool = var_6_int == (int)15324;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_621(var_12_object);
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_object;
			func_627();
			var_29_object = Obj(); var_30_object = Obj();
			var_29_object = var_1_object;
			var_30_object = var_0_object;
			func_597();
		}
		var_34_bool = var_6_int == (int)15327;
		if(var_34_bool != 0) {
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_615(var_36_object);
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_627();
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_597();
		}
		var_46_bool = var_5_int == (int)15312;
		if(var_46_bool != 0) {
			var_47_bool = 0; var_48_object = Obj();
			var_48_object = var_1_object;
			func_660(var_47_bool, var_48_object);
			if(var_47_bool != 0) {
				var_61_object = Obj(); var_62_object = Obj();
				var_61_object = var_1_object;
				var_62_object = var_0_object;
				func_603();
				var_71_string = "";
				func_161(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)14075);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14076, (int)15314, (int)15313);
				return 0;
			}
			var_90_string = "";
			func_161(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14079);
			@@@var_0_object:ClearReplies();
			var_92_bool = 0; var_93_object = Obj();
			var_93_object = var_1_object;
			func_638(var_92_bool, var_93_object);
			if(var_92_bool != 0) {
				@@@var_0_object:AddReply((int)14080, (int)15318, (int)15317);
			}
			var_104_bool = 0; var_105_object = Obj();
			var_105_object = var_1_object;
			func_649(var_104_bool, var_105_object);
			if(var_104_bool != 0) {
				@@@var_0_object:AddReply((int)14110, (int)15326, (int)15325);
			}
			@@@var_0_object:AddReply((int)14082, (int)-1, (int)15319);
			return 0;
		}
		var_116_bool = var_5_int == (int)15326;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_161(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14112, (int)-1, (int)15327);
			return 0;
		}
		var_123_bool = var_5_int == (int)15318;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_161(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14109, (int)-1, (int)15324);
			return 0;
		}
		var_130_bool = var_5_int == (int)15314;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_161(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)14077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14078, (int)-1, (int)15315);
			return 0;
		}
		var_3_string = true;
		var_136_bool = 0;
		func_1074(var_136_bool);
		if(var_136_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb2";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_string = ""; var_7_string = "";
	GetProperty("npc", var_7_string);
	Trace(var_7_string);
	var_9_int = 0; var_10_string = "";
	var_7_string = var_10_string;
	func_700(var_9_int, var_10_string);
	Trace(var_9_int);
	var_153_bool = 0; var_154_int = 0;
	var_155_int = 0; var_156_string = "";
	var_7_string = var_156_string;
	func_700(var_155_int, var_156_string);
	var_155_int = var_154_int;
	func_1060(var_153_bool, var_154_int);
	if(var_153_bool != 0) {
		var_164_int = 0; var_165_object = Obj();
		var_5_object = var_165_object;
		TaskCall(0);
		func_0(var_166_object, var_164_int, var_165_object);
		TaskReturn();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_349:
	Sleep((int)3);
	func_385();
	goto Label_349;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_164_int, var_165_object)
{
	var_167_object = Obj(); var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_object = Obj(); var_172_bool = 0; var_173_int = 0; var_174_bool = 0;
	var_0_object = var_165_object;
	var_175_bool = 0; var_176_object = Obj();
	var_165_object = var_176_object;
	func_459(var_175_bool, var_176_object);
	var_215_bool = var_175_bool == 0; //@nz
	if(var_215_bool != 0) {
		var_164_int = -2;
		return 8;
	}
	CreateDialog(var_171_object);
	var_216_int = 0;
	func_1070(var_216_int);
	@@var_171_object:SetNPCName(var_216_int);
	var_217_string = "";
	func_1072(var_217_string);
	@@var_171_object:SetPhoto(var_217_string);
	var_218_int = 0;
	func_683(var_218_int);
	@@var_171_object:SetPlayerName(var_218_int);
	IsOverrideActive(var_172_bool);
	var_226_bool = var_172_bool;
	if(var_226_bool != 0) {
		var_164_int = -2;
		return 8;
	}
	DoDialog(var_171_object);
	var_227_object = Obj(); var_228_object = Obj();
	var_165_object = var_227_object;
	var_171_object = var_228_object;
	TaskCall(1);
	func_63(var_229_object, var_230_object, var_231_string, var_232_bool, var_227_object, var_228_object);
	TaskReturn();
	@@var_171_object:IsDialogEnd(var_174_bool);
	
Label_45:
	var_310_bool = var_174_bool == 0; //@nz
	if(var_310_bool != 0) {
		sync();
		@@var_171_object:IsDialogEnd(var_174_bool);
		goto Label_45;
	}
	var_165_object = Obj();
	func_515();
	StopDialog(var_171_object);
	@@var_171_object:GetReturnValue((int)-1);
	var_173_int = var_164_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_385()
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0;
	WaitForAnimEnd();
	var_20_bool = 0;
	func_454(var_20_bool);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		return 14;
	}
	func_580((int)0);
	var_24_int = var_13_int;
	var_14_int = 0;
	
Label_399:
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_14_int < (int)5;
	if(var_39_bool != 0) {
		var_40_bool = 0;
		func_454(var_40_bool);
		if(var_40_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		irand(var_15_int, (int)3);
		var_43_bool = var_15_int == (int)0;
		if(var_43_bool != 0) {
			var_44_int = var_13_int;
			if(var_44_int == 0) goto Label_432;
			irand(var_16_int, var_13_int);
			var_46_string = ""; var_47_int = 0;
			var_16_int = var_47_int;
			func_573(var_46_string, var_47_int);
			PlayAnimation("all", var_46_string);
			WaitForAnimEnd(var_17_bool);
			var_48_bool = var_17_bool == 0; //@nz
			if(var_48_bool != 0) {
			} else {
		} else {
				var_51_bool = var_15_int == (int)1;
				if(var_51_bool != 0) {
					rand(var_18_float, (int)4);
					var_54_int = var_18_float + (int)1;
					Sleep(var_54_int, var_19_bool);
					var_55_bool = var_19_bool == 0; //@nz
					if(var_55_bool != 0) {
						goto Label_453;
					}
					goto Label_450;
				}
				var_56_int = var_14_int;
				if(var_56_int == 0) goto Label_450;
				goto Label_453;
		}
		Label_450:
			var_14_int = var_14_int + (int)1;
			goto Label_399;

		}
	}
Label_453:
	return 14;
	
}


func_515()
{
	CameraSwitchToNormal();
	return 0;
}


func_580(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_27_int = 0;
	
Label_582:
	var_30_string = ""; var_31_int = 0;
	var_27_int = var_31_int;
	func_573(var_30_string, var_31_int);
	HasAnimation(var_28_bool, "all", var_30_string);
	var_35_bool = var_28_bool == 0; //@nz
	if(var_35_bool != 0) {
	} else {
		var_27_int = var_27_int + (int)1;
		goto Label_582;
	}
	var_27_int = var_24_int;
	return 4;
	
}


func_454(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0;
	IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
	return 2;
}


func_519(var_262_string)
{
	var_263_float = 0; var_264_float = 0; var_265_float = 0; var_266_float = 0;
	var_268_int = "playing " + var_262_string;
	Trace(var_268_int);
	lshGetAnimTimes(var_262_string, var_265_float, var_266_float);
	lshPlayAnimation(var_265_float, var_266_float);
	var_270_int = "start: " + var_265_float;
	Trace(var_270_int);
	var_272_int = "end: " + var_266_float;
	Trace(var_272_int);
	return 4;
}


func_649(var_299_bool, var_300_object)
{
	var_301_bool = 0; var_302_object = Obj(); var_303_string = "";
	var_300_object = var_302_object;
	func_554(var_301_bool, var_302_object, "powder");
	if(var_301_bool != 0) {
		var_299_bool = 1;
		return 0;
	}
	var_299_bool = 0;
	return 0;
}


func_459(var_175_bool, var_176_object)
{
	var_177_float = 0; var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_bool = 0; var_185_float = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_bool = 0;
	@@var_176_object:GetPosition(var_186_cvector);
	@@var_176_object:GetEyesHeight(var_185_float);
	var_193_float = GetByIndex(var_186_cvector, 1);
	var_193_float = var_193_float + var_185_float;
	SetByIndex(var_186_cvector, 1) = var_193_float;
	GetPosition(var_187_cvector);
	GetEyesHeight(var_185_float);
	var_194_float = GetByIndex(var_187_cvector, 1);
	var_194_float = var_194_float + var_185_float;
	SetByIndex(var_187_cvector, 1) = var_194_float;
	var_188_cvector = var_186_cvector - var_187_cvector;
	var_195_float = GetByIndex(var_188_cvector, 1);
	SetByIndex(var_188_cvector, 1) = (float)0;
	var_196_int = var_188_cvector | var_188_cvector;
	var_197_float = sqrt(var_196_int);
	var_188_cvector = var_188_cvector / var_197_float;
	var_189_cvector = -var_188_cvector;
	var_199_float = var_188_cvector * (int)70;
	var_200_cvector = CVector(0,0,0); var_201_cvector = CVector(0,0,0);
	var_201_cvector = var_189_cvector ^ CVector(0.0, 1.0, 0.0);
	func_544(var_200_cvector, var_201_cvector);
	var_209_float = var_200_cvector * (int)25;
	var_210_int = var_199_float + var_209_float;
	var_190_cvector = var_210_int - CVector(0.0, 10.0, 0.0);
	var_191_cvector = var_187_cvector + var_190_cvector;
	IsOverrideActive(var_192_bool);
	var_212_bool = var_192_bool;
	if(var_212_bool != 0) {
		var_175_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_191_cvector, var_189_cvector);
	var_213_float = GetByIndex(var_190_cvector, 0);
	var_214_float = GetByIndex(var_190_cvector, 2);
	Rotate(var_213_float, var_214_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_175_bool = 1;
	return 16;
}


func_660(var_234_bool, var_235_object)
{
	var_236_bool = 0; var_237_object = Obj();
	var_235_object = var_237_object;
	func_670(var_237_object);
	if(var_236_bool != 0) {
		var_234_bool = 1;
		return 0;
	}
	var_234_bool = 0;
	return 0;
}


func_597()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_537()
{
	var_8_bool = 0;
	func_1074(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_603()
{
	var_250_string = ""; var_251_string = "";
	GetProperty("npc", var_251_string);
	var_254_int = "oo" + var_251_string;
	var_256_int = var_254_int + "1";
	SetVariable(var_256_int, (int)1);
	return 2;
}


func_670(var_236_bool)
{
	var_238_string = ""; var_239_int = 0; var_240_string = ""; var_241_int = 0;
	GetProperty("npc", var_240_string);
	var_244_int = "oo" + var_240_string;
	var_246_int = var_244_int + "1";
	GetVariable(var_246_int, var_241_int);
	var_236_bool = var_241_int == (int)0;
	return 4;
}


func_544(var_200_cvector, var_201_cvector)
{
	var_203_float = 0; var_204_float = 0;
	var_205_int = var_201_cvector | var_201_cvector;
	var_204_float = sqrt(var_205_int);
	var_206_float = 9.999999974752427e-07;
	var_207_bool = var_204_float < var_206_float;
	if(var_207_bool != 0) {
		var_200_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_200_cvector = var_201_cvector / var_204_float;
	return 2;
}


func_161(var_2_object, var_258_string)
{
	var_259_bool = 0;
	func_1074(var_259_bool);
	var_260_bool = var_259_bool == 0; //@nz
	if(var_260_bool != 0) {
		return 0;
	}
	var_261_bool = var_258_string == var_2_object;
	if(var_261_bool != 0) {
		return 0;
	}
	var_262_string = "";
	var_258_string = var_262_string;
	func_519(var_262_string);
	var_2_object = var_258_string;
	return 0;
}


func_1060(var_153_bool, var_154_int)
{
	var_157_int = 0; var_158_int = 0;
	var_160_int = "vol_" + var_154_int;
	GetVariable(var_160_int, var_158_int);
	var_162_int = var_158_int & (int)4;
	var_153_bool = var_162_int != (int)0;
	return 2;
}


func_615(var_35_object)
{
	var_37_int = 0; var_38_int = 0;
	@@var_35_object:RemoveItemByType(var_38_int, "powder", (int)1);
	return 2;
}


func_554(var_289_bool, var_290_object, var_291_string)
{
	var_292_int = 0; var_293_bool = 0; var_294_int = 0; var_295_bool = 0;
	GetInvItemByName(var_294_int, var_291_string);
	@@var_290_object:HasItem(var_294_int, var_295_bool);
	var_295_bool = var_289_bool;
	return 4;
}


func_683(var_218_int)
{
	var_219_int = 0; var_220_int = 0;
	GetVariable("player", var_220_int);
	var_223_bool = var_220_int == (int)0;
	if(var_223_bool != 0) {
		var_218_int = 200001;
		return 2;
	EMIT "GOTO 0x2ba";
	}
	var_225_bool = var_220_int == (int)1;
	if(var_225_bool != 0) {
		var_218_int = 200002;
		return 2;
	}
	var_218_int = 200003;
	return 2;
}


func_621(var_11_object)
{
	var_13_int = 0; var_14_int = 0;
	@@var_11_object:RemoveItemByType(var_14_int, "burah_serum", (int)1);
	return 2;
}


func_1070(var_216_int)
{
	var_216_int = 4029;
	return 0;
}


func_1072(var_217_string)
{
	var_217_string = "ui/NPC_Black.png";
	return 0;
}


func_561(var_22_bool, var_23_string, var_24_string, var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj();
	FindActor(var_27_object, var_23_string);
	var_28_bool = var_27_object == 0; //@ne
	if(var_28_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	Trigger(var_27_object, var_24_string, var_25_string);
	var_22_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1074(var_259_bool)
{
	var_259_bool = 0;
	return 0;
}


func_627()
{
	var_19_string = ""; var_20_string = "";
	GetProperty("npc", var_20_string);
	var_22_bool = 0; var_23_string = ""; var_24_string = ""; var_25_string = "";
	var_20_string = var_25_string;
	func_561(var_22_bool, "volonteers_danko", "rescue", var_25_string);
	return 2;
}


func_700(var_9_int, var_10_string)
{
	_strlwr(var_10_string);
	var_12_bool = var_10_string == "alexandr";
	if(var_12_bool != 0) {
		var_9_int = 1;
		return 0;
	}
	var_14_bool = var_10_string == "andrei";
	if(var_14_bool != 0) {
		var_9_int = 2;
		return 0;
	}
	var_16_bool = var_10_string == "anna";
	if(var_16_bool != 0) {
		var_9_int = 3;
		return 0;
	}
	var_18_bool = var_10_string == "bigvlad";
	if(var_18_bool != 0) {
		var_9_int = 4;
		return 0;
	}
	var_20_bool = var_10_string == "eva";
	if(var_20_bool != 0) {
		var_9_int = 5;
		return 0;
	}
	var_22_bool = var_10_string == "georg";
	if(var_22_bool != 0) {
		var_9_int = 6;
		return 0;
	}
	var_24_bool = var_10_string == "grif";
	if(var_24_bool != 0) {
		var_9_int = 7;
		return 0;
	}
	var_26_bool = var_10_string == "han";
	if(var_26_bool != 0) {
		var_9_int = 8;
		return 0;
	}
	var_28_bool = var_10_string == "julia";
	if(var_28_bool != 0) {
		var_9_int = 9;
		return 0;
	}
	var_30_bool = var_10_string == "kapella";
	if(var_30_bool != 0) {
		var_9_int = 10;
		return 0;
	}
	var_32_bool = var_10_string == "katerina";
	if(var_32_bool != 0) {
		var_9_int = 11;
		return 0;
	}
	var_34_bool = var_10_string == "klara";
	if(var_34_bool != 0) {
		var_9_int = 12;
		return 0;
	}
	var_36_bool = var_10_string == "lara";
	if(var_36_bool != 0) {
		var_9_int = 13;
		return 0;
	}
	var_38_bool = var_10_string == "laska";
	if(var_38_bool != 0) {
		var_9_int = 14;
		return 0;
	}
	var_40_bool = var_10_string == "maria";
	if(var_40_bool != 0) {
		var_9_int = 15;
		return 0;
	}
	var_42_bool = var_10_string == "mark";
	if(var_42_bool != 0) {
		var_9_int = 16;
		return 0;
	}
	var_44_bool = var_10_string == "mat";
	if(var_44_bool != 0) {
		var_9_int = 17;
		return 0;
	}
	var_46_bool = var_10_string == "mishka";
	if(var_46_bool != 0) {
		var_9_int = 18;
		return 0;
	}
	var_48_bool = var_10_string == "mladvlad";
	if(var_48_bool != 0) {
		var_9_int = 19;
		return 0;
	}
	var_50_bool = var_10_string == "notkin";
	if(var_50_bool != 0) {
		var_9_int = 20;
		return 0;
	}
	var_52_bool = var_10_string == "ospina";
	if(var_52_bool != 0) {
		var_9_int = 21;
		return 0;
	}
	var_54_bool = var_10_string == "petr";
	if(var_54_bool != 0) {
		var_9_int = 22;
		return 0;
	}
	var_56_bool = var_10_string == "rubin";
	if(var_56_bool != 0) {
		var_9_int = 23;
		return 0;
	}
	var_58_bool = var_10_string == "spi4ka";
	if(var_58_bool != 0) {
		var_9_int = 24;
		return 0;
	}
	var_60_bool = var_10_string == "starshina";
	if(var_60_bool != 0) {
		var_9_int = 25;
		return 0;
	}
	var_62_bool = var_10_string == "viktor";
	if(var_62_bool != 0) {
		var_9_int = 26;
		return 0;
	}
	var_64_bool = var_10_string == "wasted_woman";
	if(var_64_bool != 0) {
		var_9_int = 27;
		return 0;
	}
	var_66_bool = var_10_string == "wasted_male";
	if(var_66_bool != 0) {
		var_9_int = 28;
		return 0;
	}
	var_68_bool = var_10_string == "alkash";
	if(var_68_bool != 0) {
		var_9_int = 29;
		return 0;
	}
	var_70_bool = var_10_string == "boy";
	if(var_70_bool != 0) {
		var_9_int = 30;
		return 0;
	}
	var_72_bool = var_10_string == "girl";
	if(var_72_bool != 0) {
		var_9_int = 31;
		return 0;
	}
	var_74_bool = var_10_string == "littleboy";
	if(var_74_bool != 0) {
		var_9_int = 32;
		return 0;
	}
	var_76_bool = var_10_string == "littlegirl";
	if(var_76_bool != 0) {
		var_9_int = 33;
		return 0;
	}
	var_78_bool = var_10_string == "butcher";
	if(var_78_bool != 0) {
		var_9_int = 34;
		return 0;
	}
	var_80_bool = var_10_string == "dohodyaga";
	if(var_80_bool != 0) {
		var_9_int = 35;
		return 0;
	}
	var_82_bool = var_10_string == "unosha";
	if(var_82_bool != 0) {
		var_9_int = 36;
		return 0;
	}
	var_84_bool = var_10_string == "vaxxabit";
	if(var_84_bool != 0) {
		var_9_int = 37;
		return 0;
	}
	var_86_bool = var_10_string == "vaxxabitka";
	if(var_86_bool != 0) {
		var_9_int = 38;
		return 0;
	}
	var_88_bool = var_10_string == "woman";
	if(var_88_bool != 0) {
		var_9_int = 39;
		return 0;
	}
	var_90_bool = var_10_string == "worker";
	if(var_90_bool != 0) {
		var_9_int = 40;
		return 0;
	}
	var_92_bool = var_10_string == "whitemask";
	if(var_92_bool != 0) {
		var_9_int = 42;
		return 0;
	}
	var_94_bool = var_10_string == "birdmask";
	if(var_94_bool != 0) {
		var_9_int = 43;
		return 0;
	}
	var_96_bool = var_10_string == "birdmask";
	if(var_96_bool != 0) {
		var_9_int = 44;
		return 0;
	}
	var_98_bool = var_10_string == "patrol";
	if(var_98_bool != 0) {
		var_9_int = 46;
		return 0;
	}
	var_100_bool = var_10_string == "danko";
	if(var_100_bool != 0) {
		var_9_int = 47;
		return 0;
	}
	var_102_bool = var_10_string == "alkash_d";
	if(var_102_bool != 0) {
		var_9_int = 48;
		return 0;
	}
	var_104_bool = var_10_string == "boy_d";
	if(var_104_bool != 0) {
		var_9_int = 49;
		return 0;
	}
	var_106_bool = var_10_string == "butcher_d";
	if(var_106_bool != 0) {
		var_9_int = 50;
		return 0;
	}
	var_108_bool = var_10_string == "dohodyaga_d";
	if(var_108_bool != 0) {
		var_9_int = 51;
		return 0;
	}
	var_110_bool = var_10_string == "girl_d";
	if(var_110_bool != 0) {
		var_9_int = 52;
		return 0;
	}
	var_112_bool = var_10_string == "littleboy_d";
	if(var_112_bool != 0) {
		var_9_int = 53;
		return 0;
	}
	var_114_bool = var_10_string == "littlegirl_d";
	if(var_114_bool != 0) {
		var_9_int = 54;
		return 0;
	}
	var_116_bool = var_10_string == "unosha2";
	if(var_116_bool != 0) {
		var_9_int = 55;
		return 0;
	}
	var_118_bool = var_10_string == "unosha_d";
	if(var_118_bool != 0) {
		var_9_int = 56;
		return 0;
	}
	var_120_bool = var_10_string == "unosha2_d";
	if(var_120_bool != 0) {
		var_9_int = 57;
		return 0;
	}
	var_122_bool = var_10_string == "vaxxabit_d";
	if(var_122_bool != 0) {
		var_9_int = 58;
		return 0;
	}
	var_124_bool = var_10_string == "vaxxabitka_d";
	if(var_124_bool != 0) {
		var_9_int = 59;
		return 0;
	}
	var_126_bool = var_10_string == "wasted_male_d";
	if(var_126_bool != 0) {
		var_9_int = 60;
		return 0;
	}
	var_128_bool = var_10_string == "wasted_woman_d";
	if(var_128_bool != 0) {
		var_9_int = 61;
		return 0;
	}
	var_130_bool = var_10_string == "woman_d";
	if(var_130_bool != 0) {
		var_9_int = 62;
		return 0;
	}
	var_132_bool = var_10_string == "worker2";
	if(var_132_bool != 0) {
		var_9_int = 63;
		return 0;
	}
	var_134_bool = var_10_string == "worker_d";
	if(var_134_bool != 0) {
		var_9_int = 64;
		return 0;
	}
	var_136_bool = var_10_string == "worker2_d";
	if(var_136_bool != 0) {
		var_9_int = 65;
		return 0;
	}
	var_138_bool = var_10_string == "burah";
	if(var_138_bool != 0) {
		var_9_int = 66;
		return 0;
	}
	var_140_bool = var_10_string == "gorbun_daughter";
	if(var_140_bool != 0) {
		var_9_int = 67;
		return 0;
	}
	var_142_bool = var_10_string == "gorbun";
	if(var_142_bool != 0) {
		var_9_int = 68;
		return 0;
	}
	var_144_bool = var_10_string == "albinos";
	if(var_144_bool != 0) {
		var_9_int = 69;
		return 0;
	}
	var_146_bool = var_10_string == "aglaja";
	if(var_146_bool != 0) {
		var_9_int = 70;
		return 0;
	}
	var_148_bool = var_10_string == "nude";
	if(var_148_bool != 0) {
		var_9_int = 71;
		return 0;
	}
	var_150_bool = var_10_string == "block";
	if(var_150_bool != 0) {
		var_9_int = 72;
		return 0;
	}
	var_152_bool = var_10_string == "officer";
	if(var_152_bool != 0) {
		var_9_int = 73;
		return 0;
	}
	var_9_int = -1;
	return 0;
}


func_573(var_30_string, var_31_int)
{
	var_32_string = ""; var_33_string = "";
	var_34_int = var_31_int;
	if(var_34_int != 0) {
		"idle" = "idle" + var_31_int;
	}
	var_33_string = var_30_string;
	return 2;
}


func_638(var_287_bool, var_288_object)
{
	var_289_bool = 0; var_290_object = Obj(); var_291_string = "";
	var_288_object = var_290_object;
	func_554(var_289_bool, var_290_object, "burah_serum");
	if(var_289_bool != 0) {
		var_287_bool = 1;
		return 0;
	}
	var_287_bool = 0;
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_227_object, var_228_object)
{
	var_0_object = var_228_object;
	var_1_object = var_227_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_234_bool = 0; var_235_object = Obj();
		var_235_object = var_1_object;
		func_660(var_234_bool, var_235_object);
		if(var_234_bool != 0) {
			var_248_object = Obj(); var_249_object = Obj();
			var_248_object = var_1_object;
			var_249_object = var_0_object;
			func_603();
			var_258_string = "";
			func_161(var_228_object, "Neutral");
			@@@var_0_object:SetMessage((int)14075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14076, (int)15314, (int)15313);
		} else {
				var_285_string = "";
				func_161(var_228_object, "Neutral");
				@@@var_0_object:SetMessage((int)14079);
				@@@var_0_object:ClearReplies();
				var_287_bool = 0; var_288_object = Obj();
				var_288_object = var_1_object;
				func_638(var_287_bool, var_288_object);
				if(var_287_bool != 0) {
					@@@var_0_object:AddReply((int)14080, (int)15318, (int)15317);
				}
				var_299_bool = 0; var_300_object = Obj();
				var_300_object = var_1_object;
				func_649(var_299_bool, var_300_object);
				if(var_299_bool != 0) {
					@@@var_0_object:AddReply((int)14110, (int)15326, (int)15325);
				}
				@@@var_0_object:AddReply((int)14082, (int)-1, (int)15319);
				goto Label_131;
		}
	}
Label_131:
	var_277_bool = 0;
	func_1074(var_277_bool);
	if(var_277_bool != 0) {

	Label_135:
		lshWaitForAnimEnd();
		var_278_string = var_3_string;
		if(var_278_string != 0) {
		} else {
			var_279_string = "";
			var_279_string = var_2_object;
			func_519(var_279_string);
			goto Label_135;
	}
		PlayAnimation("all", "idle");

	Label_150:
		WaitForAnimEnd();
		var_282_string = var_3_string;
		if(var_282_string != 0) {
			goto Label_160;
		}
		PlayAnimation("all", "idle");
		goto Label_150;

	}
	goto Label_160;
	
Label_160:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


