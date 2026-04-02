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
			func_646();
			if(var_7_bool == 22187) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_703();
				object var_55_object = var_1_object;
				func_726(var_0_object);
			}
			if(var_6_int == 22184) {
				bool var_83_bool;
				func_742(var_1_object);
				if(var_83_bool != 0) {
					func_157(var_7_bool, "Neutral");
					var_0_object->SetMessage(520971); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520972, 22186, 22185); //@t
					var_0_object->AddReply(524081, 25382, 25381); //@t
					var_0_object->AddReply(524088, 25386, 25388); //@t
					return 0;
				}
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(520975); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520976, -1, 22189); //@t
				return 0;
			}
			if(var_6_int == 25382) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(524082); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524083, 25384, 25383); //@t
				var_0_object->AddReply(524089, 25392, 25391); //@t
				return 0;
			}
			if(var_6_int == 25392) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(524090); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524091, 22186, 25393); //@t
				return 0;
			}
			if(var_6_int == 25384) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(524084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524085, 25386, 25385); //@t
				return 0;
			}
			if(var_6_int == 25386) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(524086); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524087, 22186, 25387); //@t
				return 0;
			}
			if(var_6_int == 22186) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(520973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520974, -1, 22187); //@t
				return 0;
			}
			var_3_string = true;
			bool var_161_bool;
			func_883(var_161_bool);
			if(var_161_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_366:
		for(;;) {
			bool var_8_bool;
			func_523(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_374;
			@Hold();
		}
	
	Label_374:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_437();
		goto Label_366;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_518();
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
			func_386(var_6_string);
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
			func_435(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_653(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_528(var_18_bool, var_19_object, 130.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_877(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_875(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_879(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_881(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_858(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_79_object; object var_80_object;
	var_8_object = var_79_object;
	var_14_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_144_bool = !var_17_bool; //@nz
		if(var_144_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_145_object;
	var_8_object = var_145_object;
	func_597();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_386(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_435(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_653(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_516(bool var_56_bool)
{
	var_56_bool = true;
}


void func_646(void)
{
	bool var_9_bool;
	func_883(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_518(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_523(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_780(bool var_37_bool, object var_38_object, int var_39_int)
{
	object var_46_object;
	func_767(var_46_object);
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


void func_653(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_528(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_659(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_883(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_591;
		@LookAsyncCamera("head");
	}
Label_591:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_659(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_669(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
}


// @pe
void func_157(object var_2_object, string var_94_string)
{
	bool var_95_bool;
	func_883(var_95_bool);
	if(!var_95_bool) //@nz
		return 0;
	if(var_94_string == var_2_object)
		return 0;
	string var_98_string; bool var_99_bool;
	var_94_string = var_98_string;
	if(var_94_string == "")
		var_99_bool = false;
	else
		var_99_bool = true;
	func_631(var_98_string, var_99_bool);
	var_2_object = var_94_string;
	
}


void func_674(float var_29_float)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_31_float = var_29_float;
}


void func_679(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_808(object var_18_object)
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


void func_686(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_679(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


void func_435(bool var_8_bool)
{
	var_8_bool = true;
}


void func_437(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_523(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_686(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_523(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_484;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_679(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_513;
				}
			} else if(var_23_int != 0) {
				goto Label_513;
			}
			}
					bool var_56_bool;
					func_516(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_508;
			}
		}
	Label_513:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_508:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_825(object var_57_object, string var_58_string, float var_59_float)
{
	object var_67_object;
	@GetMainOutdoorScene(var_67_object);
	if(var_67_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_65_cvector;
	cvector var_66_cvector;
	bool var_68_bool;
	var_67_object->GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector);
	if(!var_68_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_58_string) + " doesnt exist");
	var_67_object->GetMap(var_57_object);
	if(var_57_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_78_float = GetByIndex(var_65_cvector, 0);
	var_79_float = GetByIndex(var_65_cvector, 2);
	var_57_object->SetMapParams(var_78_float, var_79_float, var_59_float);
}
EMIT "Stack[-2] = 0";


void func_703(void)
{
	@SetVariable("b7q01", 2);
	object var_18_object;
	func_808(var_18_object);
	object var_15_object;
	var_18_object = var_15_object;
	float var_29_float;
	func_674(var_29_float);
	var_15_object->AddMark("b7q01BirdmaskGotoMat", "pt_map_mat", 1, 521022, var_29_float);
	func_754();
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_86_bool;
		func_742(var_79_object);
		if(var_86_bool != 0) {
			func_157(var_80_object, "Neutral");
			var_0_object->SetMessage(520971); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520972, 22186, 22185); //@t
			var_0_object->AddReply(524081, 25382, 25381); //@t
			var_0_object->AddReply(524088, 25386, 25388); //@t
		} else {
					func_157(var_80_object, "Neutral");
					var_0_object->SetMessage(520975); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520976, -1, 22189); //@t
		}
	}
	for(;;) {
		bool var_121_bool;
		func_883(var_121_bool);
		if(var_121_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_615(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_156;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_156:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_597(void)
{
	bool var_147_bool;
	@CameraSwitchToNormal(true);
	bool var_149_bool;
	func_883(var_149_bool);
	if(var_149_bool != 0) {
	} else {
		@HasAnimationTrack(var_147_bool, "head");
		if(var_147_bool == 0) goto Label_614;
		@UnlookAsync("head");
	}
Label_614:
	
}


// @pe
void func_726(object var_56_object)
{
	object var_60_object;
	func_808(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	func_825(var_57_object, "pt_map_mat", (float)2);
	object var_80_object;
	func_808(var_80_object);
	var_56_object->ShowMap(var_80_object);
}


void func_858(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x369";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


// @pe
void func_742(bool var_86_bool)
{
	int var_88_int;
	func_669(var_88_int, "b7q01");
	if(var_88_int == 1)
		var_86_bool = true;
	var_86_bool = false;
}


void func_615(string var_123_string)
{
	bool var_127_bool; float var_128_float; float var_129_float;
	@lshHasAnimation(var_127_bool, var_123_string);
	if(var_127_bool != 0) {
		@lshGetAnimTimes(var_123_string, var_128_float, var_129_float);
		@lshPlayAnimation(var_128_float, var_129_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_123_string);
	}
	
}


void func_875(int var_67_int)
{
	var_67_int = 515571;
}


void func_877(int var_66_int)
{
	var_66_int = 504029;
}


void func_879(string var_68_string)
{
	var_68_string = "ui/NPC_bmask.png";
}


void func_881(string var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png";
}


void func_754(void)
{
	object var_33_object;
	@CreateDiaryEntry(var_33_object, 255, 1, 521023);
	bool var_37_bool; object var_38_object;
	var_33_object = var_38_object;
	func_780(var_37_bool, var_38_object, 253);
}
EMIT "Stack[-1] = 0";


void func_883(bool var_61_bool)
{
	var_61_bool = false;
}


void func_631(string var_98_string, bool var_99_bool)
{
	bool var_105_bool; float var_106_float; float var_107_float;
	@lshHasAnimation(var_105_bool, var_98_string);
	if(var_105_bool != 0) {
		@lshGetAnimTimes(var_98_string, var_106_float, var_107_float);
		@lshPlayAnimation(var_106_float, var_107_float, var_99_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_98_string);
	}
	
}


void func_767(object var_46_object)
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


