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
			func_815();
			if(var_11_object == 43067) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_879();
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(540977); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540978, 43069, 43068); //@t
				var_0_object->AddReply(540991, -1, 43081); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=89";
			EMIT "Call2 0xa7";
			EMIT "Pop(1)";
			EMIT "Push((int) 540992)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
			EMIT "Pop(0)";
			EMIT "Push((int) 540993)";
			EMIT "Push((int) 43084)";
			EMIT "Push((int) 43083)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
			EMIT "Pop(3)";
			EMIT "Push((int) 541004)";
			EMIT "Push((int) 43086)";
			EMIT "Push((int) 43095)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
			EMIT "Pop(3)";
			EMIT "Push((int) 541005)";
			EMIT "Push((int) 43086)";
			EMIT "Push((int) 43097)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
			EMIT "Pop(3)";
			EMIT "Push((int) 541006)";
			EMIT "Push((int) -1)";
			EMIT "Push((int) 43099)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_11_object == 43084) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(540994); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540995, 43086, 43085); //@t
				var_0_object->AddReply(541000, -1, 43090); //@t
				var_0_object->AddReply(541001, 43092, 43091); //@t
				return 0;
			}
			if(var_11_object == 43092) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(541002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541003, 43086, 43093); //@t
				return 0;
			}
			if(var_11_object == 43086) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(540996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540997, -1, 43087); //@t
				var_0_object->AddReply(540998, -1, 43088); //@t
				var_0_object->AddReply(540999, -1, 43089); //@t
				return 0;
			}
			if(var_11_object == 43069) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(540979); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540980, -1, 43070); //@t
				var_0_object->AddReply(540981, 43072, 43071); //@t
				return 0;
			}
			if(var_11_object == 43072) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(540982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540983, 43074, 43073); //@t
				var_0_object->AddReply(540987, 43078, 43077); //@t
				return 0;
			}
			if(var_11_object == 43078) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(540988); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540989, -1, 43079); //@t
				var_0_object->AddReply(540990, -1, 43080); //@t
				return 0;
			}
			if(var_11_object == 43074) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(540984); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540985, -1, 43075); //@t
				var_0_object->AddReply(540986, -1, 43076); //@t
				return 0;
			}
			var_3_string = true;
			bool var_121_bool;
			func_911(var_121_bool);
			if(var_121_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbe";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_449((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_593(var_10_bool, var_11_object);
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
			func_474(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_593(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_526(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_822(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_555(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_804(var_4_bool);
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
	func_706(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_905(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_903(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_907(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_909(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_886(var_77_int);
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
		var_137_bool = !var_25_bool; //@nz
		if(var_137_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_138_object;
	var_16_object = var_138_object;
	func_774();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_774(void)
{
	bool var_140_bool;
	@CameraSwitchToNormal();
	bool var_141_bool;
	func_911(var_141_bool);
	if(var_141_bool != 0) {
	} else {
		@HasAnimationTrack(var_140_bool, "head");
		if(var_140_bool == 0) goto Label_790;
		@UnlookAsync("head");
	}
Label_790:
	
}


void func_903(int var_74_int)
{
	var_74_int = 515569;
}


void func_905(int var_73_int)
{
	var_73_int = 503354;
}


void func_907(string var_75_string)
{
	var_75_string = "ui/NPC_wmask.png";
}


void func_909(string var_76_string)
{
	var_76_string = "ui/NPC_wmask_b.png";
}


void func_526(bool var_16_bool)
{
	var_16_bool = true;
}


void func_911(bool var_68_bool)
{
	var_68_bool = false;
}


// @pe
void func_528(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_701(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_607();
	if(!false) //@nz
		@KillTimer(10);
}


void func_791(string var_126_string)
{
	float var_129_float; float var_130_float;
	@lshGetAnimTimes(var_126_string, var_129_float, var_130_float);
	@lshPlayAnimation(var_129_float, var_130_float, false);
}


void func_798(string var_109_string, bool var_110_bool)
{
	float var_115_float; float var_116_float;
	@lshGetAnimTimes(var_109_string, var_115_float, var_116_float);
	@lshPlayAnimation(var_115_float, var_116_float, var_110_bool);
}


void func_804(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


// @pe
void func_167(object var_2_object, string var_105_string)
{
	bool var_106_bool;
	func_911(var_106_bool);
	if(!var_106_bool) //@nz
		return 0;
	if(var_105_string == var_2_object)
		return 0;
	string var_109_string; bool var_110_bool;
	var_105_string = var_109_string;
	if(var_105_string == "")
		var_110_bool = false;
	else
		var_110_bool = true;
	func_798(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	
}


void func_555(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_693(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_686(bool var_70_bool)
{
	var_70_bool = true;
}


void func_815(void)
{
	bool var_14_bool;
	func_911(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_688(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_693(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_822(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_828(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_701(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_449(float var_11_float, float var_12_float)
{
	
Label_450:
	for(;;) {
		bool var_15_bool;
		func_701(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_458;
		@Hold();
	}
	
Label_458:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_528(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_450;
}
EMIT "Return(); Pop(2)";


void func_706(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_828(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_911(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_768;
		@LookAsyncCamera("head");
	}
Label_768:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_838(string var_95_string, bool var_96_bool)
{
	object var_98_object;
	@FindActor(var_98_object, var_95_string);
	if(!var_98_object) //@nz
		@Trace(("Door " + var_95_string) + " not found");
	else
		var_98_object->SetProperty("locked", var_96_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		object var_93_object; object var_94_object;
		var_93_object = var_86_object;
		var_94_object = var_0_object;
		func_879();
		func_167(var_87_object, "Neutral");
		var_0_object->SetMessage(540977); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540978, 43069, 43068); //@t
		var_0_object->AddReply(540991, -1, 43081); //@t
		goto Label_137;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=89";
	EMIT "Call2 0xa7";
	EMIT "Pop(1)";
	EMIT "Push((int) 540992)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
	EMIT "Pop(0)";
	EMIT "Push((int) 540993)";
	EMIT "Push((int) 43084)";
	EMIT "Push((int) 43083)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
	EMIT "Pop(3)";
	EMIT "Push((int) 541004)";
	EMIT "Push((int) 43086)";
	EMIT "Push((int) 43095)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
	EMIT "Pop(3)";
	EMIT "Push((int) 541005)";
	EMIT "Push((int) 43086)";
	EMIT "Push((int) 43097)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
	EMIT "Pop(3)";
	EMIT "Push((int) 541006)";
	EMIT "Push((int) -1)";
	EMIT "Push((int) 43099)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
	EMIT "Pop(3)";
	EMIT "GOTO 0x89";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_137:
	bool var_124_bool;
	func_911(var_124_bool);
	if(var_124_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_791(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_166;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_166:
		return 0;

	}
	
}


// @pe
void func_593(object var_2_object, string var_3_string)
{
	func_688();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_855(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_474(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_526(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_822(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_862(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_855(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_607(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_701(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_862(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_701(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_654;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_855(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_683;
				}
			} else if(var_37_int != 0) {
				goto Label_683;
			}
			}
					bool var_70_bool;
					func_686(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_678;
			}
		}
	Label_683:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_678:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


// @pe
void func_879(void)
{
	func_838("itheater@door1", false);
}


void func_886(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x385";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


