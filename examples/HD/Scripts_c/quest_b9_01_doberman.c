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
			func_629();
			if(var_7_bool == 22720) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_698();
			}
			if(var_7_bool == 22722) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_704();
				object var_71_object = var_1_object;
				func_735(var_0_object);
			}
			if(var_6_int == 22719) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(521558); //@t
				var_0_object->ClearReplies(); //@t
				bool var_117_bool = false;
				bool var_118_bool;
				func_751(var_1_object);
				if(var_118_bool != 0) {
					bool var_124_bool;
					func_763(var_1_object);
					if(var_124_bool != 0)
						var_117_bool = true;
				}
				if(var_117_bool != 0)
					var_0_object->AddReply(521559, 22721, 22720); //@t
				var_0_object->AddReply(521562, -1, 22723); //@t
				return 0;
			}
			if(var_6_int == 22721) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(521560); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522279, 23434, 23433); //@t
				var_0_object->AddReply(522272, 23426, 23425); //@t
				return 0;
			}
			if(var_6_int == 23426) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(522273); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522274, 23431, 23427); //@t
				var_0_object->AddReply(522275, 23429, 23428); //@t
				return 0;
			}
			if(var_6_int == 23429) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(522276); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522277, 23431, 23430); //@t
				return 0;
			}
			if(var_6_int == 23431) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(522278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522281, 23434, 23435); //@t
				return 0;
			}
			if(var_6_int == 23434) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(522280); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521561, -1, 22722); //@t
				return 0;
			}
			var_3_string = true;
			bool var_177_bool;
			func_904(var_177_bool);
			if(var_177_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa9";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_354:
		for(;;) {
			bool var_8_bool;
			func_506(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_362;
			@Hold();
		}
	
	Label_362:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_425();
		goto Label_354;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		if(var_6_string == "cleanup")
			func_374(var_6_string);
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
			func_423(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_636(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_896(int var_67_int)
{
	var_67_int = 518097;
}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_511(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_898(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_896(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_900(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_902(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_879(var_70_int);
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
		var_143_bool = !var_17_bool; //@nz
		if(var_143_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_144_object;
	var_8_object = var_144_object;
	func_580();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_898(int var_66_int)
{
	var_66_int = 518096;
}


void func_642(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_900(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen2.png";
}


void func_902(string var_69_string)
{
	var_69_string = "ui/NPC_Citizen2_b.png";
}


void func_775(void)
{
	object var_43_object;
	@CreateDiaryEntry(var_43_object, 300, 1, 521615);
	bool var_47_bool; object var_48_object;
	var_43_object = var_48_object;
	func_801(var_47_bool, var_48_object, 297);
}
EMIT "Stack[-1] = 0";


void func_904(bool var_61_bool)
{
	var_61_bool = false;
}


void func_652(int var_107_int, string var_108_string)
{
	int var_110_int;
	@GetVariable(var_108_string, var_110_int);
	var_110_int = var_107_int;
}


void func_657(bool var_65_bool, string var_66_string, string var_67_string)
{
	object var_69_object;
	@FindActor(var_69_object, var_66_string);
	if(var_69_object == null)
		var_65_bool = false;
	@Trigger(var_69_object, var_67_string);
	var_65_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_146(object var_2_object, string var_86_string)
{
	bool var_87_bool;
	func_904(var_87_bool);
	if(!var_87_bool) //@nz
		return 0;
	if(var_86_string == var_2_object)
		return 0;
	string var_90_string; bool var_91_bool;
	var_86_string = var_90_string;
	if(var_86_string == "")
		var_91_bool = false;
	else
		var_91_bool = true;
	func_614(var_90_string, var_91_bool);
	var_2_object = var_86_string;
	
}


void func_788(object var_56_object)
{
	object var_58_object;
	@GetDiaryRoot(var_58_object);
	if(!var_58_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_56_object = false;
	}
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


void func_669(float var_39_float)
{
	float var_41_float;
	@GetGameTime(var_41_float);
	var_41_float = var_39_float;
}


void func_801(bool var_47_bool, object var_48_object, int var_49_int)
{
	object var_56_object;
	func_788(var_56_object);
	object var_53_object;
	var_56_object = var_53_object;
	object var_54_object;
	var_53_object->Find(var_49_int, var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_49_int);
		var_47_bool = false;
	}
	var_54_object->AddChild(var_48_object);
	@SendWorldWndMessage(7);
	int var_55_int;
	var_48_object->GetCategory(var_55_int);
	@SetDiarySection(var_55_int);
	var_47_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_674(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_423(bool var_8_bool)
{
	var_8_bool = true;
}


void func_425(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_506(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_681(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_506(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_472;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_674(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_501;
				}
			} else if(var_23_int != 0) {
				goto Label_501;
			}
			}
					bool var_56_bool;
					func_504(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_496;
			}
		}
	Label_501:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_496:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_681(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_674(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


// @pe
void func_698(void)
{
	@SetVariable("oob9MDoberman1", 1);
}


void func_829(object var_28_object)
{
	object var_31_object; object var_32_object;
	@GetMainOutdoorScene(var_31_object);
	if(var_31_object == null) {
		@Trace("Can't find main outdoor scene");
		var_32_object = null;
		var_32_object = var_28_object;
	}
	var_31_object->GetMap(var_32_object);
	var_32_object = var_28_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_704(void)
{
	object var_21_object;
	int var_22_int;
	func_652(var_22_int, "b9q01");
	if(var_22_int == 2) {
		object var_28_object;
		func_829(var_28_object);
		var_28_object = var_21_object;
		float var_39_float;
		func_669(var_39_float);
		var_21_object->AddMark("b9q01MDobermanGotoFactory", "pt_gmap_factory", 1, 530198, var_39_float);
		func_775();
		bool var_65_bool;
		func_657(var_65_bool, "quest_b9_01", "remove_mdoberman");
		var_21_object = null;
	}
}


void func_580(void)
{
	bool var_146_bool;
	@CameraSwitchToNormal(true);
	bool var_148_bool;
	func_904(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		@HasAnimationTrack(var_146_bool, "head");
		if(var_146_bool == 0) goto Label_597;
		@UnlookAsync("head");
	}
Label_597:
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		func_146(var_80_object, "Neutral");
		var_0_object->SetMessage(521558); //@t
		var_0_object->ClearReplies(); //@t
		bool var_104_bool = false;
		bool var_105_bool;
		func_751(var_1_object);
		if(var_105_bool != 0) {
			bool var_113_bool;
			func_763(var_1_object);
			if(var_113_bool != 0)
				var_104_bool = true;
		}
		if(var_104_bool != 0)
			var_0_object->AddReply(521559, 22721, 22720); //@t
		var_0_object->AddReply(521562, -1, 22723); //@t
		goto Label_116;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_116:
	bool var_125_bool;
	func_904(var_125_bool);
	if(var_125_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_598(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_145;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_145:
		return 0;

	}
	
}


void func_846(object var_73_object, string var_74_string, float var_75_float)
{
	object var_83_object;
	@GetMainOutdoorScene(var_83_object);
	if(var_83_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_81_cvector;
	cvector var_82_cvector;
	bool var_84_bool;
	var_83_object->GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector);
	if(!var_84_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_74_string) + " doesnt exist");
	var_83_object->GetMap(var_73_object);
	if(var_73_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_94_float = GetByIndex(var_81_cvector, 0);
	var_95_float = GetByIndex(var_81_cvector, 2);
	var_73_object->SetMapParams(var_94_float, var_95_float, var_75_float);
}
EMIT "Stack[-2] = 0";


void func_598(string var_127_string)
{
	bool var_131_bool; float var_132_float; float var_133_float;
	@lshHasAnimation(var_131_bool, var_127_string);
	if(var_131_bool != 0) {
		@lshGetAnimTimes(var_127_string, var_132_float, var_133_float);
		@lshPlayAnimation(var_132_float, var_133_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_127_string);
	}
	
}


// @pe
void func_735(object var_72_object)
{
	object var_76_object;
	func_829(var_76_object);
	object var_73_object;
	var_76_object = var_73_object;
	func_846(var_73_object, "pt_gmap_factory", (float)2);
	object var_96_object;
	func_829(var_96_object);
	var_72_object->ShowMap(var_96_object);
}


void func_614(string var_90_string, bool var_91_bool)
{
	bool var_97_bool; float var_98_float; float var_99_float;
	@lshHasAnimation(var_97_bool, var_90_string);
	if(var_97_bool != 0) {
		@lshGetAnimTimes(var_90_string, var_98_float, var_99_float);
		@lshPlayAnimation(var_98_float, var_99_float, var_91_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_90_string);
	}
	
}


void func_879(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x37e";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


// @pe
void func_751(bool var_105_bool)
{
	int var_107_int;
	func_652(var_107_int, "b9q01");
	if(var_107_int == 2)
		var_105_bool = true;
	var_105_bool = false;
}


void func_629(void)
{
	bool var_9_bool;
	func_904(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_374(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_423(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_636(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_504(bool var_56_bool)
{
	var_56_bool = true;
}


void func_506(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


// @pe
void func_763(bool var_113_bool)
{
	int var_115_int;
	func_652(var_115_int, "oob9MDoberman1");
	if(var_115_int == 0) {
		var_113_bool = true;
		return 0;
	}
	var_113_bool = false;
}


void func_636(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_511(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_642(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_904(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_574;
		@LookAsyncCamera("head");
	}
Label_574:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


