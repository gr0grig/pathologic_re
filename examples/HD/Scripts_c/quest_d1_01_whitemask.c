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
			func_533();
			if(var_6_int == 26230) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524905, 26232, 26231); //@t
				var_0_object->AddReply(524911, 26243, 26237); //@t
				return 0;
			}
			if(var_6_int == 26243) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524916); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524917, 26232, 26244); //@t
				var_0_object->AddReply(524918, 26234, 26245); //@t
				return 0;
			}
			if(var_6_int == 26232) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524906); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524907, 26234, 26233); //@t
				var_0_object->AddReply(524913, -1, 26239); //@t
				return 0;
			}
			if(var_6_int == 26234) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524909, -1, 26235); //@t
				var_0_object->AddReply(524914, 26242, 26241); //@t
				return 0;
			}
			if(var_6_int == 26242) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(524915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524919, -1, 26248); //@t
				return 0;
			}
			var_3_string = true;
			bool var_73_bool;
			func_594(var_73_bool);
			if(var_73_bool != 0)
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
		func_316();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		int var_8_int;
		if(!actor) { //@nz
			func_405();
			int var_10_int; object var_11_object;
			var_6_object = var_11_object;
			TaskCall(0);
			func_0(var_12_object, var_10_int, var_11_object);
			TaskReturn();
			actor = true;
			@GetVariable("d1q01bmask", var_8_int);
			@SetVariable("d1q01wmask", 1);
			if(var_8_int != 0) {
				bool var_144_bool;
				func_550(var_144_bool, "quest_d1_01", "remove_masks");
			}
		}
	}

}


