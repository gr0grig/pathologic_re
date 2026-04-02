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
			func_833();
			if(var_7_bool == 24335) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_870();
			}
			if(var_6_int == 23347) {
				bool var_18_bool;
				func_876(var_1_object);
				if(!var_18_bool) { //@nz
					func_165(var_7_bool, "Neutral");
					var_0_object->SetMessage(522180); //@t
					var_0_object->ClearReplies(); //@t
					bool var_45_bool;
					func_888(var_1_object);
					if(var_45_bool != 0)
						var_0_object->AddReply(523135, 24336, 24335); //@t
					var_0_object->AddReply(522181, -1, 23348); //@t
					return 0;
				}
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(523165); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523166, -1, 24368); //@t
				return 0;
			}
			if(var_6_int == 24336) {
				func_165(var_7_bool, "Strength");
				var_0_object->SetMessage(523136); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523137, 24338, 24337); //@t
				var_0_object->AddReply(540123, 42093, 42092); //@t
				return 0;
			}
			if(var_6_int == 42093) {
				func_165(var_7_bool, "Strength");
				var_0_object->SetMessage(540124); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540125, 42095, 42094); //@t
				var_0_object->AddReply(540128, 42095, 42097); //@t
				return 0;
			}
			if(var_6_int == 42095) {
				func_165(var_7_bool, "Strength");
				var_0_object->SetMessage(540126); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540127, 24338, 42096); //@t
				return 0;
			}
			if(var_6_int == 24338) {
				func_165(var_7_bool, "Sympathy");
				var_0_object->SetMessage(523138); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523139, 24340, 24339); //@t
				var_0_object->AddReply(523149, 24350, 24349); //@t
				return 0;
			}
			if(var_6_int == 24350) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(523150); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523151, -1, 24351); //@t
				var_0_object->AddReply(523152, 24340, 24352); //@t
				return 0;
			}
			if(var_6_int == 24340) {
				func_165(var_7_bool, "Sympathy");
				var_0_object->SetMessage(523140); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523141, 24342, 24341); //@t
				var_0_object->AddReply(523153, 24355, 24354); //@t
				return 0;
			}
			if(var_6_int == 24355) {
				func_165(var_7_bool, "Sympathy");
				var_0_object->SetMessage(523154); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523155, 24357, 24356); //@t
				return 0;
			}
			if(var_6_int == 24357) {
				func_165(var_7_bool, "Strength");
				var_0_object->SetMessage(523156); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523157, 24342, 24358); //@t
				return 0;
			}
			if(var_6_int == 24342) {
				func_165(var_7_bool, "Sympathy");
				var_0_object->SetMessage(523142); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523143, 24344, 24343); //@t
				return 0;
			}
			if(var_6_int == 24344) {
				func_165(var_7_bool, "Sympathy");
				var_0_object->SetMessage(523144); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523145, 24346, 24345); //@t
				return 0;
			}
			if(var_6_int == 24346) {
				func_165(var_7_bool, "Sympathy");
				var_0_object->SetMessage(523146); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523147, 24348, 24347); //@t
				return 0;
			}
			if(var_6_int == 24348) {
				func_165(var_7_bool, "Fear");
				var_0_object->SetMessage(523148); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523158, -1, 24360); //@t
				return 0;
			}
			var_3_string = true;
			bool var_161_bool;
			func_925(var_161_bool);
			if(var_161_bool != 0)
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
				func_560(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_840(var_14_object);
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
			func_560(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_840(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_562(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_919(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_917(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_921(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_923(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_900(var_70_int);
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
	func_840(var_81_object);
	var_81_object = var_80_object;
	func_649(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_243_bool = !var_17_bool; //@nz
		if(var_243_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_244_object;
	var_8_object = var_244_object;
	func_631();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_833(void)
{
	bool var_9_bool;
	func_925(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_707(bool var_90_bool, object var_91_object)
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
		func_818(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_900(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x393";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_840(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_649(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_707(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_744(var_121_bool, var_122_object);
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
		func_744(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_707(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_705;
	
Label_705:
	var_79_bool = true;
	
}


void func_846(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_876(var_1_object);
		if(!var_181_bool) { //@nz
			func_165(var_175_object, "Neutral");
			var_0_object->SetMessage(522180); //@t
			var_0_object->ClearReplies(); //@t
			bool var_208_bool;
			func_888(var_1_object);
			if(var_208_bool != 0)
				var_0_object->AddReply(523135, 24336, 24335); //@t
			var_0_object->AddReply(522181, -1, 23348); //@t
		} else {
					func_165(var_175_object, "Neutral");
					var_0_object->SetMessage(523165); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523166, -1, 24368); //@t
		}
	}
	for(;;) {
		bool var_220_bool;
		func_925(var_220_bool);
		if(var_220_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_787(var_2_object);
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


void func_787(string var_222_string)
{
	bool var_226_bool; float var_227_float; float var_228_float;
	@lshHasAnimation(var_226_bool, var_222_string);
	if(var_226_bool != 0) {
		@lshGetAnimTimes(var_222_string, var_227_float, var_228_float);
		@lshPlayAnimation(var_227_float, var_228_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_222_string);
	}
	
}


void func_917(int var_67_int)
{
	var_67_int = 515538;
}


void func_919(int var_66_int)
{
	var_66_int = 502863;
}


void func_856(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


void func_921(string var_68_string)
{
	var_68_string = "ui/NPC_Kapella.png";
}


void func_923(string var_69_string)
{
	var_69_string = "ui/NPC_Kapella_b.png";
}


void func_925(bool var_61_bool)
{
	var_61_bool = true;
}


void func_861(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_803(string var_194_string, bool var_195_bool)
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
void func_165(object var_2_object, string var_190_string)
{
	bool var_191_bool;
	func_925(var_191_bool);
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
	func_803(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	
}


// @pe
void func_870(void)
{
	@SetVariable("oob12KapellaSobor1", 1);
}


void func_744(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_861(var_134_int);
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
		func_818(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


// @pe
void func_876(bool var_181_bool)
{
	int var_183_int;
	func_856(var_183_int, "game_final");
	if(var_183_int != 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


void func_560(bool var_8_bool)
{
	var_8_bool = true;
}


void func_562(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_846(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_925(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_625;
		@LookAsyncCamera("head");
	}
Label_625:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_818(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_925(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


void func_631(void)
{
	bool var_246_bool;
	@CameraSwitchToNormal(true);
	bool var_248_bool;
	func_925(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		@HasAnimationTrack(var_246_bool, "head");
		if(var_246_bool == 0) goto Label_648;
		@UnlookAsync("head");
	}
Label_648:
	
}


// @pe
void func_888(bool var_208_bool)
{
	int var_210_int;
	func_856(var_210_int, "oob12KapellaSobor1");
	if(var_210_int == 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


