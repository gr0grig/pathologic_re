// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_935();
			if(var_8_bool == 31828) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1008();
			}
			if(var_7_cvector == 31827) {
				bool var_48_bool;
				func_1022(var_1_object);
				if(!var_48_bool) { //@nz
					func_178(var_8_bool, "Neutral");
					var_0_object->SetMessage(530461); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531473, 32825, 32824); //@t
					var_0_object->AddReply(531479, 32825, 32830); //@t
					return 0;
				}
				func_178(var_8_bool, "Neutral");
				var_0_object->SetMessage(530463); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530464, -1, 31830); //@t
				var_0_object->AddReply(531472, -1, 32823); //@t
				return 0;
			}
			if(var_7_cvector == 32825) {
				func_178(var_8_bool, "Neutral");
				var_0_object->SetMessage(531474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531475, 32827, 32826); //@t
				var_0_object->AddReply(531480, 32827, 32832); //@t
				return 0;
			}
			if(var_7_cvector == 32827) {
				func_178(var_8_bool, "Neutral");
				var_0_object->SetMessage(531476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531477, 32829, 32828); //@t
				var_0_object->AddReply(531481, 32829, 32834); //@t
				return 0;
			}
			if(var_7_cvector == 32829) {
				func_178(var_8_bool, "Neutral");
				var_0_object->SetMessage(531478); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530462, -1, 31828); //@t
				var_0_object->AddReply(531482, -1, 32836); //@t
				return 0;
			}
			var_3_string = true;
			bool var_114_bool;
			func_1113(var_114_bool);
			if(var_114_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc9";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_394(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_942(var_13_object);
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
			func_942(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_507();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_522();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_465();
			bool var_11_bool = false;
			bool var_12_bool;
			func_679(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_434(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_414(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_942(var_53_object);
					var_53_object = var_52_object;
					func_827(var_51_bool, var_52_object);
				}
			} else {
				func_429(var_7_int);
				func_456();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_456();
		else
			func_907("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_647();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_670(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_345(var_25_object);
			func_907("Neutral");
			func_465();
			func_456();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_679(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_769(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_827(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_864(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_864(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_827(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_825;
	
Label_825:
	var_37_bool = true;
	
}


void func_645(bool var_59_bool)
{
	var_59_bool = true;
}


void func_647(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_394(object var_0_object)
{
	bool var_7_bool;
	func_679(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_390();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_576();
	}
}
EMIT "Return(); Pop(0)";


void func_907(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_522(void)
{
	@StopGroup0();
	func_465();
	func_907("Neutral");
	func_456();
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_942(var_39_object);
	var_39_object = var_38_object;
	func_769(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_684(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1107(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1105(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1109(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1111(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1088(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_248_bool = !var_36_bool; //@nz
		if(var_248_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_249_object;
	var_27_object = var_249_object;
	func_752();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_652(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1034(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 559, 2, 530538);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1060(var_22_bool, var_23_object, 550);
}
EMIT "Stack[-1] = 0";


void func_914(string var_212_string, bool var_213_bool)
{
	float var_218_float; float var_219_float;
	@lshGetAnimTimes(var_212_string, var_218_float, var_219_float);
	@lshPlayAnimation(var_218_float, var_219_float, var_213_bool);
}


void func_660(bool var_15_bool, cvector var_16_cvector)
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


void func_1047(object var_31_object)
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


void func_920(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1113(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_414(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_670(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_670(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_660(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1060(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1047(var_31_object);
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


void func_679(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_935(void)
{
	bool var_10_bool;
	func_1113(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_684(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_948(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_1113(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_746;
		@LookAsyncCamera("head");
	}
Label_746:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_429(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_942(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_178(object var_2_object, string var_208_string)
{
	bool var_209_bool;
	func_1113(var_209_bool);
	if(!var_209_bool) //@nz
		return 0;
	if(var_208_string == var_2_object)
		return 0;
	string var_212_string; bool var_213_bool;
	var_208_string = var_212_string;
	if(var_208_string == "")
		var_213_bool = false;
	else
		var_213_bool = true;
	func_914(var_212_string, var_213_bool);
	var_2_object = var_208_string;
	
}


void func_434(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_652(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_948(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_827(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_920(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_958(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_1088(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x44f";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_576(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_679(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_991(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_679(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_984(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_631;
			goto Label_642;
			}
				Label_631:
					bool var_59_bool;
					func_645(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_637;
			}
		}
	Label_642:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_637:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_963(bool var_40_bool, string var_41_string, string var_42_string)
{
	object var_44_object;
	@FindActor(var_44_object, var_41_string);
	if(var_44_object == null)
		var_40_bool = false;
	@Trigger(var_44_object, var_42_string);
	var_40_bool = true;
}
EMIT "Stack[-1] = 0";


void func_456(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_975(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_1105(int var_180_int)
{
	var_180_int = 515542;
}


void func_465(void)
{
	@KillTimer(10);
}


void func_1107(int var_179_int)
{
	var_179_int = 502867;
}


void func_1109(string var_181_string)
{
	var_181_string = "ui/NPC_Laska.png";
}


void func_1111(string var_182_string)
{
	var_182_string = "ui/NPC_Laska_b.png";
}


void func_984(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_1113(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_345(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool;
		func_1022(var_192_object);
		if(!var_199_bool) { //@nz
			func_178(var_193_object, "Neutral");
			var_0_object->SetMessage(530461); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531473, 32825, 32824); //@t
			var_0_object->AddReply(531479, 32825, 32830); //@t
		} else {
					func_178(var_193_object, "Neutral");
					var_0_object->SetMessage(530463); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530464, -1, 31830); //@t
					var_0_object->AddReply(531472, -1, 32823); //@t
		}
	}
	for(;;) {
		bool var_227_bool;
		func_1113(var_227_bool);
		if(var_227_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_907(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_177;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_177:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_991(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_984(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_864(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_975(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_920(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_752(void)
{
	bool var_251_bool;
	@CameraSwitchToNormal();
	bool var_252_bool;
	func_1113(var_252_bool);
	if(var_252_bool != 0) {
	} else {
		@HasAnimationTrack(var_251_bool, "head");
		if(var_251_bool == 0) goto Label_768;
		@UnlookAsync("head");
	}
Label_768:
	
}


// @pe
void func_1008(void)
{
	@SetVariable("b10q04LaskaTalk", 9);
	func_1034();
	bool var_40_bool;
	func_963(var_40_bool, "quest_b10_04", "restore_laska");
}


// @pe
void func_507(void)
{
	func_647();
	func_465();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1022(bool var_199_bool)
{
	int var_201_int;
	func_958(var_201_int, "b10q04LaskaTalk");
	if(var_201_int == 9)
		var_199_bool = true;
	var_199_bool = false;
}


