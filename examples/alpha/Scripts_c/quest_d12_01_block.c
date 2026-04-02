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
			func_440();
			if(var_5_int == 16130) {
				func_131(var_6_int, "Neutral");
				var_0_object->SetMessage(14884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14885, 16132, 16131); //@t
				var_0_object->AddReply(14905, 16132, 16151); //@t
				var_0_object->AddReply(14906, 16132, 16153); //@t
				var_0_object->AddReply(14907, 16132, 16155); //@t
				return 0;
			}
			if(var_5_int == 16132) {
				func_131(var_6_int, "Neutral");
				var_0_object->SetMessage(14886); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14887, 16134, 16133); //@t
				var_0_object->AddReply(14893, 16140, 16139); //@t
				var_0_object->AddReply(14899, 16146, 16145); //@t
				return 0;
			}
			if(var_5_int == 16146) {
				func_131(var_6_int, "Neutral");
				var_0_object->SetMessage(14900); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14901, 16148, 16147); //@t
				var_0_object->AddReply(14904, -1, 16150); //@t
				return 0;
			}
			if(var_5_int == 16148) {
				func_131(var_6_int, "Neutral");
				var_0_object->SetMessage(14902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14903, -1, 16149); //@t
				return 0;
			}
			if(var_5_int == 16140) {
				func_131(var_6_int, "Neutral");
				var_0_object->SetMessage(14894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14895, 16142, 16141); //@t
				var_0_object->AddReply(14898, -1, 16144); //@t
				return 0;
			}
			if(var_5_int == 16142) {
				func_131(var_6_int, "Neutral");
				var_0_object->SetMessage(14896); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14897, -1, 16143); //@t
				return 0;
			}
			if(var_5_int == 16134) {
				func_131(var_6_int, "Neutral");
				var_0_object->SetMessage(14888); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14889, 16136, 16135); //@t
				var_0_object->AddReply(14892, -1, 16138); //@t
				return 0;
			}
			if(var_5_int == 16136) {
				func_131(var_6_int, "Neutral");
				var_0_object->SetMessage(14890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14891, -1, 16137); //@t
				return 0;
			}
			var_3_string = true;
			bool var_103_bool;
			func_478(var_103_bool);
			if(var_103_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x94";
	
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
	func_362(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_6_int = -2;
		return 8;
	}
	object var_13_object;
	@CreateDialog(var_13_object);
	int var_58_int;
	func_474(var_58_int);
	var_13_object->SetNPCName(var_58_int);
	string var_59_string;
	func_476(var_59_string);
	var_13_object->SetPhoto(var_59_string);
	int var_60_int;
	func_457(var_60_int);
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
		var_112_bool = !var_16_bool; //@nz
		if(var_112_bool == 0) goto Label_52;
		@sync();
		var_13_object->IsDialogEnd(var_16_bool);
	}
	
Label_52:
	object var_113_object;
	var_7_object = var_113_object;
	func_418();
	@StopDialog(var_13_object);
	var_13_object->GetReturnValue(-1);
	int var_15_int = var_6_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_418(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_131(object var_2_object, string var_76_string)
{
	bool var_77_bool;
	func_478(var_77_bool);
	if(!var_77_bool) //@nz
		return 0;
	if(var_76_string == var_2_object)
		return 0;
	string var_80_string;
	func_422(var_80_string);
	var_2_object = var_80_string;
}


void func_422(string var_80_string)
{
	@Trace("playing " + var_80_string);
	float var_83_float;
	float var_84_float;
	@lshGetAnimTimes(var_80_string, var_83_float, var_84_float);
	@lshPlayAnimation(var_83_float, var_84_float);
	@Trace("start: " + var_83_float);
	@Trace("end: " + var_84_float);
}


void func_457(int var_60_int)
{
	int var_62_int;
	@GetVariable("player", var_62_int);
	if(var_62_int == 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x1d8";
	}
	if(var_62_int == 1) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
}


void func_362(bool var_17_bool, object var_18_object)
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
	func_447(var_42_cvector, (var_31_cvector ^ [0.0, 1.0, 0.0]));
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


void func_447(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_46_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_46_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_46_float;
}


void func_440(void)
{
	bool var_8_bool;
	func_478(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_474(int var_58_int)
{
	var_58_int = 14840;
}


void func_476(string var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
}


void func_478(bool var_77_bool)
{
	var_77_bool = true;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_69_object, object var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if(1 != 0) {
		func_131(var_70_object, "Neutral");
		var_0_object->SetMessage(14884); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(14885, 16132, 16131); //@t
		var_0_object->AddReply(14905, 16132, 16151); //@t
		var_0_object->AddReply(14906, 16132, 16153); //@t
		var_0_object->AddReply(14907, 16132, 16155); //@t
		goto Label_101;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_101:
	bool var_104_bool;
	func_478(var_104_bool);
	if(var_104_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_422(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_130;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_130:
		return 0;

	}
	
}


