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
			func_577();
			if(var_7_bool == 13016) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_629();
			}
			if(var_7_bool == 13017) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_629();
			}
			if(var_6_int == 13013) {
				bool var_22_bool;
				func_635(var_1_object);
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
			bool var_74_bool;
			func_672(var_74_bool);
			if(var_74_bool != 0)
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
			func_584(var_9_object);
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
	int var_67_int;
	func_666(var_67_int);
	var_16_object->SetNPCName(var_67_int);
	int var_68_int;
	func_664(var_68_int);
	var_16_object->SetNPCDescription(var_68_int);
	string var_69_string;
	func_668(var_69_string);
	var_16_object->SetPhoto(var_69_string);
	string var_70_string;
	func_670(var_70_string);
	var_16_object->SetPhoto2(var_70_string);
	int var_71_int;
	func_647(var_71_int);
	var_16_object->SetPlayerName(var_71_int);
	bool var_17_bool;
	@IsOverrideActive(var_17_bool);
	if(var_17_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	@DoDialog(var_16_object);
	object var_80_object; object var_81_object;
	var_10_object = var_80_object;
	var_16_object = var_81_object;
	TaskCall(1);
	func_74(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object);
	TaskReturn();
	bool var_19_bool;
	var_16_object->IsDialogEnd(var_19_bool);
	
	for(;;) {
		var_132_bool = !var_19_bool; //@nz
		if(var_132_bool == 0) goto Label_63;
		@sync();
		var_16_object->IsDialogEnd(var_19_bool);
	}
	
Label_63:
	object var_133_object;
	var_10_object = var_133_object;
	func_547();
	@StopDialog(var_16_object);
	var_16_object->GetReturnValue(-1);
	int var_18_int = var_9_int;
}
EMIT "Stack[-4] = 0";


void func_577(void)
{
	bool var_9_bool;
	func_672(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


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
	func_612(var_31_int);
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
				func_605(var_53_string, var_54_int);
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


void func_647(int var_71_int)
{
	int var_73_int;
	@GetVariable("branch", var_73_int);
	if(var_73_int == 0) {
		var_71_int = 1;
		return 2;
	EMIT "GOTO 0x296";
	}
	if(var_73_int == 1) {
		var_71_int = 2;
		return 2;
	}
	var_71_int = 3;
}


void func_584(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_80_object, object var_81_object)
{
	var_0_object = var_81_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_87_bool;
		func_635(var_80_object);
		if(var_87_bool != 0) {
			func_152(var_81_object, "Neutral");
			var_0_object->SetMessage(511803); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511804, 13015, 13014); //@t
			var_0_object->AddReply(511808, 13019, 13018); //@t
		} else {
					func_152(var_81_object, "Neutral");
					var_0_object->SetMessage(512549); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512550, -1, 13719); //@t
		}
	}
	for(;;) {
		bool var_114_bool;
		func_672(var_114_bool);
		if(var_114_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_564(var_2_object);
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


void func_590(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_51_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_51_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_51_float;
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
		func_584(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_467(bool var_56_bool)
{
	var_56_bool = true;
}


void func_469(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_664(int var_68_int)
{
	var_68_int = 515557;
}


// @pe
void func_152(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_672(var_96_bool);
	if(!var_96_bool) //@nz
		return 0;
	if(var_95_string == var_2_object)
		return 0;
	string var_99_string; bool var_100_bool;
	var_95_string = var_99_string;
	if(var_95_string == "")
		var_100_bool = false;
	else
		var_100_bool = true;
	func_571(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


void func_666(int var_67_int)
{
	var_67_int = 503342;
}


void func_600(int var_89_int, string var_90_string)
{
	int var_92_int;
	@GetVariable(var_90_string, var_92_int);
	var_92_int = var_89_int;
}


void func_668(string var_69_string)
{
	var_69_string = "ui/NPC_Citizen1.png";
}


void func_474(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_670(string var_70_string)
{
	var_70_string = "ui/NPC_Citizen1_b.png";
}


void func_605(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_672(bool var_62_bool)
{
	var_62_bool = false;
}


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
	func_590(var_47_cvector, (var_36_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_37_cvector = ((var_35_cvector * var_22_float) + (var_47_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0)
		var_20_bool = false;
	@StopWorld();
	@CameraTransit((var_34_cvector + var_37_cvector), var_36_cvector);
	var_60_float = GetByIndex(var_37_cvector, 0);
	var_61_float = GetByIndex(var_37_cvector, 2);
	@Rotate(var_60_float, var_61_float);
	bool var_62_bool;
	func_672(var_62_bool);
	if(var_62_bool != 0) {
	} else {
		@HasAnimationTrack(var_40_bool, "head");
		if(var_40_bool == 0) goto Label_541;
		@LookAsyncCamera("head");
	}
Label_541:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_20_bool = true;
	
}


void func_547(void)
{
	bool var_135_bool;
	@CameraSwitchToNormal();
	bool var_136_bool;
	func_672(var_136_bool);
	if(var_136_bool != 0) {
	} else {
		@HasAnimationTrack(var_135_bool, "head");
		if(var_135_bool == 0) goto Label_563;
		@UnlookAsync("head");
	}
Label_563:
	
}


void func_612(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_605(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


// @pe
void func_635(bool var_87_bool)
{
	int var_89_int;
	func_600(var_89_int, "ood5Prisoner1");
	if(var_89_int == 0) {
		var_87_bool = true;
		return 0;
	}
	var_87_bool = false;
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


void func_564(string var_116_string)
{
	float var_119_float; float var_120_float;
	@lshGetAnimTimes(var_116_string, var_119_float, var_120_float);
	@lshPlayAnimation(var_119_float, var_120_float, false);
}


// @pe
void func_629(void)
{
	@SetVariable("ood5Prisoner1", 1);
}


void func_571(string var_99_string, bool var_100_bool)
{
	float var_105_float; float var_106_float;
	@lshGetAnimTimes(var_99_string, var_105_float, var_106_float);
	@lshPlayAnimation(var_105_float, var_106_float, var_100_bool);
}


