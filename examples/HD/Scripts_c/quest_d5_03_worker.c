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
			func_597();
			if(var_7_bool == 13016) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_649();
			}
			if(var_7_bool == 13017) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_649();
			}
			if(var_6_int == 13013) {
				bool var_22_bool;
				func_655(var_1_object);
				if(var_22_bool != 0) {
					func_152(var_7_bool, "Neutral");
					var_0_object->SetMessage(511803); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511804, 13015, 13014); //@t
					var_0_object->AddReply(511808, 13019, 13018); //@t
					return 0;
				}
				func_152(var_7_bool, "Neutral");
				var_0_object->SetMessage(512549); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512550, -1, 13719); //@t
				return 0;
			}
			if(var_6_int == 13019) {
				func_152(var_7_bool, "Neutral");
				var_0_object->SetMessage(511809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511810, 13015, 13020); //@t
				var_0_object->AddReply(511811, 13015, 13022); //@t
				return 0;
			}
			if(var_6_int == 13015) {
				func_152(var_7_bool, "Neutral");
				var_0_object->SetMessage(511805); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511806, -1, 13016); //@t
				var_0_object->AddReply(511807, -1, 13017); //@t
				return 0;
			}
			var_3_string = true;
			bool var_79_bool;
			func_692(var_79_bool);
			if(var_79_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_317:
		for(;;) {
			bool var_8_bool;
			func_474(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_325;
			@Hold();
		}
	
	Label_325:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_388();
		goto Label_317;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_469();
		int var_7_int; object var_8_object;
		func_298(var_8_object, var_7_int, var_8_object);
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		if(var_6_string == "cleanup")
			func_337(var_6_string);
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
			func_386(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_604(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_9_int, object var_10_object)
{
	var_0_object = var_10_object;
	bool var_20_bool; object var_21_object;
	var_10_object = var_21_object;
	func_479(var_20_bool, var_21_object, 70.0);
	if(!var_20_bool) { //@nz
		var_9_int = -2;
		return 8;
	}
	object var_16_object;
	@CreateDialog(var_16_object);
	int var_68_int;
	func_686(var_68_int);
	var_16_object->SetNPCName(var_68_int);
	int var_69_int;
	func_684(var_69_int);
	var_16_object->SetNPCDescription(var_69_int);
	string var_70_string;
	func_688(var_70_string);
	var_16_object->SetPhoto(var_70_string);
	string var_71_string;
	func_690(var_71_string);
	var_16_object->SetPhoto2(var_71_string);
	int var_72_int;
	func_667(var_72_int);
	var_16_object->SetPlayerName(var_72_int);
	bool var_17_bool;
	@IsOverrideActive(var_17_bool);
	if(var_17_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	@DoDialog(var_16_object);
	object var_81_object; object var_82_object;
	var_10_object = var_81_object;
	var_16_object = var_82_object;
	TaskCall(1);
	func_74(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object);
	TaskReturn();
	bool var_19_bool;
	var_16_object->IsDialogEnd(var_19_bool);
	
	for(;;) {
		var_143_bool = !var_19_bool; //@nz
		if(var_143_bool == 0) goto Label_63;
		@sync();
		var_16_object->IsDialogEnd(var_19_bool);
	}
	
Label_63:
	object var_144_object;
	var_10_object = var_144_object;
	func_548();
	@StopDialog(var_16_object);
	var_16_object->GetReturnValue(-1);
	int var_18_int = var_9_int;
}
EMIT "Stack[-4] = 0";


void func_386(bool var_8_bool)
{
	var_8_bool = true;
}


void func_388(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_474(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_632(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_474(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_435;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_625(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_464;
				}
			} else if(var_23_int != 0) {
				goto Label_464;
			}
			}
					bool var_56_bool;
					func_467(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_459;
			}
		}
	Label_464:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_459:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_582(string var_100_string, bool var_101_bool)
{
	bool var_107_bool; float var_108_float; float var_109_float;
	@lshHasAnimation(var_107_bool, var_100_string);
	if(var_107_bool != 0) {
		@lshGetAnimTimes(var_100_string, var_108_float, var_109_float);
		@lshPlayAnimation(var_108_float, var_109_float, var_101_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_100_string);
	}
	
}


// @pe
void func_649(void)
{
	@SetVariable("ood5Prisoner1", 1);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_81_object, object var_82_object)
{
	var_0_object = var_82_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_88_bool;
		func_655(var_81_object);
		if(var_88_bool != 0) {
			func_152(var_82_object, "Neutral");
			var_0_object->SetMessage(511803); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511804, 13015, 13014); //@t
			var_0_object->AddReply(511808, 13019, 13018); //@t
		} else {
					func_152(var_82_object, "Neutral");
					var_0_object->SetMessage(512549); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512550, -1, 13719); //@t
		}
	}
	for(;;) {
		bool var_120_bool;
		func_692(var_120_bool);
		if(var_120_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_566(var_2_object);
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


// @pe
void func_655(bool var_88_bool)
{
	int var_90_int;
	func_620(var_90_int, "ood5Prisoner1");
	if(var_90_int == 0) {
		var_88_bool = true;
		return 0;
	}
	var_88_bool = false;
}


void func_337(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_386(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_604(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_467(bool var_56_bool)
{
	var_56_bool = true;
}


void func_597(void)
{
	bool var_9_bool;
	func_692(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_469(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_152(object var_2_object, string var_96_string)
{
	bool var_97_bool;
	func_692(var_97_bool);
	if(!var_97_bool) //@nz
		return 0;
	if(var_96_string == var_2_object)
		return 0;
	string var_100_string; bool var_101_bool;
	var_96_string = var_100_string;
	if(var_96_string == "")
		var_101_bool = false;
	else
		var_101_bool = true;
	func_582(var_100_string, var_101_bool);
	var_2_object = var_96_string;
	
}


void func_474(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_667(int var_72_int)
{
	int var_74_int;
	@GetVariable("branch", var_74_int);
	if(var_74_int == 0) {
		var_72_int = 1;
		return 2;
	EMIT "GOTO 0x2aa";
	}
	if(var_74_int == 1) {
		var_72_int = 2;
		return 2;
	}
	var_72_int = 3;
}


void func_604(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_479(bool var_20_bool, object var_21_object, float var_22_float)
{
	cvector var_33_cvector; bool var_40_bool;
	var_21_object->GetPosition(var_33_cvector);
	float var_32_float;
	var_21_object->GetEyesHeight(var_32_float);
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (var_41_float + var_32_float);
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	@GetEyesHeight(var_32_float);
	var_42_float = GetByIndex(var_34_cvector, 1);
	SetByIndex(var_34_cvector, 1) = (var_42_float + var_32_float);
	cvector var_35_cvector = var_33_cvector - var_34_cvector;
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (float)0;
	var_45_float = sqrt(var_35_cvector | var_35_cvector);
	var_35_cvector /= var_45_float;
	cvector var_36_cvector = -var_35_cvector;
	cvector var_47_cvector;
	func_610(var_47_cvector, (var_36_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_37_cvector = ((var_35_cvector * var_22_float) + (var_47_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0)
		var_20_bool = false;
	@StopWorld();
	@CameraTransit((var_34_cvector + var_37_cvector), var_36_cvector, true);
	var_61_float = GetByIndex(var_37_cvector, 0);
	var_62_float = GetByIndex(var_37_cvector, 2);
	@Rotate(var_61_float, var_62_float);
	bool var_63_bool;
	func_692(var_63_bool);
	if(var_63_bool != 0) {
	} else {
		@HasAnimationTrack(var_40_bool, "head");
		if(var_40_bool == 0) goto Label_542;
		@LookAsyncCamera("head");
	}
Label_542:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_20_bool = true;
	
}


void func_610(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_51_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_51_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_51_float;
}


void func_548(void)
{
	bool var_146_bool;
	@CameraSwitchToNormal(true);
	bool var_148_bool;
	func_692(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		@HasAnimationTrack(var_146_bool, "head");
		if(var_146_bool == 0) goto Label_565;
		@UnlookAsync("head");
	}
Label_565:
	
}


// @pe
void func_298(int var_7_int, object var_8_object, object var_11_object)
{
	object var_10_object;
	var_8_object = var_10_object;
	TaskCall(0);
	int var_9_int;
	func_0(var_11_object, var_9_int, var_10_object);
	TaskReturn();
	var_11_object = var_7_int;
}


void func_684(int var_69_int)
{
	var_69_int = 515568;
}


void func_620(int var_90_int, string var_91_string)
{
	int var_93_int;
	@GetVariable(var_91_string, var_93_int);
	var_93_int = var_90_int;
}


void func_686(int var_68_int)
{
	var_68_int = 503353;
}


void func_688(string var_70_string)
{
	var_70_string = "ui/NPC_Citizen1.png";
}


void func_625(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_690(string var_71_string)
{
	var_71_string = "ui/NPC_Citizen1_b.png";
}


void func_692(bool var_63_bool)
{
	var_63_bool = false;
}


void func_566(string var_122_string)
{
	bool var_126_bool; float var_127_float; float var_128_float;
	@lshHasAnimation(var_126_bool, var_122_string);
	if(var_126_bool != 0) {
		@lshGetAnimTimes(var_122_string, var_127_float, var_128_float);
		@lshPlayAnimation(var_127_float, var_128_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_122_string);
	}
	
}


void func_632(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_625(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


