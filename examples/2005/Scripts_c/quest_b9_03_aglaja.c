// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_836();
			if(var_6_int == 31666) {
				bool var_12_bool;
				func_889(var_1_object);
				if(!var_12_bool) { //@nz
					object var_21_object; object var_22_object;
					var_21_object = var_1_object;
					var_22_object = var_0_object;
					func_883();
					func_183(var_7_bool, "Neutral");
					var_0_object->SetMessage(530278); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530919, 32247, 32246); //@t
					var_0_object->AddReply(530923, 32251, 32250); //@t
					return 0;
				}
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(530288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530289, -1, 31677); //@t
				var_0_object->AddReply(530918, -1, 32245); //@t
				return 0;
			}
			if(var_6_int == 32251) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(530924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530926, 32247, 32253); //@t
				var_0_object->AddReply(530925, 32247, 32252); //@t
				return 0;
			}
			if(var_6_int == 32247) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(530920); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530921, 32249, 32248); //@t
				var_0_object->AddReply(531006, -1, 32333); //@t
				return 0;
			}
			if(var_6_int == 32249) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(530922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530279, 31668, 31667); //@t
				var_0_object->AddReply(531005, 32334, 32332); //@t
				return 0;
			}
			if(var_6_int == 32334) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(531007); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531008, 31668, 32335); //@t
				return 0;
			}
			if(var_6_int == 31668) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(530280); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531011, 32340, 32339); //@t
				var_0_object->AddReply(531009, 32338, 32337); //@t
				return 0;
			}
			if(var_6_int == 32338) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(531010); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531013, 32340, 32341); //@t
				var_0_object->AddReply(531014, -1, 32342); //@t
				return 0;
			}
			if(var_6_int == 32340) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(531012); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530281, 31670, 31669); //@t
				var_0_object->AddReply(531016, -1, 32345); //@t
				return 0;
			}
			if(var_6_int == 31670) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(530282); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530283, -1, 31671); //@t
				var_0_object->AddReply(531015, 32346, 32344); //@t
				return 0;
			}
			if(var_6_int == 32346) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(531017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531018, -1, 32347); //@t
				var_0_object->AddReply(531019, -1, 32348); //@t
				return 0;
			}
			var_3_string = true;
			bool var_139_bool;
			func_881(var_139_bool);
			if(var_139_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xce";
	
	}

}


