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
			func_631();
			if(var_11_object == 32738) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_710();
			}
			if(var_11_object == 32439) {
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_699();
			}
			if(var_10_bool == 32435) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(531117); //@t
				var_0_object->ClearReplies(); //@t
				bool var_71_bool;
				func_720(var_1_object);
				if(var_71_bool != 0)
					var_0_object->AddReply(531387, 32728, 32726); //@t
				bool var_82_bool;
				func_720(var_1_object);
				if(var_82_bool != 0)
					var_0_object->AddReply(531119, 32438, 32437); //@t
				var_0_object->AddReply(531388, -1, 32727); //@t
				return 0;
			}
			if(var_10_bool == 32438) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(531120); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531121, -1, 32439); //@t
				return 0;
			}
			if(var_10_bool == 32728) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(531389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531390, 32730, 32729); //@t
				var_0_object->AddReply(531395, 32736, 32735); //@t
				return 0;
			}
			if(var_10_bool == 32730) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(531391); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531394, 32736, 32734); //@t
				var_0_object->AddReply(531392, 32438, 32731); //@t
				return 0;
			}
			if(var_10_bool == 32736) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(531396); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531397, -1, 32738); //@t
				return 0;
			}
			var_3_string = true;
			bool var_124_bool;
			func_697(var_124_bool);
			if(var_124_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaa";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		while(true != 0) {
			func_344(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_409(var_9_object, var_10_object);
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
			func_371(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_620(var_4_bool);
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
	func_522(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_691(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_689(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_693(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_695(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_786(var_76_int);
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
		var_137_bool = !var_24_bool; //@nz
		if(var_137_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_138_object;
	var_15_object = var_138_object;
	func_590();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_517(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_648(int var_107_int, string var_108_string)
{
	int var_110_int;
	@GetVariable(var_108_string, var_110_int);
	var_110_int = var_107_int;
}


void func_522(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_638(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_697(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_584;
		@LookAsyncCamera("head");
	}
Label_584:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_653(bool var_41_bool, string var_42_string, string var_43_string)
{
	object var_45_object;
	@FindActor(var_45_object, var_42_string);
	if(var_45_object == null)
		var_41_bool = false;
	@Trigger(var_45_object, var_43_string);
	var_41_bool = true;
}
EMIT "Stack[-1] = 0";


void func_786(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x321";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


// @pe
void func_147(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_697(var_93_bool);
	if(!var_93_bool) //@nz
		return 0;
	if(var_92_string == var_2_object)
		return 0;
	string var_96_string; bool var_97_bool;
	var_92_string = var_96_string;
	if(var_92_string == "")
		var_97_bool = false;
	else
		var_97_bool = true;
	func_614(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
}


void func_665(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


// @pe
void func_409(object var_2_object, string var_3_string)
{
	func_504();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_672(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_665(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_423(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_517(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_672(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_517(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_470;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_665(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_499;
				}
			} else if(var_28_int != 0) {
				goto Label_499;
			}
			}
					bool var_61_bool;
					func_502(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_494;
			}
		}
	Label_499:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_494:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_689(int var_73_int)
{
	var_73_int = 518097;
}


void func_691(int var_72_int)
{
	var_72_int = 518096;
}


void func_693(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png";
}


void func_695(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png";
}


void func_697(bool var_67_bool)
{
	var_67_bool = false;
}


// @pe
void func_699(void)
{
	@SetVariable("b11q02", 3);
	bool var_53_bool;
	func_653(var_53_bool, "quest_b11_02", "teleport");
}


// @pe
void func_710(void)
{
	func_732();
	bool var_41_bool;
	func_653(var_41_bool, "quest_b11_02", "fail");
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		func_147(var_86_object, "Neutral");
		var_0_object->SetMessage(531117); //@t
		var_0_object->ClearReplies(); //@t
		bool var_105_bool;
		func_720(var_1_object);
		if(var_105_bool != 0)
			var_0_object->AddReply(531387, 32728, 32726); //@t
		bool var_116_bool;
		func_720(var_1_object);
		if(var_116_bool != 0)
			var_0_object->AddReply(531119, 32438, 32437); //@t
		var_0_object->AddReply(531388, -1, 32727); //@t
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_117:
	bool var_124_bool;
	func_697(var_124_bool);
	if(var_124_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_607(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_146;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_146:
		return 0;

	}
	
}


void func_590(void)
{
	bool var_140_bool;
	@CameraSwitchToNormal();
	bool var_141_bool;
	func_697(var_141_bool);
	if(var_141_bool != 0) {
	} else {
		@HasAnimationTrack(var_140_bool, "head");
		if(var_140_bool == 0) goto Label_606;
		@UnlookAsync("head");
	}
Label_606:
	
}


// @pe
void func_720(bool var_105_bool)
{
	int var_107_int;
	func_648(var_107_int, "b11q02");
	if(var_107_int == 2)
		var_105_bool = true;
	var_105_bool = false;
}


// @pe
void func_344(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_517(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_423();
	if(!false) //@nz
		@KillTimer(10);
}


void func_732(void)
{
	object var_19_object;
	@CreateDiaryEntry(var_19_object, 610, 2, 531505);
	bool var_23_bool; object var_24_object;
	var_19_object = var_24_object;
	func_758(var_23_bool, var_24_object, 598);
}
EMIT "Stack[-1] = 0";


void func_607(string var_126_string)
{
	float var_129_float; float var_130_float;
	@lshGetAnimTimes(var_126_string, var_129_float, var_130_float);
	@lshPlayAnimation(var_129_float, var_130_float, false);
}


void func_614(string var_96_string, bool var_97_bool)
{
	float var_102_float; float var_103_float;
	@lshGetAnimTimes(var_96_string, var_102_float, var_103_float);
	@lshPlayAnimation(var_102_float, var_103_float, var_97_bool);
}


void func_745(object var_32_object)
{
	object var_34_object;
	@GetDiaryRoot(var_34_object);
	if(!var_34_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_32_object = false;
	}
	var_34_object = var_32_object;
}
EMIT "Stack[-1] = 0";


void func_620(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_371(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_509(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_502(bool var_61_bool)
{
	var_61_bool = true;
}


void func_631(void)
{
	bool var_13_bool;
	func_697(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_504(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_758(bool var_23_bool, object var_24_object, int var_25_int)
{
	object var_32_object;
	func_745(var_32_object);
	object var_29_object;
	var_32_object = var_29_object;
	object var_30_object;
	var_29_object->Find(var_25_int, var_30_object);
	if(!var_30_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_25_int);
		var_23_bool = false;
	}
	var_30_object->AddChild(var_24_object);
	@SendWorldWndMessage(7);
	int var_31_int;
	var_24_object->GetCategory(var_31_int);
	@SetDiarySection(var_31_int);
	var_23_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_509(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_638(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


