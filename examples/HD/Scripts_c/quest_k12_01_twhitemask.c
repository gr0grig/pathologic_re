// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool)
	{
		if(1 != 0) {
			func_832();
			if(var_13_bool == 43083) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_908();
			}
			if(var_12_bool == 43082) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_901();
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(540992); //@t
				var_0_object->ClearReplies(); //@t
				bool var_54_bool;
				func_914(var_1_object);
				if(var_54_bool != 0)
					var_0_object->AddReply(540993, 43484, 43083); //@t
				var_0_object->AddReply(541006, -1, 43099); //@t
				return 0;
			}
			if(var_12_bool == 43484) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(541338); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541378, 43529, 43528); //@t
				var_0_object->AddReply(541339, 43486, 43485); //@t
				return 0;
			}
			if(var_12_bool == 43529) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(541379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541381, 43532, 43531); //@t
				var_0_object->AddReply(541380, 43535, 43530); //@t
				return 0;
			}
			if(var_12_bool == 43532) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(541382); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541383, 43537, 43533); //@t
				var_0_object->AddReply(541384, 43535, 43534); //@t
				return 0;
			}
			if(var_12_bool == 43535) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(541385); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541386, 43539, 43536); //@t
				return 0;
			}
			if(var_12_bool == 43537) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(541387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541388, 43539, 43538); //@t
				var_0_object->AddReply(542763, 45184, 45183); //@t
				return 0;
			}
			if(var_12_bool == 45184) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542764); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542765, 45186, 45185); //@t
				return 0;
			}
			if(var_12_bool == 45186) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542766); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542767, 43486, 45187); //@t
				return 0;
			}
			if(var_12_bool == 43539) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(541389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541390, 43486, 43541); //@t
				var_0_object->AddReply(541392, 43486, 43545); //@t
				return 0;
			}
			if(var_12_bool == 43486) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(541340); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541341, 43488, 43487); //@t
				var_0_object->AddReply(541393, -1, 43547); //@t
				return 0;
			}
			if(var_12_bool == 43488) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(541342); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541343, -1, 43489); //@t
				var_0_object->AddReply(541391, -1, 43543); //@t
				return 0;
			}
			var_3_string = true;
			bool var_159_bool;
			func_951(var_159_bool);
			if(var_159_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_456(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_590(var_11_bool, var_12_object);
		int var_16_int; object var_17_object;
		var_12_object = var_17_object;
		TaskCall(0);
		func_0(var_18_object, var_16_int, var_17_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, string var_12_string)
	{
		if(var_12_string == "cleanup")
			func_474(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_590(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_523(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_839(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_552(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_821(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_703(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_945(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_943(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_947(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_949(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_926(var_79_int);
	var_23_object->SetPlayerName(var_79_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_88_object; object var_89_object;
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_157_bool = !var_26_bool; //@nz
		if(var_157_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_158_object;
	var_17_object = var_158_object;
	func_772();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_772(void)
{
	bool var_160_bool;
	@CameraSwitchToNormal(true);
	bool var_162_bool;
	func_951(var_162_bool);
	if(var_162_bool != 0) {
	} else {
		@HasAnimationTrack(var_160_bool, "head");
		if(var_160_bool == 0) goto Label_789;
		@UnlookAsync("head");
	}
Label_789:
	
}


// @pe
void func_901(void)
{
	func_860("itheater@door1", false);
}


void func_523(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_908(void)
{
	@SetVariable("ook12TWhitemask1", 1);
}


// @pe
void func_525(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_698(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_604();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_142(object var_2_object, string var_107_string)
{
	bool var_108_bool;
	func_951(var_108_bool);
	if(!var_108_bool) //@nz
		return 0;
	if(var_107_string == var_2_object)
		return 0;
	string var_111_string; bool var_112_bool;
	var_107_string = var_111_string;
	if(var_107_string == "")
		var_112_bool = false;
	else
		var_112_bool = true;
	func_806(var_111_string, var_112_bool);
	var_2_object = var_107_string;
	
}


// @pe
void func_914(bool var_125_bool)
{
	int var_127_int;
	func_855(var_127_int, "ook12TWhitemask1");
	if(var_127_int == 0) {
		var_125_bool = true;
		return 0;
	}
	var_125_bool = false;
}


void func_790(string var_141_string)
{
	bool var_145_bool; float var_146_float; float var_147_float;
	@lshHasAnimation(var_145_bool, var_141_string);
	if(var_145_bool != 0) {
		@lshGetAnimTimes(var_141_string, var_146_float, var_147_float);
		@lshPlayAnimation(var_146_float, var_147_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_141_string);
	}
	
}


void func_926(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3ad";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_806(string var_111_string, bool var_112_bool)
{
	bool var_118_bool; float var_119_float; float var_120_float;
	@lshHasAnimation(var_118_bool, var_111_string);
	if(var_118_bool != 0) {
		@lshGetAnimTimes(var_111_string, var_119_float, var_120_float);
		@lshPlayAnimation(var_119_float, var_120_float, var_112_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_111_string);
	}
	
}


void func_552(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_690(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_683(bool var_71_bool)
{
	var_71_bool = true;
}


void func_685(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_943(int var_76_int)
{
	var_76_int = 515569;
}


void func_945(int var_75_int)
{
	var_75_int = 503354;
}


void func_690(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_947(string var_77_string)
{
	var_77_string = "ui/NPC_wmask.png";
}


void func_949(string var_78_string)
{
	var_78_string = "ui/NPC_wmask_b.png";
}


void func_821(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_951(bool var_70_bool)
{
	var_70_bool = false;
}


void func_698(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_703(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_845(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector, true);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_951(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_766;
		@LookAsyncCamera("head");
	}
Label_766:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_832(void)
{
	bool var_15_bool;
	func_951(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_839(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_456(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_525(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		object var_95_object; object var_96_object;
		var_95_object = var_1_object;
		var_96_object = var_0_object;
		func_901();
		func_142(var_89_object, "Neutral");
		var_0_object->SetMessage(540992); //@t
		var_0_object->ClearReplies(); //@t
		bool var_125_bool;
		func_914(var_1_object);
		if(var_125_bool != 0)
			var_0_object->AddReply(540993, 43484, 43083); //@t
		var_0_object->AddReply(541006, -1, 43099); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_139_bool;
	func_951(var_139_bool);
	if(var_139_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_790(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_141;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_141:
		return 0;

	}
	
}


void func_845(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_590(object var_2_object, string var_3_string)
{
	func_685();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_855(int var_127_int, string var_128_string)
{
	int var_130_int;
	@GetVariable(var_128_string, var_130_int);
	var_130_int = var_127_int;
}


void func_474(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_698(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_523(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_839(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_604(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_698(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_884(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_698(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_651;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_877(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_680;
				}
			} else if(var_38_int != 0) {
				goto Label_680;
			}
			}
					bool var_71_bool;
					func_683(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_675;
			}
		}
	Label_680:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_675:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_860(string var_97_string, bool var_98_bool)
{
	object var_100_object;
	@FindActor(var_100_object, var_97_string);
	if(!var_100_object) //@nz
		@Trace(("Door " + var_97_string) + " not found");
	else
		var_100_object->SetProperty("locked", var_98_bool);
	
}
EMIT "Stack[-1] = 0";


void func_877(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_884(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_877(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


