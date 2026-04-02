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
			func_1072();
			if(var_8_bool == 36141) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1194();
			}
			if(var_8_bool == 38456) {
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_1194();
			}
			if(var_8_bool == 22161) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_1209();
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_1176();
				object var_70_object = var_1_object;
				func_1187(var_0_object);
			}
			if(var_7_cvector == 22158) {
				func_160(var_8_bool, "Neutral");
				var_0_object->SetMessage(520941); //@t
				var_0_object->ClearReplies(); //@t
				bool var_110_bool;
				func_1215(var_1_object);
				if(var_110_bool != 0)
					var_0_object->AddReply(534490, 38444, 36135); //@t
				bool var_121_bool;
				func_1227(var_121_bool, var_1_object);
				if(!var_121_bool) //@nz
					var_0_object->AddReply(520942, 22160, 22159); //@t
				var_0_object->AddReply(520946, -1, 22163); //@t
				var_0_object->AddReply(536616, -1, 38443); //@t
				return 0;
			}
			if(var_7_cvector == 22160) {
				func_160(var_8_bool, "Neutral");
				var_0_object->SetMessage(520943); //@t
				var_0_object->ClearReplies(); //@t
				bool var_147_bool;
				func_1237(var_147_bool, var_1_object);
				if(var_147_bool != 0)
					var_0_object->AddReply(520944, -1, 22161); //@t
				var_0_object->AddReply(520945, -1, 22162); //@t
				return 0;
			}
			if(var_7_cvector == 38444) {
				func_160(var_8_bool, "Neutral");
				var_0_object->SetMessage(536617); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536618, 38446, 38445); //@t
				return 0;
			}
			if(var_7_cvector == 38446) {
				func_160(var_8_bool, "Fear");
				var_0_object->SetMessage(536619); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536620, 36136, 38447); //@t
				return 0;
			}
			if(var_7_cvector == 36136) {
				func_160(var_8_bool, "Fear");
				var_0_object->SetMessage(534491); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534492, 36138, 36137); //@t
				var_0_object->AddReply(536621, 38449, 38448); //@t
				return 0;
			}
			if(var_7_cvector == 38449) {
				func_160(var_8_bool, "Fear");
				var_0_object->SetMessage(536622); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536625, 36140, 38452); //@t
				return 0;
			}
			if(var_7_cvector == 36138) {
				func_160(var_8_bool, "Neutral");
				var_0_object->SetMessage(534493); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534494, 36140, 36139); //@t
				var_0_object->AddReply(536623, 38451, 38450); //@t
				return 0;
			}
			if(var_7_cvector == 38451) {
				func_160(var_8_bool, "Sly");
				var_0_object->SetMessage(536624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536626, 38455, 38454); //@t
				return 0;
			}
			if(var_7_cvector == 38455) {
				func_160(var_8_bool, "Untrust");
				var_0_object->SetMessage(536627); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536628, -1, 38456); //@t
				return 0;
			}
			if(var_7_cvector == 36140) {
				func_160(var_8_bool, "Untrust");
				var_0_object->SetMessage(534495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534496, -1, 36141); //@t
				return 0;
			}
			var_3_string = true;
			bool var_223_bool;
			func_1345(var_223_bool);
			if(var_223_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb7";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_510(var_6_bool);
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
		func_617();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_632();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_575();
			bool var_11_bool = false;
			bool var_12_bool;
			func_796(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_544(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_524(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1079(var_53_object);
					var_53_object = var_52_object;
					func_946(var_51_bool, var_52_object);
				}
			} else {
				func_539(var_7_int);
				func_566();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_566();
		else
			func_1026("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_757();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_787(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_461(var_25_object);
			func_1026("Neutral");
			func_575();
			func_566();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_801(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1339(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1337(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1341(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1343(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1320(var_89_int);
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
	func_1079(var_100_object);
	var_100_object = var_99_object;
	func_888(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_269_bool = !var_36_bool; //@nz
		if(var_269_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_270_object;
	var_27_object = var_270_object;
	func_870();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1152(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1026(string var_253_string)
{
	bool var_257_bool; float var_258_float; float var_259_float;
	@lshHasAnimation(var_257_bool, var_253_string);
	if(var_257_bool != 0) {
		@lshGetAnimTimes(var_253_string, var_258_float, var_259_float);
		@lshPlayAnimation(var_258_float, var_259_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_253_string);
	}
	
}


void func_770(object var_76_object, string var_77_string, int var_78_int)
{
	int var_80_int;
	var_76_object->GetProperty(var_77_string, var_80_int);
	var_76_object->SetProperty(var_77_string, (var_80_int + var_78_int));
}


void func_1159(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1152(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_777(bool var_15_bool, cvector var_16_cvector)
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


void func_524(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_787(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1292(bool var_20_bool, object var_21_object, int var_22_int)
{
	object var_29_object;
	func_1279(var_29_object);
	object var_26_object;
	var_29_object = var_26_object;
	object var_27_object;
	var_26_object->Find(var_22_int, var_27_object);
	if(!var_27_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_22_int);
		var_20_bool = false;
	}
	var_27_object->AddChild(var_21_object);
	@SendWorldWndMessage(7);
	int var_28_int;
	var_21_object->GetCategory(var_28_int);
	@SetDiarySection(var_28_int);
	var_20_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1042(string var_204_string, bool var_205_bool)
{
	bool var_211_bool; float var_212_float; float var_213_float;
	@lshHasAnimation(var_211_bool, var_204_string);
	if(var_211_bool != 0) {
		@lshGetAnimTimes(var_204_string, var_212_float, var_213_float);
		@lshPlayAnimation(var_212_float, var_213_float, var_205_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_204_string);
	}
	
}


void func_787(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_777(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1176(void)
{
	int var_61_int;
	func_1143(var_61_int);
	int var_60_int;
	var_61_int = var_60_int;
	@SetVariable(("RMap" + var_60_int), 1);
}


void func_539(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_796(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_160(object var_2_object, string var_200_string)
{
	bool var_201_bool;
	func_1345(var_201_bool);
	if(!var_201_bool) //@nz
		return 0;
	if(var_200_string == var_2_object)
		return 0;
	string var_204_string; bool var_205_bool;
	var_200_string = var_204_string;
	if(var_200_string == "")
		var_205_bool = false;
	else
		var_205_bool = true;
	func_1042(var_204_string, var_205_bool);
	var_2_object = var_200_string;
	
}


void func_801(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1085(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1345(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_864;
		@LookAsyncCamera("head");
	}
Label_864:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_544(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_762(var_22_float, var_23_object);
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
void func_1187(object var_70_object)
{
	object var_72_object;
	var_70_object = var_72_object;
	func_1112(var_72_object, -1000);
}


void func_1057(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1345(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1320(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x537";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_1194(void)
{
	func_1266();
	bool var_38_bool;
	func_1131(var_38_bool, "quest_d11_05", "place_enemy_after");
	bool var_44_bool;
	func_1131(var_44_bool, "quest_d11_05", "completed");
}


void func_686(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_796(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1159(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_796(var_41_bool);
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
			func_1152(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_741;
			goto Label_752;
			}
				Label_741:
					bool var_45_bool;
					func_755(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_747;
			}
		}
	Label_752:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_747:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1072(void)
{
	bool var_10_bool;
	func_1345(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_946(bool var_109_bool, object var_110_object)
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
		func_1057(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_566(void)
{
	float var_281_float;
	@rand(var_281_float, 8, 16);
	@SetTimer(10, var_281_float);
}


void func_1079(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1209(void)
{
	@TriggerWorld("playsound", "mapmark");
}


void func_1337(int var_86_int)
{
	var_86_int = 515547;
}


void func_1339(int var_85_int)
{
	var_85_int = 502872;
}


void func_1341(string var_87_string)
{
	var_87_string = "ui/NPC_MladVlad.png";
}


void func_1085(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


// @pe
void func_1215(bool var_218_bool)
{
	int var_220_int;
	func_1095(var_220_int, "d11q05");
	if(var_220_int == 2)
		var_218_bool = true;
	var_218_bool = false;
}


void func_1343(string var_88_string)
{
	var_88_string = "ui/NPC_MladVlad_b.png";
}


void func_1345(bool var_80_bool)
{
	var_80_bool = true;
}


void func_575(void)
{
	@KillTimer(10);
}


void func_1095(int var_220_int, string var_221_string)
{
	int var_223_int;
	@GetVariable(var_221_string, var_223_int);
	var_223_int = var_220_int;
}


// @pe
void func_1227(bool var_229_bool, object var_230_object)
{
	object var_232_object;
	var_230_object = var_232_object;
	func_1247(var_232_object);
	bool var_231_bool;
	if(var_231_bool != 0) {
		var_229_bool = true;
		return 0;
	}
	var_229_bool = false;
}


void func_1100(int var_85_int, int var_86_int)
{
	object var_88_object;
	@CreateIntVector(var_88_object);
	var_88_object->add(var_85_int);
	var_88_object->add(var_86_int);
	@SendWorldWndMessage(3, var_88_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_461(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		func_160(var_194_object, "Neutral");
		var_0_object->SetMessage(520941); //@t
		var_0_object->ClearReplies(); //@t
		bool var_218_bool;
		func_1215(var_1_object);
		if(var_218_bool != 0)
			var_0_object->AddReply(534490, 38444, 36135); //@t
		bool var_229_bool;
		func_1227(var_229_bool, var_1_object);
		if(!var_229_bool) //@nz
			var_0_object->AddReply(520942, 22160, 22159); //@t
		var_0_object->AddReply(520946, -1, 22163); //@t
		var_0_object->AddReply(536616, -1, 38443); //@t
		goto Label_130;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_130:
	bool var_251_bool;
	func_1345(var_251_bool);
	if(var_251_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1026(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_159;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_159:
		return 0;

	}
	
}


// @pe
void func_1237(bool var_147_bool, object var_148_object)
{
	object var_150_object;
	var_148_object = var_150_object;
	bool var_149_bool;
	func_1259(var_149_bool, var_150_object);
	if(var_149_bool != 0) {
		var_147_bool = true;
		return 0;
	}
	var_147_bool = false;
}


void func_983(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1143(var_153_int);
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
		func_1057(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1112(object var_72_object, int var_73_int)
{
	int var_75_int;
	object var_76_object;
	var_72_object = var_76_object;
	int var_78_int;
	func_770(var_76_object, "money", var_78_int);
	if(var_78_int > 0) {
		@GetInvItemByName(var_75_int, "Money");
		int var_85_int; int var_86_int;
		var_75_int = var_85_int;
		var_73_int = var_86_int;
		func_1100(var_85_int, var_86_int);
	}
}


void func_1247(bool var_231_bool)
{
	int var_237_int;
	func_1143(var_237_int);
	int var_235_int;
	var_237_int = var_235_int;
	int var_236_int;
	@GetVariable(("RMap" + var_235_int), var_236_int);
	var_231_bool = var_236_int != 0;
}


void func_870(void)
{
	bool var_272_bool;
	@CameraSwitchToNormal(true);
	bool var_274_bool;
	func_1345(var_274_bool);
	if(var_274_bool != 0) {
	} else {
		@HasAnimationTrack(var_272_bool, "head");
		if(var_272_bool == 0) goto Label_887;
		@UnlookAsync("head");
	}
Label_887:
	
}


// @pe
void func_617(void)
{
	func_757();
	func_575();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1131(bool var_38_bool, string var_39_string, string var_40_string)
{
	object var_42_object;
	@FindActor(var_42_object, var_39_string);
	if(var_42_object == null)
		var_38_bool = false;
	@Trigger(var_42_object, var_40_string);
	var_38_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1259(bool var_149_bool, object var_150_object)
{
	int var_152_int;
	var_150_object->GetProperty("money", var_152_int);
	var_149_bool = var_152_int >= 1000;
}


void func_1266(void)
{
	object var_16_object;
	@CreateDiaryEntry(var_16_object, 685, 2, 534500);
	bool var_20_bool; object var_21_object;
	var_16_object = var_21_object;
	func_1292(var_20_bool, var_21_object, 682);
}
EMIT "Stack[-1] = 0";


void func_755(bool var_45_bool)
{
	var_45_bool = true;
}


void func_888(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_946(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_983(var_140_bool, var_141_object);
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
		func_983(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_946(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_944;
	
Label_944:
	var_98_bool = true;
	
}


void func_757(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1143(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_632(void)
{
	@StopGroup0();
	func_575();
	func_1026("Neutral");
	func_566();
}


void func_762(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_510(object var_0_object)
{
	bool var_7_bool;
	func_796(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_686();
	}
}
EMIT "Return(); Pop(0)";


void func_1279(object var_29_object)
{
	object var_31_object;
	@GetDiaryRoot(var_31_object);
	if(!var_31_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_29_object = false;
	}
	var_31_object = var_29_object;
}
EMIT "Stack[-1] = 0";


