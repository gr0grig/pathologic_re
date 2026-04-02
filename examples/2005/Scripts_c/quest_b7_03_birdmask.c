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
			func_691();
			if(var_7_bool == 22542) {
				object var_12_object = var_1_object;
				func_755(var_0_object);
			}
			if(var_6_int == 22539) {
				bool var_54_bool;
				func_785(var_1_object);
				if(var_54_bool != 0) {
					func_183(var_7_bool, "Neutral");
					var_0_object->SetMessage(521352); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524063, 25361, 25360); //@t
					return 0;
				}
				bool var_78_bool;
				func_797(var_78_bool, var_1_object);
				if(!var_78_bool) { //@nz
					func_183(var_7_bool, "Neutral");
					var_0_object->SetMessage(521356); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521357, 25366, 22544); //@t
					var_0_object->AddReply(524069, 25368, 25367); //@t
					return 0;
				}
				bool var_95_bool;
				func_797(var_95_bool, var_1_object);
				if(var_95_bool != 0) {
					object var_97_object; object var_98_object;
					var_97_object = var_1_object;
					var_98_object = var_0_object;
					func_779();
					func_183(var_7_bool, "Neutral");
					var_0_object->SetMessage(521358); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521359, -1, 22546); //@t
					return 0;
				}
			}
			if(var_6_int == 25368) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(524070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524071, 25366, 25369); //@t
				return 0;
			}
			if(var_6_int == 25366) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(524068); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524072, 25372, 25371); //@t
				return 0;
			}
			if(var_6_int == 25372) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(524073); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524074, -1, 25373); //@t
				return 0;
			}
			if(var_6_int == 25361) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(524064); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524065, 25363, 25362); //@t
				return 0;
			}
			if(var_6_int == 25363) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(524066); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521353, 22541, 22540); //@t
				var_0_object->AddReply(524067, 22541, 25364); //@t
				return 0;
			}
			if(var_6_int == 22541) {
				func_183(var_7_bool, "Neutral");
				var_0_object->SetMessage(521354); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521355, -1, 22542); //@t
				return 0;
			}
			var_3_string = true;
			bool var_151_bool;
			func_893(var_151_bool);
			if(var_151_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xce";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_431:
		for(;;) {
			bool var_8_bool;
			func_588(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_439;
			@Hold();
		}
	
	Label_439:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_502();
		goto Label_431;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_583();
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
			func_451(var_6_string);
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
			func_500(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_698(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_593(var_18_bool, var_19_object, 130.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_65_int;
	func_887(var_65_int);
	var_14_object->SetNPCName(var_65_int);
	int var_66_int;
	func_885(var_66_int);
	var_14_object->SetNPCDescription(var_66_int);
	string var_67_string;
	func_889(var_67_string);
	var_14_object->SetPhoto(var_67_string);
	string var_68_string;
	func_891(var_68_string);
	var_14_object->SetPhoto2(var_68_string);
	int var_69_int;
	func_868(var_69_int);
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
		var_150_bool = !var_17_bool; //@nz
		if(var_150_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_151_object;
	var_8_object = var_151_object;
	func_661();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_779(void)
{
	@SetVariable("b7q03SerumWorks", 1);
}


// @pe
void func_785(bool var_85_bool)
{
	int var_87_int;
	func_714(var_87_int, "b7q03");
	if(var_87_int == 1)
		var_85_bool = true;
	var_85_bool = false;
}


void func_661(void)
{
	bool var_153_bool;
	@CameraSwitchToNormal();
	bool var_154_bool;
	func_893(var_154_bool);
	if(var_154_bool != 0) {
	} else {
		@HasAnimationTrack(var_153_bool, "head");
		if(var_153_bool == 0) goto Label_677;
		@UnlookAsync("head");
	}
Label_677:
	
}


// @pe
void func_797(bool var_122_bool, object var_123_object)
{
	object var_125_object;
	var_123_object = var_125_object;
	bool var_124_bool;
	func_807(var_124_bool, var_125_object);
	if(var_124_bool != 0) {
		var_122_bool = true;
		return 0;
	}
	var_122_bool = false;
}


void func_678(string var_111_string)
{
	float var_114_float; float var_115_float;
	@lshGetAnimTimes(var_111_string, var_114_float, var_115_float);
	@lshPlayAnimation(var_114_float, var_115_float, false);
}


void func_807(bool var_124_bool, object var_125_object)
{
	float var_127_float;
	var_125_object->GetProperty("disease", var_127_float);
	var_124_bool = var_127_float == 0;
}


void func_685(string var_97_string, bool var_98_bool)
{
	float var_103_float; float var_104_float;
	@lshGetAnimTimes(var_97_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float, var_98_bool);
}


void func_814(void)
{
	object var_19_object;
	@CreateDiaryEntry(var_19_object, 282, 2, 521365);
	bool var_23_bool; object var_24_object;
	var_19_object = var_24_object;
	func_840(var_23_bool, var_24_object, 280);
}
EMIT "Stack[-1] = 0";


void func_691(void)
{
	bool var_9_bool;
	func_893(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_183(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_893(var_94_bool);
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
	func_685(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_698(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_827(object var_32_object)
{
	object var_34_object;
	@GetDiaryRoot(var_34_object);
	if(!var_34_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_32_object = false;
	}
	var_34_object = var_32_object;
}
EMIT "Stack[-1] = 0";


void func_704(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_451(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_500(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_698(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_581(bool var_56_bool)
{
	var_56_bool = true;
}


void func_583(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_840(bool var_23_bool, object var_24_object, int var_25_int)
{
	object var_32_object;
	func_827(var_32_object);
	object var_29_object;
	var_32_object = var_29_object;
	object var_30_object;
	var_29_object->Find(var_25_int, var_30_object);
	if(!var_30_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_25_int);
		var_23_bool = false;
	}
	var_30_object->AddChild(var_24_object);
	@SendWorldWndMessage(7);
	int var_31_int;
	var_24_object->GetCategory(var_31_int);
	@SetDiarySection(var_31_int);
	var_23_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_85_bool;
		func_785(var_1_object);
		if(var_85_bool != 0) {
			func_183(var_79_object, "Neutral");
			var_0_object->SetMessage(521352); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524063, 25361, 25360); //@t
		} else {
					bool var_122_bool;
					func_797(var_122_bool, var_1_object);
					var_130_bool = !var_122_bool; //@nz
					if(var_130_bool == 0) goto Label_126;
					func_183(var_79_object, "Neutral");
					var_0_object->SetMessage(521356); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521357, 25366, 22544); //@t
					var_0_object->AddReply(524069, 25368, 25367); //@t
		}
	}
Label_153:
	for(;;) {
		bool var_109_bool;
		func_893(var_109_bool);
		if(var_109_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_678(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_182;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_182:
			}
			bool var_139_bool;
			func_797(var_139_bool, var_1_object);
			if(var_139_bool != 0) {
			object var_141_object; object var_142_object;
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_779();
			func_183(var_79_object, "Neutral");
			var_0_object->SetMessage(521358); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(521359, -1, 22546); //@t
			goto Label_153;
		}
		return 0;
	}
}
EMIT "GOTO 0x4e";


void func_714(int var_87_int, string var_88_string)
{
	int var_90_int;
	@GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
}


void func_588(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_719(bool var_46_bool, string var_47_string, string var_48_string)
{
	object var_50_object;
	@FindActor(var_50_object, var_47_string);
	if(var_50_object == null)
		var_46_bool = false;
	@Trigger(var_50_object, var_48_string);
	var_46_bool = true;
}
EMIT "Stack[-1] = 0";


void func_593(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_704(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_893(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_655;
		@LookAsyncCamera("head");
	}
Label_655:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_731(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_738(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_731(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


void func_868(int var_69_int)
{
	int var_71_int;
	@GetVariable("branch", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x373";
	}
	if(var_71_int == 1) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
}


void func_755(object var_12_object)
{
	@SetVariable("b7q03", 2);
	func_814();
	float var_15_float;
	var_12_object->GetProperty("disease", var_15_float);
	if(var_15_float < 0.5)
		var_12_object->SetProperty("disease", 0.5);
	bool var_46_bool;
	func_719(var_46_bool, "quest_b7_03", "remove_birdmask");
}


void func_500(bool var_8_bool)
{
	var_8_bool = true;
}


void func_885(int var_66_int)
{
	var_66_int = 515571;
}


void func_502(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_588(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_738(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_588(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_549;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_731(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_578;
				}
			} else if(var_23_int != 0) {
				goto Label_578;
			}
			}
					bool var_56_bool;
					func_581(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_573;
			}
		}
	Label_578:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_573:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_887(int var_65_int)
{
	var_65_int = 504029;
}


void func_889(string var_67_string)
{
	var_67_string = "ui/NPC_bmask.png";
}


void func_891(string var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png";
}


void func_893(bool var_60_bool)
{
	var_60_bool = false;
}


