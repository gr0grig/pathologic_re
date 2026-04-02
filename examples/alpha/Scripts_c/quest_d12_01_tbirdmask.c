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
			func_469();
			if(var_5_int == 16594) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15499, 16596, 16595); //@t
				return 0;
			}
			if(var_5_int == 16596) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15500); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15501, 16598, 16597); //@t
				var_0_object->AddReply(15523, 16620, 16619); //@t
				return 0;
			}
			if(var_5_int == 16620) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15524); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15525, -1, 16621); //@t
				return 0;
			}
			if(var_5_int == 16598) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15503, 16600, 16599); //@t
				var_0_object->AddReply(15522, -1, 16618); //@t
				return 0;
			}
			if(var_5_int == 16600) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15504); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15505, 16602, 16601); //@t
				return 0;
			}
			if(var_5_int == 16602) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15507, 16604, 16603); //@t
				var_0_object->AddReply(15513, 16610, 16609); //@t
				return 0;
			}
			if(var_5_int == 16610) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15515, -1, 16611); //@t
				var_0_object->AddReply(15516, 16613, 16612); //@t
				return 0;
			}
			if(var_5_int == 16613) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15517); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15518, -1, 16614); //@t
				var_0_object->AddReply(15519, 16616, 16615); //@t
				return 0;
			}
			if(var_5_int == 16616) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15520); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15521, -1, 16617); //@t
				return 0;
			}
			if(var_5_int == 16604) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15508); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15509, 16606, 16605); //@t
				var_0_object->AddReply(15512, -1, 16608); //@t
				return 0;
			}
			if(var_5_int == 16606) {
				func_116(var_6_int, "Neutral");
				var_0_object->SetMessage(15510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15511, -1, 16607); //@t
				return 0;
			}
			var_3_string = true;
			bool var_118_bool;
			func_507(var_118_bool);
			if(var_118_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x85";
	
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
	func_391(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_6_int = -2;
		return 8;
	}
	object var_13_object;
	@CreateDialog(var_13_object);
	int var_58_int;
	func_503(var_58_int);
	var_13_object->SetNPCName(var_58_int);
	string var_59_string;
	func_505(var_59_string);
	var_13_object->SetPhoto(var_59_string);
	int var_60_int;
	func_486(var_60_int);
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
		var_103_bool = !var_16_bool; //@nz
		if(var_103_bool == 0) goto Label_52;
		@sync();
		var_13_object->IsDialogEnd(var_16_bool);
	}
	
Label_52:
	object var_104_object;
	var_7_object = var_104_object;
	func_447();
	@StopDialog(var_13_object);
	var_13_object->GetReturnValue(-1);
	int var_15_int = var_6_int;
}
EMIT "Stack[-4] = 0";


void func_451(string var_80_string)
{
	@Trace("playing " + var_80_string);
	float var_83_float;
	float var_84_float;
	@lshGetAnimTimes(var_80_string, var_83_float, var_84_float);
	@lshPlayAnimation(var_83_float, var_84_float);
	@Trace("start: " + var_83_float);
	@Trace("end: " + var_84_float);
}


void func_486(int var_60_int)
{
	int var_62_int;
	@GetVariable("player", var_62_int);
	if(var_62_int == 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x1f5";
	}
	if(var_62_int == 1) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
}


void func_391(bool var_17_bool, object var_18_object)
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
	func_476(var_42_cvector, (var_31_cvector ^ [0.0, 1.0, 0.0]));
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
void func_447(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_116(object var_2_object, string var_76_string)
{
	bool var_77_bool;
	func_507(var_77_bool);
	if(!var_77_bool) //@nz
		return 0;
	if(var_76_string == var_2_object)
		return 0;
	string var_80_string;
	func_451(var_80_string);
	var_2_object = var_80_string;
}


void func_469(void)
{
	bool var_8_bool;
	func_507(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_503(int var_58_int)
{
	var_58_int = 4029;
}


void func_505(string var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
}


void func_507(bool var_77_bool)
{
	var_77_bool = false;
}


void func_476(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_46_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_46_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_46_float;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_69_object, object var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if(1 != 0) {
		func_116(var_70_object, "Neutral");
		var_0_object->SetMessage(15498); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(15499, 16596, 16595); //@t
		goto Label_86;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_86:
	bool var_95_bool;
	func_507(var_95_bool);
	if(var_95_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_451(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_115;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_115:
		return 0;

	}
	
}


