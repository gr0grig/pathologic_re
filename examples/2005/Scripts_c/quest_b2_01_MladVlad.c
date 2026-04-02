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
			func_1072();
			if(var_8_bool == 21418) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1145();
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_1163();
			}
			if(var_8_bool == 21423) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_1151();
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_1163();
			}
			if(var_8_bool == 21431) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_1157();
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_1163();
			}
			if(var_7_cvector == 21417) {
				func_177(var_8_bool, "Neutral");
				var_0_object->SetMessage(520225); //@t
				var_0_object->ClearReplies(); //@t
				bool var_72_bool;
				func_1199(var_1_object);
				if(var_72_bool != 0)
					var_0_object->AddReply(520226, 21419, 21418); //@t
				bool var_81_bool;
				func_1211(var_1_object);
				if(var_81_bool != 0)
					var_0_object->AddReply(520231, 21424, 21423); //@t
				bool var_90_bool;
				func_1223(var_1_object);
				if(var_90_bool != 0)
					var_0_object->AddReply(520239, 21432, 21431); //@t
				var_0_object->AddReply(520246, -1, 21438); //@t
				return 0;
			}
			if(var_7_cvector == 21432) {
				func_177(var_8_bool, "Neutral");
				var_0_object->SetMessage(520240); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520241, 21434, 21433); //@t
				return 0;
			}
			if(var_7_cvector == 21434) {
				func_177(var_8_bool, "Neutral");
				var_0_object->SetMessage(520242); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520243, 21436, 21435); //@t
				var_0_object->AddReply(530818, 32128, 32127); //@t
				return 0;
			}
			if(var_7_cvector == 32128) {
				func_177(var_8_bool, "Neutral");
				var_0_object->SetMessage(530819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530820, 21436, 32129); //@t
				return 0;
			}
			if(var_7_cvector == 21436) {
				func_177(var_8_bool, "Neutral");
				var_0_object->SetMessage(520244); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520245, -1, 21437); //@t
				var_0_object->AddReply(527839, -1, 29182); //@t
				return 0;
			}
			if(var_7_cvector == 21424) {
				func_177(var_8_bool, "Neutral");
				var_0_object->SetMessage(520232); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520233, 21426, 21425); //@t
				return 0;
			}
			if(var_7_cvector == 21426) {
				func_177(var_8_bool, "Neutral");
				var_0_object->SetMessage(520234); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520235, 21428, 21427); //@t
				var_0_object->AddReply(520238, -1, 21430); //@t
				return 0;
			}
			if(var_7_cvector == 21428) {
				func_177(var_8_bool, "Neutral");
				var_0_object->SetMessage(520236); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520237, -1, 21429); //@t
				return 0;
			}
			if(var_7_cvector == 21419) {
				func_177(var_8_bool, "Neutral");
				var_0_object->SetMessage(520227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520228, 21421, 21420); //@t
				return 0;
			}
			if(var_7_cvector == 21421) {
				func_177(var_8_bool, "Neutral");
				var_0_object->SetMessage(520229); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520230, -1, 21422); //@t
				return 0;
			}
			var_3_string = true;
			bool var_174_bool;
			func_1260(var_174_bool);
			if(var_174_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc8";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_531(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1079(var_13_object);
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
			func_1079(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_644();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_659();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_602();
			bool var_11_bool = false;
			bool var_12_bool;
			func_816(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_571(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_551(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1079(var_53_object);
					var_53_object = var_52_object;
					func_964(var_51_bool, var_52_object);
				}
			} else {
				func_566(var_7_int);
				func_593();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_593();
		else
			func_1044("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_784();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_807(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_482(var_25_object);
			func_1044("Neutral");
			func_602();
			func_593();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_816(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


// @pe
void func_644(void)
{
	func_784();
	func_602();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1157(void)
{
	@SetVariable("oob2MladVladFactory3", 1);
}


void func_906(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_964(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1001(var_79_bool, var_80_object);
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
		func_1001(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_964(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_962;
	
Label_962:
	var_37_bool = true;
	
}


// @pe
void func_1163(void)
{
	bool var_19_bool = false;
	bool var_20_bool = false;
	int var_21_int;
	func_1095(var_21_int, "oob2MladVladFactory1");
	if(var_21_int != 0) {
		int var_27_int;
		func_1095(var_27_int, "oob2MladVladFactory2");
		if(var_27_int != 0)
			var_20_bool = true;
	}
	if(var_20_bool != 0) {
		int var_31_int;
		func_1095(var_31_int, "oob2MladVladFactory3");
		if(var_31_int != 0)
			var_19_bool = true;
	}
	if(var_19_bool != 0) {
		bool var_35_bool;
		func_1100(var_35_bool, "quest_b2_01", "remove_mladvlad");
	}
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1079(var_39_object);
	var_39_object = var_38_object;
	func_906(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_821(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1254(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1252(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1256(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1258(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1235(var_183_int);
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
		var_257_bool = !var_36_bool; //@nz
		if(var_257_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_258_object;
	var_27_object = var_258_object;
	func_889();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_782(bool var_59_bool)
{
	var_59_bool = true;
}


void func_784(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_531(object var_0_object)
{
	bool var_7_bool;
	func_816(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_527();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_713();
	}
}
EMIT "Return(); Pop(0)";


void func_1044(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_659(void)
{
	@StopGroup0();
	func_602();
	func_1044("Neutral");
	func_593();
}


void func_789(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1051(string var_203_string, bool var_204_bool)
{
	float var_209_float; float var_210_float;
	@lshGetAnimTimes(var_203_string, var_209_float, var_210_float);
	@lshPlayAnimation(var_209_float, var_210_float, var_204_bool);
}


void func_797(bool var_15_bool, cvector var_16_cvector)
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


void func_1057(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1260(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_807(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_797(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_551(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_807(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1199(bool var_212_bool)
{
	int var_214_int;
	func_1095(var_214_int, "oob2MladVladFactory1");
	if(var_214_int == 0) {
		var_212_bool = true;
		return 0;
	}
	var_212_bool = false;
}


void func_816(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_177(object var_2_object, string var_199_string)
{
	bool var_200_bool;
	func_1260(var_200_bool);
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
	func_1051(var_203_string, var_204_bool);
	var_2_object = var_199_string;
	
}


void func_1072(void)
{
	bool var_10_bool;
	func_1260(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_821(bool var_132_bool, object var_133_object, float var_134_float)
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
	func_1085(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1260(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_883;
		@LookAsyncCamera("head");
	}
Label_883:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_566(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1079(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1211(bool var_223_bool)
{
	int var_225_int;
	func_1095(var_225_int, "oob2MladVladFactory2");
	if(var_225_int == 0) {
		var_223_bool = true;
		return 0;
	}
	var_223_bool = false;
}


void func_571(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_789(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1085(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_964(bool var_48_bool, object var_49_object)
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
		func_1057(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


// @pe
void func_1223(bool var_232_bool)
{
	int var_234_int;
	func_1095(var_234_int, "oob2MladVladFactory3");
	if(var_234_int == 0) {
		var_232_bool = true;
		return 0;
	}
	var_232_bool = false;
}


void func_1095(int var_214_int, string var_215_string)
{
	int var_217_int;
	@GetVariable(var_215_string, var_217_int);
	var_217_int = var_214_int;
}


void func_713(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_816(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1128(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_816(var_55_bool);
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
			func_1121(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_768;
			goto Label_779;
			}
				Label_768:
					bool var_59_bool;
					func_782(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_774;
			}
		}
	Label_779:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_774:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1100(bool var_35_bool, string var_36_string, string var_37_string)
{
	object var_39_object;
	@FindActor(var_39_object, var_36_string);
	if(var_39_object == null)
		var_35_bool = false;
	@Trigger(var_39_object, var_37_string);
	var_35_bool = true;
}
EMIT "Stack[-1] = 0";


void func_593(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1235(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x4e2";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_1112(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_602(void)
{
	@KillTimer(10);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		func_177(var_193_object, "Neutral");
		var_0_object->SetMessage(520225); //@t
		var_0_object->ClearReplies(); //@t
		bool var_212_bool;
		func_1199(var_1_object);
		if(var_212_bool != 0)
			var_0_object->AddReply(520226, 21419, 21418); //@t
		bool var_223_bool;
		func_1211(var_1_object);
		if(var_223_bool != 0)
			var_0_object->AddReply(520231, 21424, 21423); //@t
		bool var_232_bool;
		func_1223(var_1_object);
		if(var_232_bool != 0)
			var_0_object->AddReply(520239, 21432, 21431); //@t
		var_0_object->AddReply(520246, -1, 21438); //@t
		goto Label_147;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_147:
	bool var_244_bool;
	func_1260(var_244_bool);
	if(var_244_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1044(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_176;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_176:
		return 0;

	}
	
}


void func_889(void)
{
	bool var_260_bool;
	@CameraSwitchToNormal();
	bool var_261_bool;
	func_1260(var_261_bool);
	if(var_261_bool != 0) {
	} else {
		@HasAnimationTrack(var_260_bool, "head");
		if(var_260_bool == 0) goto Label_905;
		@UnlookAsync("head");
	}
Label_905:
	
}


void func_1121(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


// @pe
void func_482(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1252(int var_180_int)
{
	var_180_int = 515547;
}


void func_1254(int var_179_int)
{
	var_179_int = 502872;
}


void func_1256(string var_181_string)
{
	var_181_string = "ui/NPC_MladVlad.png";
}


void func_1128(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1121(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1258(string var_182_string)
{
	var_182_string = "ui/NPC_MladVlad_b.png";
}


void func_1001(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1112(var_92_int);
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
		func_1057(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_1260(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_1145(void)
{
	@SetVariable("oob2MladVladFactory1", 1);
}


// @pe
void func_1151(void)
{
	@SetVariable("oob2MladVladFactory2", 1);
}


