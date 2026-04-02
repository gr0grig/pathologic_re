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
			func_562();
			if(var_6_int == 26207) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524883); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524884, 26209, 26208); //@t
				var_0_object->AddReply(524898, 26224, 26223); //@t
				return 0;
			}
			if(var_6_int == 26224) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524899); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524900, 26226, 26225); //@t
				return 0;
			}
			if(var_6_int == 26226) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524902, 26209, 26227); //@t
				return 0;
			}
			if(var_6_int == 26209) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524885); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524886, 26211, 26210); //@t
				var_0_object->AddReply(524893, 26218, 26217); //@t
				return 0;
			}
			if(var_6_int == 26218) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524895, 26211, 26219); //@t
				return 0;
			}
			if(var_6_int == 26211) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524887); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524888, 26213, 26212); //@t
				return 0;
			}
			if(var_6_int == 26213) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524889); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524890, 26215, 26214); //@t
				return 0;
			}
			if(var_6_int == 26215) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524891); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524892, -1, 26216); //@t
				var_0_object->AddReply(524897, -1, 26222); //@t
				return 0;
			}
			var_3_string = true;
			bool var_86_bool;
			func_623(var_86_bool);
			if(var_86_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		var_0_object = false;
		func_365();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		int var_8_int;
		if(!actor) { //@nz
			func_454();
			int var_10_int; object var_11_object;
			var_6_object = var_11_object;
			TaskCall(0);
			func_0(var_12_object, var_10_int, var_11_object);
			TaskReturn();
			actor = true;
			@GetVariable("d1q01wmask", var_8_int);
			@SetVariable("d1q01bmask", 1);
			if(var_8_int != 0) {
				bool var_132_bool;
				func_579(var_132_bool, "quest_d1_01", "remove_masks");
			}
		}
	}

}


void func_0(object var_0_object, int var_10_int, object var_11_object)
{
	var_0_object = var_11_object;
	bool var_21_bool; object var_22_object;
	var_11_object = var_22_object;
	func_464(var_21_bool, var_22_object, 130.0);
	if(!var_21_bool) { //@nz
		var_10_int = -2;
		return 8;
	}
	object var_17_object;
	@CreateDialog(var_17_object);
	int var_68_int;
	func_617(var_68_int);
	var_17_object->SetNPCName(var_68_int);
	int var_69_int;
	func_615(var_69_int);
	var_17_object->SetNPCDescription(var_69_int);
	string var_70_string;
	func_619(var_70_string);
	var_17_object->SetPhoto(var_70_string);
	string var_71_string;
	func_621(var_71_string);
	var_17_object->SetPhoto2(var_71_string);
	int var_72_int;
	func_625(var_72_int);
	var_17_object->SetPlayerName(var_72_int);
	bool var_18_bool;
	@IsOverrideActive(var_18_bool);
	if(var_18_bool != 0) {
		var_10_int = -2;
		return 8;
	}
	@DoDialog(var_17_object);
	object var_81_object; object var_82_object;
	var_11_object = var_81_object;
	var_17_object = var_82_object;
	TaskCall(1);
	func_74(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object);
	TaskReturn();
	bool var_20_bool;
	var_17_object->IsDialogEnd(var_20_bool);
	
	for(;;) {
		var_120_bool = !var_20_bool; //@nz
		if(var_120_bool == 0) goto Label_63;
		@sync();
		var_17_object->IsDialogEnd(var_20_bool);
	}
	
Label_63:
	object var_121_object;
	var_11_object = var_121_object;
	func_532();
	@StopDialog(var_17_object);
	var_17_object->GetReturnValue(-1);
	int var_19_int = var_10_int;
}
EMIT "Stack[-4] = 0";


