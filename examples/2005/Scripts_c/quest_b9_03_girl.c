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
			func_714();
			if(var_12_bool == 31717) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_782();
			}
			if(var_11_object == 31716) {
				bool var_44_bool;
				func_787(var_1_object);
				if(var_44_bool != 0) {
					object var_52_object; object var_53_object;
					var_52_object = var_1_object;
					var_53_object = var_0_object;
					func_776();
					func_157(var_12_bool, "Neutral");
					var_0_object->SetMessage(530329); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531028, 32359, 32357); //@t
					var_0_object->AddReply(531029, 32365, 32358); //@t
					return 0;
				}
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(530331); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531033, -1, 32362); //@t
				return 0;
			}
			if(var_11_object == 32359) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(531030); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531031, 32361, 32360); //@t
				var_0_object->AddReply(530332, 32363, 31719); //@t
				return 0;
			}
			if(var_11_object == 32363) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(531034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531035, 32365, 32364); //@t
				return 0;
			}
			if(var_11_object == 32365) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(531036); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531037, 32361, 32367); //@t
				return 0;
			}
			if(var_11_object == 32361) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(531032); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530330, -1, 31717); //@t
				return 0;
			}
			var_3_string = true;
			bool var_111_bool;
			func_774(var_111_bool);
			if(var_111_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_348((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_492(var_10_bool, var_11_object);
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
			func_373(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_492(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_425(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_721(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_454(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_703(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_768(int var_73_int)
{
	var_73_int = 503344;
}


void func_0(object var_0_object, int var_15_int, object var_16_object)
{
	var_0_object = var_16_object;
	bool var_26_bool; object var_27_object;
	var_16_object = var_27_object;
	func_605(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_768(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_766(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_770(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_772(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_853(var_77_int);
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
		var_142_bool = !var_25_bool; //@nz
		if(var_142_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_143_object;
	var_16_object = var_143_object;
	func_673();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_770(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png";
}


void func_772(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png";
}


void func_774(bool var_68_bool)
{
	var_68_bool = false;
}


// @pe
void func_776(void)
{
	@SetVariable("oob9Girl1", 1);
}


// @pe
void func_782(void)
{
	func_799();
}


// @pe
void func_787(bool var_93_bool)
{
	int var_95_int;
	func_737(var_95_int, "oob9Girl1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


// @pe
void func_157(object var_2_object, string var_105_string)
{
	bool var_106_bool;
	func_774(var_106_bool);
	if(!var_106_bool) //@nz
		return 0;
	if(var_105_string == var_2_object)
		return 0;
	string var_109_string; bool var_110_bool;
	var_105_string = var_109_string;
	if(var_105_string == "")
		var_110_bool = false;
	else
		var_110_bool = true;
	func_697(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	
}


void func_799(void)
{
	object var_20_object;
	@CreateDiaryEntry(var_20_object, 540, 2, 530352);
	bool var_24_bool; object var_25_object;
	var_20_object = var_25_object;
	func_825(var_24_bool, var_25_object, 532);
}
EMIT "Stack[-1] = 0";


void func_673(void)
{
	bool var_145_bool;
	@CameraSwitchToNormal();
	bool var_146_bool;
	func_774(var_146_bool);
	if(var_146_bool != 0) {
	} else {
		@HasAnimationTrack(var_145_bool, "head");
		if(var_145_bool == 0) goto Label_689;
		@UnlookAsync("head");
	}
Label_689:
	
}


void func_425(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_427(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_600(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_506();
	if(!false) //@nz
		@KillTimer(10);
}


void func_812(object var_33_object)
{
	object var_35_object;
	@GetDiaryRoot(var_35_object);
	if(!var_35_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_33_object = false;
	}
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


void func_690(string var_126_string)
{
	float var_129_float; float var_130_float;
	@lshGetAnimTimes(var_126_string, var_129_float, var_130_float);
	@lshPlayAnimation(var_129_float, var_130_float, false);
}


void func_825(bool var_24_bool, object var_25_object, int var_26_int)
{
	object var_33_object;
	func_812(var_33_object);
	object var_30_object;
	var_33_object = var_30_object;
	object var_31_object;
	var_30_object->Find(var_26_int, var_31_object);
	if(!var_31_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_26_int);
		var_24_bool = false;
	}
	var_31_object->AddChild(var_25_object);
	@SendWorldWndMessage(7);
	int var_32_int;
	var_25_object->GetCategory(var_32_int);
	@SetDiarySection(var_32_int);
	var_24_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_697(string var_109_string, bool var_110_bool)
{
	float var_115_float; float var_116_float;
	@lshGetAnimTimes(var_109_string, var_115_float, var_116_float);
	@lshPlayAnimation(var_115_float, var_116_float, var_110_bool);
}


void func_703(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_454(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_592(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_585(bool var_70_bool)
{
	var_70_bool = true;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_787(var_1_object);
		if(var_93_bool != 0) {
			object var_101_object; object var_102_object;
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_776();
			func_157(var_87_object, "Neutral");
			var_0_object->SetMessage(530329); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531028, 32359, 32357); //@t
			var_0_object->AddReply(531029, 32365, 32358); //@t
		} else {
					func_157(var_87_object, "Neutral");
					var_0_object->SetMessage(530331); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531033, -1, 32362); //@t
		}
	}
	for(;;) {
		bool var_124_bool;
		func_774(var_124_bool);
		if(var_124_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_690(var_2_object);
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


void func_714(void)
{
	bool var_14_bool;
	func_774(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_587(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_592(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_721(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_853(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x364";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_727(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_600(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_348(float var_11_float, float var_12_float)
{
	
Label_349:
	for(;;) {
		bool var_15_bool;
		func_600(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_357;
		@Hold();
	}
	
Label_357:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_427(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_349;
}
EMIT "Return(); Pop(2)";


void func_605(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_727(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_774(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_667;
		@LookAsyncCamera("head");
	}
Label_667:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_737(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_742(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


// @pe
void func_492(object var_2_object, string var_3_string)
{
	func_587();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_749(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_742(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_373(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_425(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_721(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_506(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_600(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_749(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_600(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_553;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_742(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_582;
				}
			} else if(var_37_int != 0) {
				goto Label_582;
			}
			}
					bool var_70_bool;
					func_585(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_577;
			}
		}
	Label_582:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_577:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_766(int var_74_int)
{
	var_74_int = 515559;
}


