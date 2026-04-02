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
			func_798();
			if(var_7_bool == 24314) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_835();
			}
			if(var_7_bool == 24326) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_841();
			}
			if(var_6_int == 23350) {
				bool var_24_bool;
				func_847(var_1_object);
				if(!var_24_bool) { //@nz
					func_180(var_7_bool, "Saveyouall");
					var_0_object->SetMessage(522183); //@t
					var_0_object->ClearReplies(); //@t
					bool var_51_bool;
					func_859(var_1_object);
					if(var_51_bool != 0)
						var_0_object->AddReply(523114, 24315, 24314); //@t
					bool var_60_bool;
					func_871(var_1_object);
					if(var_60_bool != 0)
						var_0_object->AddReply(523126, 24327, 24326); //@t
					var_0_object->AddReply(523113, -1, 24313); //@t
					return 0;
				}
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523167); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522184, -1, 23351); //@t
				var_0_object->AddReply(523175, -1, 24377); //@t
				return 0;
			}
			if(var_6_int == 24327) {
				func_180(var_7_bool, "Fear");
				var_0_object->SetMessage(523127); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523128, 24329, 24328); //@t
				return 0;
			}
			if(var_6_int == 24329) {
				func_180(var_7_bool, "Fear");
				var_0_object->SetMessage(523129); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523130, -1, 24330); //@t
				var_0_object->AddReply(523131, 24332, 24331); //@t
				return 0;
			}
			if(var_6_int == 24332) {
				func_180(var_7_bool, "Neutral");
				var_0_object->SetMessage(523132); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523133, -1, 24333); //@t
				var_0_object->AddReply(523134, -1, 24334); //@t
				return 0;
			}
			if(var_6_int == 24315) {
				func_180(var_7_bool, "Saveyouall");
				var_0_object->SetMessage(523115); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523116, 24317, 24316); //@t
				return 0;
			}
			if(var_6_int == 24317) {
				func_180(var_7_bool, "Smile");
				var_0_object->SetMessage(523117); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523118, 24319, 24318); //@t
				var_0_object->AddReply(540129, 24321, 42100); //@t
				return 0;
			}
			if(var_6_int == 24319) {
				func_180(var_7_bool, "Smile");
				var_0_object->SetMessage(523119); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523120, 24321, 24320); //@t
				return 0;
			}
			if(var_6_int == 24321) {
				func_180(var_7_bool, "Smile");
				var_0_object->SetMessage(523121); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523122, 24323, 24322); //@t
				return 0;
			}
			if(var_6_int == 24323) {
				func_180(var_7_bool, "Smile");
				var_0_object->SetMessage(523123); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523124, -1, 24324); //@t
				var_0_object->AddReply(523125, -1, 24325); //@t
				return 0;
			}
			var_3_string = true;
			bool var_148_bool;
			func_908(var_148_bool);
			if(var_148_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcb";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		func_477();
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
				func_525(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_805(var_14_object);
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
			func_525(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_805(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_768(string var_194_string, bool var_195_bool)
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


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_527(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_902(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_900(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_904(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_906(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_883(var_70_int);
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
	func_805(var_81_object);
	var_81_object = var_80_object;
	func_614(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_255_bool = !var_17_bool; //@nz
		if(var_255_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_256_object;
	var_8_object = var_256_object;
	func_596();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_835(void)
{
	@SetVariable("oob12KlaraSobor1", 1);
}


void func_900(int var_67_int)
{
	var_67_int = 515540;
}


void func_709(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_826(var_134_int);
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
		func_783(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


void func_902(int var_66_int)
{
	var_66_int = 502865;
}


void func_904(string var_68_string)
{
	var_68_string = "ui/NPC_Klara.png";
}


// @pe
void func_841(void)
{
	@SetVariable("oob12KlaraSobor2", 1);
}


void func_906(string var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png";
}


void func_908(bool var_61_bool)
{
	var_61_bool = true;
}


void func_525(bool var_8_bool)
{
	var_8_bool = true;
}


void func_527(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_811(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_908(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_590;
		@LookAsyncCamera("head");
	}
Label_590:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_783(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_908(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


// @pe
void func_847(bool var_181_bool)
{
	int var_183_int;
	func_821(var_183_int, "game_final");
	if(var_183_int != 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_847(var_1_object);
		if(!var_181_bool) { //@nz
			func_180(var_175_object, "Saveyouall");
			var_0_object->SetMessage(522183); //@t
			var_0_object->ClearReplies(); //@t
			bool var_208_bool;
			func_859(var_1_object);
			if(var_208_bool != 0)
				var_0_object->AddReply(523114, 24315, 24314); //@t
			bool var_217_bool;
			func_871(var_1_object);
			if(var_217_bool != 0)
				var_0_object->AddReply(523126, 24327, 24326); //@t
			var_0_object->AddReply(523113, -1, 24313); //@t
		} else {
					func_180(var_175_object, "Neutral");
					var_0_object->SetMessage(523167); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522184, -1, 23351); //@t
					var_0_object->AddReply(523175, -1, 24377); //@t
		}
	}
	for(;;) {
		bool var_229_bool;
		func_908(var_229_bool);
		if(var_229_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_752(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_179;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_179:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_596(void)
{
	bool var_258_bool;
	@CameraSwitchToNormal(true);
	bool var_260_bool;
	func_908(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		@HasAnimationTrack(var_258_bool, "head");
		if(var_258_bool == 0) goto Label_613;
		@UnlookAsync("head");
	}
Label_613:
	
}


// @pe
void func_859(bool var_208_bool)
{
	int var_210_int;
	func_821(var_210_int, "oob12KlaraSobor1");
	if(var_210_int == 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


void func_477(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_798(void)
{
	bool var_9_bool;
	func_908(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_672(bool var_90_bool, object var_91_object)
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
		func_783(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_805(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_614(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_672(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_709(var_121_bool, var_122_object);
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
		func_709(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_672(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_670;
	
Label_670:
	var_79_bool = true;
	
}


// @pe
void func_871(bool var_217_bool)
{
	int var_219_int;
	func_821(var_219_int, "oob12KlaraSobor2");
	if(var_219_int == 0) {
		var_217_bool = true;
		return 0;
	}
	var_217_bool = false;
}


void func_811(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_752(string var_231_string)
{
	bool var_235_bool; float var_236_float; float var_237_float;
	@lshHasAnimation(var_235_bool, var_231_string);
	if(var_235_bool != 0) {
		@lshGetAnimTimes(var_231_string, var_236_float, var_237_float);
		@lshPlayAnimation(var_236_float, var_237_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_231_string);
	}
	
}


void func_883(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x382";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


// @pe
void func_180(object var_2_object, string var_190_string)
{
	bool var_191_bool;
	func_908(var_191_bool);
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
	func_768(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	
}


void func_821(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


void func_826(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


