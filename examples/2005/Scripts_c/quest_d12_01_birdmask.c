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
			func_683();
			if(var_6_int == 16592) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_737();
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_744();
			}
			if(var_5_int == 16093) {
				bool var_33_bool;
				func_761(var_33_bool, var_1_object);
				if(var_33_bool != 0) {
					func_182(var_6_int, "Neutral");
					var_0_object->SetMessage(514847); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514848, -1, 16094); //@t
					return 0;
				}
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514849); //@t
				var_0_object->ClearReplies(); //@t
				bool var_62_bool;
				func_751(var_62_bool, var_1_object);
				if(var_62_bool != 0)
					var_0_object->AddReply(514850, 16097, 16096); //@t
				bool var_69_bool;
				func_751(var_69_bool, var_1_object);
				if(var_69_bool != 0)
					var_0_object->AddReply(514852, 16099, 16098); //@t
				var_0_object->AddReply(515494, 16591, 16590); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=89";
			EMIT "Call2 0xb6";
			EMIT "Pop(1)";
			EMIT "Push((int) 514855)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
			EMIT "Pop(0)";
			EMIT "Push((int) 514856)";
			EMIT "Push((int) 16103)";
			EMIT "Push((int) 16102)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_5_int == 16103) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514858, 16105, 16104); //@t
				var_0_object->AddReply(514880, 16127, 16126); //@t
				return 0;
			}
			if(var_5_int == 16127) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514882, -1, 16128); //@t
				return 0;
			}
			if(var_5_int == 16105) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514859); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514860, 16107, 16106); //@t
				var_0_object->AddReply(514879, -1, 16125); //@t
				return 0;
			}
			if(var_5_int == 16107) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514861); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514862, 16109, 16108); //@t
				return 0;
			}
			if(var_5_int == 16109) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514864, 16111, 16110); //@t
				var_0_object->AddReply(514870, 16117, 16116); //@t
				return 0;
			}
			if(var_5_int == 16117) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514871); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514872, -1, 16118); //@t
				var_0_object->AddReply(514873, 16120, 16119); //@t
				return 0;
			}
			if(var_5_int == 16120) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514875, -1, 16121); //@t
				var_0_object->AddReply(514876, 16123, 16122); //@t
				return 0;
			}
			if(var_5_int == 16123) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514878, -1, 16124); //@t
				return 0;
			}
			if(var_5_int == 16111) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514865); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514866, 16113, 16112); //@t
				var_0_object->AddReply(514869, -1, 16115); //@t
				return 0;
			}
			if(var_5_int == 16113) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514868, -1, 16114); //@t
				return 0;
			}
			if(var_5_int == 16591) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(515495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515496, -1, 16592); //@t
				return 0;
			}
			if(var_5_int == 16099) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514853); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514854, -1, 16100); //@t
				return 0;
			}
			if(var_5_int == 16097) {
				func_182(var_6_int, "Neutral");
				var_0_object->SetMessage(514851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515337, -1, 16560); //@t
				return 0;
			}
			var_3_string = true;
			bool var_186_bool;
			func_810(var_186_bool);
			if(var_186_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcd";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		object var_7_object;
		var_5_object = var_7_object;
		TaskCall(0);
		int var_6_int;
		func_0(var_8_object, var_6_int, var_7_object);
		TaskReturn();
	}

}


