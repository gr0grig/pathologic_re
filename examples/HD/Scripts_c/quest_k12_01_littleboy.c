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
			func_829();
			if(var_13_bool == 45289) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_857();
			}
			if(var_12_bool == 43292) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(541166); //@t
				var_0_object->ClearReplies(); //@t
				bool var_42_bool;
				func_863(var_1_object);
				if(var_42_bool != 0)
					var_0_object->AddReply(542863, 45290, 45289); //@t
				var_0_object->AddReply(542768, -1, 45189); //@t
				var_0_object->AddReply(542791, -1, 45213); //@t
				return 0;
			}
			if(var_12_bool == 45290) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542864); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542865, 45297, 45291); //@t
				var_0_object->AddReply(542866, 45293, 45292); //@t
				return 0;
			}
			if(var_12_bool == 45293) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542868, -1, 45294); //@t
				var_0_object->AddReply(542869, -1, 45295); //@t
				var_0_object->AddReply(542870, -1, 45296); //@t
				return 0;
			}
			if(var_12_bool == 45297) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542871); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542872, 45300, 45298); //@t
				var_0_object->AddReply(542873, -1, 45299); //@t
				return 0;
			}
			if(var_12_bool == 45300) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542875, 45311, 45301); //@t
				var_0_object->AddReply(542876, 45303, 45302); //@t
				return 0;
			}
			if(var_12_bool == 45303) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542878, 45305, 45304); //@t
				var_0_object->AddReply(542882, 45309, 45308); //@t
				return 0;
			}
			if(var_12_bool == 45309) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542883); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542884, -1, 45310); //@t
				return 0;
			}
			if(var_12_bool == 45305) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542879); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542880, -1, 45306); //@t
				var_0_object->AddReply(542881, -1, 45307); //@t
				return 0;
			}
			if(var_12_bool == 45311) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542885); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542886, 45314, 45312); //@t
				var_0_object->AddReply(542887, -1, 45313); //@t
				return 0;
			}
			if(var_12_bool == 45314) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542888); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542889, -1, 45315); //@t
				var_0_object->AddReply(542890, -1, 45316); //@t
				var_0_object->AddReply(542891, -1, 45317); //@t
				return 0;
			}
			var_3_string = true;
			bool var_152_bool;
			func_900(var_152_bool);
			if(var_152_bool != 0)
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
		func_453(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_587(var_11_bool, var_12_object);
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
			func_471(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_587(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_520(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_836(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_549(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_818(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_896(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png";
}


void func_769(void)
{
	bool var_151_bool;
	@CameraSwitchToNormal(true);
	bool var_153_bool;
	func_900(var_153_bool);
	if(var_153_bool != 0) {
	} else {
		@HasAnimationTrack(var_151_bool, "head");
		if(var_151_bool == 0) goto Label_786;
		@UnlookAsync("head");
	}
Label_786:
	
}


void func_898(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png";
}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_700(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_894(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_892(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_896(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_898(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_875(var_79_int);
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
		var_148_bool = !var_26_bool; //@nz
		if(var_148_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_149_object;
	var_17_object = var_149_object;
	func_769();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_900(bool var_70_bool)
{
	var_70_bool = false;
}


void func_902(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_520(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_522(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_695(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_601();
	if(!false) //@nz
		@KillTimer(10);
}


void func_909(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_902(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


// @pe
void func_142(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_900(var_96_bool);
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
	func_803(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


void func_787(string var_132_string)
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


void func_803(string var_99_string, bool var_100_bool)
{
	bool var_106_bool; float var_107_float; float var_108_float;
	@lshHasAnimation(var_106_bool, var_99_string);
	if(var_106_bool != 0) {
		@lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		@lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_99_string);
	}
	
}


void func_549(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_687(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_680(bool var_71_bool)
{
	var_71_bool = true;
}


void func_682(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_687(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_818(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_695(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_700(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_842(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_900(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_763;
		@LookAsyncCamera("head");
	}
Label_763:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_829(void)
{
	bool var_15_bool;
	func_900(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_836(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_453(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_522(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_89_object, "Neutral");
		var_0_object->SetMessage(541166); //@t
		var_0_object->ClearReplies(); //@t
		bool var_113_bool;
		func_863(var_88_object);
		if(var_113_bool != 0)
			var_0_object->AddReply(542863, 45290, 45289); //@t
		var_0_object->AddReply(542768, -1, 45189); //@t
		var_0_object->AddReply(542791, -1, 45213); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_130_bool;
	func_900(var_130_bool);
	if(var_130_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_787(var_2_object);
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


// @pe
void func_587(object var_2_object, string var_3_string)
{
	func_682();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_842(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


void func_852(int var_115_int, string var_116_string)
{
	int var_118_int;
	@GetVariable(var_116_string, var_118_int);
	var_118_int = var_115_int;
}


void func_471(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_695(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_520(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_836(var_21_object);
		@RemoveActor(var_21_object);
	}
}


// @pe
void func_857(void)
{
	@SetVariable("ook12Littleboy1", 1);
}


void func_601(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_695(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_909(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_695(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_648;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_902(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_677;
				}
			} else if(var_38_int != 0) {
				goto Label_677;
			}
			}
					bool var_71_bool;
					func_680(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_672;
			}
		}
	Label_677:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_672:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


// @pe
void func_863(bool var_113_bool)
{
	int var_115_int;
	func_852(var_115_int, "ook12Littleboy1");
	if(var_115_int == 0) {
		var_113_bool = true;
		return 0;
	}
	var_113_bool = false;
}


void func_875(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x37a";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_892(int var_76_int)
{
	var_76_int = 515560;
}


void func_894(int var_75_int)
{
	var_75_int = 503345;
}


