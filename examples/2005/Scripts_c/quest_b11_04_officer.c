// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(1 != 0) {
			func_740();
			if(var_12_bool == 31881) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_802();
			}
			if(var_12_bool == 32782) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_802();
			}
			if(var_11_object == 31874) {
				bool var_50_bool;
				func_811(var_1_object);
				if(var_50_bool != 0) {
					func_152(var_12_bool, "Neutral");
					var_0_object->SetMessage(530515); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530516, 32774, 31875); //@t
					return 0;
				}
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(530523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530524, -1, 31883); //@t
				var_0_object->AddReply(531426, -1, 32770); //@t
				return 0;
			}
			if(var_11_object == 32774) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(531430); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531431, 32772, 32775); //@t
				return 0;
			}
			if(var_11_object == 32772) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(531428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531429, 31876, 32773); //@t
				var_0_object->AddReply(531432, 31876, 32776); //@t
				return 0;
			}
			if(var_11_object == 31876) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(530517); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530518, 31880, 31877); //@t
				var_0_object->AddReply(531433, 32779, 32778); //@t
				return 0;
			}
			if(var_11_object == 32779) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(531434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531435, 31880, 32780); //@t
				return 0;
			}
			if(var_11_object == 31880) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(530521); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530522, -1, 31881); //@t
				var_0_object->AddReply(531436, -1, 32782); //@t
				return 0;
			}
			var_3_string = true;
			bool var_126_bool;
			func_800(var_126_bool);
			if(var_126_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_374((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_518(var_10_bool, var_11_object);
		int var_15_int; object var_16_object;
		var_11_object = var_16_object;
		TaskCall(0);
		func_0(var_17_object, var_15_int, var_16_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, string var_11_string)
	{
		if(var_11_string == "cleanup")
			func_399(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_518(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_451(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_747(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_480(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_729(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_15_int, object var_16_object)
{
	var_0_object = var_16_object;
	bool var_26_bool; object var_27_object;
	var_16_object = var_27_object;
	func_631(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_794(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_792(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_796(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_798(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_877(var_77_int);
	var_22_object->SetPlayerName(var_77_int);
	bool var_23_bool;
	@IsOverrideActive(var_23_bool);
	if(var_23_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	@DoDialog(var_22_object);
	object var_86_object; object var_87_object;
	var_16_object = var_86_object;
	var_22_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_25_bool;
	var_22_object->IsDialogEnd(var_25_bool);
	
	for(;;) {
		var_138_bool = !var_25_bool; //@nz
		if(var_138_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_139_object;
	var_16_object = var_139_object;
	func_699();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_768(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


// @pe
void func_518(object var_2_object, string var_3_string)
{
	func_613();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_775(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_768(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_399(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_451(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_747(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_532(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_626(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_775(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_626(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_579;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_768(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_608;
				}
			} else if(var_37_int != 0) {
				goto Label_608;
			}
			}
					bool var_70_bool;
					func_611(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_603;
			}
		}
	Label_608:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_603:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_792(int var_74_int)
{
	var_74_int = 515597;
}


// @pe
void func_152(object var_2_object, string var_101_string)
{
	bool var_102_bool;
	func_800(var_102_bool);
	if(!var_102_bool) //@nz
		return 0;
	if(var_101_string == var_2_object)
		return 0;
	string var_105_string; bool var_106_bool;
	var_101_string = var_105_string;
	if(var_101_string == "")
		var_106_bool = false;
	else
		var_106_bool = true;
	func_723(var_105_string, var_106_bool);
	var_2_object = var_101_string;
	
}


void func_794(int var_73_int)
{
	var_73_int = 514841;
}


void func_796(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png";
}


void func_798(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png";
}


void func_800(bool var_68_bool)
{
	var_68_bool = false;
}


// @pe
void func_802(void)
{
	@SetVariable("b11q04", 3);
	func_823();
}


// @pe
void func_811(bool var_93_bool)
{
	int var_95_int;
	func_763(var_95_int, "b11q04");
	if(var_95_int == 2)
		var_93_bool = true;
	var_93_bool = false;
}


void func_823(void)
{
	object var_22_object;
	@CreateDiaryEntry(var_22_object, 554, 2, 530529);
	bool var_26_bool; object var_27_object;
	var_22_object = var_27_object;
	func_849(var_26_bool, var_27_object, 551);
}
EMIT "Stack[-1] = 0";


void func_699(void)
{
	bool var_141_bool;
	@CameraSwitchToNormal();
	bool var_142_bool;
	func_800(var_142_bool);
	if(var_142_bool != 0) {
	} else {
		@HasAnimationTrack(var_141_bool, "head");
		if(var_141_bool == 0) goto Label_715;
		@UnlookAsync("head");
	}
Label_715:
	
}


void func_451(bool var_16_bool)
{
	var_16_bool = true;
}


void func_836(object var_35_object)
{
	object var_37_object;
	@GetDiaryRoot(var_37_object);
	if(!var_37_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_35_object = false;
	}
	var_37_object = var_35_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_453(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_626(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_532();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_811(var_86_object);
		if(var_93_bool != 0) {
			func_152(var_87_object, "Neutral");
			var_0_object->SetMessage(530515); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530516, 32774, 31875); //@t
		} else {
					func_152(var_87_object, "Neutral");
					var_0_object->SetMessage(530523); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530524, -1, 31883); //@t
					var_0_object->AddReply(531426, -1, 32770); //@t
		}
	}
	for(;;) {
		bool var_117_bool;
		func_800(var_117_bool);
		if(var_117_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_716(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_151;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_151:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_716(string var_119_string)
{
	float var_122_float; float var_123_float;
	@lshGetAnimTimes(var_119_string, var_122_float, var_123_float);
	@lshPlayAnimation(var_122_float, var_123_float, false);
}


void func_849(bool var_26_bool, object var_27_object, int var_28_int)
{
	object var_35_object;
	func_836(var_35_object);
	object var_32_object;
	var_35_object = var_32_object;
	object var_33_object;
	var_32_object->Find(var_28_int, var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_28_int);
		var_26_bool = false;
	}
	var_33_object->AddChild(var_27_object);
	@SendWorldWndMessage(7);
	int var_34_int;
	var_27_object->GetCategory(var_34_int);
	@SetDiarySection(var_34_int);
	var_26_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_723(string var_105_string, bool var_106_bool)
{
	float var_111_float; float var_112_float;
	@lshGetAnimTimes(var_105_string, var_111_float, var_112_float);
	@lshPlayAnimation(var_111_float, var_112_float, var_106_bool);
}


void func_729(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_480(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_618(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_611(bool var_70_bool)
{
	var_70_bool = true;
}


void func_740(void)
{
	bool var_14_bool;
	func_800(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_613(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_618(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_747(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_877(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x37c";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_753(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_626(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_374(float var_11_float, float var_12_float)
{
	
Label_375:
	for(;;) {
		bool var_15_bool;
		func_626(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_383;
		@Hold();
	}
	
Label_383:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_453(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_375;
}
EMIT "Return(); Pop(2)";


void func_631(bool var_26_bool, object var_27_object, float var_28_float)
{
	cvector var_39_cvector; bool var_46_bool;
	var_27_object->GetPosition(var_39_cvector);
	float var_38_float;
	var_27_object->GetEyesHeight(var_38_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_38_float);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	@GetEyesHeight(var_38_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_38_float);
	cvector var_41_cvector = var_39_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (float)0;
	var_51_float = sqrt(var_41_cvector | var_41_cvector);
	var_41_cvector /= var_51_float;
	cvector var_42_cvector = -var_41_cvector;
	cvector var_53_cvector;
	func_753(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_43_cvector = ((var_41_cvector * var_28_float) + (var_53_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_45_bool;
	@IsOverrideActive(var_45_bool);
	if(var_45_bool != 0)
		var_26_bool = false;
	@StopWorld();
	@CameraTransit((var_40_cvector + var_43_cvector), var_42_cvector);
	var_66_float = GetByIndex(var_43_cvector, 0);
	var_67_float = GetByIndex(var_43_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_800(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_693;
		@LookAsyncCamera("head");
	}
Label_693:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_763(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


