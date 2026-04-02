// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_705();
			if(var_7_bool == 37326) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_742();
			}
			if(var_6_int == 37325) {
				func_144(var_7_bool, "Neutral");
				var_0_object->SetMessage(535639); //@t
				var_0_object->ClearReplies(); //@t
				bool var_36_bool;
				func_748(var_1_object);
				if(var_36_bool != 0)
					var_0_object->AddReply(535640, 42495, 37326); //@t
				var_0_object->AddReply(540495, -1, 42494); //@t
				return 0;
			}
			if(var_6_int == 42495) {
				func_144(var_7_bool, "Neutral");
				var_0_object->SetMessage(540496); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540500, 42500, 42499); //@t
				var_0_object->AddReply(540498, -1, 42497); //@t
				return 0;
			}
			if(var_6_int == 42500) {
				func_144(var_7_bool, "Neutral");
				var_0_object->SetMessage(540501); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540497, 42498, 42496); //@t
				return 0;
			}
			if(var_6_int == 42498) {
				func_144(var_7_bool, "Neutral");
				var_0_object->SetMessage(540499); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540502, 42502, 42501); //@t
				var_0_object->AddReply(540511, 42511, 42510); //@t
				return 0;
			}
			if(var_6_int == 42511) {
				func_144(var_7_bool, "Neutral");
				var_0_object->SetMessage(540512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540513, 42504, 42512); //@t
				var_0_object->AddReply(540514, -1, 42514); //@t
				return 0;
			}
			if(var_6_int == 42502) {
				func_144(var_7_bool, "Neutral");
				var_0_object->SetMessage(540503); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540504, 42504, 42503); //@t
				var_0_object->AddReply(540506, -1, 42505); //@t
				return 0;
			}
			if(var_6_int == 42504) {
				func_144(var_7_bool, "Neutral");
				var_0_object->SetMessage(540505); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540507, 42507, 42506); //@t
				return 0;
			}
			if(var_6_int == 42507) {
				func_144(var_7_bool, "Staring");
				var_0_object->SetMessage(540508); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540509, -1, 42508); //@t
				var_0_object->AddReply(540510, -1, 42509); //@t
				return 0;
			}
			var_3_string = true;
			bool var_114_bool;
			func_785(var_114_bool);
			if(var_114_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa7";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		func_384();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_432(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_712(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_432(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_712(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_384(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_434(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_779(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_777(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_781(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_783(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_760(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	bool var_79_bool; object var_80_object;
	object var_81_object;
	func_712(var_81_object);
	var_81_object = var_80_object;
	func_521(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_231_bool = !var_17_bool; //@nz
		if(var_231_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_232_object;
	var_8_object = var_232_object;
	func_503();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_705(void)
{
	bool var_9_bool;
	func_785(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_579(bool var_90_bool, object var_91_object)
{
	string var_97_string; bool var_99_bool; int var_100_int; string var_101_string;
	var_97_string = "c";
	int var_98_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_91_object->HasProperty((var_97_string + (var_98_int + 1)), var_99_bool);
			if(!var_99_bool) { //@nz
			} else {
				var_98_int += 1;
			}
		}
		if(!var_98_int) { //@nz
			var_90_bool = false;
			return 10;
		}
		var_100_int = 0;
		if(var_98_int > 1)
			@irand(var_100_int, var_98_int);
		var_91_object->GetProperty((var_97_string + (var_100_int + 1)), var_101_string);
		bool var_113_bool; string var_114_string;
		var_101_string = var_114_string;
		func_690(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_712(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_777(int var_67_int)
{
	var_67_int = 515543;
}


void func_521(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_579(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_616(var_121_bool, var_122_object);
			if(!var_121_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@irand(var_87_int, 2);
		if(var_87_int != 0)
			@SetVariable("voice_common", ((var_86_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_166_bool; object var_167_object;
		var_80_object = var_167_object;
		func_616(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_579(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_577;
	
Label_577:
	var_79_bool = true;
	
}


void func_779(int var_66_int)
{
	var_66_int = 502868;
}


void func_781(string var_68_string)
{
	var_68_string = "ui/NPC_Maria.png";
}


void func_718(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_783(string var_69_string)
{
	var_69_string = "ui/NPC_Maria_b.png";
}


// @pe
void func_144(object var_2_object, string var_181_string)
{
	bool var_182_bool;
	func_785(var_182_bool);
	if(!var_182_bool) //@nz
		return 0;
	if(var_181_string == var_2_object)
		return 0;
	string var_185_string; bool var_186_bool;
	var_181_string = var_185_string;
	if(var_181_string == "")
		var_186_bool = false;
	else
		var_186_bool = true;
	func_675(var_185_string, var_186_bool);
	var_2_object = var_181_string;
	
}


void func_785(bool var_61_bool)
{
	var_61_bool = true;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_3_string = false;
	if(1 != 0) {
		func_144(var_175_object, "Neutral");
		var_0_object->SetMessage(535639); //@t
		var_0_object->ClearReplies(); //@t
		bool var_199_bool;
		func_748(var_174_object);
		if(var_199_bool != 0)
			var_0_object->AddReply(535640, 42495, 37326); //@t
		var_0_object->AddReply(540495, -1, 42494); //@t
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	bool var_213_bool;
	func_785(var_213_bool);
	if(var_213_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_659(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_143;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_143:
		return 0;

	}
	
}


void func_659(string var_215_string)
{
	bool var_219_bool; float var_220_float; float var_221_float;
	@lshHasAnimation(var_219_bool, var_215_string);
	if(var_219_bool != 0) {
		@lshGetAnimTimes(var_215_string, var_220_float, var_221_float);
		@lshPlayAnimation(var_220_float, var_221_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_215_string);
	}
	
}


void func_728(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_733(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_675(string var_185_string, bool var_186_bool)
{
	bool var_192_bool; float var_193_float; float var_194_float;
	@lshHasAnimation(var_192_bool, var_185_string);
	if(var_192_bool != 0) {
		@lshGetAnimTimes(var_185_string, var_193_float, var_194_float);
		@lshPlayAnimation(var_193_float, var_194_float, var_186_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_185_string);
	}
	
}


// @pe
void func_742(void)
{
	@SetVariable("ood12MariaSobor1", 1);
}


void func_616(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_733(var_134_int);
	string var_128_string = ("d" + var_134_int) + "m";
	int var_129_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_122_object->HasProperty((var_128_string + (var_129_int + 1)), var_130_bool);
			if(!var_130_bool) { //@nz
			} else {
				var_129_int += 1;
			}
		}
		if(!var_129_int) { //@nz
			var_121_bool = false;
			return 10;
		}
		var_131_int = 0;
		if(var_129_int > 1)
			@irand(var_131_int, var_129_int);
		var_122_object->GetProperty((var_128_string + (var_131_int + 1)), var_132_string);
		bool var_153_bool; string var_154_string;
		var_132_string = var_154_string;
		func_690(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


// @pe
void func_748(bool var_199_bool)
{
	int var_201_int;
	func_728(var_201_int, "ood12MariaSobor1");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


void func_432(bool var_8_bool)
{
	var_8_bool = true;
}


void func_434(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_718(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_785(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_497;
		@LookAsyncCamera("head");
	}
Label_497:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_690(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_785(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


void func_503(void)
{
	bool var_234_bool;
	@CameraSwitchToNormal(true);
	bool var_236_bool;
	func_785(var_236_bool);
	if(var_236_bool != 0) {
	} else {
		@HasAnimationTrack(var_234_bool, "head");
		if(var_234_bool == 0) goto Label_520;
		@UnlookAsync("head");
	}
Label_520:
	
}


void func_760(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x307";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


