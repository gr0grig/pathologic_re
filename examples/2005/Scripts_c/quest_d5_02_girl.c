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
			func_766();
			if(var_12_bool == 13218) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_851();
				object var_66_object = var_1_object;
				func_835(var_0_object);
			}
			if(var_12_bool == 13214) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_851();
				object var_96_object = var_1_object;
				func_835(var_0_object);
			}
			if(var_12_bool == 13215) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_851();
				object var_102_object = var_1_object;
				func_835(var_0_object);
			}
			if(var_11_object == 13203) {
				bool var_106_bool;
				func_879(var_1_object);
				if(var_106_bool != 0) {
					func_132(var_12_bool, "Neutral");
					var_0_object->SetMessage(511988); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511989, 13205, 13204); //@t
					return 0;
				}
			}
			if(var_11_object == 13205) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(511990); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511991, 13207, 13206); //@t
				var_0_object->AddReply(512004, 13207, 13219); //@t
				return 0;
			}
			if(var_11_object == 13207) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(511992); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511993, 13209, 13208); //@t
				var_0_object->AddReply(512005, 13209, 13221); //@t
				return 0;
			}
			if(var_11_object == 13209) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(511994); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511995, 13211, 13210); //@t
				var_0_object->AddReply(512006, 13213, 13223); //@t
				return 0;
			}
			if(var_11_object == 13211) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(511996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511997, 13213, 13212); //@t
				return 0;
			}
			if(var_11_object == 13213) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(511998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512001, 13217, 13216); //@t
				var_0_object->AddReply(511999, -1, 13214); //@t
				var_0_object->AddReply(515782, 16855, 16854); //@t
				return 0;
			}
			if(var_11_object == 16855) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(515783); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512000, -1, 13215); //@t
				return 0;
			}
			if(var_11_object == 13217) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(512002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512003, -1, 13218); //@t
				return 0;
			}
			var_3_string = true;
			bool var_194_bool;
			func_1020(var_194_bool);
			if(var_194_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_400((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		TaskCall(0);
		int var_12_int;
		func_0(var_14_object, var_12_int, var_13_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, string var_11_string)
	{
		if(var_11_string == "cleanup")
			func_425(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_544(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_477(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_773(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_506(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_755(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_12_int, object var_13_object)
{
	var_0_object = var_13_object;
	bool var_23_bool; object var_24_object;
	var_13_object = var_24_object;
	func_657(var_23_bool, var_24_object, 70.0);
	if(!var_23_bool) { //@nz
		var_12_int = -2;
		return 8;
	}
	object var_19_object;
	@CreateDialog(var_19_object);
	int var_70_int;
	func_1014(var_70_int);
	var_19_object->SetNPCName(var_70_int);
	int var_71_int;
	func_1012(var_71_int);
	var_19_object->SetNPCDescription(var_71_int);
	string var_72_string;
	func_1016(var_72_string);
	var_19_object->SetPhoto(var_72_string);
	string var_73_string;
	func_1018(var_73_string);
	var_19_object->SetPhoto2(var_73_string);
	int var_74_int;
	func_995(var_74_int);
	var_19_object->SetPlayerName(var_74_int);
	bool var_20_bool;
	@IsOverrideActive(var_20_bool);
	if(var_20_bool != 0) {
		var_12_int = -2;
		return 8;
	}
	@DoDialog(var_19_object);
	object var_83_object; object var_84_object;
	var_13_object = var_83_object;
	var_19_object = var_84_object;
	TaskCall(1);
	func_74(var_85_object, var_86_object, var_87_string, var_88_bool, var_83_object, var_84_object);
	TaskReturn();
	bool var_22_bool;
	var_19_object->IsDialogEnd(var_22_bool);
	
	for(;;) {
		var_127_bool = !var_22_bool; //@nz
		if(var_127_bool == 0) goto Label_63;
		@sync();
		var_19_object->IsDialogEnd(var_22_bool);
	}
	
Label_63:
	object var_128_object;
	var_13_object = var_128_object;
	func_725();
	@StopDialog(var_19_object);
	var_19_object->GetReturnValue(-1);
	int var_21_int = var_12_int;
}
EMIT "Stack[-4] = 0";


void func_1018(string var_73_string)
{
	var_73_string = "ui/NPC_Citizen1_b.png";
}


void func_644(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


// @pe
void func_132(object var_2_object, string var_98_string)
{
	bool var_99_bool;
	func_1020(var_99_bool);
	if(!var_99_bool) //@nz
		return 0;
	if(var_98_string == var_2_object)
		return 0;
	string var_102_string; bool var_103_bool;
	var_98_string = var_102_string;
	if(var_98_string == "")
		var_103_bool = false;
	else
		var_103_bool = true;
	func_749(var_102_string, var_103_bool);
	var_2_object = var_98_string;
	
}


void func_773(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_904(object var_51_object)
{
	object var_53_object;
	@GetDiaryRoot(var_53_object);
	if(!var_53_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_51_object = false;
	}
	var_53_object = var_51_object;
}
EMIT "Stack[-1] = 0";


void func_779(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_54_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_54_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_54_float;
}


void func_652(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_400(float var_11_float, float var_12_float)
{
	
Label_401:
	for(;;) {
		bool var_15_bool;
		func_652(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_409;
		@Hold();
	}
	
Label_409:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_479(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_401;
}
EMIT "Return(); Pop(2)";


void func_657(bool var_23_bool, object var_24_object, float var_25_float)
{
	cvector var_36_cvector; bool var_43_bool;
	var_24_object->GetPosition(var_36_cvector);
	float var_35_float;
	var_24_object->GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (var_44_float + var_35_float);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	@GetEyesHeight(var_35_float);
	var_45_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_45_float + var_35_float);
	cvector var_38_cvector = var_36_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_48_float = sqrt(var_38_cvector | var_38_cvector);
	var_38_cvector /= var_48_float;
	cvector var_39_cvector = -var_38_cvector;
	cvector var_50_cvector;
	func_779(var_50_cvector, (var_39_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_40_cvector = ((var_38_cvector * var_25_float) + (var_50_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0)
		var_23_bool = false;
	@StopWorld();
	@CameraTransit((var_37_cvector + var_40_cvector), var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	@Rotate(var_63_float, var_64_float);
	bool var_65_bool;
	func_1020(var_65_bool);
	if(var_65_bool != 0) {
	} else {
		@HasAnimationTrack(var_43_bool, "head");
		if(var_43_bool == 0) goto Label_719;
		@LookAsyncCamera("head");
	}
Label_719:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_23_bool = true;
	
}


void func_789(int var_92_int, string var_93_string)
{
	int var_95_int;
	@GetVariable(var_93_string, var_95_int);
	var_95_int = var_92_int;
}


void func_917(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_904(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	object var_49_object;
	var_48_object->Find(var_44_int, var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_44_int);
		var_42_bool = false;
	}
	var_49_object->AddChild(var_43_object);
	@SendWorldWndMessage(7);
	int var_50_int;
	var_43_object->GetCategory(var_50_int);
	@SetDiarySection(var_50_int);
	var_42_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_794(bool var_60_bool, string var_61_string, string var_62_string)
{
	object var_64_object;
	@FindActor(var_64_object, var_61_string);
	if(var_64_object == null)
		var_60_bool = false;
	@Trigger(var_64_object, var_62_string);
	var_60_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_544(object var_2_object, string var_3_string)
{
	func_639();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_806(float var_34_float)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_36_float = var_34_float;
}


void func_425(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_477(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_773(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_811(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_558(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_652(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_818(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_652(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_605;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_811(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_634;
				}
			} else if(var_37_int != 0) {
				goto Label_634;
			}
			}
					bool var_70_bool;
					func_637(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_629;
			}
		}
	Label_634:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_629:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_945(object var_23_object)
{
	object var_26_object; object var_27_object;
	@GetMainOutdoorScene(var_26_object);
	if(var_26_object == null) {
		@Trace("Can't find main outdoor scene");
		var_27_object = null;
		var_27_object = var_23_object;
	}
	var_26_object->GetMap(var_27_object);
	var_27_object = var_23_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_818(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_811(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_962(object var_68_object, string var_69_string, float var_70_float)
{
	object var_78_object;
	@GetMainOutdoorScene(var_78_object);
	if(var_78_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_76_cvector;
	cvector var_77_cvector;
	bool var_79_bool;
	var_78_object->GetLocator(var_69_string, var_79_bool, var_76_cvector, var_77_cvector);
	if(!var_79_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_69_string) + " doesnt exist");
	var_78_object->GetMap(var_68_object);
	if(var_68_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_89_float = GetByIndex(var_76_cvector, 0);
	var_90_float = GetByIndex(var_76_cvector, 2);
	var_68_object->SetMapParams(var_89_float, var_90_float, var_70_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_835(object var_67_object)
{
	object var_71_object;
	func_945(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	func_962(var_68_object, "pt_d5q01_girl_corpse1", (float)2);
	object var_91_object;
	func_945(var_91_object);
	var_67_object->ShowMap(var_91_object);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_83_object, object var_84_object)
{
	var_0_object = var_84_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_90_bool;
		func_879(var_83_object);
		if(var_90_bool != 0) {
			func_132(var_84_object, "Neutral");
			var_0_object->SetMessage(511988); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511989, 13205, 13204); //@t
		} else {
				return 0;
		}
	}
	bool var_114_bool;
	func_1020(var_114_bool);
	if(var_114_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_742(var_2_object);
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
EMIT "GOTO 0x4e";


void func_851(void)
{
	@SetVariable("d5q02", 4);
	object var_23_object;
	func_945(var_23_object);
	object var_20_object;
	var_23_object = var_20_object;
	float var_34_float;
	func_806(var_34_float);
	var_20_object->AddMark("d5q02NudeMeeting", "pt_d5q01_girl_corpse1", 0, 515364, var_34_float);
	func_891();
	bool var_60_bool;
	func_794(var_60_bool, "quest_d5_02", "remove_girl");
}
EMIT "Stack[-1] = 0";


void func_725(void)
{
	bool var_130_bool;
	@CameraSwitchToNormal();
	bool var_131_bool;
	func_1020(var_131_bool);
	if(var_131_bool != 0) {
	} else {
		@HasAnimationTrack(var_130_bool, "head");
		if(var_130_bool == 0) goto Label_741;
		@UnlookAsync("head");
	}
Label_741:
	
}


void func_477(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_479(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_652(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_558();
	if(!false) //@nz
		@KillTimer(10);
}


void func_995(int var_74_int)
{
	int var_76_int;
	@GetVariable("branch", var_76_int);
	if(var_76_int == 0) {
		var_74_int = 1;
		return 2;
	EMIT "GOTO 0x3f2";
	}
	if(var_76_int == 1) {
		var_74_int = 2;
		return 2;
	}
	var_74_int = 3;
}


void func_742(string var_116_string)
{
	float var_119_float; float var_120_float;
	@lshGetAnimTimes(var_116_string, var_119_float, var_120_float);
	@lshPlayAnimation(var_119_float, var_120_float, false);
}


void func_749(string var_102_string, bool var_103_bool)
{
	float var_108_float; float var_109_float;
	@lshGetAnimTimes(var_102_string, var_108_float, var_109_float);
	@lshPlayAnimation(var_108_float, var_109_float, var_103_bool);
}


// @pe
void func_879(bool var_90_bool)
{
	int var_92_int;
	func_789(var_92_int, "d5q02");
	if(var_92_int == 3)
		var_90_bool = true;
	var_90_bool = false;
}


void func_755(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_1012(int var_71_int)
{
	var_71_int = 515593;
}


void func_1014(int var_70_int)
{
	var_70_int = 512582;
}


void func_1016(string var_72_string)
{
	var_72_string = "ui/NPC_Citizen1.png";
}


void func_506(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_644(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_891(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 152, 2, 515358);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_917(var_42_bool, var_43_object, 148);
}
EMIT "Stack[-1] = 0";


void func_1020(bool var_65_bool)
{
	var_65_bool = false;
}


void func_637(bool var_70_bool)
{
	var_70_bool = true;
}


void func_766(void)
{
	bool var_14_bool;
	func_1020(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_639(void)
{
	@StopAnimation();
	@StopGroup0();
}


