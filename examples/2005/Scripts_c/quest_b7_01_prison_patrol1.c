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
			func_606();
			if(var_7_bool == 22203) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_675();
				object var_61_object = var_1_object;
				func_703(var_0_object);
			}
			if(var_6_int == 22202) {
				bool var_89_bool;
				func_719(var_1_object);
				if(var_89_bool != 0) {
					func_147(var_7_bool, "Neutral");
					var_0_object->SetMessage(520989); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528466, 29854, 29853); //@t
					return 0;
				}
				func_147(var_7_bool, "Neutral");
				var_0_object->SetMessage(528472); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520992, -1, 22205); //@t
				return 0;
			}
			if(var_6_int == 29854) {
				func_147(var_7_bool, "Neutral");
				var_0_object->SetMessage(528467); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528468, 29856, 29855); //@t
				return 0;
			}
			if(var_6_int == 29856) {
				func_147(var_7_bool, "Neutral");
				var_0_object->SetMessage(528469); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528470, 29858, 29857); //@t
				return 0;
			}
			if(var_6_int == 29858) {
				func_147(var_7_bool, "Neutral");
				var_0_object->SetMessage(528471); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528473, 29861, 29860); //@t
				var_0_object->AddReply(528477, 29863, 29864); //@t
				return 0;
			}
			if(var_6_int == 29861) {
				func_147(var_7_bool, "Neutral");
				var_0_object->SetMessage(528474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528475, 29863, 29862); //@t
				return 0;
			}
			if(var_6_int == 29863) {
				func_147(var_7_bool, "Neutral");
				var_0_object->SetMessage(528476); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520990, -1, 22203); //@t
				return 0;
			}
			var_3_string = true;
			bool var_156_bool;
			func_860(var_156_bool);
			if(var_156_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_346:
		for(;;) {
			bool var_8_bool;
			func_503(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_354;
			@Hold();
		}
	
	Label_354:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_417();
		goto Label_346;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_498();
		int var_7_int; object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		if(var_6_string == "cleanup")
			func_366(var_6_string);
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
			func_415(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_613(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_508(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_65_int;
	func_854(var_65_int);
	var_14_object->SetNPCName(var_65_int);
	int var_66_int;
	func_852(var_66_int);
	var_14_object->SetNPCDescription(var_66_int);
	string var_67_string;
	func_856(var_67_string);
	var_14_object->SetPhoto(var_67_string);
	string var_68_string;
	func_858(var_68_string);
	var_14_object->SetPhoto2(var_68_string);
	int var_69_int;
	func_835(var_69_int);
	var_14_object->SetPlayerName(var_69_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_78_object; object var_79_object;
	var_8_object = var_78_object;
	var_14_object = var_79_object;
	TaskCall(1);
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_127_bool = !var_17_bool; //@nz
		if(var_127_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_128_object;
	var_8_object = var_128_object;
	func_576();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_646(float var_29_float)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_31_float = var_29_float;
}


void func_651(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_785(object var_18_object)
{
	object var_21_object; object var_22_object;
	@GetMainOutdoorScene(var_21_object);
	if(var_21_object == null) {
		@Trace("Can't find main outdoor scene");
		var_22_object = null;
		var_22_object = var_18_object;
	}
	var_21_object->GetMap(var_22_object);
	var_22_object = var_18_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_658(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_651(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


// @pe
void func_147(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_860(var_94_bool);
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
	func_600(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_415(bool var_8_bool)
{
	var_8_bool = true;
}


void func_417(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_503(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_658(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_503(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_464;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_651(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_493;
				}
			} else if(var_23_int != 0) {
				goto Label_493;
			}
			}
					bool var_56_bool;
					func_496(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_488;
			}
		}
	Label_493:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_488:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_802(object var_63_object, string var_64_string, float var_65_float)
{
	object var_73_object;
	@GetMainOutdoorScene(var_73_object);
	if(var_73_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_71_cvector;
	cvector var_72_cvector;
	bool var_74_bool;
	var_73_object->GetLocator(var_64_string, var_74_bool, var_71_cvector, var_72_cvector);
	if(!var_74_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_64_string) + " doesnt exist");
	var_73_object->GetMap(var_63_object);
	if(var_63_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_84_float = GetByIndex(var_71_cvector, 0);
	var_85_float = GetByIndex(var_71_cvector, 2);
	var_63_object->SetMapParams(var_84_float, var_85_float, var_65_float);
}
EMIT "Stack[-2] = 0";


void func_675(void)
{
	@SetVariable("b7q01", 4);
	object var_18_object;
	func_785(var_18_object);
	object var_15_object;
	var_18_object = var_15_object;
	float var_29_float;
	func_646(var_29_float);
	var_15_object->AddMark("b7q01PatrolGotoGorbun", "pt_map_gorbun", 1, 521025, var_29_float);
	func_731();
	bool var_55_bool;
	func_634(var_55_bool, "quest_b7_01", "init_gorbun_house");
}
EMIT "Stack[-1] = 0";


// @pe
void func_703(object var_62_object)
{
	object var_66_object;
	func_785(var_66_object);
	object var_63_object;
	var_66_object = var_63_object;
	func_802(var_63_object, "pt_map_gorbun", (float)2);
	object var_86_object;
	func_785(var_86_object);
	var_62_object->ShowMap(var_86_object);
}


void func_576(void)
{
	bool var_130_bool;
	@CameraSwitchToNormal();
	bool var_131_bool;
	func_860(var_131_bool);
	if(var_131_bool != 0) {
	} else {
		@HasAnimationTrack(var_130_bool, "head");
		if(var_130_bool == 0) goto Label_592;
		@UnlookAsync("head");
	}
Label_592:
	
}


void func_835(int var_69_int)
{
	int var_71_int;
	@GetVariable("branch", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x352";
	}
	if(var_71_int == 1) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_85_bool;
		func_719(var_78_object);
		if(var_85_bool != 0) {
			func_147(var_79_object, "Neutral");
			var_0_object->SetMessage(520989); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528466, 29854, 29853); //@t
		} else {
					func_147(var_79_object, "Neutral");
					var_0_object->SetMessage(528472); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520992, -1, 22205); //@t
		}
	}
	for(;;) {
		bool var_109_bool;
		func_860(var_109_bool);
		if(var_109_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_593(var_2_object);
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
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_719(bool var_85_bool)
{
	int var_87_int;
	func_629(var_87_int, "b7q01");
	if(var_87_int == 3)
		var_85_bool = true;
	var_85_bool = false;
}


void func_593(string var_111_string)
{
	float var_114_float; float var_115_float;
	@lshGetAnimTimes(var_111_string, var_114_float, var_115_float);
	@lshPlayAnimation(var_114_float, var_115_float, false);
}


void func_852(int var_66_int)
{
	var_66_int = 515572;
}


void func_854(int var_65_int)
{
	var_65_int = 504031;
}


void func_600(string var_97_string, bool var_98_bool)
{
	float var_103_float; float var_104_float;
	@lshGetAnimTimes(var_97_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float, var_98_bool);
}


void func_856(string var_67_string)
{
	var_67_string = "ui/NPC_Citizen2.png";
}


void func_858(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen2_b.png";
}


void func_731(void)
{
	object var_33_object;
	@CreateDiaryEntry(var_33_object, 257, 1, 521029);
	bool var_37_bool; object var_38_object;
	var_33_object = var_38_object;
	func_757(var_37_bool, var_38_object, 253);
}
EMIT "Stack[-1] = 0";


void func_860(bool var_60_bool)
{
	var_60_bool = false;
}


void func_606(void)
{
	bool var_9_bool;
	func_860(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_613(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_744(object var_46_object)
{
	object var_48_object;
	@GetDiaryRoot(var_48_object);
	if(!var_48_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_46_object = false;
	}
	var_48_object = var_46_object;
}
EMIT "Stack[-1] = 0";


void func_619(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_366(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_415(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_613(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_496(bool var_56_bool)
{
	var_56_bool = true;
}


void func_498(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_629(int var_87_int, string var_88_string)
{
	int var_90_int;
	@GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
}


void func_757(bool var_37_bool, object var_38_object, int var_39_int)
{
	object var_46_object;
	func_744(var_46_object);
	object var_43_object;
	var_46_object = var_43_object;
	object var_44_object;
	var_43_object->Find(var_39_int, var_44_object);
	if(!var_44_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_39_int);
		var_37_bool = false;
	}
	var_44_object->AddChild(var_38_object);
	@SendWorldWndMessage(7);
	int var_45_int;
	var_38_object->GetCategory(var_45_int);
	@SetDiarySection(var_45_int);
	var_37_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_503(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_634(bool var_55_bool, string var_56_string, string var_57_string)
{
	object var_59_object;
	@FindActor(var_59_object, var_56_string);
	if(var_59_object == null)
		var_55_bool = false;
	@Trigger(var_59_object, var_57_string);
	var_55_bool = true;
}
EMIT "Stack[-1] = 0";


void func_508(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_619(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector);
	var_58_float = GetByIndex(var_35_cvector, 0);
	var_59_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_58_float, var_59_float);
	bool var_60_bool;
	func_860(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_570;
		@LookAsyncCamera("head");
	}
Label_570:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


