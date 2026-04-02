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
			func_840();
			if(var_6_int == 31666) {
				bool var_12_bool;
				func_893(var_1_object);
				if(!var_12_bool) { //@nz
					object var_21_object; object var_22_object;
					var_21_object = var_1_object;
					var_22_object = var_0_object;
					func_887();
					func_170(var_7_bool, "Isee");
					var_0_object->SetMessage(530278); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530919, 32247, 32246); //@t
					var_0_object->AddReply(530923, 32251, 32250); //@t
					return 0;
				}
				func_170(var_7_bool, "Neutral");
				var_0_object->SetMessage(530288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530289, -1, 31677); //@t
				var_0_object->AddReply(530918, -1, 32245); //@t
				return 0;
			}
			if(var_6_int == 32251) {
				func_170(var_7_bool, "Neutral");
				var_0_object->SetMessage(530924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530926, 32247, 32253); //@t
				var_0_object->AddReply(530925, 32247, 32252); //@t
				return 0;
			}
			if(var_6_int == 32247) {
				func_170(var_7_bool, "Isee");
				var_0_object->SetMessage(530920); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530921, 32249, 32248); //@t
				var_0_object->AddReply(531006, -1, 32333); //@t
				return 0;
			}
			if(var_6_int == 32249) {
				func_170(var_7_bool, "Neutral");
				var_0_object->SetMessage(530922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530279, 31668, 31667); //@t
				var_0_object->AddReply(531005, 32334, 32332); //@t
				return 0;
			}
			if(var_6_int == 32334) {
				func_170(var_7_bool, "Neutral");
				var_0_object->SetMessage(531007); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531008, 31668, 32335); //@t
				return 0;
			}
			if(var_6_int == 31668) {
				func_170(var_7_bool, "Neutral");
				var_0_object->SetMessage(530280); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531011, 32340, 32339); //@t
				var_0_object->AddReply(531009, 32338, 32337); //@t
				return 0;
			}
			if(var_6_int == 32338) {
				func_170(var_7_bool, "Neutral");
				var_0_object->SetMessage(531010); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531013, 32340, 32341); //@t
				var_0_object->AddReply(531014, -1, 32342); //@t
				return 0;
			}
			if(var_6_int == 32340) {
				func_170(var_7_bool, "Threat");
				var_0_object->SetMessage(531012); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530281, 31670, 31669); //@t
				var_0_object->AddReply(531016, -1, 32345); //@t
				return 0;
			}
			if(var_6_int == 31670) {
				func_170(var_7_bool, "Neutral");
				var_0_object->SetMessage(530282); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530283, -1, 31671); //@t
				var_0_object->AddReply(531015, 32346, 32344); //@t
				return 0;
			}
			if(var_6_int == 32346) {
				func_170(var_7_bool, "Neutral");
				var_0_object->SetMessage(531017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531018, -1, 32347); //@t
				var_0_object->AddReply(531019, -1, 32348); //@t
				return 0;
			}
			var_3_string = true;
			bool var_144_bool;
			func_885(var_144_bool);
			if(var_144_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc1";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool;
		func_564(var_6_bool);
		if(!var_6_bool) //@nz
			@Hold();
		for(;;) {
			func_794("Neutral");
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
				func_847(var_12_object);
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
			func_847(var_7_object);
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
			func_555(var_10_bool, var_11_object);
			enable OnUse;
			object var_24_object;
			var_6_object = var_24_object;
			func_467(var_24_object);
		}
	}

}


