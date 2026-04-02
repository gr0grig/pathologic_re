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
			func_813();
			if(var_7_bool == 24335) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_850();
			}
			if(var_6_int == 23347) {
				bool var_18_bool;
				func_856(var_1_object);
				if(!var_18_bool) { //@nz
					func_165(var_7_bool, "Neutral");
					var_0_object->SetMessage(522180); //@t
					var_0_object->ClearReplies(); //@t
					bool var_40_bool;
					func_868(var_1_object);
					if(var_40_bool != 0)
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
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(523136); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523137, 24338, 24337); //@t
				var_0_object->AddReply(540123, 42093, 42092); //@t
				return 0;
			}
			if(var_6_int == 42093) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(540124); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540125, 42095, 42094); //@t
				var_0_object->AddReply(540128, 42095, 42097); //@t
				return 0;
			}
			if(var_6_int == 42095) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(540126); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540127, 24338, 42096); //@t
				return 0;
			}
			if(var_6_int == 24338) {
				func_165(var_7_bool, "Neutral");
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
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(523140); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523141, 24342, 24341); //@t
				var_0_object->AddReply(523153, 24355, 24354); //@t
				return 0;
			}
			if(var_6_int == 24355) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(523154); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523155, 24357, 24356); //@t
				return 0;
			}
			if(var_6_int == 24357) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(523156); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523157, 24342, 24358); //@t
				return 0;
			}
			if(var_6_int == 24342) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(523142); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523143, 24344, 24343); //@t
				return 0;
			}
			if(var_6_int == 24344) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(523144); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523145, 24346, 24345); //@t
				return 0;
			}
			if(var_6_int == 24346) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(523146); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523147, 24348, 24347); //@t
				return 0;
			}
			if(var_6_int == 24348) {
				func_165(var_7_bool, "Neutral");
				var_0_object->SetMessage(523148); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523158, -1, 24360); //@t
				return 0;
			}
			var_3_string = true;
			bool var_156_bool;
			func_905(var_156_bool);
			if(var_156_bool != 0)
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
				func_820(var_14_object);
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
			func_820(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	object var_20_object;
	func_820(var_20_object);
	var_20_object = var_19_object;
	func_647(var_18_bool, var_19_object);
	bool var_113_bool; object var_114_object;
	var_8_object = var_114_object;
	func_562(var_113_bool, var_114_object, 70.0);
	if(!var_113_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_160_int;
	func_899(var_160_int);
	var_14_object->SetNPCName(var_160_int);
	int var_161_int;
	func_897(var_161_int);
	var_14_object->SetNPCDescription(var_161_int);
	string var_162_string;
	func_901(var_162_string);
	var_14_object->SetPhoto(var_162_string);
	string var_163_string;
	func_903(var_163_string);
	var_14_object->SetPhoto2(var_163_string);
	int var_164_int;
	func_880(var_164_int);
	var_14_object->SetPlayerName(var_164_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_173_object; object var_174_object;
	var_8_object = var_173_object;
	var_14_object = var_174_object;
	TaskCall(1);
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_232_bool = !var_17_bool; //@nz
		if(var_232_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_233_object;
	var_8_object = var_233_object;
	func_630();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_897(int var_161_int)
{
	var_161_int = 515538;
}


void func_705(bool var_29_bool, object var_30_object)
{
	string var_36_string; bool var_38_bool; int var_39_int; string var_40_string;
	var_36_string = "c";
	int var_37_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_30_object->HasProperty((var_36_string + (var_37_int + 1)), var_38_bool);
			if(!var_38_bool) { //@nz
			} else {
				var_37_int += 1;
			}
		}
		if(!var_37_int) { //@nz
			var_29_bool = false;
			return 10;
		}
		var_39_int = 0;
		if(var_37_int > 1)
			@irand(var_39_int, var_37_int);
		var_30_object->GetProperty((var_36_string + (var_39_int + 1)), var_40_string);
		bool var_52_bool; string var_53_string;
		var_40_string = var_53_string;
		func_798(var_52_bool, var_53_string);
		var_52_bool = var_29_bool;
		return 10;

	}
}


void func_899(int var_160_int)
{
	var_160_int = 502863;
}


void func_836(int var_182_int, string var_183_string)
{
	int var_185_int;
	@GetVariable(var_183_string, var_185_int);
	var_185_int = var_182_int;
}


void func_901(string var_162_string)
{
	var_162_string = "ui/NPC_Kapella.png";
}


void func_647(bool var_18_bool, object var_19_object)
{
	int var_25_int; int var_26_int;
	@GetVariable("voice_common", var_25_int);
	if(var_25_int != 0) {
		bool var_29_bool; object var_30_object;
		var_19_object = var_30_object;
		func_705(var_29_bool, var_30_object);
		if(!var_29_bool) { //@nz
			bool var_60_bool; object var_61_object;
			var_19_object = var_61_object;
			func_742(var_60_bool, var_61_object);
			if(!var_60_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@irand(var_26_int, 2);
		if(var_26_int != 0)
			@SetVariable("voice_common", ((var_25_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_105_bool; object var_106_object;
		var_19_object = var_106_object;
		func_742(var_105_bool, var_106_object);
		if(!var_105_bool) { //@nz
			bool var_108_bool; object var_109_object;
			var_19_object = var_109_object;
			func_705(var_108_bool, var_109_object);
			if(!var_108_bool) { //@nz
				var_18_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_703;
	
Label_703:
	var_18_bool = true;
	
}


void func_903(string var_163_string)
{
	var_163_string = "ui/NPC_Kapella_b.png";
}


void func_905(bool var_56_bool)
{
	var_56_bool = true;
}


void func_841(int var_73_int)
{
	float var_75_float;
	@GetGameTime(var_75_float);
	var_73_int = 1 + (var_75_float / 24);
}


void func_785(string var_216_string)
{
	float var_219_float; float var_220_float;
	@lshGetAnimTimes(var_216_string, var_219_float, var_220_float);
	@lshPlayAnimation(var_219_float, var_220_float, false);
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_173_object, object var_174_object)
{
	var_0_object = var_174_object;
	var_1_object = var_173_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_180_bool;
		func_856(var_1_object);
		if(!var_180_bool) { //@nz
			func_165(var_174_object, "Neutral");
			var_0_object->SetMessage(522180); //@t
			var_0_object->ClearReplies(); //@t
			bool var_202_bool;
			func_868(var_1_object);
			if(var_202_bool != 0)
				var_0_object->AddReply(523135, 24336, 24335); //@t
			var_0_object->AddReply(522181, -1, 23348); //@t
		} else {
					func_165(var_174_object, "Neutral");
					var_0_object->SetMessage(523165); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523166, -1, 24368); //@t
		}
	}
	for(;;) {
		bool var_214_bool;
		func_905(var_214_bool);
		if(var_214_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_785(var_2_object);
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


// @pe
void func_850(void)
{
	@SetVariable("oob12KapellaSobor1", 1);
}


void func_792(string var_193_string, bool var_194_bool)
{
	float var_199_float; float var_200_float;
	@lshGetAnimTimes(var_193_string, var_199_float, var_200_float);
	@lshPlayAnimation(var_199_float, var_200_float, var_194_bool);
}


// @pe
void func_856(bool var_180_bool)
{
	int var_182_int;
	func_836(var_182_int, "game_final");
	if(var_182_int != 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


void func_798(bool var_52_bool, string var_53_string)
{
	bool var_55_bool;
	bool var_56_bool;
	func_905(var_56_bool);
	if(var_56_bool != 0) {
		@lshHasSpeech(var_55_bool, var_53_string);
		if(var_55_bool != 0) {
			@lshPlaySpeech(var_53_string);
			var_52_bool = true;
		}
	}
	var_52_bool = false;
}


// @pe
void func_868(bool var_202_bool)
{
	int var_204_int;
	func_836(var_204_int, "oob12KapellaSobor1");
	if(var_204_int == 0) {
		var_202_bool = true;
		return 0;
	}
	var_202_bool = false;
}


// @pe
void func_165(object var_2_object, string var_189_string)
{
	bool var_190_bool;
	func_905(var_190_bool);
	if(!var_190_bool) //@nz
		return 0;
	if(var_189_string == var_2_object)
		return 0;
	string var_193_string; bool var_194_bool;
	var_189_string = var_193_string;
	if(var_189_string == "")
		var_194_bool = false;
	else
		var_194_bool = true;
	func_792(var_193_string, var_194_bool);
	var_2_object = var_189_string;
	
}


void func_742(bool var_60_bool, object var_61_object)
{
	bool var_69_bool; int var_70_int; string var_71_string;
	int var_73_int;
	func_841(var_73_int);
	string var_67_string = ("d" + var_73_int) + "m";
	int var_68_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_61_object->HasProperty((var_67_string + (var_68_int + 1)), var_69_bool);
			if(!var_69_bool) { //@nz
			} else {
				var_68_int += 1;
			}
		}
		if(!var_68_int) { //@nz
			var_60_bool = false;
			return 10;
		}
		var_70_int = 0;
		if(var_68_int > 1)
			@irand(var_70_int, var_68_int);
		var_61_object->GetProperty((var_67_string + (var_70_int + 1)), var_71_string);
		bool var_92_bool; string var_93_string;
		var_71_string = var_93_string;
		func_798(var_92_bool, var_93_string);
		var_92_bool = var_60_bool;
		return 10;

	}
}


void func_813(void)
{
	bool var_9_bool;
	func_905(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_560(bool var_8_bool)
{
	var_8_bool = true;
}


void func_880(int var_164_int)
{
	int var_166_int;
	@GetVariable("branch", var_166_int);
	if(var_166_int == 0) {
		var_164_int = 1;
		return 2;
	EMIT "GOTO 0x37f";
	}
	if(var_166_int == 1) {
		var_164_int = 2;
		return 2;
	}
	var_164_int = 3;
}


void func_562(bool var_113_bool, object var_114_object, float var_115_float)
{
	cvector var_126_cvector; bool var_133_bool;
	var_114_object->GetPosition(var_126_cvector);
	float var_125_float;
	var_114_object->GetEyesHeight(var_125_float);
	var_134_float = GetByIndex(var_126_cvector, 1);
	SetByIndex(var_126_cvector, 1) = (var_134_float + var_125_float);
	cvector var_127_cvector;
	@GetPosition(var_127_cvector);
	@GetEyesHeight(var_125_float);
	var_135_float = GetByIndex(var_127_cvector, 1);
	SetByIndex(var_127_cvector, 1) = (var_135_float + var_125_float);
	cvector var_128_cvector = var_126_cvector - var_127_cvector;
	var_136_float = GetByIndex(var_128_cvector, 1);
	SetByIndex(var_128_cvector, 1) = (float)0;
	var_138_float = sqrt(var_128_cvector | var_128_cvector);
	var_128_cvector /= var_138_float;
	cvector var_129_cvector = -var_128_cvector;
	cvector var_140_cvector;
	func_826(var_140_cvector, (var_129_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_130_cvector = ((var_128_cvector * var_115_float) + (var_140_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_132_bool;
	@IsOverrideActive(var_132_bool);
	if(var_132_bool != 0)
		var_113_bool = false;
	@StopWorld();
	@CameraTransit((var_127_cvector + var_130_cvector), var_129_cvector);
	var_153_float = GetByIndex(var_130_cvector, 0);
	var_154_float = GetByIndex(var_130_cvector, 2);
	@Rotate(var_153_float, var_154_float);
	bool var_155_bool;
	func_905(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_133_bool, "head");
		if(var_133_bool == 0) goto Label_624;
		@LookAsyncCamera("head");
	}
Label_624:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_113_bool = true;
	
}


void func_820(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_630(void)
{
	bool var_235_bool;
	@CameraSwitchToNormal();
	bool var_236_bool;
	func_905(var_236_bool);
	if(var_236_bool != 0) {
	} else {
		@HasAnimationTrack(var_235_bool, "head");
		if(var_235_bool == 0) goto Label_646;
		@UnlookAsync("head");
	}
Label_646:
	
}


void func_826(cvector var_140_cvector, cvector var_141_cvector)
{
	float var_144_float = sqrt(var_141_cvector | var_141_cvector);
	if(var_144_float < 0.000001)
		var_140_cvector = [0.0, 0.0, 0.0];
	var_140_cvector = var_141_cvector / var_144_float;
}


