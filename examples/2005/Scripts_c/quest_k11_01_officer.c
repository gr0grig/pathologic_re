// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_685();
			if(var_11_object == 29394) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_759();
			}
			if(var_10_bool == 29393) {
				bool var_51_bool;
				func_773(var_1_object);
				if(var_51_bool != 0) {
					object var_59_object; object var_60_object;
					var_59_object = var_1_object;
					var_60_object = var_0_object;
					func_753();
					func_162(var_11_object, "Neutral");
					var_0_object->SetMessage(528031); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530252, 31642, 31641); //@t
					var_0_object->AddReply(530261, 31655, 31650); //@t
					return 0;
				}
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(528033); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528034, -1, 29396); //@t
				var_0_object->AddReply(530257, -1, 31646); //@t
				return 0;
			}
			if(var_10_bool == 31655) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530267); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530268, 31644, 31656); //@t
				return 0;
			}
			if(var_10_bool == 31642) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530254, 31644, 31643); //@t
				return 0;
			}
			if(var_10_bool == 31644) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530256, 31647, 31645); //@t
				var_0_object->AddReply(530262, 31652, 31651); //@t
				return 0;
			}
			if(var_10_bool == 31652) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530263); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530264, 31647, 31653); //@t
				return 0;
			}
			if(var_10_bool == 31647) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530259, 31649, 31648); //@t
				return 0;
			}
			if(var_10_bool == 31649) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528032, -1, 29394); //@t
				return 0;
			}
			var_3_string = true;
			bool var_135_bool;
			func_727(var_135_bool);
			if(var_135_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_398(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_463(var_9_object, var_10_object);
		int var_14_int; object var_15_object;
		var_10_object = var_15_object;
		TaskCall(0);
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_425(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_674(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_576(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_721(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_719(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_723(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_725(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_839(var_76_int);
	var_21_object->SetPlayerName(var_76_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_85_object; object var_86_object;
	var_15_object = var_85_object;
	var_21_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_144_bool = !var_24_bool; //@nz
		if(var_144_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_145_object;
	var_15_object = var_145_object;
	func_644();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_644(void)
{
	bool var_147_bool;
	@CameraSwitchToNormal();
	bool var_148_bool;
	func_727(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		@HasAnimationTrack(var_147_bool, "head");
		if(var_147_bool == 0) goto Label_660;
		@UnlookAsync("head");
	}
Label_660:
	
}


// @pe
void func_773(bool var_92_bool)
{
	int var_94_int;
	func_702(var_94_int, "ook11Officer1");
	if(var_94_int == 0) {
		var_92_bool = true;
		return 0;
	}
	var_92_bool = false;
}


// @pe
void func_398(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_571(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_477();
	if(!false) //@nz
		@KillTimer(10);
}


void func_785(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 486, 1, 528053);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_811(var_25_bool, var_26_object, 480);
}
EMIT "Stack[-1] = 0";


void func_661(string var_125_string)
{
	float var_128_float; float var_129_float;
	@lshGetAnimTimes(var_125_string, var_128_float, var_129_float);
	@lshPlayAnimation(var_128_float, var_129_float, false);
}


void func_668(string var_108_string, bool var_109_bool)
{
	float var_114_float; float var_115_float;
	@lshGetAnimTimes(var_108_string, var_114_float, var_115_float);
	@lshPlayAnimation(var_114_float, var_115_float, var_109_bool);
}


void func_798(object var_34_object)
{
	object var_36_object;
	@GetDiaryRoot(var_36_object);
	if(!var_36_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_34_object = false;
	}
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_162(object var_2_object, string var_104_string)
{
	bool var_105_bool;
	func_727(var_105_bool);
	if(!var_105_bool) //@nz
		return 0;
	if(var_104_string == var_2_object)
		return 0;
	string var_108_string; bool var_109_bool;
	var_104_string = var_108_string;
	if(var_104_string == "")
		var_109_bool = false;
	else
		var_109_bool = true;
	func_668(var_108_string, var_109_bool);
	var_2_object = var_104_string;
	
}


void func_674(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_425(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_563(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_811(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_798(var_34_object);
	object var_31_object;
	var_34_object = var_31_object;
	object var_32_object;
	var_31_object->Find(var_27_int, var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_27_int);
		var_25_bool = false;
	}
	var_32_object->AddChild(var_26_object);
	@SendWorldWndMessage(7);
	int var_33_int;
	var_26_object->GetCategory(var_33_int);
	@SetDiarySection(var_33_int);
	var_25_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_556(bool var_60_bool)
{
	var_60_bool = true;
}


void func_685(void)
{
	bool var_13_bool;
	func_727(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_558(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_563(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_692(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_571(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_702(int var_94_int, string var_95_string)
{
	int var_97_int;
	@GetVariable(var_95_string, var_97_int);
	var_97_int = var_94_int;
}


void func_576(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_692(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_727(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_638;
		@LookAsyncCamera("head");
	}
Label_638:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_707(bool var_43_bool, string var_44_string, string var_45_string)
{
	object var_47_object;
	@FindActor(var_47_object, var_44_string);
	if(var_47_object == null)
		var_43_bool = false;
	@Trigger(var_47_object, var_45_string);
	var_43_bool = true;
}
EMIT "Stack[-1] = 0";


void func_839(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x356";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool;
		func_773(var_1_object);
		if(var_92_bool != 0) {
			object var_100_object; object var_101_object;
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_753();
			func_162(var_86_object, "Neutral");
			var_0_object->SetMessage(528031); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530252, 31642, 31641); //@t
			var_0_object->AddReply(530261, 31655, 31650); //@t
		} else {
					func_162(var_86_object, "Neutral");
					var_0_object->SetMessage(528033); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528034, -1, 29396); //@t
					var_0_object->AddReply(530257, -1, 31646); //@t
		}
	}
	for(;;) {
		bool var_123_bool;
		func_727(var_123_bool);
		if(var_123_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_661(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_161;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_161:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_719(int var_73_int)
{
	var_73_int = 515597;
}


// @pe
void func_463(object var_2_object, string var_3_string)
{
	func_558();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_721(int var_72_int)
{
	var_72_int = 514841;
}


void func_723(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png";
}


void func_725(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png";
}


void func_727(bool var_67_bool)
{
	var_67_bool = false;
}


void func_729(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_477(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_571(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_736(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_571(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_524;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_729(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_553;
				}
			} else if(var_27_int != 0) {
				goto Label_553;
			}
			}
					bool var_60_bool;
					func_556(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_548;
			}
		}
	Label_553:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_548:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_736(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_729(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


// @pe
void func_753(void)
{
	@SetVariable("ook11Officer1", 1);
}


// @pe
void func_759(void)
{
	@SetVariable("k11q01", 3);
	func_785();
	bool var_43_bool;
	func_707(var_43_bool, "quest_k11_01", "init_house_petr");
}


