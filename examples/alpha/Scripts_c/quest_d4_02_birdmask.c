// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_527();
			if(var_6_int == 13059) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_628();
				object var_15_object; object var_16_object;
				var_15_object = var_1_object;
				var_16_object = var_0_object;
				func_691();
			}
			if(var_6_int == 13065) {
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_634();
				object var_54_object = var_1_object;
				func_617(var_0_object);
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_611();
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_640();
			}
			if(var_5_int == 13056) {
				bool var_114_bool;
				func_701(var_1_object);
				if(var_114_bool != 0) {
					func_171(var_6_int, "Neutral");
					var_0_object->SetMessage(11843); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11844, 13058, 13057); //@t
					return 0;
				}
				bool var_141_bool;
				func_725(var_1_object);
				if(!var_141_bool) { //@nz
					func_171(var_6_int, "Neutral");
					var_0_object->SetMessage(11847); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11848, -1, 13061); //@t
					return 0;
				}
				bool var_153_bool = false;
				bool var_154_bool;
				func_713(var_1_object);
				if(var_154_bool != 0) {
					bool var_160_bool;
					func_725(var_1_object);
					if(var_160_bool != 0)
						var_153_bool = true;
				}
				if(var_153_bool != 0) {
					func_171(var_6_int, "Neutral");
					var_0_object->SetMessage(11849); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11850, 13064, 13063); //@t
					return 0;
				}
			}
			if(var_5_int == 13064) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(11851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11852, -1, 13065); //@t
				return 0;
			}
			if(var_5_int == 13058) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(11845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11846, -1, 13059); //@t
				return 0;
			}
			var_3_string = true;
			bool var_181_bool;
			func_849(var_181_bool);
			if(var_181_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbc";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_370();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		func_439();
		int var_6_int; object var_7_object;
		var_5_object = var_7_object;
		TaskCall(0);
		func_0(var_8_object, var_6_int, var_7_object);
		TaskReturn();
	}

}


