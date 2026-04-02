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
			func_699();
			if(var_6_int == 41142) {
				bool var_12_bool;
				func_736(var_1_object);
				if(!var_12_bool) { //@nz
					func_165(var_7_bool, "Neutral");
					var_0_object->SetMessage(539199); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540975, 43646, 43065); //@t
					var_0_object->AddReply(539200, 43646, 41143); //@t
					return 0;
				}
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(539201); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539202, -1, 41145); //@t
				var_0_object->AddReply(540976, -1, 43066); //@t
				return 0;
			}
			if(var_6_int == 43646) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(541486); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541487, 43653, 43647); //@t
				var_0_object->AddReply(541488, 43649, 43648); //@t
				return 0;
			}
			if(var_6_int == 43649) {
				func_165(var_7_bool, "Isee");
				var_0_object->SetMessage(541489); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541490, 45215, 43650); //@t
				var_0_object->AddReply(541491, 43653, 43651); //@t
				return 0;
			}
			if(var_6_int == 43653) {
				func_165(var_7_bool, "Confusion");
				var_0_object->SetMessage(541492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541493, 43657, 43655); //@t
				var_0_object->AddReply(541494, 45215, 43656); //@t
				return 0;
			}
			if(var_6_int == 43657) {
				func_165(var_7_bool, "Confusion");
				var_0_object->SetMessage(541495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541496, 45215, 43658); //@t
				var_0_object->AddReply(541497, 45215, 43659); //@t
				return 0;
			}
			if(var_6_int == 45215) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(542795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542797, -1, 45220); //@t
				var_0_object->AddReply(542796, -1, 45219); //@t
				return 0;
			}
			var_3_string = true;
			bool var_103_bool;
			func_773(var_103_bool);
			if(var_103_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbc";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

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
				func_426(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_706(var_14_object);
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
			func_426(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_706(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_428(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_767(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_765(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_769(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_771(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_748(var_70_int);
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
	func_706(var_81_object);
	var_81_object = var_80_object;
	func_515(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_240_bool = !var_17_bool; //@nz
		if(var_240_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_241_object;
	var_8_object = var_241_object;
	func_497();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_769(string var_68_string)
{
	var_68_string = "ui/NPC_Aglaja.png";
}


void func_706(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_771(string var_69_string)
{
	var_69_string = "ui/NPC_Aglaja_b.png";
}


void func_515(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_573(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_610(var_121_bool, var_122_object);
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
		func_610(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_573(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_571;
	
Label_571:
	var_79_bool = true;
	
}


void func_773(bool var_61_bool)
{
	var_61_bool = true;
}


void func_712(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_765(int var_67_int)
{
	var_67_int = 515527;
}


void func_653(string var_216_string)
{
	bool var_220_bool; float var_221_float; float var_222_float;
	@lshHasAnimation(var_220_bool, var_216_string);
	if(var_220_bool != 0) {
		@lshGetAnimTimes(var_216_string, var_221_float, var_222_float);
		@lshPlayAnimation(var_221_float, var_222_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_216_string);
	}
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_736(var_174_object);
		if(!var_181_bool) { //@nz
			func_165(var_175_object, "Neutral");
			var_0_object->SetMessage(539199); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(540975, 43646, 43065); //@t
			var_0_object->AddReply(539200, 43646, 41143); //@t
		} else {
					func_165(var_175_object, "Neutral");
					var_0_object->SetMessage(539201); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539202, -1, 41145); //@t
					var_0_object->AddReply(540976, -1, 43066); //@t
		}
	}
	for(;;) {
		bool var_214_bool;
		func_773(var_214_bool);
		if(var_214_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_653(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_164;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_164:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_722(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


void func_727(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_669(string var_194_string, bool var_195_bool)
{
	bool var_201_bool; float var_202_float; float var_203_float;
	@lshHasAnimation(var_201_bool, var_194_string);
	if(var_201_bool != 0) {
		@lshGetAnimTimes(var_194_string, var_202_float, var_203_float);
		@lshPlayAnimation(var_202_float, var_203_float, var_195_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_194_string);
	}
	
}


// @pe
void func_736(bool var_181_bool)
{
	int var_183_int;
	func_722(var_183_int, "game_final");
	if(var_183_int != 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


void func_610(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_727(var_134_int);
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
		func_684(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


// @pe
void func_165(object var_2_object, string var_190_string)
{
	bool var_191_bool;
	func_773(var_191_bool);
	if(!var_191_bool) //@nz
		return 0;
	if(var_190_string == var_2_object)
		return 0;
	string var_194_string; bool var_195_bool;
	var_190_string = var_194_string;
	if(var_190_string == "")
		var_195_bool = false;
	else
		var_195_bool = true;
	func_669(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	
}


void func_426(bool var_8_bool)
{
	var_8_bool = true;
}


void func_428(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_712(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_773(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_491;
		@LookAsyncCamera("head");
	}
Label_491:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_684(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_773(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


void func_748(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x2fb";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_497(void)
{
	bool var_243_bool;
	@CameraSwitchToNormal(true);
	bool var_245_bool;
	func_773(var_245_bool);
	if(var_245_bool != 0) {
	} else {
		@HasAnimationTrack(var_243_bool, "head");
		if(var_243_bool == 0) goto Label_514;
		@UnlookAsync("head");
	}
Label_514:
	
}


void func_699(void)
{
	bool var_9_bool;
	func_773(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_573(bool var_90_bool, object var_91_object)
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
		func_684(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_767(int var_66_int)
{
	var_66_int = 513334;
}


