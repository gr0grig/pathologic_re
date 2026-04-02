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
			func_656();
			if(var_13_bool == 31810) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_723();
			}
			if(var_13_bool == 31812) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_729();
				object var_44_object = var_1_object;
				func_749(var_0_object);
			}
			if(var_13_bool == 32837) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_729();
				object var_74_object = var_1_object;
				func_749(var_0_object);
			}
			if(var_12_bool == 31809) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(530443); //@t
				var_0_object->ClearReplies(); //@t
				bool var_96_bool;
				func_765(var_1_object);
				if(var_96_bool != 0)
					var_0_object->AddReply(530444, 31811, 31810); //@t
				var_0_object->AddReply(530447, -1, 31813); //@t
				return 0;
			}
			if(var_12_bool == 31811) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(530445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530446, -1, 31812); //@t
				var_0_object->AddReply(531483, -1, 32837); //@t
				return 0;
			}
			var_3_string = true;
			bool var_120_bool;
			func_721(var_120_bool);
			if(var_120_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa0";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_280(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_414(var_11_bool, var_12_object);
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
			func_298(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_414(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_347(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_663(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_376(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_645(var_4_bool);
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
	func_527(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_715(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_713(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_717(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_719(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_827(var_79_int);
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
		var_145_bool = !var_26_bool; //@nz
		if(var_145_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_146_object;
	var_17_object = var_146_object;
	func_596();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_514(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_645(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


// @pe
void func_137(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_721(var_96_bool);
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
	func_630(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


void func_522(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_777(object var_30_object)
{
	object var_33_object; object var_34_object;
	@GetMainOutdoorScene(var_33_object);
	if(var_33_object == null) {
		@Trace("Can't find main outdoor scene");
		var_34_object = null;
		var_34_object = var_30_object;
	}
	var_33_object->GetMap(var_34_object);
	var_34_object = var_30_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_765(bool var_113_bool)
{
	int var_115_int;
	func_679(var_115_int, "oob10GirlLaska1");
	if(var_115_int == 0) {
		var_113_bool = true;
		return 0;
	}
	var_113_bool = false;
}


void func_527(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_669(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_721(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_590;
		@LookAsyncCamera("head");
	}
Label_590:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_656(void)
{
	bool var_15_bool;
	func_721(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_663(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_280(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_349(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_794(object var_46_object, string var_47_string, float var_48_float)
{
	object var_56_object;
	@GetMainOutdoorScene(var_56_object);
	if(var_56_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_54_cvector;
	cvector var_55_cvector;
	bool var_57_bool;
	var_56_object->GetLocator(var_47_string, var_57_bool, var_54_cvector, var_55_cvector);
	if(!var_57_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_47_string) + " doesnt exist");
	var_56_object->GetMap(var_46_object);
	if(var_46_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_67_float = GetByIndex(var_54_cvector, 0);
	var_68_float = GetByIndex(var_54_cvector, 2);
	var_46_object->SetMapParams(var_67_float, var_68_float, var_48_float);
}
EMIT "Stack[-2] = 0";


void func_669(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_414(object var_2_object, string var_3_string)
{
	func_509();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_679(int var_115_int, string var_116_string)
{
	int var_118_int;
	@GetVariable(var_116_string, var_118_int);
	var_118_int = var_115_int;
}


void func_298(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_522(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_347(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_663(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_428(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_522(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_696(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_522(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_475;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_689(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_504;
				}
			} else if(var_38_int != 0) {
				goto Label_504;
			}
			}
					bool var_71_bool;
					func_507(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_499;
			}
		}
	Label_504:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_499:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_684(float var_41_float)
{
	float var_43_float;
	@GetGameTime(var_43_float);
	var_43_float = var_41_float;
}


void func_689(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_696(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_689(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_827(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x34a";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_713(int var_76_int)
{
	var_76_int = 515559;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_89_object, "Neutral");
		var_0_object->SetMessage(530443); //@t
		var_0_object->ClearReplies(); //@t
		bool var_113_bool;
		func_765(var_88_object);
		if(var_113_bool != 0)
			var_0_object->AddReply(530444, 31811, 31810); //@t
		var_0_object->AddReply(530447, -1, 31813); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_127_bool;
	func_721(var_127_bool);
	if(var_127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_614(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_136;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_136:
		return 0;

	}
	
}


void func_715(int var_75_int)
{
	var_75_int = 503344;
}


void func_717(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


void func_719(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


void func_721(bool var_70_bool)
{
	var_70_bool = false;
}


// @pe
void func_723(void)
{
	@SetVariable("oob10GirlLaska1", 1);
}


void func_596(void)
{
	bool var_148_bool;
	@CameraSwitchToNormal(true);
	bool var_150_bool;
	func_721(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		@HasAnimationTrack(var_148_bool, "head");
		if(var_148_bool == 0) goto Label_613;
		@UnlookAsync("head");
	}
Label_613:
	
}


void func_729(void)
{
	@SetVariable("b10q04GirlGotoKapella", 1);
	object var_30_object;
	func_777(var_30_object);
	object var_27_object;
	var_30_object = var_27_object;
	float var_41_float;
	func_684(var_41_float);
	var_27_object->AddMark("b10q04GirlGotoKapella", "pt_map_kapella", 0, 530490, var_41_float);
}
EMIT "Stack[-1] = 0";


void func_347(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_349(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_522(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_428();
	if(!false) //@nz
		@KillTimer(10);
}


void func_614(string var_129_string)
{
	bool var_133_bool; float var_134_float; float var_135_float;
	@lshHasAnimation(var_133_bool, var_129_string);
	if(var_133_bool != 0) {
		@lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		@lshPlayAnimation(var_134_float, var_135_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_129_string);
	}
	
}


// @pe
void func_749(object var_45_object)
{
	object var_49_object;
	func_777(var_49_object);
	object var_46_object;
	var_49_object = var_46_object;
	func_794(var_46_object, "pt_map_kapella", (float)2);
	object var_69_object;
	func_777(var_69_object);
	var_45_object->ShowMap(var_69_object);
}


void func_630(string var_99_string, bool var_100_bool)
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


void func_376(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_514(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_507(bool var_71_bool)
{
	var_71_bool = true;
}


void func_509(void)
{
	@StopAnimation();
	@StopGroup0();
}


