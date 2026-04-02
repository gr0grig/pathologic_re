// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool)
	{
		if(1 != 0) {
			func_395();
			if(var_7_bool == 15386) {
				func_132(var_8_bool, "Neutral");
				var_0_object->SetMessage(514172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514173, -1, 15387); //@t
				var_0_object->AddReply(539615, -1, 41562); //@t
				return 0;
			}
			var_3_string = true;
			bool var_32_bool;
			func_461(var_32_bool);
			if(var_32_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		var_1_object = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "execute") {
			var_1_object = true;
			@PlayAnimation("all", "bdie");
			@WaitForAnimEnd(var_9_bool);
			if(var_9_bool != 0)
				@LockAnimationEnd("all", "bdie");
		} else {
			string var_17_string;
			var_7_string = var_17_string;
			func_251(var_9_bool, var_17_string);
		}
	
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		if(var_1_object != 0)
			@LockAnimationEnd("all", "bdie");
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		int var_9_int;
		@GetVariable("d11q02", var_9_int);
		if(var_9_int == 2) {
			object var_13_object;
			var_7_object = var_13_object;
			func_196(var_13_object);
		}
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		bool var_7_bool = false;
		if(var_0_object != 0) {
			bool var_9_bool;
			func_295(var_9_bool);
			if(var_9_bool != 0)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			object var_10_object;
			func_402(var_10_object);
			@RemoveActor(var_10_object);
		}
	}

}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
{
	bool var_7_bool;
	func_418(var_7_bool, "quest_d11_02", "actor_unload");
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_297(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_455(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_453(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_457(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_459(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_436(var_76_int);
	var_21_object->SetPlayerName(var_76_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_85_object; object var_86_object;
	var_15_object = var_85_object;
	var_21_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_124_bool = !var_24_bool; //@nz
		if(var_124_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_125_object;
	var_15_object = var_125_object;
	func_365();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_132(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_461(var_93_bool);
	if(!var_93_bool) //@nz
		return 0;
	if(var_92_string == var_2_object)
		return 0;
	string var_96_string; bool var_97_bool;
	var_92_string = var_96_string;
	if(var_92_string == "")
		var_97_bool = false;
	else
		var_97_bool = true;
	func_389(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
}


void func_389(string var_96_string, bool var_97_bool)
{
	float var_102_float; float var_103_float;
	@lshGetAnimTimes(var_96_string, var_102_float, var_103_float);
	@lshPlayAnimation(var_102_float, var_103_float, var_97_bool);
}


void func_395(void)
{
	bool var_10_bool;
	func_461(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_402(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_408(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_418(bool var_7_bool, string var_8_string, string var_9_string)
{
	object var_11_object;
	@FindActor(var_11_object, var_8_string);
	if(var_11_object == null)
		var_7_bool = false;
	@Trigger(var_11_object, var_9_string);
	var_7_bool = true;
}
EMIT "Stack[-1] = 0";


void func_295(bool var_9_bool)
{
	var_9_bool = true;
}


void func_297(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_408(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_461(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_359;
		@LookAsyncCamera("head");
	}
Label_359:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_436(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x1c3";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


// @pe
void func_196(object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	TaskCall(0);
	int var_14_int;
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
}


void func_453(int var_73_int)
{
	var_73_int = 515568;
}


void func_455(int var_72_int)
{
	var_72_int = 503353;
}


void func_457(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png";
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_86_object, "Neutral");
		var_0_object->SetMessage(514172); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(514173, -1, 15387); //@t
		var_0_object->AddReply(539615, -1, 41562); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_111_bool;
	func_461(var_111_bool);
	if(var_111_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_382(var_2_object);
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


void func_459(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png";
}


void func_461(bool var_67_bool)
{
	var_67_bool = false;
}


void func_365(void)
{
	bool var_127_bool;
	@CameraSwitchToNormal();
	bool var_128_bool;
	func_461(var_128_bool);
	if(var_128_bool != 0) {
	} else {
		@HasAnimationTrack(var_127_bool, "head");
		if(var_127_bool == 0) goto Label_381;
		@UnlookAsync("head");
	}
Label_381:
	
}


void func_251(object var_0_object, string var_17_string)
{
	bool var_19_bool;
	if(var_17_string == "cleanup") {
		var_0_object = true;
		@IsLoaded(var_19_bool);
		bool var_22_bool = false;
		if(!var_19_bool) { //@nz
			bool var_24_bool;
			func_295(var_24_bool);
			if(var_24_bool != 0)
				var_22_bool = true;
		}
		if(var_22_bool != 0) {
			object var_25_object;
			func_402(var_25_object);
			@RemoveActor(var_25_object);
		}
	} else if(var_17_string == "restore") {
		var_0_object = false;
	}
	
}


void func_382(string var_113_string)
{
	float var_116_float; float var_117_float;
	@lshGetAnimTimes(var_113_string, var_116_float, var_117_float);
	@lshPlayAnimation(var_116_float, var_117_float, false);
}


