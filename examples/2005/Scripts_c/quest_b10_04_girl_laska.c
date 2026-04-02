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
			func_646();
			if(var_12_bool == 31810) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_713();
			}
			if(var_12_bool == 31812) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_719();
				object var_43_object = var_1_object;
				func_739(var_0_object);
			}
			if(var_12_bool == 32837) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_719();
				object var_73_object = var_1_object;
				func_739(var_0_object);
			}
			if(var_11_object == 31809) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(530443); //@t
				var_0_object->ClearReplies(); //@t
				bool var_90_bool;
				func_755(var_1_object);
				if(var_90_bool != 0)
					var_0_object->AddReply(530444, 31811, 31810); //@t
				var_0_object->AddReply(530447, -1, 31813); //@t
				return 0;
			}
			if(var_11_object == 31811) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(530445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530446, -1, 31812); //@t
				var_0_object->AddReply(531483, -1, 32837); //@t
				return 0;
			}
			var_3_string = true;
			bool var_114_bool;
			func_711(var_114_bool);
			if(var_114_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_280((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_424(var_10_bool, var_11_object);
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
			func_305(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_424(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_357(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_653(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_386(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_635(var_4_bool);
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
	func_537(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_705(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_703(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_707(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_709(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_817(var_77_int);
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
		var_133_bool = !var_25_bool; //@nz
		if(var_133_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_134_object;
	var_16_object = var_134_object;
	func_605();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_386(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_524(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_517(bool var_70_bool)
{
	var_70_bool = true;
}


void func_646(void)
{
	bool var_14_bool;
	func_711(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_519(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_137(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_711(var_94_bool);
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
	func_629(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_524(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_653(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_784(object var_45_object, string var_46_string, float var_47_float)
{
	object var_55_object;
	@GetMainOutdoorScene(var_55_object);
	if(var_55_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_53_cvector;
	cvector var_54_cvector;
	bool var_56_bool;
	var_55_object->GetLocator(var_46_string, var_56_bool, var_53_cvector, var_54_cvector);
	if(!var_56_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_46_string) + " doesnt exist");
	var_55_object->GetMap(var_45_object);
	if(var_45_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_66_float = GetByIndex(var_53_cvector, 0);
	var_67_float = GetByIndex(var_53_cvector, 2);
	var_45_object->SetMapParams(var_66_float, var_67_float, var_47_float);
}
EMIT "Stack[-2] = 0";


void func_659(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_532(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_280(float var_11_float, float var_12_float)
{
	
Label_281:
	for(;;) {
		bool var_15_bool;
		func_532(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_289;
		@Hold();
	}
	
Label_289:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_359(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_281;
}
EMIT "Return(); Pop(2)";


void func_537(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_659(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_711(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_599;
		@LookAsyncCamera("head");
	}
Label_599:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_669(int var_108_int, string var_109_string)
{
	int var_111_int;
	@GetVariable(var_109_string, var_111_int);
	var_111_int = var_108_int;
}


void func_674(float var_40_float)
{
	float var_42_float;
	@GetGameTime(var_42_float);
	var_42_float = var_40_float;
}


void func_679(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


// @pe
void func_424(object var_2_object, string var_3_string)
{
	func_519();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_686(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_679(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_817(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x340";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_305(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_357(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_653(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_438(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_532(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_686(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_532(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_485;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_679(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_514;
				}
			} else if(var_37_int != 0) {
				goto Label_514;
			}
			}
					bool var_70_bool;
					func_517(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_509;
			}
		}
	Label_514:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_509:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_703(int var_74_int)
{
	var_74_int = 515559;
}


void func_705(int var_73_int)
{
	var_73_int = 503344;
}


void func_707(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png";
}


void func_709(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png";
}


void func_711(bool var_68_bool)
{
	var_68_bool = false;
}


// @pe
void func_713(void)
{
	@SetVariable("oob10GirlLaska1", 1);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_87_object, "Neutral");
		var_0_object->SetMessage(530443); //@t
		var_0_object->ClearReplies(); //@t
		bool var_106_bool;
		func_755(var_86_object);
		if(var_106_bool != 0)
			var_0_object->AddReply(530444, 31811, 31810); //@t
		var_0_object->AddReply(530447, -1, 31813); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_120_bool;
	func_711(var_120_bool);
	if(var_120_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_622(var_2_object);
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


void func_719(void)
{
	@SetVariable("b10q04GirlGotoKapella", 1);
	object var_29_object;
	func_767(var_29_object);
	object var_26_object;
	var_29_object = var_26_object;
	float var_40_float;
	func_674(var_40_float);
	var_26_object->AddMark("b10q04GirlGotoKapella", "pt_map_kapella", 0, 530490, var_40_float);
}
EMIT "Stack[-1] = 0";


void func_605(void)
{
	bool var_136_bool;
	@CameraSwitchToNormal();
	bool var_137_bool;
	func_711(var_137_bool);
	if(var_137_bool != 0) {
	} else {
		@HasAnimationTrack(var_136_bool, "head");
		if(var_136_bool == 0) goto Label_621;
		@UnlookAsync("head");
	}
Label_621:
	
}


// @pe
void func_739(object var_44_object)
{
	object var_48_object;
	func_767(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	func_784(var_45_object, "pt_map_kapella", (float)2);
	object var_68_object;
	func_767(var_68_object);
	var_44_object->ShowMap(var_68_object);
}


void func_357(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_359(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_532(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_438();
	if(!false) //@nz
		@KillTimer(10);
}


void func_622(string var_122_string)
{
	float var_125_float; float var_126_float;
	@lshGetAnimTimes(var_122_string, var_125_float, var_126_float);
	@lshPlayAnimation(var_125_float, var_126_float, false);
}


// @pe
void func_755(bool var_106_bool)
{
	int var_108_int;
	func_669(var_108_int, "oob10GirlLaska1");
	if(var_108_int == 0) {
		var_106_bool = true;
		return 0;
	}
	var_106_bool = false;
}


void func_629(string var_97_string, bool var_98_bool)
{
	float var_103_float; float var_104_float;
	@lshGetAnimTimes(var_97_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float, var_98_bool);
}


void func_635(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_767(object var_29_object)
{
	object var_32_object; object var_33_object;
	@GetMainOutdoorScene(var_32_object);
	if(var_32_object == null) {
		@Trace("Can't find main outdoor scene");
		var_33_object = null;
		var_33_object = var_29_object;
	}
	var_32_object->GetMap(var_33_object);
	var_33_object = var_29_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