void func_0(object var_0_object, int var_10_int, object var_11_object)
{
	var_0_object = var_11_object;
	bool var_21_bool; object var_22_object;
	var_11_object = var_22_object;
	func_415(var_21_bool, var_22_object, 70.0);
	if(!var_21_bool) { //@nz
		var_10_int = -2;
		return 8;
	}
	object var_17_object;
	@CreateDialog(var_17_object);
	int var_69_int;
	func_588(var_69_int);
	var_17_object->SetNPCName(var_69_int);
	int var_70_int;
	func_586(var_70_int);
	var_17_object->SetNPCDescription(var_70_int);
	string var_71_string;
	func_590(var_71_string);
	var_17_object->SetPhoto(var_71_string);
	string var_72_string;
	func_592(var_72_string);
	var_17_object->SetPhoto2(var_72_string);
	int var_73_int;
	func_596(var_73_int);
	var_17_object->SetPlayerName(var_73_int);
	bool var_18_bool;
	@IsOverrideActive(var_18_bool);
	if(var_18_bool != 0) {
		var_10_int = -2;
		return 8;
	}
	@DoDialog(var_17_object);
	object var_82_object; object var_83_object;
	var_11_object = var_82_object;
	var_17_object = var_83_object;
	TaskCall(1);
	func_74(var_84_object, var_85_object, var_86_string, var_87_bool, var_82_object, var_83_object);
	TaskReturn();
	bool var_20_bool;
	var_17_object->IsDialogEnd(var_20_bool);
	
	for(;;) {
		var_131_bool = !var_20_bool; //@nz
		if(var_131_bool == 0) goto Label_63;
		@sync();
		var_17_object->IsDialogEnd(var_20_bool);
	}
	
Label_63:
	object var_132_object;
	var_11_object = var_132_object;
	func_484();
	@StopDialog(var_17_object);
	var_17_object->GetReturnValue(-1);
	int var_19_int = var_10_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_132(object var_2_object, string var_89_string)
{
	bool var_90_bool;
	func_594(var_90_bool);
	if(!var_90_bool) //@nz
		return 0;
	if(var_89_string == var_2_object)
		return 0;
	string var_93_string; bool var_94_bool;
	var_89_string = var_93_string;
	if(var_89_string == "")
		var_94_bool = false;
	else
		var_94_bool = true;
	func_518(var_93_string, var_94_bool);
	var_2_object = var_89_string;
	
}


void func_324(void)
{
	int var_15_int; int var_16_int; bool var_17_bool; float var_18_float; bool var_19_bool;
	@WaitForAnimEnd();
	bool var_20_bool;
	func_410(var_20_bool);
	if(!var_20_bool) //@nz
		return 14;
	int var_24_int;
	func_569(var_24_int);
	int var_13_int;
	var_24_int = var_13_int;
	int var_14_int = 0;
	
	for(;;) {
		bool var_37_bool = false;
		if(var_14_int < 5) {
			bool var_40_bool;
			func_410(var_40_bool);
			if(var_40_bool != 0)
				var_37_bool = true;
		}
		if(var_37_bool != 0) {
			@irand(var_15_int, 3);
			if(var_15_int == 0) {
				if(var_13_int == 0) goto Label_371;
				@irand(var_16_int, var_13_int);
				string var_46_string; int var_47_int;
				var_16_int = var_47_int;
				func_562(var_46_string, var_47_int);
				@PlayAnimation("all", var_46_string);
				@WaitForAnimEnd(var_17_bool);
				if(!var_17_bool) { //@nz
				} else {
			} else {
			if(var_15_int == 1) {
				@rand(var_18_float, 4);
				@Sleep((var_18_float + 1), var_19_bool);
				if(!var_19_bool) { //@nz
					goto Label_400;
				}
			} else if(var_14_int != 0) {
				goto Label_400;
			}
			}
					bool var_49_bool;
					func_403(var_49_bool);
					var_50_bool = !var_49_bool; //@nz
					if(var_50_bool == 0) goto Label_395;
			}
		}
	Label_400:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_395:
		@ResetAAS();
		var_14_int += 1;
	}
	
}


void func_518(string var_93_string, bool var_94_bool)
{
	bool var_100_bool; float var_101_float; float var_102_float;
	@lshHasAnimation(var_100_bool, var_93_string);
	if(var_100_bool != 0) {
		@lshGetAnimTimes(var_93_string, var_101_float, var_102_float);
		@lshPlayAnimation(var_101_float, var_102_float, var_94_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_93_string);
	}
	
}


void func_586(int var_70_int)
{
	var_70_int = 515569;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_82_object, object var_83_object)
{
	var_0_object = var_83_object;
	var_1_object = var_82_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_83_object, "Neutral");
		var_0_object->SetMessage(524904); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(524905, 26232, 26231); //@t
		var_0_object->AddReply(524911, 26243, 26237); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_113_bool;
	func_594(var_113_bool);
	if(var_113_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_502(var_2_object);
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


void func_588(int var_69_int)
{
	var_69_int = 503354;
}


void func_590(string var_71_string)
{
	var_71_string = "ui/NPC_wmask.png";
}


void func_592(string var_72_string)
{
	var_72_string = "ui/NPC_wmask_b.png";
}


void func_594(bool var_64_bool)
{
	var_64_bool = false;
}


void func_403(bool var_49_bool)
{
	var_49_bool = true;
}


void func_596(int var_73_int)
{
	int var_75_int;
	@GetVariable("branch", var_75_int);
	if(var_75_int == 0) {
		var_73_int = 1;
		return 2;
	EMIT "GOTO 0x263";
	}
	if(var_75_int == 1) {
		var_73_int = 2;
		return 2;
	}
	var_73_int = 3;
}


void func_533(void)
{
	bool var_9_bool;
	func_594(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_405(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_410(bool var_20_bool)
{
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
}


void func_540(cvector var_48_cvector, cvector var_49_cvector)
{
	float var_52_float = sqrt(var_49_cvector | var_49_cvector);
	if(var_52_float < 0.000001)
		var_48_cvector = [0.0, 0.0, 0.0];
	var_48_cvector = var_49_cvector / var_52_float;
}


void func_415(bool var_21_bool, object var_22_object, float var_23_float)
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
	func_540(var_48_cvector, (var_37_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_38_cvector = ((var_36_cvector * var_23_float) + (var_48_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_40_bool;
	@IsOverrideActive(var_40_bool);
	if(var_40_bool != 0)
		var_21_bool = false;
	@StopWorld();
	@CameraTransit((var_35_cvector + var_38_cvector), var_37_cvector, true);
	var_62_float = GetByIndex(var_38_cvector, 0);
	var_63_float = GetByIndex(var_38_cvector, 2);
	@Rotate(var_62_float, var_63_float);
	bool var_64_bool;
	func_594(var_64_bool);
	if(var_64_bool != 0) {
	} else {
		@HasAnimationTrack(var_41_bool, "head");
		if(var_41_bool == 0) goto Label_478;
		@LookAsyncCamera("head");
	}
Label_478:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_21_bool = true;
	
}


void func_484(void)
{
	bool var_134_bool;
	@CameraSwitchToNormal(true);
	bool var_136_bool;
	func_594(var_136_bool);
	if(var_136_bool != 0) {
	} else {
		@HasAnimationTrack(var_134_bool, "head");
		if(var_134_bool == 0) goto Label_501;
		@UnlookAsync("head");
	}
Label_501:
	
}


void func_550(bool var_144_bool, string var_145_string, string var_146_string)
{
	object var_148_object;
	@FindActor(var_148_object, var_145_string);
	if(var_148_object == null)
		var_144_bool = false;
	@Trigger(var_148_object, var_146_string);
	var_144_bool = true;
}
EMIT "Stack[-1] = 0";


void func_562(string var_30_string, int var_31_int)
{
	string var_33_string = "idle";
	if(var_31_int != 0)
		var_33_string += var_31_int;
	var_33_string = var_30_string;
}


void func_502(string var_115_string)
{
	bool var_119_bool; float var_120_float; float var_121_float;
	@lshHasAnimation(var_119_bool, var_115_string);
	if(var_119_bool != 0) {
		@lshGetAnimTimes(var_115_string, var_120_float, var_121_float);
		@lshPlayAnimation(var_120_float, var_121_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_115_string);
	}
	
}


void func_569(int var_24_int)
{
	int var_27_int; bool var_28_bool;
	var_27_int = 0;
	
	for(;;) {
		string var_30_string; int var_31_int;
		var_27_int = var_31_int;
		func_562(var_30_string, var_31_int);
		@HasAnimation(var_28_bool, "all", var_30_string);
		if(!var_28_bool) //@nz
			break;
		var_27_int += 1;
	}
	var_27_int = var_24_int;
}


// @pe
void func_316(void)
{
	
	for(;;) {
		func_324();
		@Sleep(3);
	}
}
EMIT "Return(); Pop(0)";


