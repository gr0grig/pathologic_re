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
			func_1047();
			if(var_8_bool == 28869) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1108();
			}
			if(var_8_bool == 28870) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_1108();
			}
			if(var_7_cvector == 28528) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527220); //@t
				var_0_object->ClearReplies(); //@t
				bool var_59_bool;
				func_1117(var_1_object);
				if(var_59_bool != 0)
					var_0_object->AddReply(527221, 28839, 28529); //@t
				var_0_object->AddReply(527224, -1, 28532); //@t
				return 0;
			}
			if(var_7_cvector == 28839) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527508, 28842, 28840); //@t
				var_0_object->AddReply(527509, 28842, 28841); //@t
				return 0;
			}
			if(var_7_cvector == 28842) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527511, 28845, 28843); //@t
				var_0_object->AddReply(527512, 28845, 28844); //@t
				return 0;
			}
			if(var_7_cvector == 28845) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527513); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527514, 28850, 28846); //@t
				return 0;
			}
			if(var_7_cvector == 28850) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527517, 28853, 28851); //@t
				var_0_object->AddReply(527518, 28853, 28852); //@t
				return 0;
			}
			if(var_7_cvector == 28853) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527519); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527520, 28530, 28855); //@t
				var_0_object->AddReply(527521, 28530, 28856); //@t
				return 0;
			}
			if(var_7_cvector == 28530) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527222); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527223, 28863, 28531); //@t
				var_0_object->AddReply(527523, -1, 28859); //@t
				return 0;
			}
			if(var_7_cvector == 28863) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527526); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527527, 28866, 28864); //@t
				var_0_object->AddReply(527528, 28866, 28865); //@t
				return 0;
			}
			if(var_7_cvector == 28866) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527529); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527530, 28858, 28867); //@t
				return 0;
			}
			if(var_7_cvector == 28858) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527522); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527524, 28862, 28861); //@t
				return 0;
			}
			if(var_7_cvector == 28862) {
				func_157(var_8_bool, "Neutral");
				var_0_object->SetMessage(527525); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527531, -1, 28869); //@t
				var_0_object->AddReply(527532, -1, 28870); //@t
				return 0;
			}
			var_3_string = true;
			bool var_164_bool;
			func_1208(var_164_bool);
			if(var_164_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_506(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1054(var_13_object);
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
			func_1054(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_619();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_634();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_577();
			bool var_11_bool = false;
			bool var_12_bool;
			func_791(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_546(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_526(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1054(var_53_object);
					var_53_object = var_52_object;
					func_939(var_51_bool, var_52_object);
				}
			} else {
				func_541(var_7_int);
				func_568();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_568();
		else
			func_1019("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_759();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_782(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_457(var_25_object);
			func_1019("Neutral");
			func_577();
			func_568();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_791(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_1026(string var_203_string, bool var_204_bool)
{
	float var_209_float; float var_210_float;
	@lshGetAnimTimes(var_203_string, var_209_float, var_210_float);
	@lshPlayAnimation(var_209_float, var_210_float, var_204_bool);
}


void func_1155(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1142(var_31_object);
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


void func_772(bool var_15_bool, cvector var_16_cvector)
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


void func_1032(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1208(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1054(var_39_object);
	var_39_object = var_38_object;
	func_881(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_796(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1202(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1200(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1204(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1206(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1183(var_183_int);
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
		var_239_bool = !var_36_bool; //@nz
		if(var_239_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_240_object;
	var_27_object = var_240_object;
	func_864();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_782(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_772(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_526(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_782(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1047(void)
{
	bool var_10_bool;
	func_1208(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_791(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_796(bool var_132_bool, object var_133_object, float var_134_float)
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
	func_1060(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1208(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_858;
		@LookAsyncCamera("head");
	}
Label_858:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_541(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


// @pe
void func_157(object var_2_object, string var_199_string)
{
	bool var_200_bool;
	func_1208(var_200_bool);
	if(!var_200_bool) //@nz
		return 0;
	if(var_199_string == var_2_object)
		return 0;
	string var_203_string; bool var_204_bool;
	var_199_string = var_203_string;
	if(var_199_string == "")
		var_204_bool = false;
	else
		var_204_bool = true;
	func_1026(var_203_string, var_204_bool);
	var_2_object = var_199_string;
	
}


void func_1054(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_1183(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x4ae";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_546(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_764(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1060(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_939(bool var_48_bool, object var_49_object)
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
		func_1032(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1070(int var_214_int, string var_215_string)
{
	int var_217_int;
	@GetVariable(var_215_string, var_217_int);
	var_217_int = var_214_int;
}


void func_1200(int var_180_int)
{
	var_180_int = 515592;
}


void func_688(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_791(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1091(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_791(var_55_bool);
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
			func_1084(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_743;
			goto Label_754;
			}
				Label_743:
					bool var_59_bool;
					func_757(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_749;
			}
		}
	Label_754:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_749:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1202(int var_179_int)
{
	var_179_int = 511961;
}


void func_1075(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_1204(string var_181_string)
{
	var_181_string = "ui/NPC_Burah.png";
}


void func_1206(string var_182_string)
{
	var_182_string = "ui/NPC_Burah_b.png";
}


void func_1208(bool var_75_bool)
{
	var_75_bool = true;
}


void func_568(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1084(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_577(void)
{
	@KillTimer(10);
}


void func_1091(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1084(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


// @pe
void func_457(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_976(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1075(var_92_int);
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
		func_1032(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


// @pe
void func_1108(void)
{
	@SetVariable("k11q01", 7);
	func_1129();
}


// @pe
void func_1117(bool var_212_bool)
{
	int var_214_int;
	func_1070(var_214_int, "k11q01");
	if(var_214_int == 6)
		var_212_bool = true;
	var_212_bool = false;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_193_object, "Neutral");
		var_0_object->SetMessage(527220); //@t
		var_0_object->ClearReplies(); //@t
		bool var_212_bool;
		func_1117(var_192_object);
		if(var_212_bool != 0)
			var_0_object->AddReply(527221, 28839, 28529); //@t
		var_0_object->AddReply(527224, -1, 28532); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_226_bool;
	func_1208(var_226_bool);
	if(var_226_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1019(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_156:
		return 0;

	}
	
}


void func_864(void)
{
	bool var_242_bool;
	@CameraSwitchToNormal();
	bool var_243_bool;
	func_1208(var_243_bool);
	if(var_243_bool != 0) {
	} else {
		@HasAnimationTrack(var_242_bool, "head");
		if(var_242_bool == 0) goto Label_880;
		@UnlookAsync("head");
	}
Label_880:
	
}


void func_1129(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 490, 1, 528057);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1155(var_22_bool, var_23_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_619(void)
{
	func_759();
	func_577();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_881(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_939(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_976(var_79_bool, var_80_object);
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
		func_976(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_939(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_937;
	
Label_937:
	var_37_bool = true;
	
}


void func_506(object var_0_object)
{
	bool var_7_bool;
	func_791(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_502();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_688();
	}
}
EMIT "Return(); Pop(0)";


void func_757(bool var_59_bool)
{
	var_59_bool = true;
}


void func_759(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1142(object var_31_object)
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


void func_634(void)
{
	@StopGroup0();
	func_577();
	func_1019("Neutral");
	func_568();
}


void func_1019(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_764(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


