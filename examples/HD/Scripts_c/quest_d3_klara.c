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
			func_629();
			if(var_7_bool == 35646) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_666();
			}
			if(var_6_int == 11248) {
				func_149(var_7_bool, "Saveyouall");
				var_0_object->SetMessage(510202); //@t
				var_0_object->ClearReplies(); //@t
				bool var_36_bool;
				func_672(var_1_object);
				if(var_36_bool != 0)
					var_0_object->AddReply(534060, 11250, 35646); //@t
				var_0_object->AddReply(510203, -1, 11249); //@t
				var_0_object->AddReply(536145, -1, 37905); //@t
				return 0;
			}
			if(var_6_int == 11250) {
				func_149(var_7_bool, "Saveyouall");
				var_0_object->SetMessage(510204); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534061, 35649, 35648); //@t
				var_0_object->AddReply(534063, 35649, 35650); //@t
				return 0;
			}
			if(var_6_int == 35649) {
				func_149(var_7_bool, "Saveyouall");
				var_0_object->SetMessage(534062); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510205, 11252, 11251); //@t
				var_0_object->AddReply(534064, -1, 35652); //@t
				return 0;
			}
			if(var_6_int == 11252) {
				func_149(var_7_bool, "Saveyouall");
				var_0_object->SetMessage(510206); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510207, -1, 11253); //@t
				var_0_object->AddReply(534065, -1, 35653); //@t
				return 0;
			}
			var_3_string = true;
			bool var_83_bool;
			func_709(var_83_bool);
			if(var_83_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xac";
	
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
				func_356(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_636(var_14_object);
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
			func_356(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_636(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_358(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_703(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_701(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_705(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_707(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_684(var_70_int);
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
	func_636(var_81_object);
	var_81_object = var_80_object;
	func_445(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_234_bool = !var_17_bool; //@nz
		if(var_234_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_235_object;
	var_8_object = var_235_object;
	func_427();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_705(string var_68_string)
{
	var_68_string = "ui/NPC_Klara.png";
}


void func_642(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_707(string var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png";
}


void func_709(bool var_61_bool)
{
	var_61_bool = true;
}


void func_583(string var_218_string)
{
	bool var_222_bool; float var_223_float; float var_224_float;
	@lshHasAnimation(var_222_bool, var_218_string);
	if(var_222_bool != 0) {
		@lshGetAnimTimes(var_218_string, var_223_float, var_224_float);
		@lshPlayAnimation(var_223_float, var_224_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_218_string);
	}
	
}


void func_652(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_657(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_703(int var_66_int)
{
	var_66_int = 502865;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_3_string = false;
	if(1 != 0) {
		func_149(var_175_object, "Saveyouall");
		var_0_object->SetMessage(510202); //@t
		var_0_object->ClearReplies(); //@t
		bool var_199_bool;
		func_672(var_174_object);
		if(var_199_bool != 0)
			var_0_object->AddReply(534060, 11250, 35646); //@t
		var_0_object->AddReply(510203, -1, 11249); //@t
		var_0_object->AddReply(536145, -1, 37905); //@t
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	bool var_216_bool;
	func_709(var_216_bool);
	if(var_216_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_583(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_148;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_148:
		return 0;

	}
	
}


// @pe
void func_149(object var_2_object, string var_181_string)
{
	bool var_182_bool;
	func_709(var_182_bool);
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
	func_599(var_185_string, var_186_bool);
	var_2_object = var_181_string;
	
}


void func_599(string var_185_string, bool var_186_bool)
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
void func_666(void)
{
	@SetVariable("ood3Klara1", 1);
}


void func_540(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_657(var_134_int);
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
		func_614(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


// @pe
void func_672(bool var_199_bool)
{
	int var_201_int;
	func_652(var_201_int, "ood3Klara1");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


void func_356(bool var_8_bool)
{
	var_8_bool = true;
}


void func_358(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_642(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_709(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_421;
		@LookAsyncCamera("head");
	}
Label_421:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_614(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_709(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


void func_427(void)
{
	bool var_237_bool;
	@CameraSwitchToNormal(true);
	bool var_239_bool;
	func_709(var_239_bool);
	if(var_239_bool != 0) {
	} else {
		@HasAnimationTrack(var_237_bool, "head");
		if(var_237_bool == 0) goto Label_444;
		@UnlookAsync("head");
	}
Label_444:
	
}


void func_684(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x2bb";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_629(void)
{
	bool var_9_bool;
	func_709(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_503(bool var_90_bool, object var_91_object)
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
		func_614(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_636(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_701(int var_67_int)
{
	var_67_int = 515540;
}


void func_445(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_503(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_540(var_121_bool, var_122_object);
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
		func_540(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_503(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_501;
	
Label_501:
	var_79_bool = true;
	
}


