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
			func_518();
			if(var_7_bool == 13016) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_570();
			}
			if(var_7_bool == 13017) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_570();
			}
			if(var_6_int == 13013) {
				bool var_22_bool;
				func_576(var_1_object);
				if(var_22_bool != 0) {
					func_141(var_7_bool, "Neutral");
					var_0_object->SetMessage(11803); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(11804, 13015, 13014); //@t
					var_0_object->AddReply(11808, 13019, 13018); //@t
					return 0;
				}
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(12549); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12550, -1, 13719); //@t
				return 0;
			}
			if(var_6_int == 13019) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(11809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11810, 13015, 13020); //@t
				var_0_object->AddReply(11811, 13015, 13022); //@t
				return 0;
			}
			if(var_6_int == 13015) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(11805); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11806, -1, 13016); //@t
				var_0_object->AddReply(11807, -1, 13017); //@t
				return 0;
			}
			var_3_string = true;
			bool var_77_bool;
			func_609(var_77_bool);
			if(var_77_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9e";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_299:
		for(;;) {
			bool var_6_bool;
			func_435(var_6_bool);
			var_9_bool = !var_6_bool; //@nz
			if(var_9_bool == 0) goto Label_307;
			@Hold();
		}
	
	Label_307:
		@Sleep(3);
		func_361();
		goto Label_299;
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_430();
		int var_7_int; object var_8_object;
		func_281(var_8_object, var_7_int, var_8_object);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_359(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_525(var_14_object);
				@RemoveActor(var_14_object);
			}
		}
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_359(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_525(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_9_int, object var_10_object)
{
	var_0_object = var_10_object;
	bool var_20_bool; object var_21_object;
	var_10_object = var_21_object;
	func_440(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_9_int = -2;
		return 8;
	}
	object var_16_object;
	@CreateDialog(var_16_object);
	int var_61_int;
	func_605(var_61_int);
	var_16_object->SetNPCName(var_61_int);
	string var_62_string;
	func_607(var_62_string);
	var_16_object->SetPhoto(var_62_string);
	int var_63_int;
	func_588(var_63_int);
	var_16_object->SetPlayerName(var_63_int);
	bool var_17_bool;
	@IsOverrideActive(var_17_bool);
	if(var_17_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	@DoDialog(var_16_object);
	object var_72_object; object var_73_object;
	var_10_object = var_72_object;
	var_16_object = var_73_object;
	TaskCall(1);
	func_63(var_74_object, var_75_object, var_76_string, var_77_bool, var_72_object, var_73_object);
	TaskReturn();
	bool var_19_bool;
	var_16_object->IsDialogEnd(var_19_bool);
	
	for(;;) {
		var_122_bool = !var_19_bool; //@nz
		if(var_122_bool == 0) goto Label_52;
		@sync();
		var_16_object->IsDialogEnd(var_19_bool);
	}
	
Label_52:
	object var_123_object;
	var_10_object = var_123_object;
	func_496();
	@StopDialog(var_16_object);
	var_16_object->GetReturnValue(-1);
	int var_18_int = var_9_int;
}
EMIT "Stack[-4] = 0";


void func_518(void)
{
	bool var_9_bool;
	func_609(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_525(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_141(object var_2_object, string var_87_string)
{
	bool var_88_bool;
	func_609(var_88_bool);
	if(!var_88_bool) //@nz
		return 0;
	if(var_87_string == var_2_object)
		return 0;
	string var_91_string;
	func_500(var_91_string);
	var_2_object = var_91_string;
}


void func_531(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


// @pe
void func_281(int var_7_int, object var_8_object, object var_11_object)
{
	object var_10_object;
	var_8_object = var_10_object;
	TaskCall(0);
	int var_9_int;
	func_0(var_11_object, var_9_int, var_10_object);
	TaskReturn();
	var_11_object = var_7_int;
}


void func_541(int var_81_int, string var_82_string)
{
	int var_84_int;
	@GetVariable(var_82_string, var_84_int);
	var_84_int = var_81_int;
}


void func_546(string var_33_string, int var_34_int)
{
	string var_36_string = "idle";
	if(var_34_int != 0)
		var_36_string += var_34_int;
	var_36_string = var_33_string;
}


void func_553(int var_27_int)
{
	int var_30_int; bool var_31_bool;
	var_30_int = 0;
	
	for(;;) {
		string var_33_string; int var_34_int;
		var_30_int = var_34_int;
		func_546(var_33_string, var_34_int);
		@HasAnimation(var_31_bool, "all", var_33_string);
		if(!var_31_bool) //@nz
			break;
		var_30_int += 1;
	}
	var_30_int = var_27_int;
}


void func_430(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_435(bool var_6_bool)
{
	bool var_8_bool;
	@IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
}


void func_440(bool var_20_bool, object var_21_object)
{
	cvector var_31_cvector;
	var_21_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_21_object->GetEyesHeight(var_30_float);
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_38_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_39_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_40_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_42_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_531(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * 70) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_20_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector);
	var_58_float = GetByIndex(var_35_cvector, 0);
	var_59_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_58_float, var_59_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_20_bool = true;
}


// @pe
void func_570(void)
{
	@SetVariable("ood5Prisoner1", 1);
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_72_object, object var_73_object)
{
	var_0_object = var_73_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_79_bool;
		func_576(var_72_object);
		if(var_79_bool != 0) {
			func_141(var_73_object, "Neutral");
			var_0_object->SetMessage(11803); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(11804, 13015, 13014); //@t
			var_0_object->AddReply(11808, 13019, 13018); //@t
		} else {
					func_141(var_73_object, "Neutral");
					var_0_object->SetMessage(12549); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12550, -1, 13719); //@t
		}
	}
	for(;;) {
		bool var_109_bool;
		func_609(var_109_bool);
		if(var_109_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_500(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_140;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_140:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


// @pe
void func_576(bool var_79_bool)
{
	int var_81_int;
	func_541(var_81_int, "ood5Prisoner1");
	if(var_81_int == 0) {
		var_79_bool = true;
		return 0;
	}
	var_79_bool = false;
}


void func_588(int var_63_int)
{
	int var_65_int;
	@GetVariable("player", var_65_int);
	if(var_65_int == 0) {
		var_63_int = 200001;
		return 2;
	EMIT "GOTO 0x25b";
	}
	if(var_65_int == 1) {
		var_63_int = 200002;
		return 2;
	}
	var_63_int = 200003;
}


void func_605(int var_61_int)
{
	var_61_int = 3349;
}


void func_607(string var_62_string)
{
	var_62_string = "ui/NPC_None.png";
}


void func_609(bool var_88_bool)
{
	var_88_bool = false;
}


void func_359(bool var_8_bool)
{
	var_8_bool = true;
}


void func_361(void)
{
	int var_20_int; int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_435(var_25_bool);
	if(!var_25_bool) //@nz
		return 14;
	int var_27_int;
	func_553(var_27_int);
	int var_18_int;
	var_27_int = var_18_int;
	int var_19_int = 0;
	
	for(;;) {
		bool var_40_bool = false;
		if(var_19_int < 5) {
			bool var_43_bool;
			func_435(var_43_bool);
			if(var_43_bool != 0)
				var_40_bool = true;
		}
		if(var_40_bool != 0) {
			@irand(var_20_int, 3);
			if(var_20_int == 0) {
				if(var_18_int == 0) goto Label_408;
				@irand(var_21_int, var_18_int);
				string var_49_string; int var_50_int;
				var_21_int = var_50_int;
				func_546(var_49_string, var_50_int);
				@PlayAnimation("all", var_49_string);
				@WaitForAnimEnd(var_22_bool);
				if(!var_22_bool) { //@nz
				} else {
			} else {
			if(var_20_int == 1) {
				@rand(var_23_float, 4);
				@Sleep((var_23_float + 1), var_24_bool);
				if(!var_24_bool) { //@nz
					goto Label_429;
				}
			} else if(var_19_int != 0) {
				goto Label_429;
			}
			}
				var_19_int += 1;
			}
		}
	Label_429:
		return 14;

	}
	
}


// @pe
void func_496(void)
{
	@CameraSwitchToNormal();
}


void func_500(string var_91_string)
{
	@Trace("playing " + var_91_string);
	float var_94_float;
	float var_95_float;
	@lshGetAnimTimes(var_91_string, var_94_float, var_95_float);
	@lshPlayAnimation(var_94_float, var_95_float);
	@Trace("start: " + var_94_float);
	@Trace("end: " + var_95_float);
}