void func_0(object var_0_object, int var_25_int, object var_26_object)
{
	var_0_object = var_26_object;
	bool var_36_bool; object var_37_object;
	var_26_object = var_37_object;
	func_569(var_36_bool, var_37_object, 70.0);
	if(!var_36_bool) { //@nz
		var_25_int = -2;
		return 8;
	}
	object var_32_object;
	@CreateDialog(var_32_object);
	int var_84_int;
	func_879(var_84_int);
	var_32_object->SetNPCName(var_84_int);
	int var_85_int;
	func_877(var_85_int);
	var_32_object->SetNPCDescription(var_85_int);
	string var_86_string;
	func_881(var_86_string);
	var_32_object->SetPhoto(var_86_string);
	string var_87_string;
	func_883(var_87_string);
	var_32_object->SetPhoto2(var_87_string);
	int var_88_int;
	func_905(var_88_int);
	var_32_object->SetPlayerName(var_88_int);
	bool var_33_bool;
	@IsOverrideActive(var_33_bool);
	if(var_33_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	@DoDialog(var_32_object);
	bool var_97_bool; object var_98_object;
	object var_99_object;
	func_847(var_99_object);
	var_99_object = var_98_object;
	func_656(var_97_bool, var_98_object);
	object var_192_object; object var_193_object;
	var_26_object = var_192_object;
	var_32_object = var_193_object;
	TaskCall(1);
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_35_bool;
	var_32_object->IsDialogEnd(var_35_bool);
	
	for(;;) {
		var_262_bool = !var_35_bool; //@nz
		if(var_262_bool == 0) goto Label_70;
		@sync();
		var_32_object->IsDialogEnd(var_35_bool);
	}
	
Label_70:
	object var_263_object;
	var_26_object = var_263_object;
	func_638();
	@StopDialog(var_32_object);
	var_32_object->GetReturnValue(-1);
	int var_34_int = var_25_int;
}
EMIT "Stack[-4] = 0";


void func_840(void)
{
	bool var_9_bool;
	func_885(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_905(int var_88_int)
{
	int var_90_int;
	@GetVariable("branch", var_90_int);
	if(var_90_int == 0) {
		var_88_int = 1;
		return 2;
	EMIT "GOTO 0x398";
	}
	if(var_90_int == 1) {
		var_88_int = 2;
		return 2;
	}
	var_88_int = 3;
}


void func_714(bool var_108_bool, object var_109_object)
{
	string var_115_string; bool var_117_bool; int var_118_int; string var_119_string;
	var_115_string = "c";
	int var_116_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_109_object->HasProperty((var_115_string + (var_116_int + 1)), var_117_bool);
			if(!var_117_bool) { //@nz
			} else {
				var_116_int += 1;
			}
		}
		if(!var_116_int) { //@nz
			var_108_bool = false;
			return 10;
		}
		var_118_int = 0;
		if(var_116_int > 1)
			@irand(var_118_int, var_116_int);
		var_109_object->GetProperty((var_115_string + (var_118_int + 1)), var_119_string);
		bool var_131_bool; string var_132_string;
		var_119_string = var_132_string;
		func_825(var_131_bool, var_132_string);
		var_131_bool = var_108_bool;
		return 10;

	}
}


void func_847(object var_99_object)
{
	object var_101_object;
	@self(var_101_object);
	var_101_object = var_99_object;
}
EMIT "Stack[-1] = 0";


void func_656(bool var_97_bool, object var_98_object)
{
	int var_104_int; int var_105_int;
	@GetVariable("voice_common", var_104_int);
	if(var_104_int != 0) {
		bool var_108_bool; object var_109_object;
		var_98_object = var_109_object;
		func_714(var_108_bool, var_109_object);
		if(!var_108_bool) { //@nz
			bool var_139_bool; object var_140_object;
			var_98_object = var_140_object;
			func_751(var_139_bool, var_140_object);
			if(!var_139_bool) { //@nz
				var_97_bool = false;
				return 4;
			}
		}
		@irand(var_105_int, 2);
		if(var_105_int != 0)
			@SetVariable("voice_common", ((var_104_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_184_bool; object var_185_object;
		var_98_object = var_185_object;
		func_751(var_184_bool, var_185_object);
		if(!var_184_bool) { //@nz
			bool var_187_bool; object var_188_object;
			var_98_object = var_188_object;
			func_714(var_187_bool, var_188_object);
			if(!var_187_bool) { //@nz
				var_97_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_712;
	
Label_712:
	var_97_bool = true;
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool;
		func_893(var_1_object);
		if(!var_199_bool) { //@nz
			object var_208_object; object var_209_object;
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_887();
			func_170(var_193_object, "Isee");
			var_0_object->SetMessage(530278); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530919, 32247, 32246); //@t
			var_0_object->AddReply(530923, 32251, 32250); //@t
		} else {
					func_170(var_193_object, "Neutral");
					var_0_object->SetMessage(530288); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530289, -1, 31677); //@t
					var_0_object->AddReply(530918, -1, 32245); //@t
		}
	}
	for(;;) {
		bool var_236_bool;
		func_885(var_236_bool);
		if(var_236_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_794(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_169;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_169:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_467(object var_24_object)
{
	object var_26_object;
	var_24_object = var_26_object;
	TaskCall(0);
	int var_25_int;
	func_0(var_27_object, var_25_int, var_26_object);
	TaskReturn();
}


void func_853(cvector var_63_cvector, cvector var_64_cvector)
{
	float var_67_float = sqrt(var_64_cvector | var_64_cvector);
	if(var_67_float < 0.000001)
		var_63_cvector = [0.0, 0.0, 0.0];
	var_63_cvector = var_64_cvector / var_67_float;
}


void func_794(string var_10_string)
{
	bool var_14_bool; float var_15_float; float var_16_float;
	@lshHasAnimation(var_14_bool, var_10_string);
	if(var_14_bool != 0) {
		@lshGetAnimTimes(var_10_string, var_15_float, var_16_float);
		@lshPlayAnimation(var_15_float, var_16_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_10_string);
	}
	
}


void func_863(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_545(bool var_14_bool, cvector var_15_cvector)
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


void func_868(int var_152_int)
{
	float var_154_float;
	@GetGameTime(var_154_float);
	var_152_int = 1 + (var_154_float / 24);
}


// @pe
void func_170(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_885(var_213_bool);
	if(!var_213_bool) //@nz
		return 0;
	if(var_212_string == var_2_object)
		return 0;
	string var_216_string; bool var_217_bool;
	var_212_string = var_216_string;
	if(var_212_string == "")
		var_217_bool = false;
	else
		var_217_bool = true;
	func_810(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


void func_810(string var_216_string, bool var_217_bool)
{
	bool var_223_bool; float var_224_float; float var_225_float;
	@lshHasAnimation(var_223_bool, var_216_string);
	if(var_223_bool != 0) {
		@lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		@lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_216_string);
	}
	
}


void func_555(bool var_10_bool, object var_11_object)
{
	cvector var_13_cvector;
	var_11_object->GetPosition(var_13_cvector);
	bool var_14_bool; cvector var_15_cvector;
	var_13_cvector = var_15_cvector;
	func_545(var_14_bool, var_15_cvector);
	var_14_bool = var_10_bool;
}


void func_877(int var_85_int)
{
	var_85_int = 515527;
}


void func_569(bool var_36_bool, object var_37_object, float var_38_float)
{
	cvector var_49_cvector; bool var_56_bool;
	var_37_object->GetPosition(var_49_cvector);
	float var_48_float;
	var_37_object->GetEyesHeight(var_48_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	SetByIndex(var_49_cvector, 1) = (var_57_float + var_48_float);
	cvector var_50_cvector;
	@GetPosition(var_50_cvector);
	@GetEyesHeight(var_48_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_48_float);
	cvector var_51_cvector = var_49_cvector - var_50_cvector;
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (float)0;
	var_61_float = sqrt(var_51_cvector | var_51_cvector);
	var_51_cvector /= var_61_float;
	cvector var_52_cvector = -var_51_cvector;
	cvector var_63_cvector;
	func_853(var_63_cvector, (var_52_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_53_cvector = ((var_51_cvector * var_38_float) + (var_63_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0)
		var_36_bool = false;
	@StopWorld();
	@CameraTransit((var_50_cvector + var_53_cvector), var_52_cvector, true);
	var_77_float = GetByIndex(var_53_cvector, 0);
	var_78_float = GetByIndex(var_53_cvector, 2);
	@Rotate(var_77_float, var_78_float);
	bool var_79_bool;
	func_885(var_79_bool);
	if(var_79_bool != 0) {
	} else {
		@HasAnimationTrack(var_56_bool, "head");
		if(var_56_bool == 0) goto Label_632;
		@LookAsyncCamera("head");
	}
Label_632:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_36_bool = true;
	
}


void func_879(int var_84_int)
{
	var_84_int = 513334;
}


void func_751(bool var_139_bool, object var_140_object)
{
	bool var_148_bool; int var_149_int; string var_150_string;
	int var_152_int;
	func_868(var_152_int);
	string var_146_string = ("d" + var_152_int) + "m";
	int var_147_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_140_object->HasProperty((var_146_string + (var_147_int + 1)), var_148_bool);
			if(!var_148_bool) { //@nz
			} else {
				var_147_int += 1;
			}
		}
		if(!var_147_int) { //@nz
			var_139_bool = false;
			return 10;
		}
		var_149_int = 0;
		if(var_147_int > 1)
			@irand(var_149_int, var_147_int);
		var_140_object->GetProperty((var_146_string + (var_149_int + 1)), var_150_string);
		bool var_171_bool; string var_172_string;
		var_150_string = var_172_string;
		func_825(var_171_bool, var_172_string);
		var_171_bool = var_139_bool;
		return 10;

	}
}


void func_881(string var_86_string)
{
	var_86_string = "ui/NPC_Aglaja.png";
}


void func_883(string var_87_string)
{
	var_87_string = "ui/NPC_Aglaja_b.png";
}


void func_564(bool var_6_bool)
{
	bool var_8_bool;
	@IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
}


void func_885(bool var_79_bool)
{
	var_79_bool = true;
}


// @pe
void func_887(void)
{
	@SetVariable("b9q03AglajaTalk", 1);
}


void func_825(bool var_131_bool, string var_132_string)
{
	bool var_134_bool;
	bool var_135_bool;
	func_885(var_135_bool);
	if(var_135_bool != 0) {
		@lshHasSpeech(var_134_bool, var_132_string);
		if(var_134_bool != 0) {
			@lshPlaySpeech(var_132_string);
			var_131_bool = true;
		}
	}
	var_131_bool = false;
}


// @pe
void func_893(bool var_199_bool)
{
	int var_201_int;
	func_863(var_201_int, "b9q03AglajaTalk");
	if(var_201_int != 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


void func_638(void)
{
	bool var_265_bool;
	@CameraSwitchToNormal(true);
	bool var_267_bool;
	func_885(var_267_bool);
	if(var_267_bool != 0) {
	} else {
		@HasAnimationTrack(var_265_bool, "head");
		if(var_265_bool == 0) goto Label_655;
		@UnlookAsync("head");
	}
Label_655:
	
}


