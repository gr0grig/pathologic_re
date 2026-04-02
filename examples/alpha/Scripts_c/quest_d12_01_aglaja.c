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
			func_269();
			if(var_5_int == 16089) {
				func_121(var_6_int, "Neutral");
				var_0_object->SetMessage(14843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14844, -1, 16090); //@t
				var_0_object->AddReply(14845, -1, 16091); //@t
				return 0;
			}
			var_3_string = true;
			bool var_33_bool;
			func_307(var_33_bool);
			if(var_33_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8a";
	
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
	func_191(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_6_int = -2;
		return 8;
	}
	object var_13_object;
	@CreateDialog(var_13_object);
	int var_58_int;
	func_303(var_58_int);
	var_13_object->SetNPCName(var_58_int);
	string var_59_string;
	func_305(var_59_string);
	var_13_object->SetPhoto(var_59_string);
	int var_60_int;
	func_286(var_60_int);
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
		var_106_bool = !var_16_bool; //@nz
		if(var_106_bool == 0) goto Label_52;
		@sync();
		var_13_object->IsDialogEnd(var_16_bool);
	}
	
Label_52:
	object var_107_object;
	var_7_object = var_107_object;
	func_247();
	@StopDialog(var_13_object);
	var_13_object->GetReturnValue(-1);
	int var_15_int = var_6_int;
}
EMIT "Stack[-4] = 0";


void func_191(bool var_17_bool, object var_18_object)
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
	func_276(var_42_cvector, (var_31_cvector ^ [0.0, 1.0, 0.0]));
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


void func_269(void)
{
	bool var_8_bool;
	func_307(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_303(int var_58_int)
{
	var_58_int = 13334;
}


void func_305(string var_59_string)
{
	var_59_string = "ui/NPC_Aglaja.png";
}


void func_307(bool var_77_bool)
{
	var_77_bool = true;
}


void func_276(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_46_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_46_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_46_float;
}


// @pe
void func_247(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_121(object var_2_object, string var_76_string)
{
	bool var_77_bool;
	func_307(var_77_bool);
	if(!var_77_bool) //@nz
		return 0;
	if(var_76_string == var_2_object)
		return 0;
	string var_80_string;
	func_251(var_80_string);
	var_2_object = var_80_string;
}


void func_251(string var_80_string)
{
	@Trace("playing " + var_80_string);
	float var_83_float;
	float var_84_float;
	@lshGetAnimTimes(var_80_string, var_83_float, var_84_float);
	@lshPlayAnimation(var_83_float, var_84_float);
	@Trace("start: " + var_83_float);
	@Trace("end: " + var_84_float);
}


void func_286(int var_60_int)
{
	int var_62_int;
	@GetVariable("player", var_62_int);
	if(var_62_int == 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x12d";
	}
	if(var_62_int == 1) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_69_object, object var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if(1 != 0) {
		func_121(var_70_object, "Neutral");
		var_0_object->SetMessage(14843); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(14844, -1, 16090); //@t
		var_0_object->AddReply(14845, -1, 16091); //@t
		goto Label_91;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_91:
	bool var_98_bool;
	func_307(var_98_bool);
	if(var_98_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_251(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_120;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_120:
		return 0;

	}
	
}


