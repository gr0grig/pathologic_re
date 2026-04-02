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
			func_492();
			if(var_7_bool == 10626) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_550();
				object var_30_object = var_1_object;
				func_566(var_0_object);
			}
			if(var_7_bool == 10627) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_550();
				object var_60_object = var_1_object;
				func_566(var_0_object);
			}
			if(var_6_int == 10619) {
				func_126(var_7_bool, "Neutral");
				var_0_object->SetMessage(9650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9651, 10621, 10620); //@t
				var_0_object->AddReply(9661, 10633, 10632); //@t
				var_0_object->AddReply(9665, 10625, 10638); //@t
				return 0;
			}
			if(var_6_int == 10633) {
				func_126(var_7_bool, "Neutral");
				var_0_object->SetMessage(9662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9663, 10625, 10634); //@t
				var_0_object->AddReply(9664, 10621, 10636); //@t
				return 0;
			}
			if(var_6_int == 10621) {
				func_126(var_7_bool, "Neutral");
				var_0_object->SetMessage(9652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9653, 10623, 10622); //@t
				var_0_object->AddReply(9660, 10625, 10630); //@t
				return 0;
			}
			if(var_6_int == 10623) {
				func_126(var_7_bool, "Neutral");
				var_0_object->SetMessage(9654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9655, 10625, 10624); //@t
				var_0_object->AddReply(9659, 10625, 10628); //@t
				return 0;
			}
			if(var_6_int == 10625) {
				func_126(var_7_bool, "Neutral");
				var_0_object->SetMessage(9656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9657, -1, 10626); //@t
				var_0_object->AddReply(9658, -1, 10627); //@t
				return 0;
			}
			var_3_string = true;
			bool var_129_bool;
			func_653(var_129_bool);
			if(var_129_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8f";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		var_0_object = false;
	
		for(;;) {
			@Sleep(3);
			func_335();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		if(!actor) { //@nz
			actor = true;
			func_404();
			int var_8_int; object var_9_object;
			var_6_object = var_9_object;
			TaskCall(0);
			func_0(var_10_object, var_8_int, var_9_object);
			TaskReturn();
			bool var_113_bool;
			func_509(var_113_bool, "quest_d4_01", "birdmask_done");
		}
	}

}


void func_0(object var_0_object, int var_8_int, object var_9_object)
{
	var_0_object = var_9_object;
	bool var_19_bool; object var_20_object;
	var_9_object = var_20_object;
	func_414(var_19_bool, var_20_object);
	if(!var_19_bool) { //@nz
		var_8_int = -2;
		return 8;
	}
	object var_15_object;
	@CreateDialog(var_15_object);
	int var_60_int;
	func_649(var_60_int);
	var_15_object->SetNPCName(var_60_int);
	string var_61_string;
	func_651(var_61_string);
	var_15_object->SetPhoto(var_61_string);
	int var_62_int;
	func_632(var_62_int);
	var_15_object->SetPlayerName(var_62_int);
	bool var_16_bool;
	@IsOverrideActive(var_16_bool);
	if(var_16_bool != 0) {
		var_8_int = -2;
		return 8;
	}
	@DoDialog(var_15_object);
	object var_71_object; object var_72_object;
	var_9_object = var_71_object;
	var_15_object = var_72_object;
	TaskCall(1);
	func_63(var_73_object, var_74_object, var_75_string, var_76_bool, var_71_object, var_72_object);
	TaskReturn();
	bool var_18_bool;
	var_15_object->IsDialogEnd(var_18_bool);
	
	for(;;) {
		var_111_bool = !var_18_bool; //@nz
		if(var_111_bool == 0) goto Label_52;
		@sync();
		var_15_object->IsDialogEnd(var_18_bool);
	}
	
Label_52:
	object var_112_object;
	var_9_object = var_112_object;
	func_470();
	@StopDialog(var_15_object);
	var_15_object->GetReturnValue(-1);
	int var_17_int = var_8_int;
}
EMIT "Stack[-4] = 0";


