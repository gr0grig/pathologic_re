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
			func_880();
			if(var_7_bool == 23345) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_917();
			}
			if(var_7_bool == 24219) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_923();
			}
			if(var_7_bool == 24228) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_929();
			}
			if(var_7_bool == 24237) {
				object var_30_object; object var_31_object;
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_935();
			}
			if(var_6_int == 23344) {
				bool var_36_bool;
				func_941(var_1_object);
				if(!var_36_bool) { //@nz
					func_200(var_7_bool, "Neutral");
					var_0_object->SetMessage(522177); //@t
					var_0_object->ClearReplies(); //@t
					bool var_63_bool;
					func_953(var_1_object);
					if(var_63_bool != 0)
						var_0_object->AddReply(522178, 24218, 23345); //@t
					bool var_72_bool;
					func_965(var_1_object);
					if(var_72_bool != 0)
						var_0_object->AddReply(523026, 24220, 24219); //@t
					bool var_81_bool;
					func_977(var_1_object);
					if(var_81_bool != 0)
						var_0_object->AddReply(523035, 24229, 24228); //@t
					bool var_90_bool;
					func_989(var_1_object);
					if(var_90_bool != 0)
						var_0_object->AddReply(523044, 24238, 24237); //@t
					var_0_object->AddReply(523028, -1, 24221); //@t
					return 0;
				}
				func_200(var_7_bool, "Neutral");
				var_0_object->SetMessage(523163); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523164, -1, 24366); //@t
				var_0_object->AddReply(523174, -1, 24376); //@t
				return 0;
			}
			if(var_6_int == 24238) {
				func_200(var_7_bool, "Menace");
				var_0_object->SetMessage(523045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523046, -1, 24239); //@t
				return 0;
			}
			if(var_6_int == 24229) {
				func_200(var_7_bool, "Smile");
				var_0_object->SetMessage(523036); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523037, 24231, 24230); //@t
				return 0;
			}
			if(var_6_int == 24231) {
				func_200(var_7_bool, "Smile");
				var_0_object->SetMessage(523038); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523039, 24233, 24232); //@t
				return 0;
			}
			if(var_6_int == 24233) {
				func_200(var_7_bool, "Menace");
				var_0_object->SetMessage(523040); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523041, -1, 24234); //@t
				return 0;
			}
			if(var_6_int == 24220) {
				func_200(var_7_bool, "Menace");
				var_0_object->SetMessage(523027); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531982, -1, 33388); //@t
				return 0;
			}
			if(var_6_int == 24218) {
				func_200(var_7_bool, "Menace");
				var_0_object->SetMessage(523025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523029, 24223, 24222); //@t
				var_0_object->AddReply(538760, 24223, 40673); //@t
				return 0;
			}
			if(var_6_int == 24223) {
				func_200(var_7_bool, "Menace");
				var_0_object->SetMessage(523030); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523034, 24235, 24227); //@t
				return 0;
			}
			if(var_6_int == 24235) {
				func_200(var_7_bool, "Menace");
				var_0_object->SetMessage(523042); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523031, 24225, 24224); //@t
				var_0_object->AddReply(523033, 24240, 24226); //@t
				return 0;
			}
			if(var_6_int == 24240) {
				func_200(var_7_bool, "Sorrow");
				var_0_object->SetMessage(523047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523048, -1, 24241); //@t
				return 0;
			}
			if(var_6_int == 24225) {
				func_200(var_7_bool, "Sorrow");
				var_0_object->SetMessage(523032); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523043, -1, 24236); //@t
				return 0;
			}
			var_3_string = true;
			bool var_186_bool;
			func_1026(var_186_bool);
			if(var_186_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdf";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		func_559();
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
				func_607(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_887(var_14_object);
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
			func_607(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_887(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_1024(string var_69_string)
{
	var_69_string = "ui/NPC_Bakalavr_b.png";
}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_609(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_1020(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_1018(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_1022(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_1024(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_1001(var_70_int);
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
	func_887(var_81_object);
	var_81_object = var_80_object;
	func_696(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_273_bool = !var_17_bool; //@nz
		if(var_273_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_274_object;
	var_8_object = var_274_object;
	func_678();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_1026(bool var_61_bool)
{
	var_61_bool = true;
}


void func_903(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


void func_908(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


// @pe
void func_917(void)
{
	@SetVariable("oob12DankoSobor1", 1);
}


void func_791(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_908(var_134_int);
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
		func_865(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


// @pe
void func_923(void)
{
	@SetVariable("oob12DankoSobor2", 1);
}


// @pe
void func_929(void)
{
	@SetVariable("oob12DankoSobor3", 1);
}


void func_678(void)
{
	bool var_276_bool;
	@CameraSwitchToNormal(true);
	bool var_278_bool;
	func_1026(var_278_bool);
	if(var_278_bool != 0) {
	} else {
		@HasAnimationTrack(var_276_bool, "head");
		if(var_276_bool == 0) goto Label_695;
		@UnlookAsync("head");
	}
Label_695:
	
}


// @pe
void func_935(void)
{
	@SetVariable("oob12DankoSobor4", 1);
}


// @pe
void func_941(bool var_181_bool)
{
	int var_183_int;
	func_903(var_183_int, "game_final");
	if(var_183_int != 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


void func_559(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_696(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_754(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_791(var_121_bool, var_122_object);
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
		func_791(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_754(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_752;
	
Label_752:
	var_79_bool = true;
	
}


// @pe
void func_953(bool var_208_bool)
{
	int var_210_int;
	func_903(var_210_int, "oob12DankoSobor1");
	if(var_210_int == 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


void func_834(string var_249_string)
{
	bool var_253_bool; float var_254_float; float var_255_float;
	@lshHasAnimation(var_253_bool, var_249_string);
	if(var_253_bool != 0) {
		@lshGetAnimTimes(var_249_string, var_254_float, var_255_float);
		@lshPlayAnimation(var_254_float, var_255_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_249_string);
	}
	
}


// @pe
void func_965(bool var_217_bool)
{
	int var_219_int;
	func_903(var_219_int, "oob12DankoSobor2");
	if(var_219_int == 0) {
		var_217_bool = true;
		return 0;
	}
	var_217_bool = false;
}


// @pe
void func_200(object var_2_object, string var_190_string)
{
	bool var_191_bool;
	func_1026(var_191_bool);
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
	func_850(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_941(var_1_object);
		if(!var_181_bool) { //@nz
			func_200(var_175_object, "Neutral");
			var_0_object->SetMessage(522177); //@t
			var_0_object->ClearReplies(); //@t
			bool var_208_bool;
			func_953(var_1_object);
			if(var_208_bool != 0)
				var_0_object->AddReply(522178, 24218, 23345); //@t
			bool var_217_bool;
			func_965(var_1_object);
			if(var_217_bool != 0)
				var_0_object->AddReply(523026, 24220, 24219); //@t
			bool var_226_bool;
			func_977(var_1_object);
			if(var_226_bool != 0)
				var_0_object->AddReply(523035, 24229, 24228); //@t
			bool var_235_bool;
			func_989(var_1_object);
			if(var_235_bool != 0)
				var_0_object->AddReply(523044, 24238, 24237); //@t
			var_0_object->AddReply(523028, -1, 24221); //@t
		} else {
					func_200(var_175_object, "Neutral");
					var_0_object->SetMessage(523163); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523164, -1, 24366); //@t
					var_0_object->AddReply(523174, -1, 24376); //@t
		}
	}
	for(;;) {
		bool var_247_bool;
		func_1026(var_247_bool);
		if(var_247_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_834(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_199;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_199:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_977(bool var_226_bool)
{
	int var_228_int;
	func_903(var_228_int, "oob12DankoSobor3");
	if(var_228_int == 0) {
		var_226_bool = true;
		return 0;
	}
	var_226_bool = false;
}


void func_850(string var_194_string, bool var_195_bool)
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
void func_989(bool var_235_bool)
{
	int var_237_int;
	func_903(var_237_int, "oob12DankoSobor4");
	if(var_237_int == 0) {
		var_235_bool = true;
		return 0;
	}
	var_235_bool = false;
}


void func_607(bool var_8_bool)
{
	var_8_bool = true;
}


void func_609(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_893(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1026(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_672;
		@LookAsyncCamera("head");
	}
Label_672:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_865(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_1026(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


void func_1001(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3f8";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_880(void)
{
	bool var_9_bool;
	func_1026(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_754(bool var_90_bool, object var_91_object)
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
		func_865(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_887(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_1018(int var_67_int)
{
	var_67_int = 515573;
}


void func_1020(int var_66_int)
{
	var_66_int = 504032;
}


void func_893(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_1022(string var_68_string)
{
	var_68_string = "ui/NPC_Bakalavr.png";
}


