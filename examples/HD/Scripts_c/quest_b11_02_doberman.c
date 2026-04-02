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
			func_651();
			if(var_11_object == 32738) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_730();
			}
			if(var_11_object == 32439) {
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_719();
			}
			if(var_10_bool == 32435) {
				func_147(var_11_object, "Neutral");
				var_0_object->SetMessage(531117); //@t
				var_0_object->ClearReplies(); //@t
				bool var_76_bool;
				func_740(var_1_object);
				if(var_76_bool != 0)
					var_0_object->AddReply(531387, 32728, 32726); //@t
				bool var_87_bool;
				func_740(var_1_object);
				if(var_87_bool != 0)
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
			bool var_129_bool;
			func_717(var_129_bool);
			if(var_129_bool != 0)
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
					func_640(var_4_bool);
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
	int var_73_int;
	func_711(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_709(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_713(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_715(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_806(var_77_int);
	var_21_object->SetPlayerName(var_77_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_86_object; object var_87_object;
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_148_bool = !var_24_bool; //@nz
		if(var_148_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_149_object;
	var_15_object = var_149_object;
	func_591();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_640(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_509(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_517(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
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
	func_658(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector, true);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_717(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_585;
		@LookAsyncCamera("head");
	}
Label_585:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_651(void)
{
	bool var_13_bool;
	func_717(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_778(bool var_23_bool, object var_24_object, int var_25_int)
{
	object var_32_object;
	func_765(var_32_object);
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


void func_658(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_147(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_717(var_94_bool);
	if(!var_94_bool) //@nz
		return 0;
	if(var_93_string == var_2_object)
		return 0;
	string var_97_string; bool var_98_bool;
	var_93_string = var_97_string;
	if(var_93_string == "")
		var_98_bool = false;
	else
		var_98_bool = true;
	func_625(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
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


void func_668(int var_113_int, string var_114_string)
{
	int var_116_int;
	@GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
}


void func_673(bool var_41_bool, string var_42_string, string var_43_string)
{
	object var_45_object;
	@FindActor(var_45_object, var_42_string);
	if(var_45_object == null)
		var_41_bool = false;
	@Trigger(var_45_object, var_43_string);
	var_41_bool = true;
}
EMIT "Stack[-1] = 0";


void func_806(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x335";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
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
	func_692(var_36_int);
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
				func_685(var_58_string, var_59_int);
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


void func_685(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_692(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_685(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_709(int var_74_int)
{
	var_74_int = 518097;
}


void func_711(int var_73_int)
{
	var_73_int = 518096;
}


void func_713(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png";
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		func_147(var_87_object, "Neutral");
		var_0_object->SetMessage(531117); //@t
		var_0_object->ClearReplies(); //@t
		bool var_111_bool;
		func_740(var_1_object);
		if(var_111_bool != 0)
			var_0_object->AddReply(531387, 32728, 32726); //@t
		bool var_122_bool;
		func_740(var_1_object);
		if(var_122_bool != 0)
			var_0_object->AddReply(531119, 32438, 32437); //@t
		var_0_object->AddReply(531388, -1, 32727); //@t
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_117:
	bool var_130_bool;
	func_717(var_130_bool);
	if(var_130_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_609(var_2_object);
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


void func_715(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png";
}


void func_717(bool var_68_bool)
{
	var_68_bool = false;
}


void func_591(void)
{
	bool var_151_bool;
	@CameraSwitchToNormal(true);
	bool var_153_bool;
	func_717(var_153_bool);
	if(var_153_bool != 0) {
	} else {
		@HasAnimationTrack(var_151_bool, "head");
		if(var_151_bool == 0) goto Label_608;
		@UnlookAsync("head");
	}
Label_608:
	
}


// @pe
void func_719(void)
{
	@SetVariable("b11q02", 3);
	bool var_53_bool;
	func_673(var_53_bool, "quest_b11_02", "teleport");
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


// @pe
void func_730(void)
{
	func_752();
	bool var_41_bool;
	func_673(var_41_bool, "quest_b11_02", "fail");
}


void func_609(string var_132_string)
{
	bool var_136_bool; float var_137_float; float var_138_float;
	@lshHasAnimation(var_136_bool, var_132_string);
	if(var_136_bool != 0) {
		@lshGetAnimTimes(var_132_string, var_137_float, var_138_float);
		@lshPlayAnimation(var_137_float, var_138_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_132_string);
	}
	
}


// @pe
void func_740(bool var_111_bool)
{
	int var_113_int;
	func_668(var_113_int, "b11q02");
	if(var_113_int == 2)
		var_111_bool = true;
	var_111_bool = false;
}


void func_752(void)
{
	object var_19_object;
	@CreateDiaryEntry(var_19_object, 610, 2, 531505);
	bool var_23_bool; object var_24_object;
	var_19_object = var_24_object;
	func_778(var_23_bool, var_24_object, 598);
}
EMIT "Stack[-1] = 0";


void func_625(string var_97_string, bool var_98_bool)
{
	bool var_104_bool; float var_105_float; float var_106_float;
	@lshHasAnimation(var_104_bool, var_97_string);
	if(var_104_bool != 0) {
		@lshGetAnimTimes(var_97_string, var_105_float, var_106_float);
		@lshPlayAnimation(var_105_float, var_106_float, var_98_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_97_string);
	}
	
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


void func_504(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_765(object var_32_object)
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