void func_582(object var_16_object)
{
	object var_19_object; object var_20_object;
	@GetMainOutdoorScene(var_19_object);
	if(var_19_object == null) {
		@Trace("Can't find main outdoor scene");
		var_20_object = null;
		var_20_object = var_16_object;
	}
	var_19_object->GetMap(var_20_object);
	var_20_object = var_16_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_649(int var_60_int)
{
	var_60_int = 4029;
}


void func_521(float var_27_float)
{
	float var_29_float;
	@GetGameTime(var_29_float);
	var_29_float = var_27_float;
}


void func_651(string var_61_string)
{
	var_61_string = "ui/NPC_Black.png";
}


void func_653(bool var_79_bool)
{
	var_79_bool = false;
}


void func_526(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_335(void)
{
	int var_16_int; int var_17_int; bool var_18_bool; float var_19_float; bool var_20_bool;
	@WaitForAnimEnd();
	bool var_21_bool;
	func_409(var_21_bool);
	if(!var_21_bool) //@nz
		return 14;
	int var_25_int;
	func_533(var_25_int);
	int var_14_int;
	var_25_int = var_14_int;
	int var_15_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_15_int < 5) {
			bool var_41_bool;
			func_409(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			@irand(var_16_int, 3);
			if(var_16_int == 0) {
				if(var_14_int == 0) goto Label_382;
				@irand(var_17_int, var_14_int);
				string var_47_string; int var_48_int;
				var_17_int = var_48_int;
				func_526(var_47_string, var_48_int);
				@PlayAnimation("all", var_47_string);
				@WaitForAnimEnd(var_18_bool);
				if(!var_18_bool) { //@nz
				} else {
			} else {
			if(var_16_int == 1) {
				@rand(var_19_float, 4);
				@Sleep((var_19_float + 1), var_20_bool);
				if(!var_20_bool) { //@nz
					goto Label_403;
				}
			} else if(var_15_int != 0) {
				goto Label_403;
			}
			}
				var_15_int += 1;
			}
		}
	Label_403:
		return 14;

	}
	
}


void func_404(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_533(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_526(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


// @pe
void func_470(void)
{
	@CameraSwitchToNormal();
}


void func_599(object var_32_object, string var_33_string, float var_34_float)
{
	object var_42_object;
	@GetMainOutdoorScene(var_42_object);
	if(var_42_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_40_cvector;
	cvector var_41_cvector;
	bool var_43_bool;
	var_42_object->GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector);
	if(!var_43_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_33_string) + " doesnt exist");
	var_42_object->GetMap(var_32_object);
	if(var_32_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_53_float = GetByIndex(var_40_cvector, 0);
	var_54_float = GetByIndex(var_40_cvector, 2);
	var_32_object->SetMapParams(var_53_float, var_54_float, var_34_float);
}
EMIT "Stack[-2] = 0";


void func_409(bool var_21_bool)
{
	bool var_23_bool;
	@IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
}


void func_474(string var_82_string)
{
	@Trace("playing " + var_82_string);
	float var_85_float;
	float var_86_float;
	@lshGetAnimTimes(var_82_string, var_85_float, var_86_float);
	@lshPlayAnimation(var_85_float, var_86_float);
	@Trace("start: " + var_85_float);
	@Trace("end: " + var_86_float);
}


void func_414(bool var_19_bool, object var_20_object)
{
	cvector var_30_cvector;
	var_20_object->GetPosition(var_30_cvector);
	float var_29_float;
	var_20_object->GetEyesHeight(var_29_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (var_37_float + var_29_float);
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	@GetEyesHeight(var_29_float);
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_38_float + var_29_float);
	cvector var_32_cvector = var_30_cvector - var_31_cvector;
	var_39_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (float)0;
	var_41_float = sqrt(var_32_cvector | var_32_cvector);
	var_32_cvector /= var_41_float;
	cvector var_33_cvector = -var_32_cvector;
	cvector var_44_cvector;
	func_499(var_44_cvector, (var_33_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_34_cvector = ((var_32_cvector * 70) + (var_44_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_36_bool;
	@IsOverrideActive(var_36_bool);
	if(var_36_bool != 0)
		var_19_bool = false;
	@StopWorld();
	@CameraTransit((var_31_cvector + var_34_cvector), var_33_cvector);
	var_57_float = GetByIndex(var_34_cvector, 0);
	var_58_float = GetByIndex(var_34_cvector, 2);
	@Rotate(var_57_float, var_58_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_19_bool = true;
}


void func_550(void)
{
	object var_16_object;
	func_582(var_16_object);
	object var_15_object;
	var_16_object = var_15_object;
	float var_27_float;
	func_521(var_27_float);
	var_15_object->AddMark("d4q01Whitemask", "pt_d4q01_key1", 1, 11523, var_27_float);
}
EMIT "Stack[-1] = 0";


void func_492(void)
{
	bool var_9_bool;
	func_653(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_499(cvector var_44_cvector, cvector var_45_cvector)
{
	float var_48_float = sqrt(var_45_cvector | var_45_cvector);
	if(var_48_float < 0.000001)
		var_44_cvector = [0.0, 0.0, 0.0];
	var_44_cvector = var_45_cvector / var_48_float;
}


// @pe
void func_566(object var_31_object)
{
	object var_35_object;
	func_582(var_35_object);
	object var_32_object;
	var_35_object = var_32_object;
	func_599(var_32_object, "pt_d4q01_whitemask", (float)2);
	object var_55_object;
	func_582(var_55_object);
	var_31_object->ShowMap(var_55_object);
}


void func_632(int var_62_int)
{
	int var_64_int;
	@GetVariable("player", var_64_int);
	if(var_64_int == 0) {
		var_62_int = 200001;
		return 2;
	EMIT "GOTO 0x287";
	}
	if(var_64_int == 1) {
		var_62_int = 200002;
		return 2;
	}
	var_62_int = 200003;
}


void func_509(bool var_113_bool, string var_114_string, string var_115_string)
{
	object var_117_object;
	@FindActor(var_117_object, var_114_string);
	if(var_117_object == null)
		var_113_bool = false;
	@Trigger(var_117_object, var_115_string);
	var_113_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_126(object var_2_object, string var_78_string)
{
	bool var_79_bool;
	func_653(var_79_bool);
	if(!var_79_bool) //@nz
		return 0;
	if(var_78_string == var_2_object)
		return 0;
	string var_82_string;
	func_474(var_82_string);
	var_2_object = var_82_string;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_71_object, object var_72_object)
{
	var_0_object = var_72_object;
	var_1_object = var_71_object;
	var_3_string = false;
	if(1 != 0) {
		func_126(var_72_object, "Neutral");
		var_0_object->SetMessage(9650); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(9651, 10621, 10620); //@t
		var_0_object->AddReply(9661, 10633, 10632); //@t
		var_0_object->AddReply(9665, 10625, 10638); //@t
		goto Label_96;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_96:
	bool var_103_bool;
	func_653(var_103_bool);
	if(var_103_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_474(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_125;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_125:
		return 0;

	}
	
}