void func_579(bool var_132_bool, string var_133_string, string var_134_string)
{
	object var_136_object;
	@FindActor(var_136_object, var_133_string);
	if(var_136_object == null)
		var_132_bool = false;
	@Trigger(var_136_object, var_134_string);
	var_132_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_132(object var_2_object, string var_88_string)
{
	bool var_89_bool;
	func_623(var_89_bool);
	if(!var_89_bool) //@nz
		return 0;
	if(var_88_string == var_2_object)
		return 0;
	string var_92_string; bool var_93_bool;
	var_88_string = var_92_string;
	if(var_88_string == "")
		var_93_bool = false;
	else
		var_93_bool = true;
	func_556(var_92_string, var_93_bool);
	var_2_object = var_88_string;
	
}


void func_452(bool var_49_bool)
{
	var_49_bool = true;
}


void func_454(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_81_object, object var_82_object)
{
	var_0_object = var_82_object;
	var_1_object = var_81_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_82_object, "Neutral");
		var_0_object->SetMessage(524883); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(524884, 26209, 26208); //@t
		var_0_object->AddReply(524898, 26224, 26223); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_107_bool;
	func_623(var_107_bool);
	if(var_107_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_549(var_2_object);
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


void func_459(bool var_20_bool)
{
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
}


void func_591(string var_30_string, int var_31_int)
{
	string var_33_string = "idle";
	if(var_31_int != 0)
		var_33_string += var_31_int;
	var_33_string = var_30_string;
}


void func_464(bool var_21_bool, object var_22_object, float var_23_float)
{
	cvector var_34_cvector; bool var_41_bool;
	var_22_object->GetPosition(var_34_cvector);
	float var_33_float;
	var_22_object->GetEyesHeight(var_33_float);
	var_42_float = GetByIndex(var_34_cvector, 1);
	SetByIndex(var_34_cvector, 1) = (var_42_float + var_33_float);
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	@GetEyesHeight(var_33_float);
	var_43_float = GetByIndex(var_35_cvector, 1);
	SetByIndex(var_35_cvector, 1) = (var_43_float + var_33_float);
	cvector var_36_cvector = var_34_cvector - var_35_cvector;
	var_44_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (float)0;
	var_46_float = sqrt(var_36_cvector | var_36_cvector);
	var_36_cvector /= var_46_float;
	cvector var_37_cvector = -var_36_cvector;
	cvector var_48_cvector;
	func_569(var_48_cvector, (var_37_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_38_cvector = ((var_36_cvector * var_23_float) + (var_48_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_40_bool;
	@IsOverrideActive(var_40_bool);
	if(var_40_bool != 0)
		var_21_bool = false;
	@StopWorld();
	@CameraTransit((var_35_cvector + var_38_cvector), var_37_cvector);
	var_61_float = GetByIndex(var_38_cvector, 0);
	var_62_float = GetByIndex(var_38_cvector, 2);
	@Rotate(var_61_float, var_62_float);
	bool var_63_bool;
	func_623(var_63_bool);
	if(var_63_bool != 0) {
	} else {
		@HasAnimationTrack(var_41_bool, "head");
		if(var_41_bool == 0) goto Label_526;
		@LookAsyncCamera("head");
	}
Label_526:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_21_bool = true;
	
}


void func_532(void)
{
	bool var_123_bool;
	@CameraSwitchToNormal();
	bool var_124_bool;
	func_623(var_124_bool);
	if(var_124_bool != 0) {
	} else {
		@HasAnimationTrack(var_123_bool, "head");
		if(var_123_bool == 0) goto Label_548;
		@UnlookAsync("head");
	}
Label_548:
	
}


void func_598(int var_24_int)
{
	int var_27_int; bool var_28_bool;
	var_27_int = 0;
	
	for(;;) {
		string var_30_string; int var_31_int;
		var_27_int = var_31_int;
		func_591(var_30_string, var_31_int);
		@HasAnimation(var_28_bool, "all", var_30_string);
		if(!var_28_bool) //@nz
			break;
		var_27_int += 1;
	}
	var_27_int = var_24_int;
}


void func_549(string var_109_string)
{
	float var_112_float; float var_113_float;
	@lshGetAnimTimes(var_109_string, var_112_float, var_113_float);
	@lshPlayAnimation(var_112_float, var_113_float, false);
}


void func_615(int var_69_int)
{
	var_69_int = 515571;
}


void func_617(int var_68_int)
{
	var_68_int = 504029;
}


void func_619(string var_70_string)
{
	var_70_string = "ui/NPC_bmask.png";
}


void func_556(string var_92_string, bool var_93_bool)
{
	float var_98_float; float var_99_float;
	@lshGetAnimTimes(var_92_string, var_98_float, var_99_float);
	@lshPlayAnimation(var_98_float, var_99_float, var_93_bool);
}


void func_621(string var_71_string)
{
	var_71_string = "ui/NPC_bmask_b.png";
}


// @pe
void func_365(void)
{
	
	for(;;) {
		func_373();
		@Sleep(3);
	}
}
EMIT "Return(); Pop(0)";


void func_623(bool var_63_bool)
{
	var_63_bool = false;
}


void func_625(int var_72_int)
{
	int var_74_int;
	@GetVariable("branch", var_74_int);
	if(var_74_int == 0) {
		var_72_int = 1;
		return 2;
	EMIT "GOTO 0x280";
	}
	if(var_74_int == 1) {
		var_72_int = 2;
		return 2;
	}
	var_72_int = 3;
}


void func_562(void)
{
	bool var_9_bool;
	func_623(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_373(void)
{
	int var_15_int; int var_16_int; bool var_17_bool; float var_18_float; bool var_19_bool;
	@WaitForAnimEnd();
	bool var_20_bool;
	func_459(var_20_bool);
	if(!var_20_bool) //@nz
		return 14;
	int var_24_int;
	func_598(var_24_int);
	int var_13_int;
	var_24_int = var_13_int;
	int var_14_int = 0;
	
	for(;;) {
		bool var_37_bool = false;
		if(var_14_int < 5) {
			bool var_40_bool;
			func_459(var_40_bool);
			if(var_40_bool != 0)
				var_37_bool = true;
		}
		if(var_37_bool != 0) {
			@irand(var_15_int, 3);
			if(var_15_int == 0) {
				if(var_13_int == 0) goto Label_420;
				@irand(var_16_int, var_13_int);
				string var_46_string; int var_47_int;
				var_16_int = var_47_int;
				func_591(var_46_string, var_47_int);
				@PlayAnimation("all", var_46_string);
				@WaitForAnimEnd(var_17_bool);
				if(!var_17_bool) { //@nz
				} else {
			} else {
			if(var_15_int == 1) {
				@rand(var_18_float, 4);
				@Sleep((var_18_float + 1), var_19_bool);
				if(!var_19_bool) { //@nz
					goto Label_449;
				}
			} else if(var_14_int != 0) {
				goto Label_449;
			}
			}
					bool var_49_bool;
					func_452(var_49_bool);
					var_50_bool = !var_49_bool; //@nz
					if(var_50_bool == 0) goto Label_444;
			}
		}
	Label_449:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_444:
		@ResetAAS();
		var_14_int += 1;
	}
	
}


void func_569(cvector var_48_cvector, cvector var_49_cvector)
{
	float var_52_float = sqrt(var_49_cvector | var_49_cvector);
	if(var_52_float < 0.000001)
		var_48_cvector = [0.0, 0.0, 0.0];
	var_48_cvector = var_49_cvector / var_52_float;
}


