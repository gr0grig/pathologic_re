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
			func_639();
			if(var_7_bool == 22397) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_691();
			}
			if(var_6_int == 22383) {
				bool var_41_bool;
				func_706(var_1_object);
				if(var_41_bool != 0) {
					object var_49_object; object var_50_object;
					var_49_object = var_1_object;
					var_50_object = var_0_object;
					func_700();
					func_157(var_7_bool, "Neutral");
					var_0_object->SetMessage(521181); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528428, 29813, 29812); //@t
					var_0_object->AddReply(528434, 29819, 29818); //@t
					return 0;
				}
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(521197); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521198, -1, 22395); //@t
				return 0;
			}
			if(var_6_int == 29819) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(528435); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528436, 29821, 29820); //@t
				return 0;
			}
			if(var_6_int == 29821) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(528437); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528438, 29815, 29822); //@t
				return 0;
			}
			if(var_6_int == 29813) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(528429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528430, 29815, 29814); //@t
				return 0;
			}
			if(var_6_int == 29815) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(528431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528432, 29817, 29816); //@t
				var_0_object->AddReply(528439, 29817, 29824); //@t
				return 0;
			}
			if(var_6_int == 29817) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(528433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521182, 22396, 22384); //@t
				return 0;
			}
			if(var_6_int == 22396) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(521199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521200, -1, 22397); //@t
				return 0;
			}
			var_3_string = true;
			bool var_122_bool;
			func_797(var_122_bool);
			if(var_122_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_379:
		for(;;) {
			bool var_8_bool;
			func_536(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_387;
			@Hold();
		}
	
	Label_387:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_450();
		goto Label_379;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_531();
		int var_7_int; object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		if(var_6_string == "cleanup")
			func_399(var_6_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_448(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_646(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_541(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_65_int;
	func_791(var_65_int);
	var_14_object->SetNPCName(var_65_int);
	int var_66_int;
	func_789(var_66_int);
	var_14_object->SetNPCDescription(var_66_int);
	string var_67_string;
	func_793(var_67_string);
	var_14_object->SetPhoto(var_67_string);
	string var_68_string;
	func_795(var_68_string);
	var_14_object->SetPhoto2(var_68_string);
	int var_69_int;
	func_772(var_69_int);
	var_14_object->SetPlayerName(var_69_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_78_object; object var_79_object;
	var_8_object = var_78_object;
	var_14_object = var_79_object;
	TaskCall(1);
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_134_bool = !var_17_bool; //@nz
		if(var_134_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_135_object;
	var_8_object = var_135_object;
	func_609();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_448(bool var_8_bool)
{
	var_8_bool = true;
}


// @pe
void func_706(bool var_85_bool)
{
	int var_87_int;
	func_662(var_87_int, "oob6Prophet1");
	if(var_87_int == 0) {
		var_85_bool = true;
		return 0;
	}
	var_85_bool = false;
}


void func_450(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_536(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_674(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_536(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_497;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_667(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_526;
				}
			} else if(var_23_int != 0) {
				goto Label_526;
			}
			}
					bool var_56_bool;
					func_529(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_521;
			}
		}
	Label_526:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_521:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_772(int var_69_int)
{
	int var_71_int;
	@GetVariable("branch", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x313";
	}
	if(var_71_int == 1) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
}


void func_646(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_85_bool;
		func_706(var_1_object);
		if(var_85_bool != 0) {
			object var_93_object; object var_94_object;
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_700();
			func_157(var_79_object, "Neutral");
			var_0_object->SetMessage(521181); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528428, 29813, 29812); //@t
			var_0_object->AddReply(528434, 29819, 29818); //@t
		} else {
					func_157(var_79_object, "Neutral");
					var_0_object->SetMessage(521197); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521198, -1, 22395); //@t
		}
	}
	for(;;) {
		bool var_116_bool;
		func_797(var_116_bool);
		if(var_116_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_626(var_2_object);
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
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_652(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_718(void)
{
	object var_17_object;
	@CreateDiaryEntry(var_17_object, 268, 2, 521195);
	bool var_21_bool; object var_22_object;
	var_17_object = var_22_object;
	func_744(var_21_bool, var_22_object, 266);
}
EMIT "Stack[-1] = 0";


void func_399(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_448(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_646(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_529(bool var_56_bool)
{
	var_56_bool = true;
}


void func_531(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_789(int var_66_int)
{
	var_66_int = 518716;
}


void func_662(int var_87_int, string var_88_string)
{
	int var_90_int;
	@GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
}


void func_791(int var_65_int)
{
	var_65_int = 518715;
}


void func_536(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_793(string var_67_string)
{
	var_67_string = "ui/NPC_Citizen3.png";
}


void func_795(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen3_b.png";
}


void func_667(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_541(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_652(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector);
	var_58_float = GetByIndex(var_35_cvector, 0);
	var_59_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_58_float, var_59_float);
	bool var_60_bool;
	func_797(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_603;
		@LookAsyncCamera("head");
	}
Label_603:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


// @pe
void func_157(object var_2_object, string var_97_string)
{
	bool var_98_bool;
	func_797(var_98_bool);
	if(!var_98_bool) //@nz
		return 0;
	if(var_97_string == var_2_object)
		return 0;
	string var_101_string; bool var_102_bool;
	var_97_string = var_101_string;
	if(var_97_string == "")
		var_102_bool = false;
	else
		var_102_bool = true;
	func_633(var_101_string, var_102_bool);
	var_2_object = var_97_string;
	
}


void func_797(bool var_60_bool)
{
	var_60_bool = false;
}


void func_731(object var_30_object)
{
	object var_32_object;
	@GetDiaryRoot(var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_30_object = false;
	}
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_609(void)
{
	bool var_137_bool;
	@CameraSwitchToNormal();
	bool var_138_bool;
	func_797(var_138_bool);
	if(var_138_bool != 0) {
	} else {
		@HasAnimationTrack(var_137_bool, "head");
		if(var_137_bool == 0) goto Label_625;
		@UnlookAsync("head");
	}
Label_625:
	
}


void func_674(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_667(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


void func_744(bool var_21_bool, object var_22_object, int var_23_int)
{
	object var_30_object;
	func_731(var_30_object);
	object var_27_object;
	var_30_object = var_27_object;
	object var_28_object;
	var_27_object->Find(var_23_int, var_28_object);
	if(!var_28_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_23_int);
		var_21_bool = false;
	}
	var_28_object->AddChild(var_22_object);
	@SendWorldWndMessage(7);
	int var_29_int;
	var_22_object->GetCategory(var_29_int);
	@SetDiarySection(var_29_int);
	var_21_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_626(string var_118_string)
{
	float var_121_float; float var_122_float;
	@lshGetAnimTimes(var_118_string, var_121_float, var_122_float);
	@lshPlayAnimation(var_121_float, var_122_float, false);
}


// @pe
void func_691(void)
{
	@SetVariable("b6q02", 2);
	func_718();
}


void func_633(string var_101_string, bool var_102_bool)
{
	float var_107_float; float var_108_float;
	@lshGetAnimTimes(var_101_string, var_107_float, var_108_float);
	@lshPlayAnimation(var_107_float, var_108_float, var_102_bool);
}


// @pe
void func_700(void)
{
	@SetVariable("oob6Prophet1", 1);
}


void func_639(void)
{
	bool var_9_bool;
	func_797(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