void func_0(object var_0_object, int var_6_int, object var_7_object)
{
	var_0_object = var_7_object;
	bool var_17_bool; object var_18_object;
	var_7_object = var_18_object;
	func_585(var_17_bool, var_18_object, 130.0);
	if(!var_17_bool) { //@nz
		var_6_int = -2;
		return 8;
	}
	object var_13_object;
	@CreateDialog(var_13_object);
	int var_64_int;
	func_804(var_64_int);
	var_13_object->SetNPCName(var_64_int);
	int var_65_int;
	func_802(var_65_int);
	var_13_object->SetNPCDescription(var_65_int);
	string var_66_string;
	func_806(var_66_string);
	var_13_object->SetPhoto(var_66_string);
	string var_67_string;
	func_808(var_67_string);
	var_13_object->SetPhoto2(var_67_string);
	int var_68_int;
	func_785(var_68_int);
	var_13_object->SetPlayerName(var_68_int);
	bool var_14_bool;
	@IsOverrideActive(var_14_bool);
	if(var_14_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	@DoDialog(var_13_object);
	object var_77_object; object var_78_object;
	var_7_object = var_77_object;
	var_13_object = var_78_object;
	TaskCall(1);
	func_74(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object);
	TaskReturn();
	bool var_16_bool;
	var_13_object->IsDialogEnd(var_16_bool);
	
	for(;;) {
		var_141_bool = !var_16_bool; //@nz
		if(var_141_bool == 0) goto Label_63;
		@sync();
		var_13_object->IsDialogEnd(var_16_bool);
	}
	
Label_63:
	object var_142_object;
	var_7_object = var_142_object;
	func_653();
	@StopDialog(var_13_object);
	var_13_object->GetReturnValue(-1);
	int var_15_int = var_6_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_771(bool var_128_bool)
{
	var_128_bool = false;
}


// @pe
void func_774(bool var_86_bool)
{
	int var_88_int;
	func_729(var_88_int);
	if(var_88_int < 19)
		var_86_bool = true;
	var_86_bool = false;
}


void func_585(bool var_17_bool, object var_18_object, float var_19_float)
{
	cvector var_30_cvector; bool var_37_bool;
	var_18_object->GetPosition(var_30_cvector);
	float var_29_float;
	var_18_object->GetEyesHeight(var_29_float);
	var_38_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (var_38_float + var_29_float);
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	@GetEyesHeight(var_29_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_29_float);
	cvector var_32_cvector = var_30_cvector - var_31_cvector;
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (float)0;
	var_42_float = sqrt(var_32_cvector | var_32_cvector);
	var_32_cvector /= var_42_float;
	cvector var_33_cvector = -var_32_cvector;
	cvector var_44_cvector;
	func_690(var_44_cvector, (var_33_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_34_cvector = ((var_32_cvector * var_19_float) + (var_44_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_36_bool;
	@IsOverrideActive(var_36_bool);
	if(var_36_bool != 0)
		var_17_bool = false;
	@StopWorld();
	@CameraTransit((var_31_cvector + var_34_cvector), var_33_cvector);
	var_57_float = GetByIndex(var_34_cvector, 0);
	var_58_float = GetByIndex(var_34_cvector, 2);
	@Rotate(var_57_float, var_58_float);
	bool var_59_bool;
	func_810(var_59_bool);
	if(var_59_bool != 0) {
	} else {
		@HasAnimationTrack(var_37_bool, "head");
		if(var_37_bool == 0) goto Label_647;
		@LookAsyncCamera("head");
	}
Label_647:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_17_bool = true;
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_77_object, object var_78_object)
{
	var_0_object = var_78_object;
	var_1_object = var_77_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_84_bool;
		func_761(var_84_bool, var_1_object);
		if(var_84_bool != 0) {
			func_182(var_78_object, "Neutral");
			var_0_object->SetMessage(514847); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514848, -1, 16094); //@t
		} else {
					func_182(var_78_object, "Neutral");
					var_0_object->SetMessage(514849); //@t
					var_0_object->ClearReplies(); //@t
					bool var_126_bool;
					func_751(var_126_bool, var_1_object);
					if(var_126_bool != 0)
						var_0_object->AddReply(514850, 16097, 16096); //@t
					bool var_133_bool;
					func_751(var_133_bool, var_1_object);
					if(var_133_bool != 0)
						var_0_object->AddReply(514852, 16099, 16098); //@t
					var_0_object->AddReply(515494, 16591, 16590); //@t
		}
	}
	for(;;) {
		bool var_111_bool;
		func_810(var_111_bool);
		if(var_111_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_670(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_181;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_181:
			return 0;

		}

	}
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=89";
EMIT "Call2 0xb6";
EMIT "Pop(1)";
EMIT "Push((int) 514855)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
EMIT "Pop(0)";
EMIT "Push((int) 514856)";
EMIT "Push((int) 16103)";
EMIT "Push((int) 16102)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
EMIT "Pop(3)";
EMIT "GOTO 0x98";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_653(void)
{
	bool var_144_bool;
	@CameraSwitchToNormal();
	bool var_145_bool;
	func_810(var_145_bool);
	if(var_145_bool != 0) {
	} else {
		@HasAnimationTrack(var_144_bool, "head");
		if(var_144_bool == 0) goto Label_669;
		@UnlookAsync("head");
	}
Label_669:
	
}


void func_717(bool var_25_bool, string var_26_string, string var_27_string)
{
	object var_29_object;
	@FindActor(var_29_object, var_26_string);
	if(var_29_object == null)
		var_25_bool = false;
	@Trigger(var_29_object, var_27_string);
	var_25_bool = true;
}
EMIT "Stack[-1] = 0";


void func_785(int var_68_int)
{
	int var_70_int;
	@GetVariable("branch", var_70_int);
	if(var_70_int == 0) {
		var_68_int = 1;
		return 2;
	EMIT "GOTO 0x320";
	}
	if(var_70_int == 1) {
		var_68_int = 2;
		return 2;
	}
	var_68_int = 3;
}


void func_729(int var_88_int)
{
	float var_90_float;
	@GetGameTime(var_90_float);
	int var_91_int;
	var_90_float = var_91_int;
	var_88_int = var_91_int % 24;
}


void func_670(string var_113_string)
{
	float var_116_float; float var_117_float;
	@lshGetAnimTimes(var_113_string, var_116_float, var_117_float);
	@lshPlayAnimation(var_116_float, var_117_float, false);
}


// @pe
void func_737(void)
{
	func_700("sobor@door1", false);
}


void func_802(int var_65_int)
{
	var_65_int = 515571;
}


void func_804(int var_64_int)
{
	var_64_int = 504029;
}


void func_677(string var_99_string, bool var_100_bool)
{
	float var_105_float; float var_106_float;
	@lshGetAnimTimes(var_99_string, var_105_float, var_106_float);
	@lshPlayAnimation(var_105_float, var_106_float, var_100_bool);
}


void func_806(string var_66_string)
{
	var_66_string = "ui/NPC_Black.png";
}


void func_808(string var_67_string)
{
	var_67_string = "ui/NPC_Black_b.png";
}


// @pe
void func_744(void)
{
	bool var_25_bool;
	func_717(var_25_bool, "quest_d12_01", "init_sobor");
}


void func_810(bool var_59_bool)
{
	var_59_bool = false;
}


void func_683(void)
{
	bool var_8_bool;
	func_810(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_751(bool var_126_bool, object var_127_object)
{
	object var_129_object;
	var_127_object = var_129_object;
	func_771(var_129_object);
	bool var_128_bool;
	if(var_128_bool != 0) {
		var_126_bool = true;
		return 0;
	}
	var_126_bool = false;
}


void func_690(cvector var_44_cvector, cvector var_45_cvector)
{
	float var_48_float = sqrt(var_45_cvector | var_45_cvector);
	if(var_48_float < 0.000001)
		var_44_cvector = [0.0, 0.0, 0.0];
	var_44_cvector = var_45_cvector / var_48_float;
}


// @pe
void func_182(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_810(var_96_bool);
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
	func_677(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


// @pe
void func_761(bool var_84_bool, object var_85_object)
{
	object var_87_object;
	var_85_object = var_87_object;
	func_774(var_87_object);
	bool var_86_bool;
	if(var_86_bool != 0) {
		var_84_bool = true;
		return 0;
	}
	var_84_bool = false;
}


void func_700(string var_13_string, bool var_14_bool)
{
	object var_16_object;
	@FindActor(var_16_object, var_13_string);
	if(!var_16_object) //@nz
		@Trace(("Door " + var_13_string) + " not found");
	else
		var_16_object->SetProperty("locked", var_14_bool);
	
}
EMIT "Stack[-1] = 0";


