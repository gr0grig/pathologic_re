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
			func_677();
			if(var_13_bool == 26698) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_736();
			}
			if(var_13_bool == 41343) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_736();
			}
			if(var_13_bool == 41344) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_736();
			}
			if(var_12_bool == 26697) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(525329); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539404, 41334, 41333); //@t
				var_0_object->AddReply(539408, 41334, 41337); //@t
				return 0;
			}
			if(var_12_bool == 41334) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(539405); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539406, 41336, 41335); //@t
				var_0_object->AddReply(539409, 41336, 41339); //@t
				return 0;
			}
			if(var_12_bool == 41336) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(539407); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525330, -1, 26698); //@t
				var_0_object->AddReply(539410, 41342, 41341); //@t
				return 0;
			}
			if(var_12_bool == 41342) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(539411); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539412, -1, 41343); //@t
				var_0_object->AddReply(539413, -1, 41344); //@t
				return 0;
			}
			var_3_string = true;
			bool var_110_bool;
			func_829(var_110_bool);
			if(var_110_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		var_6_int = false;
		func_311((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		if(var_6_int != 0)
			return 0;
		func_455(var_11_bool, var_12_object);
		int var_17_int; object var_18_object;
		var_12_object = var_18_object;
		TaskCall(0);
		func_0(var_19_object, var_17_int, var_18_object);
		TaskReturn();
		var_6_int = true;
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, string var_12_string)
	{
		if(var_12_string == "cleanup")
			func_336(var_12_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_455(var_10_bool, var_11_bool);
		bool var_15_bool = false;
		if(var_5_int != 0) {
			bool var_17_bool;
			func_388(var_17_bool);
			if(var_17_bool != 0)
				var_15_bool = true;
		}
		if(var_15_bool != 0) {
			object var_18_object;
			func_684(var_18_object);
			@RemoveActor(var_18_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_417(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_666(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_568(var_28_bool, var_29_object, 70.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_75_int;
	func_823(var_75_int);
	var_24_object->SetNPCName(var_75_int);
	int var_76_int;
	func_821(var_76_int);
	var_24_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_825(var_77_string);
	var_24_object->SetPhoto(var_77_string);
	string var_78_string;
	func_827(var_78_string);
	var_24_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_804(var_79_int);
	var_24_object->SetPlayerName(var_79_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_88_object; object var_89_object;
	var_18_object = var_88_object;
	var_24_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_127_bool = !var_27_bool; //@nz
		if(var_127_bool == 0) goto Label_63;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_63:
	object var_128_object;
	var_18_object = var_128_object;
	func_636();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_388(bool var_17_bool)
{
	var_17_bool = true;
}


// @pe
void func_132(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_829(var_96_bool);
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
	func_660(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


// @pe
void func_390(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_23_float, float var_24_float)
{
	bool var_25_bool;
	func_563(var_25_bool);
	if(!var_25_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_23_float;
	var_1_object = var_24_float;
	@SetTimer(10, 1.0);
	func_469();
	if(!false) //@nz
		@KillTimer(10);
}


void func_776(bool var_27_bool, object var_28_object, int var_29_int)
{
	object var_36_object;
	func_763(var_36_object);
	object var_33_object;
	var_36_object = var_33_object;
	object var_34_object;
	var_33_object->Find(var_29_int, var_34_object);
	if(!var_34_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_29_int);
		var_27_bool = false;
	}
	var_34_object->AddChild(var_28_object);
	@SendWorldWndMessage(7);
	int var_35_int;
	var_28_object->GetCategory(var_35_int);
	@SetDiarySection(var_35_int);
	var_27_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_653(string var_116_string)
{
	float var_119_float; float var_120_float;
	@lshGetAnimTimes(var_116_string, var_119_float, var_120_float);
	@lshPlayAnimation(var_119_float, var_120_float, false);
}


void func_660(string var_99_string, bool var_100_bool)
{
	float var_105_float; float var_106_float;
	@lshGetAnimTimes(var_99_string, var_105_float, var_106_float);
	@lshPlayAnimation(var_105_float, var_106_float, var_100_bool);
}


void func_666(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_417(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_555(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_804(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x333";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_677(void)
{
	bool var_15_bool;
	func_829(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_550(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_548(bool var_71_bool)
{
	var_71_bool = true;
}


void func_555(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_684(object var_18_object)
{
	object var_20_object;
	@self(var_20_object);
	var_20_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_690(cvector var_55_cvector, cvector var_56_cvector)
{
	float var_59_float = sqrt(var_56_cvector | var_56_cvector);
	if(var_59_float < 0.000001)
		var_55_cvector = [0.0, 0.0, 0.0];
	var_55_cvector = var_56_cvector / var_59_float;
}


void func_563(bool var_16_bool)
{
	bool var_18_bool;
	@IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
}


void func_821(int var_76_int)
{
	var_76_int = 515556;
}


void func_311(float var_12_float, float var_13_float)
{
	
Label_312:
	for(;;) {
		bool var_16_bool;
		func_563(var_16_bool);
		var_19_bool = !var_16_bool; //@nz
		if(var_19_bool == 0) goto Label_320;
		@Hold();
	}
	
Label_320:
	float var_15_float;
	@rand(var_15_float, 3);
	@Sleep(var_15_float + 3);
	float var_23_float; float var_24_float;
	float var_14_float;
	func_390(var_11_bool, var_23_float, var_24_float, var_14_float, var_15_float, var_23_float, var_24_float);
	@sync();
	goto Label_312;
}
EMIT "Return(); Pop(2)";


void func_823(int var_75_int)
{
	var_75_int = 503341;
}


void func_568(bool var_28_bool, object var_29_object, float var_30_float)
{
	cvector var_41_cvector; bool var_48_bool;
	var_29_object->GetPosition(var_41_cvector);
	float var_40_float;
	var_29_object->GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_40_float);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	@GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_40_float);
	cvector var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_53_float = sqrt(var_43_cvector | var_43_cvector);
	var_43_cvector /= var_53_float;
	cvector var_44_cvector = -var_43_cvector;
	cvector var_55_cvector;
	func_690(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_45_cvector = ((var_43_cvector * var_30_float) + (var_55_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_42_cvector + var_45_cvector), var_44_cvector);
	var_68_float = GetByIndex(var_45_cvector, 0);
	var_69_float = GetByIndex(var_45_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_829(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_630;
		@LookAsyncCamera("head");
	}
Label_630:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


void func_825(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png";
}


void func_827(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png";
}


void func_700(bool var_45_bool, string var_46_string, string var_47_string)
{
	object var_49_object;
	@FindActor(var_49_object, var_46_string);
	if(var_49_object == null)
		var_45_bool = false;
	@Trigger(var_49_object, var_47_string);
	var_45_bool = true;
}
EMIT "Stack[-1] = 0";


void func_829(bool var_70_bool)
{
	var_70_bool = false;
}


// @pe
void func_455(object var_2_object, string var_3_string)
{
	func_550();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_712(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_89_object, "Neutral");
		var_0_object->SetMessage(525329); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539404, 41334, 41333); //@t
		var_0_object->AddReply(539408, 41334, 41337); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_114_bool;
	func_829(var_114_bool);
	if(var_114_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_653(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_719(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_712(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_336(int var_5_int)
{
	var_5_int = true;
	bool var_16_bool;
	@IsLoaded(var_16_bool);
	bool var_17_bool = false;
	if(!var_16_bool) { //@nz
		bool var_19_bool;
		func_388(var_19_bool);
		if(var_19_bool != 0)
			var_17_bool = true;
	}
	if(var_17_bool != 0) {
		object var_20_object;
		func_684(var_20_object);
		@RemoveActor(var_20_object);
	}
}


void func_469(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_563(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_719(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_563(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_516;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_712(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_545;
				}
			} else if(var_38_int != 0) {
				goto Label_545;
			}
			}
					bool var_71_bool;
					func_548(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_540;
			}
		}
	Label_545:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_540:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


// @pe
void func_736(void)
{
	@SetVariable("k2q03", 2);
	func_750();
	bool var_45_bool;
	func_700(var_45_bool, "quest_k2_03", "place_danko");
}


void func_750(void)
{
	object var_23_object;
	@CreateDiaryEntry(var_23_object, 478, 2, 527794);
	bool var_27_bool; object var_28_object;
	var_23_object = var_28_object;
	func_776(var_27_bool, var_28_object, 476);
}
EMIT "Stack[-1] = 0";


void func_763(object var_36_object)
{
	object var_38_object;
	@GetDiaryRoot(var_38_object);
	if(!var_38_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_36_object = false;
	}
	var_38_object = var_36_object;
}
EMIT "Stack[-1] = 0";


void func_636(void)
{
	bool var_130_bool;
	@CameraSwitchToNormal();
	bool var_131_bool;
	func_829(var_131_bool);
	if(var_131_bool != 0) {
	} else {
		@HasAnimationTrack(var_130_bool, "head");
		if(var_130_bool == 0) goto Label_652;
		@UnlookAsync("head");
	}
Label_652:
	
}


