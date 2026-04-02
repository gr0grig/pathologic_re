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
			func_768();
			if(var_7_bool == 19069) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_861();
				object var_16_object = var_1_object;
				func_879(var_0_object);
			}
			if(var_7_bool == 19071) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_867();
			}
			if(var_7_bool == 20869) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_873();
			}
			if(var_6_int == 19068) {
				bool var_54_bool;
				func_930(var_1_object);
				if(var_54_bool != 0) {
					object var_62_object; object var_63_object;
					var_62_object = var_1_object;
					var_63_object = var_0_object;
					func_900();
					func_172(var_7_bool, "Neutral");
					var_0_object->SetMessage(517930); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(519691, 20850, 20849); //@t
					return 0;
				}
				func_172(var_7_bool, "Neutral");
				var_0_object->SetMessage(517932); //@t
				var_0_object->ClearReplies(); //@t
				bool var_89_bool;
				func_906(var_1_object);
				if(var_89_bool != 0)
					var_0_object->AddReply(517933, 20861, 19071); //@t
				bool var_98_bool;
				func_918(var_1_object);
				if(var_98_bool != 0)
					var_0_object->AddReply(519710, 20870, 20869); //@t
				var_0_object->AddReply(519709, -1, 20868); //@t
				return 0;
			}
			if(var_6_int == 20870) {
				func_172(var_7_bool, "Neutral");
				var_0_object->SetMessage(519711); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519712, -1, 20871); //@t
				return 0;
			}
			if(var_6_int == 20861) {
				func_172(var_7_bool, "Neutral");
				var_0_object->SetMessage(519703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519704, 20865, 20862); //@t
				var_0_object->AddReply(519705, 20865, 20863); //@t
				return 0;
			}
			if(var_6_int == 20865) {
				func_172(var_7_bool, "Neutral");
				var_0_object->SetMessage(519707); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519708, -1, 20866); //@t
				return 0;
			}
			if(var_6_int == 20850) {
				func_172(var_7_bool, "Neutral");
				var_0_object->SetMessage(519692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519693, 20852, 20851); //@t
				var_0_object->AddReply(517931, -1, 19069); //@t
				return 0;
			}
			if(var_6_int == 20852) {
				func_172(var_7_bool, "Neutral");
				var_0_object->SetMessage(519694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519695, 20854, 20853); //@t
				var_0_object->AddReply(519697, 20856, 20855); //@t
				return 0;
			}
			if(var_6_int == 20856) {
				func_172(var_7_bool, "Neutral");
				var_0_object->SetMessage(519698); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519702, -1, 20860); //@t
				return 0;
			}
			if(var_6_int == 20854) {
				func_172(var_7_bool, "Neutral");
				var_0_object->SetMessage(519696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519700, -1, 20858); //@t
				var_0_object->AddReply(519701, -1, 20859); //@t
				return 0;
			}
			var_3_string = true;
			bool var_171_bool;
			func_859(var_171_bool);
			if(var_171_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc3";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		float var_7_float;
		@GetGameTime(var_7_float);
		if(var_7_float >= 24) {
			string var_10_string = "cleanup";
			func_528();
		} else {
			@SetTimeEvent(0, 24);
		}
		func_487();
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_640();
		int var_7_int; object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, int var_6_int, float var_7_float)
	{
		string var_8_string = "cleanup";
		func_528();
	}

	// @pe
		void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, float var_6_float, float var_7_float, string var_10_string)
		{
		if(var_10_string == "cleanup")
			func_508(var_10_string);
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
			func_557(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_775(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_768(void)
{
	bool var_9_bool;
	func_859(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_650(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_853(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_851(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_855(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_857(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_942(var_70_int);
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
		var_160_bool = !var_17_bool; //@nz
		if(var_160_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_161_object;
	var_8_object = var_161_object;
	func_719();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_640(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_900(void)
{
	@SetVariable("oob1Worker1", 1);
}


void func_645(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_775(object var_18_object)
{
	object var_20_object;
	@self(var_20_object);
	var_20_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_650(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_781(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_859(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_713;
		@LookAsyncCamera("head");
	}
Label_713:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


// @pe
void func_906(bool var_139_bool)
{
	int var_141_int;
	func_791(var_141_int, "oob1Worker2");
	if(var_141_int == 0) {
		var_139_bool = true;
		return 0;
	}
	var_139_bool = false;
}


void func_781(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


// @pe
void func_918(bool var_148_bool)
{
	int var_150_int;
	func_791(var_150_int, "oob1Worker3");
	if(var_150_int == 0) {
		var_148_bool = true;
		return 0;
	}
	var_148_bool = false;
}


void func_791(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
}


void func_796(int var_35_int, int var_36_int)
{
	object var_38_object;
	@CreateIntVector(var_38_object);
	var_38_object->add(var_35_int);
	var_38_object->add(var_36_int);
	@SendWorldWndMessage(3, var_38_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_930(bool var_86_bool)
{
	int var_88_int;
	func_791(var_88_int, "oob1Worker1");
	if(var_88_int == 0) {
		var_86_bool = true;
		return 0;
	}
	var_86_bool = false;
}


void func_808(object var_24_object, object var_25_object, int var_26_int)
{
	int var_30_int;
	var_25_object->GetItemID(var_30_int);
	int var_31_int;
	@GetInvItemProperty(var_31_int, var_30_int, "Category");
	bool var_32_bool;
	var_24_object->AddItem(var_32_bool, var_25_object, var_31_int, var_26_int);
	if(!var_32_bool) { //@nz
		var_24_object->DropItems(var_25_object, var_26_int);
	} else {
		int var_35_int; int var_36_int;
		var_30_int = var_35_int;
		var_26_int = var_36_int;
		func_796(var_35_int, var_36_int);
	}
	
}


// @pe
void func_172(object var_2_object, string var_98_string)
{
	bool var_99_bool;
	func_859(var_99_bool);
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
	func_753(var_102_string, var_103_bool);
	var_2_object = var_98_string;
	
}


void func_557(bool var_17_bool)
{
	var_17_bool = true;
}


void func_942(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3bd";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_559(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_645(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_834(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_645(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_606;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_827(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_635;
				}
			} else if(var_38_int != 0) {
				goto Label_635;
			}
			}
					bool var_71_bool;
					func_638(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_630;
			}
		}
	Label_635:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_630:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_827(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_834(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_827(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_86_bool;
		func_930(var_1_object);
		if(var_86_bool != 0) {
			object var_94_object; object var_95_object;
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_900();
			func_172(var_80_object, "Neutral");
			var_0_object->SetMessage(517930); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(519691, 20850, 20849); //@t
		} else {
					func_172(var_80_object, "Neutral");
					var_0_object->SetMessage(517932); //@t
					var_0_object->ClearReplies(); //@t
					bool var_139_bool;
					func_906(var_1_object);
					if(var_139_bool != 0)
						var_0_object->AddReply(517933, 20861, 19071); //@t
					bool var_148_bool;
					func_918(var_1_object);
					if(var_148_bool != 0)
						var_0_object->AddReply(519710, 20870, 20869); //@t
					var_0_object->AddReply(519709, -1, 20868); //@t
		}
	}
	for(;;) {
		bool var_119_bool;
		func_859(var_119_bool);
		if(var_119_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_737(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_171;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_171:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_719(void)
{
	bool var_163_bool;
	@CameraSwitchToNormal(true);
	bool var_165_bool;
	func_859(var_165_bool);
	if(var_165_bool != 0) {
	} else {
		@HasAnimationTrack(var_163_bool, "head");
		if(var_163_bool == 0) goto Label_736;
		@UnlookAsync("head");
	}
Label_736:
	
}


void func_851(int var_67_int)
{
	var_67_int = 515568;
}


void func_853(int var_66_int)
{
	var_66_int = 503353;
}


void func_855(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen1.png";
}


void func_857(string var_69_string)
{
	var_69_string = "ui/NPC_Citizen1_b.png";
}


void func_859(bool var_61_bool)
{
	var_61_bool = false;
}


// @pe
void func_861(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_737(string var_121_string)
{
	bool var_125_bool; float var_126_float; float var_127_float;
	@lshHasAnimation(var_125_bool, var_121_string);
	if(var_125_bool != 0) {
		@lshGetAnimTimes(var_121_string, var_126_float, var_127_float);
		@lshPlayAnimation(var_126_float, var_127_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_121_string);
	}
	
}


// @pe
void func_867(void)
{
	@SetVariable("oob1Worker2", 1);
}


void func_487(void)
{
	
Label_488:
	for(;;) {
		bool var_23_bool;
		func_645(var_23_bool);
		var_26_bool = !var_23_bool; //@nz
		if(var_26_bool == 0) goto Label_496;
		@Hold();
	}
	
Label_496:
	float var_22_float;
	@rand(var_22_float, 3);
	@Sleep(var_22_float + 3);
	func_559();
	goto Label_488;
}
EMIT "Return(); Pop(2)";


// @pe
void func_873(void)
{
	@SetVariable("oob1Worker3", 1);
}


void func_879(object var_16_object)
{
	@Trace("Knife is given");
	object var_19_object;
	@CreateInvItem(var_19_object);
	var_19_object->SetItemName("Knife");
	var_19_object->SetProperty("durability", 70);
	object var_24_object; object var_25_object;
	var_16_object = var_24_object;
	var_19_object = var_25_object;
	func_808(var_24_object, var_25_object, 1);
}
EMIT "Stack[-1] = 0";


void func_753(string var_102_string, bool var_103_bool)
{
	bool var_109_bool; float var_110_float; float var_111_float;
	@lshHasAnimation(var_109_bool, var_102_string);
	if(var_109_bool != 0) {
		@lshGetAnimTimes(var_102_string, var_110_float, var_111_float);
		@lshPlayAnimation(var_110_float, var_111_float, var_103_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_102_string);
	}
	
}


void func_508(object var_0_object)
{
	var_0_object = true;
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	bool var_15_bool = false;
	if(!var_14_bool) { //@nz
		bool var_17_bool;
		func_557(var_17_bool);
		if(var_17_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_18_object;
		func_775(var_18_object);
		@RemoveActor(var_18_object);
	}
}


void func_638(bool var_71_bool)
{
	var_71_bool = true;
}


