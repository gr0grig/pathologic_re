// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_936();
			if(var_8_bool == 31828) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1009();
			}
			if(var_7_cvector == 31827) {
				bool var_48_bool;
				func_1023(var_1_object);
				if(!var_48_bool) { //@nz
					func_165(var_8_bool, "Neutral");
					var_0_object->SetMessage(530461); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531473, 32825, 32824); //@t
					var_0_object->AddReply(531479, 32825, 32830); //@t
					return 0;
				}
				func_165(var_8_bool, "Neutral");
				var_0_object->SetMessage(530463); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530464, -1, 31830); //@t
				var_0_object->AddReply(531472, -1, 32823); //@t
				return 0;
			}
			if(var_7_cvector == 32825) {
				func_165(var_8_bool, "Neutral");
				var_0_object->SetMessage(531474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531475, 32827, 32826); //@t
				var_0_object->AddReply(531480, 32827, 32832); //@t
				return 0;
			}
			if(var_7_cvector == 32827) {
				func_165(var_8_bool, "Neutral");
				var_0_object->SetMessage(531476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531477, 32829, 32828); //@t
				var_0_object->AddReply(531481, 32829, 32834); //@t
				return 0;
			}
			if(var_7_cvector == 32829) {
				func_165(var_8_bool, "Neutral");
				var_0_object->SetMessage(531478); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530462, -1, 31828); //@t
				var_0_object->AddReply(531482, -1, 32836); //@t
				return 0;
			}
			var_3_string = true;
			bool var_119_bool;
			func_1114(var_119_bool);
			if(var_119_bool != 0)
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
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_381(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_943(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_943(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_488();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_503();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_446();
			bool var_11_bool = false;
			bool var_12_bool;
			func_660(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_415(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_395(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_943(var_53_object);
					var_53_object = var_52_object;
					func_810(var_51_bool, var_52_object);
				}
			} else {
				func_410(var_7_int);
				func_437();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_437();
		else
			func_890("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_628();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_651(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_332(var_25_object);
			func_890("Neutral");
			func_446();
			func_437();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_665(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1108(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1106(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1110(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1112(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1089(var_89_int);
	var_33_object->SetPlayerName(var_89_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	bool var_98_bool; object var_99_object;
	object var_100_object;
	func_943(var_100_object);
	var_100_object = var_99_object;
	func_752(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_259_bool = !var_36_bool; //@nz
		if(var_259_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_260_object;
	var_27_object = var_260_object;
	func_734();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_641(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


void func_906(string var_213_string, bool var_214_bool)
{
	bool var_220_bool; float var_221_float; float var_222_float;
	@lshHasAnimation(var_220_bool, var_213_string);
	if(var_220_bool != 0) {
		@lshGetAnimTimes(var_213_string, var_221_float, var_222_float);
		@lshPlayAnimation(var_221_float, var_222_float, var_214_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_213_string);
	}
	
}


void func_651(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_641(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_395(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_651(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1035(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 559, 2, 530538);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1061(var_22_bool, var_23_object, 550);
}
EMIT "Stack[-1] = 0";


void func_660(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1048(object var_31_object)
{
	object var_33_object;
	@GetDiaryRoot(var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_31_object = false;
	}
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_921(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1114(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_665(bool var_37_bool, object var_38_object, float var_39_float)
{
	cvector var_50_cvector; bool var_57_bool;
	var_38_object->GetPosition(var_50_cvector);
	float var_49_float;
	var_38_object->GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_49_float);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	@GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_49_float);
	cvector var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_62_float = sqrt(var_52_cvector | var_52_cvector);
	var_52_cvector /= var_62_float;
	cvector var_53_cvector = -var_52_cvector;
	cvector var_64_cvector;
	func_949(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_54_cvector = ((var_52_cvector * var_39_float) + (var_64_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0)
		var_37_bool = false;
	@StopWorld();
	@CameraTransit((var_51_cvector + var_54_cvector), var_53_cvector, true);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_1114(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_728;
		@LookAsyncCamera("head");
	}
Label_728:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_410(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_415(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_633(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_165(object var_2_object, string var_209_string)
{
	bool var_210_bool;
	func_1114(var_210_bool);
	if(!var_210_bool) //@nz
		return 0;
	if(var_209_string == var_2_object)
		return 0;
	string var_213_string; bool var_214_bool;
	var_209_string = var_213_string;
	if(var_209_string == "")
		var_214_bool = false;
	else
		var_214_bool = true;
	func_906(var_213_string, var_214_bool);
	var_2_object = var_209_string;
	
}


void func_1061(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1048(var_31_object);
	object var_28_object;
	var_31_object = var_28_object;
	object var_29_object;
	var_28_object->Find(var_24_int, var_29_object);
	if(!var_29_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_24_int);
		var_22_bool = false;
	}
	var_29_object->AddChild(var_23_object);
	@SendWorldWndMessage(7);
	int var_30_int;
	var_23_object->GetCategory(var_30_int);
	@SetDiarySection(var_30_int);
	var_22_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_936(void)
{
	bool var_10_bool;
	func_1114(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_810(bool var_109_bool, object var_110_object)
{
	string var_116_string; bool var_118_bool; int var_119_int; string var_120_string;
	var_116_string = "c";
	int var_117_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_110_object->HasProperty((var_116_string + (var_117_int + 1)), var_118_bool);
			if(!var_118_bool) { //@nz
			} else {
				var_117_int += 1;
			}
		}
		if(!var_117_int) { //@nz
			var_109_bool = false;
			return 10;
		}
		var_119_int = 0;
		if(var_117_int > 1)
			@irand(var_119_int, var_117_int);
		var_110_object->GetProperty((var_116_string + (var_119_int + 1)), var_120_string);
		bool var_132_bool; string var_133_string;
		var_120_string = var_133_string;
		func_921(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_557(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_660(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_992(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_660(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			if(!var_17_int) { //@nz
				@Sleep(3, var_19_bool);
				if(!var_19_bool) { //@nz
				} else {
			} else {
			@irand(var_20_int, var_17_int);
			@irand(var_21_int, 5);
			if(var_21_int != 0)
				var_20_int = 0;
			string var_52_string; int var_53_int;
			var_20_int = var_53_int;
			func_985(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_612;
			goto Label_623;
			}
				Label_612:
					bool var_45_bool;
					func_626(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_618;
			}
		}
	Label_623:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_618:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_943(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_437(void)
{
	float var_271_float;
	@rand(var_271_float, 8, 16);
	@SetTimer(10, var_271_float);
}


void func_949(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_446(void)
{
	@KillTimer(10);
}


void func_959(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_1089(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x450";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_964(bool var_40_bool, string var_41_string, string var_42_string)
{
	object var_44_object;
	@FindActor(var_44_object, var_41_string);
	if(var_44_object == null)
		var_40_bool = false;
	@Trigger(var_44_object, var_42_string);
	var_40_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_332(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_847(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_976(var_153_int);
	string var_147_string = ("d" + var_153_int) + "m";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_172_bool; string var_173_string;
		var_151_string = var_173_string;
		func_921(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_976(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1023(var_193_object);
		if(!var_200_bool) { //@nz
			func_165(var_194_object, "Neutral");
			var_0_object->SetMessage(530461); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531473, 32825, 32824); //@t
			var_0_object->AddReply(531479, 32825, 32830); //@t
		} else {
					func_165(var_194_object, "Neutral");
					var_0_object->SetMessage(530463); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530464, -1, 31830); //@t
					var_0_object->AddReply(531472, -1, 32823); //@t
		}
	}
	for(;;) {
		bool var_233_bool;
		func_1114(var_233_bool);
		if(var_233_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_890(var_2_object);
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


void func_1106(int var_86_int)
{
	var_86_int = 515542;
}


void func_1108(int var_85_int)
{
	var_85_int = 502867;
}


void func_1110(string var_87_string)
{
	var_87_string = "ui/NPC_Laska.png";
}


void func_1112(string var_88_string)
{
	var_88_string = "ui/NPC_Laska_b.png";
}


void func_985(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1114(bool var_80_bool)
{
	var_80_bool = true;
}


void func_734(void)
{
	bool var_262_bool;
	@CameraSwitchToNormal(true);
	bool var_264_bool;
	func_1114(var_264_bool);
	if(var_264_bool != 0) {
	} else {
		@HasAnimationTrack(var_262_bool, "head");
		if(var_262_bool == 0) goto Label_751;
		@UnlookAsync("head");
	}
Label_751:
	
}


void func_992(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_985(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


// @pe
void func_488(void)
{
	func_628();
	func_446();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_752(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_810(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_847(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@irand(var_106_int, 2);
		if(var_106_int != 0)
			@SetVariable("voice_common", ((var_105_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_185_bool; object var_186_object;
		var_99_object = var_186_object;
		func_847(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_810(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_808;
	
Label_808:
	var_98_bool = true;
	
}


// @pe
void func_1009(void)
{
	@SetVariable("b10q04LaskaTalk", 9);
	func_1035();
	bool var_40_bool;
	func_964(var_40_bool, "quest_b10_04", "restore_laska");
}


void func_626(bool var_45_bool)
{
	var_45_bool = true;
}


void func_628(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_503(void)
{
	@StopGroup0();
	func_446();
	func_890("Neutral");
	func_437();
}


void func_633(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_890(string var_235_string)
{
	bool var_239_bool; float var_240_float; float var_241_float;
	@lshHasAnimation(var_239_bool, var_235_string);
	if(var_239_bool != 0) {
		@lshGetAnimTimes(var_235_string, var_240_float, var_241_float);
		@lshPlayAnimation(var_240_float, var_241_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_235_string);
	}
	
}


void func_381(object var_0_object)
{
	bool var_7_bool;
	func_660(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_557();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1023(bool var_200_bool)
{
	int var_202_int;
	func_959(var_202_int, "b10q04LaskaTalk");
	if(var_202_int == 9)
		var_200_bool = true;
	var_200_bool = false;
}