maintask task_3
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool;
		func_580(var_6_bool);
		if(!var_6_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_808("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			if(!var_8_bool) { //@nz
				object var_12_object;
				func_843(var_12_object);
				@RemoveActor(var_12_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		if(var_0_object != 0) {
			object var_7_object;
			func_843(var_7_object);
			@RemoveActor(var_7_object);
			@Hold();
		}
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		bool var_8_bool;
		@IsOverrideActive(var_8_bool);
		if(!var_8_bool) { //@nz
			disable OnUse;
			bool var_10_bool; object var_11_object;
			var_6_object = var_11_object;
			func_571(var_10_bool, var_11_object);
			enable OnUse;
			object var_24_object;
			var_6_object = var_24_object;
			func_480(var_24_object);
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_10_bool;
	func_580(var_10_bool);
	if(!var_10_bool) goto Label_0; //@nz
}


void func_901(int var_182_int)
{
	int var_184_int;
	@GetVariable("branch", var_184_int);
	if(var_184_int == 0) {
		var_182_int = 1;
		return 2;
	EMIT "GOTO 0x394";
	}
	if(var_184_int == 1) {
		var_182_int = 2;
		return 2;
	}
	var_182_int = 3;
}


void func_13(object var_0_object, int var_25_int, object var_26_object)
{
	var_0_object = var_26_object;
	bool var_36_bool; object var_37_object;
	object var_38_object;
	func_843(var_38_object);
	var_38_object = var_37_object;
	func_670(var_36_bool, var_37_object);
	bool var_131_bool; object var_132_object;
	var_26_object = var_132_object;
	func_585(var_131_bool, var_132_object, 70.0);
	if(!var_131_bool) { //@nz
		var_25_int = -2;
		return 8;
	}
	object var_32_object;
	@CreateDialog(var_32_object);
	int var_178_int;
	func_875(var_178_int);
	var_32_object->SetNPCName(var_178_int);
	int var_179_int;
	func_873(var_179_int);
	var_32_object->SetNPCDescription(var_179_int);
	string var_180_string;
	func_877(var_180_string);
	var_32_object->SetPhoto(var_180_string);
	string var_181_string;
	func_879(var_181_string);
	var_32_object->SetPhoto2(var_181_string);
	int var_182_int;
	func_901(var_182_int);
	var_32_object->SetPlayerName(var_182_int);
	bool var_33_bool;
	@IsOverrideActive(var_33_bool);
	if(var_33_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	@DoDialog(var_32_object);
	object var_191_object; object var_192_object;
	var_26_object = var_191_object;
	var_32_object = var_192_object;
	TaskCall(2);
	func_94(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object);
	TaskReturn();
	bool var_35_bool;
	var_32_object->IsDialogEnd(var_35_bool);
	
	for(;;) {
		var_251_bool = !var_35_bool; //@nz
		if(var_251_bool == 0) goto Label_83;
		@sync();
		var_32_object->IsDialogEnd(var_35_bool);
	}
	
Label_83:
	object var_252_object;
	var_26_object = var_252_object;
	func_653();
	@StopDialog(var_32_object);
	var_32_object->GetReturnValue(-1);
	int var_34_int = var_25_int;
}
EMIT "Stack[-4] = 0";


void func_653(void)
{
	bool var_254_bool;
	@CameraSwitchToNormal();
	bool var_255_bool;
	func_881(var_255_bool);
	if(var_255_bool != 0) {
	} else {
		@HasAnimationTrack(var_254_bool, "head");
		if(var_254_bool == 0) goto Label_669;
		@UnlookAsync("head");
	}
Label_669:
	
}


void func_670(bool var_36_bool, object var_37_object)
{
	int var_43_int; int var_44_int;
	@GetVariable("voice_common", var_43_int);
	if(var_43_int != 0) {
		bool var_47_bool; object var_48_object;
		var_37_object = var_48_object;
		func_728(var_47_bool, var_48_object);
		if(!var_47_bool) { //@nz
			bool var_78_bool; object var_79_object;
			var_37_object = var_79_object;
			func_765(var_78_bool, var_79_object);
			if(!var_78_bool) { //@nz
				var_36_bool = false;
				return 4;
			}
		}
		@irand(var_44_int, 2);
		if(var_44_int != 0)
			@SetVariable("voice_common", ((var_43_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_123_bool; object var_124_object;
		var_37_object = var_124_object;
		func_765(var_123_bool, var_124_object);
		if(!var_123_bool) { //@nz
			bool var_126_bool; object var_127_object;
			var_37_object = var_127_object;
			func_728(var_126_bool, var_127_object);
			if(!var_126_bool) { //@nz
				var_36_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_726;
	
Label_726:
	var_36_bool = true;
	
}


void func_808(string var_12_string)
{
	float var_15_float; float var_16_float;
	@lshGetAnimTimes(var_12_string, var_15_float, var_16_float);
	@lshPlayAnimation(var_15_float, var_16_float, false);
}


void func_815(string var_215_string, bool var_216_bool)
{
	float var_221_float; float var_222_float;
	@lshGetAnimTimes(var_215_string, var_221_float, var_222_float);
	@lshPlayAnimation(var_221_float, var_222_float, var_216_bool);
}


void func_561(bool var_14_bool, cvector var_15_cvector)
{
	cvector var_19_cvector;
	@GetPosition(var_19_cvector);
	cvector var_20_cvector = var_15_cvector - var_19_cvector;
	var_22_float = GetByIndex(var_20_cvector, 0);
	var_23_float = GetByIndex(var_20_cvector, 2);
	bool var_21_bool;
	@Rotate(var_22_float, var_23_float, var_21_bool);
	var_21_bool = var_14_bool;
}


void func_821(bool var_70_bool, string var_71_string)
{
	bool var_73_bool;
	bool var_74_bool;
	func_881(var_74_bool);
	if(var_74_bool != 0) {
		@lshHasSpeech(var_73_bool, var_71_string);
		if(var_73_bool != 0) {
			@lshPlaySpeech(var_71_string);
			var_70_bool = true;
		}
	}
	var_70_bool = false;
}


// @pe
void func_183(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_881(var_212_bool);
	if(!var_212_bool) //@nz
		return 0;
	if(var_211_string == var_2_object)
		return 0;
	string var_215_string; bool var_216_bool;
	var_211_string = var_215_string;
	if(var_211_string == "")
		var_216_bool = false;
	else
		var_216_bool = true;
	func_815(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	
}


void func_571(bool var_10_bool, object var_11_object)
{
	cvector var_13_cvector;
	var_11_object->GetPosition(var_13_cvector);
	bool var_14_bool; cvector var_15_cvector;
	var_13_cvector = var_15_cvector;
	func_561(var_14_bool, var_15_cvector);
	var_14_bool = var_10_bool;
}


void func_580(bool var_6_bool)
{
	bool var_8_bool;
	@IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
}


void func_836(void)
{
	bool var_9_bool;
	func_881(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_585(bool var_131_bool, object var_132_object, float var_133_float)
{
	cvector var_144_cvector; bool var_151_bool;
	var_132_object->GetPosition(var_144_cvector);
	float var_143_float;
	var_132_object->GetEyesHeight(var_143_float);
	var_152_float = GetByIndex(var_144_cvector, 1);
	SetByIndex(var_144_cvector, 1) = (var_152_float + var_143_float);
	cvector var_145_cvector;
	@GetPosition(var_145_cvector);
	@GetEyesHeight(var_143_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_143_float);
	cvector var_146_cvector = var_144_cvector - var_145_cvector;
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (float)0;
	var_156_float = sqrt(var_146_cvector | var_146_cvector);
	var_146_cvector /= var_156_float;
	cvector var_147_cvector = -var_146_cvector;
	cvector var_158_cvector;
	func_849(var_158_cvector, (var_147_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_148_cvector = ((var_146_cvector * var_133_float) + (var_158_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_150_bool;
	@IsOverrideActive(var_150_bool);
	if(var_150_bool != 0)
		var_131_bool = false;
	@StopWorld();
	@CameraTransit((var_145_cvector + var_148_cvector), var_147_cvector);
	var_171_float = GetByIndex(var_148_cvector, 0);
	var_172_float = GetByIndex(var_148_cvector, 2);
	@Rotate(var_171_float, var_172_float);
	bool var_173_bool;
	func_881(var_173_bool);
	if(var_173_bool != 0) {
	} else {
		@HasAnimationTrack(var_151_bool, "head");
		if(var_151_bool == 0) goto Label_647;
		@LookAsyncCamera("head");
	}
Label_647:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_131_bool = true;
	
}


void func_843(object var_38_object)
{
	object var_40_object;
	@self(var_40_object);
	var_40_object = var_38_object;
}
EMIT "Stack[-1] = 0";


void func_849(cvector var_158_cvector, cvector var_159_cvector)
{
	float var_162_float = sqrt(var_159_cvector | var_159_cvector);
	if(var_162_float < 0.000001)
		var_158_cvector = [0.0, 0.0, 0.0];
	var_158_cvector = var_159_cvector / var_162_float;
}


void func_728(bool var_47_bool, object var_48_object)
{
	string var_54_string; bool var_56_bool; int var_57_int; string var_58_string;
	var_54_string = "c";
	int var_55_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_48_object->HasProperty((var_54_string + (var_55_int + 1)), var_56_bool);
			if(!var_56_bool) { //@nz
			} else {
				var_55_int += 1;
			}
		}
		if(!var_55_int) { //@nz
			var_47_bool = false;
			return 10;
		}
		var_57_int = 0;
		if(var_55_int > 1)
			@irand(var_57_int, var_55_int);
		var_48_object->GetProperty((var_54_string + (var_57_int + 1)), var_58_string);
		bool var_70_bool; string var_71_string;
		var_58_string = var_71_string;
		func_821(var_70_bool, var_71_string);
		var_70_bool = var_47_bool;
		return 10;

	}
}


void func_859(int var_200_int, string var_201_string)
{
	int var_203_int;
	@GetVariable(var_201_string, var_203_int);
	var_203_int = var_200_int;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_191_object, object var_192_object)
{
	var_0_object = var_192_object;
	var_1_object = var_191_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_198_bool;
		func_889(var_1_object);
		if(!var_198_bool) { //@nz
			object var_207_object; object var_208_object;
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_883();
			func_183(var_192_object, "Neutral");
			var_0_object->SetMessage(530278); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530919, 32247, 32246); //@t
			var_0_object->AddReply(530923, 32251, 32250); //@t
		} else {
					func_183(var_192_object, "Neutral");
					var_0_object->SetMessage(530288); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530289, -1, 31677); //@t
					var_0_object->AddReply(530918, -1, 32245); //@t
		}
	}
	for(;;) {
		bool var_230_bool;
		func_881(var_230_bool);
		if(var_230_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_808(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_182;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_182:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


// @pe
void func_480(object var_24_object)
{
	object var_26_object;
	var_24_object = var_26_object;
	TaskCall(1);
	int var_25_int;
	func_13(var_27_object, var_25_int, var_26_object);
	TaskReturn();
}


void func_864(int var_91_int)
{
	float var_93_float;
	@GetGameTime(var_93_float);
	var_91_int = 1 + (var_93_float / 24);
}


void func_873(int var_179_int)
{
	var_179_int = 515527;
}


void func_875(int var_178_int)
{
	var_178_int = 513334;
}


void func_877(string var_180_string)
{
	var_180_string = "ui/NPC_Aglaja.png";
}


void func_879(string var_181_string)
{
	var_181_string = "ui/NPC_Aglaja_b.png";
}


void func_881(bool var_74_bool)
{
	var_74_bool = true;
}


// @pe
void func_883(void)
{
	@SetVariable("b9q03AglajaTalk", 1);
}


// @pe
void func_889(bool var_198_bool)
{
	int var_200_int;
	func_859(var_200_int, "b9q03AglajaTalk");
	if(var_200_int != 0) {
		var_198_bool = true;
		return 0;
	}
	var_198_bool = false;
}


void func_765(bool var_78_bool, object var_79_object)
{
	bool var_87_bool; int var_88_int; string var_89_string;
	int var_91_int;
	func_864(var_91_int);
	string var_85_string = ("d" + var_91_int) + "m";
	int var_86_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_79_object->HasProperty((var_85_string + (var_86_int + 1)), var_87_bool);
			if(!var_87_bool) { //@nz
			} else {
				var_86_int += 1;
			}
		}
		if(!var_86_int) { //@nz
			var_78_bool = false;
			return 10;
		}
		var_88_int = 0;
		if(var_86_int > 1)
			@irand(var_88_int, var_86_int);
		var_79_object->GetProperty((var_85_string + (var_88_int + 1)), var_89_string);
		bool var_110_bool; string var_111_string;
		var_89_string = var_111_string;
		func_821(var_110_bool, var_111_string);
		var_110_bool = var_78_bool;
		return 10;

	}
}