void func_640(void)
{
	object var_83_object;
	func_779(var_83_object);
	object var_81_object;
	var_83_object = var_81_object;
	object var_82_object;
	var_81_object->FindMark(var_82_object, "d4q02BirdmaskNearHome");
	if(var_82_object != 0)
		var_82_object->Remove();
	var_81_object->FindMark(var_82_object, "d4q02MladVladGotoAJLSelf");
	if(var_82_object != 0)
		var_82_object->Remove();
	var_81_object->FindMark(var_82_object, "d4q02MladVladGotoAnna");
	if(var_82_object != 0)
		var_82_object->Remove();
	var_81_object->FindMark(var_82_object, "d4q02MladVladGotoJulia");
	if(var_82_object != 0)
		var_82_object->Remove();
	var_81_object->FindMark(var_82_object, "d4q02MladVladGotoLara");
	if(var_82_object != 0)
		var_82_object->Remove();
	func_829();
	bool var_109_bool;
	func_575(var_109_bool, "quest_d4_02", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_0(object var_0_object, int var_6_int, object var_7_object)
{
	var_0_object = var_7_object;
	bool var_17_bool; object var_18_object;
	var_7_object = var_18_object;
	func_449(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_6_int = -2;
		return 8;
	}
	object var_13_object;
	@CreateDialog(var_13_object);
	int var_58_int;
	func_845(var_58_int);
	var_13_object->SetNPCName(var_58_int);
	string var_59_string;
	func_847(var_59_string);
	var_13_object->SetPhoto(var_59_string);
	int var_60_int;
	func_796(var_60_int);
	var_13_object->SetPlayerName(var_60_int);
	bool var_14_bool;
	@IsOverrideActive(var_14_bool);
	if(var_14_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	@DoDialog(var_13_object);
	object var_69_object; object var_70_object;
	var_7_object = var_69_object;
	var_13_object = var_70_object;
	TaskCall(1);
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object);
	TaskReturn();
	bool var_16_bool;
	var_13_object->IsDialogEnd(var_16_bool);
	
	for(;;) {
		var_137_bool = !var_16_bool; //@nz
		if(var_137_bool == 0) goto Label_52;
		@sync();
		var_13_object->IsDialogEnd(var_16_bool);
	}
	
Label_52:
	object var_138_object;
	var_7_object = var_138_object;
	func_505();
	@StopDialog(var_13_object);
	var_13_object->GetReturnValue(-1);
	int var_15_int = var_6_int;
}
EMIT "Stack[-4] = 0";


void func_779(object var_83_object)
{
	object var_86_object; object var_87_object;
	@GetMainOutdoorScene(var_86_object);
	if(var_86_object == null) {
		@Trace("Can't find main outdoor scene");
		var_87_object = null;
		var_87_object = var_83_object;
	}
	var_86_object->GetMap(var_87_object);
	var_87_object = var_83_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_527(void)
{
	bool var_8_bool;
	func_849(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_534(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_46_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_46_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_46_float;
}


void func_796(int var_60_int)
{
	int var_62_int;
	@GetVariable("player", var_62_int);
	if(var_62_int == 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x32b";
	}
	if(var_62_int == 1) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
}


void func_544(int var_78_int, string var_79_string)
{
	int var_81_int;
	@GetVariable(var_79_string, var_81_int);
	var_81_int = var_78_int;
}


void func_549(object var_62_object, object var_63_object, int var_64_int)
{
	int var_68_int;
	var_63_object->GetItemID(var_68_int);
	int var_69_int;
	@GetInvItemProperty(var_69_int, var_68_int, "Category");
	bool var_70_bool;
	var_62_object->AddItem(var_70_bool, var_63_object, var_69_int, var_64_int);
	if(!var_70_bool) //@nz
		var_62_object->DropItems(var_63_object, var_64_int);
}


// @pe
void func_171(object var_2_object, string var_84_string)
{
	bool var_85_bool;
	func_849(var_85_bool);
	if(!var_85_bool) //@nz
		return 0;
	if(var_84_string == var_2_object)
		return 0;
	string var_88_string;
	func_509(var_88_string);
	var_2_object = var_88_string;
}


void func_813(void)
{
	@Trace("Adding diary entry");
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 138, 2, 15329);
	bool var_23_bool; object var_24_object;
	var_18_object = var_24_object;
	func_750(var_23_bool, var_24_object, 21);
}
EMIT "Stack[-1] = 0";


void func_562(object var_57_object, string var_58_string, int var_59_int)
{
	object var_61_object;
	@CreateInvItem(var_61_object);
	var_61_object->SetItemName(var_58_string);
	object var_62_object; object var_63_object; int var_64_int;
	var_57_object = var_62_object;
	var_61_object = var_63_object;
	var_59_int = var_64_int;
	func_549(var_62_object, var_63_object, var_64_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_691(void)
{
	func_813();
	bool var_42_bool;
	func_575(var_42_bool, "quest_d4_02", "birdmask_talk");
}


void func_439(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_444(bool var_20_bool)
{
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
}


void func_829(void)
{
	@Trace("Adding diary entry");
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 94, 2, 12176);
	bool var_106_bool; object var_107_object;
	var_101_object = var_107_object;
	func_750(var_106_bool, var_107_object, 21);
}
EMIT "Stack[-1] = 0";


// @pe
void func_701(bool var_76_bool)
{
	int var_78_int;
	func_544(var_78_int, "ood4BirdmaskHome1");
	if(var_78_int == 0) {
		var_76_bool = true;
		return 0;
	}
	var_76_bool = false;
}


void func_575(bool var_42_bool, string var_43_string, string var_44_string)
{
	object var_46_object;
	@FindActor(var_46_object, var_43_string);
	if(var_46_object == null)
		var_42_bool = false;
	@Trigger(var_46_object, var_44_string);
	var_42_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_69_object, object var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_76_bool;
		func_701(var_1_object);
		if(var_76_bool != 0) {
			func_171(var_70_object, "Neutral");
			var_0_object->SetMessage(11843); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(11844, 13058, 13057); //@t
		} else {
					bool var_111_bool;
					func_725(var_1_object);
					var_117_bool = !var_111_bool; //@nz
					if(var_117_bool == 0) goto Label_110;
					func_171(var_70_object, "Neutral");
					var_0_object->SetMessage(11847); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11848, -1, 13061); //@t
		}
	}
Label_141:
	for(;;) {
		bool var_103_bool;
		func_849(var_103_bool);
		if(var_103_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_509(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_170;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_170:
			return 0;

		}

	}
	
Label_110:
	bool var_123_bool = false;
	bool var_124_bool;
	func_713(var_1_object);
	if(var_124_bool != 0) {
		bool var_130_bool;
		func_725(var_1_object);
		if(var_130_bool != 0)
			var_123_bool = true;
	}
	if(var_123_bool != 0) {
		func_171(var_70_object, "Neutral");
		var_0_object->SetMessage(11849); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(11850, 13064, 13063); //@t
		goto Label_141;
	}
}
EMIT "GOTO 0x43";


void func_449(bool var_17_bool, object var_18_object)
{
	cvector var_28_cvector;
	var_18_object->GetPosition(var_28_cvector);
	float var_27_float;
	var_18_object->GetEyesHeight(var_27_float);
	var_35_float = GetByIndex(var_28_cvector, 1);
	SetByIndex(var_28_cvector, 1) = (var_35_float + var_27_float);
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	@GetEyesHeight(var_27_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	SetByIndex(var_29_cvector, 1) = (var_36_float + var_27_float);
	cvector var_30_cvector = var_28_cvector - var_29_cvector;
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (float)0;
	var_39_float = sqrt(var_30_cvector | var_30_cvector);
	var_30_cvector /= var_39_float;
	cvector var_31_cvector = -var_30_cvector;
	cvector var_42_cvector;
	func_534(var_42_cvector, (var_31_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_32_cvector = ((var_30_cvector * 70) + (var_42_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0)
		var_17_bool = false;
	@StopWorld();
	@CameraTransit((var_29_cvector + var_32_cvector), var_31_cvector);
	var_55_float = GetByIndex(var_32_cvector, 0);
	var_56_float = GetByIndex(var_32_cvector, 2);
	@Rotate(var_55_float, var_56_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_17_bool = true;
}


// @pe
void func_713(bool var_124_bool)
{
	int var_126_int;
	func_544(var_126_int, "ood4BirdmaskHome2");
	if(var_126_int == 0) {
		var_124_bool = true;
		return 0;
	}
	var_124_bool = false;
}


void func_587(string var_30_string, int var_31_int)
{
	string var_33_string = "idle";
	if(var_31_int != 0)
		var_33_string += var_31_int;
	var_33_string = var_30_string;
}


void func_845(int var_58_int)
{
	var_58_int = 4029;
}


void func_847(string var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
}


void func_849(bool var_85_bool)
{
	var_85_bool = false;
}


void func_594(int var_24_int)
{
	int var_27_int; bool var_28_bool;
	var_27_int = 0;
	
	for(;;) {
		string var_30_string; int var_31_int;
		var_27_int = var_31_int;
		func_587(var_30_string, var_31_int);
		@HasAnimation(var_28_bool, "all", var_30_string);
		if(!var_28_bool) //@nz
			break;
		var_27_int += 1;
	}
	var_27_int = var_24_int;
}


// @pe
void func_725(bool var_111_bool)
{
	int var_113_int;
	func_544(var_113_int, "d4q02_survived");
	if(var_113_int == 1)
		var_111_bool = true;
	var_111_bool = false;
}


void func_737(object var_32_object)
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


// @pe
void func_611(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_617(object var_54_object)
{
	@Trace("powder is given");
	object var_57_object;
	var_54_object = var_57_object;
	func_562(var_57_object, "powder", 1);
}


void func_750(bool var_23_bool, object var_24_object, int var_25_int)
{
	object var_32_object;
	func_737(var_32_object);
	object var_29_object;
	var_32_object = var_29_object;
	object var_30_object;
	var_29_object->Find(var_25_int, var_30_object);
	if(!var_30_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_25_int);
		var_23_bool = false;
	}
	var_30_object->AddChild(var_24_object);
	@SetVariable("player_diary", 1);
	int var_31_int;
	var_24_object->GetCategory(var_31_int);
	@SetDiarySection(var_31_int);
	var_23_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_370(void)
{
	int var_15_int; int var_16_int; bool var_17_bool; float var_18_float; bool var_19_bool;
	@WaitForAnimEnd();
	bool var_20_bool;
	func_444(var_20_bool);
	if(!var_20_bool) //@nz
		return 14;
	int var_24_int;
	func_594(var_24_int);
	int var_13_int;
	var_24_int = var_13_int;
	int var_14_int = 0;
	
	for(;;) {
		bool var_37_bool = false;
		if(var_14_int < 5) {
			bool var_40_bool;
			func_444(var_40_bool);
			if(var_40_bool != 0)
				var_37_bool = true;
		}
		if(var_37_bool != 0) {
			@irand(var_15_int, 3);
			if(var_15_int == 0) {
				if(var_13_int == 0) goto Label_417;
				@irand(var_16_int, var_13_int);
				string var_46_string; int var_47_int;
				var_16_int = var_47_int;
				func_587(var_46_string, var_47_int);
				@PlayAnimation("all", var_46_string);
				@WaitForAnimEnd(var_17_bool);
				if(!var_17_bool) { //@nz
				} else {
			} else {
			if(var_15_int == 1) {
				@rand(var_18_float, 4);
				@Sleep((var_18_float + 1), var_19_bool);
				if(!var_19_bool) { //@nz
					goto Label_438;
				}
			} else if(var_14_int != 0) {
				goto Label_438;
			}
			}
				var_14_int += 1;
			}
		}
	Label_438:
		return 14;

	}
	
}


// @pe
void func_628(void)
{
	@SetVariable("ood4BirdmaskHome1", 1);
}


// @pe
void func_505(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_634(void)
{
	@SetVariable("ood4BirdmaskHome2", 1);
}


void func_509(string var_88_string)
{
	@Trace("playing " + var_88_string);
	float var_91_float;
	float var_92_float;
	@lshGetAnimTimes(var_88_string, var_91_float, var_92_float);
	@lshPlayAnimation(var_91_float, var_92_float);
	@Trace("start: " + var_91_float);
	@Trace("end: " + var_92_float);
}


