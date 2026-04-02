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
			func_499();
			if(var_6_int == 15573) {
				bool var_12_bool;
				func_533(var_1_object);
				if(var_12_bool != 0) {
					object var_20_object; object var_21_object;
					var_20_object = var_1_object;
					var_21_object = var_0_object;
					func_527();
					func_141(var_7_bool, "Neutral");
					var_0_object->SetMessage(14350); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14351, 15575, 15574); //@t
					return 0;
				}
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14515, -1, 15754); //@t
				return 0;
			}
			if(var_6_int == 15575) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14352); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14353, 15577, 15576); //@t
				return 0;
			}
			if(var_6_int == 15577) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14354); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14355, 15579, 15578); //@t
				return 0;
			}
			if(var_6_int == 15579) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14357, 15581, 15580); //@t
				return 0;
			}
			if(var_6_int == 15581) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14358); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14359, 15583, 15582); //@t
				return 0;
			}
			if(var_6_int == 15583) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14360); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14361, 15585, 15584); //@t
				return 0;
			}
			if(var_6_int == 15585) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14363, 15587, 15586); //@t
				return 0;
			}
			if(var_6_int == 15587) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14364); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14365, 15589, 15588); //@t
				return 0;
			}
			if(var_6_int == 15589) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14367, -1, 15590); //@t
				return 0;
			}
			var_3_string = true;
			bool var_104_bool;
			func_566(var_104_bool);
			if(var_104_bool != 0)
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
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
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
				func_419(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_506(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_419(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_506(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_421(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_59_int;
	func_562(var_59_int);
	var_14_object->SetNPCName(var_59_int);
	string var_60_string;
	func_564(var_60_string);
	var_14_object->SetPhoto(var_60_string);
	int var_61_int;
	func_545(var_61_int);
	var_14_object->SetPlayerName(var_61_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_70_object; object var_71_object;
	var_8_object = var_70_object;
	var_14_object = var_71_object;
	TaskCall(1);
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_121_bool = !var_17_bool; //@nz
		if(var_121_bool == 0) goto Label_52;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_52:
	object var_122_object;
	var_8_object = var_122_object;
	func_477();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_545(int var_61_int)
{
	int var_63_int;
	@GetVariable("player", var_63_int);
	if(var_63_int == 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x230";
	}
	if(var_63_int == 1) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
}


void func_481(string var_93_string)
{
	@Trace("playing " + var_93_string);
	float var_96_float;
	float var_97_float;
	@lshGetAnimTimes(var_93_string, var_96_float, var_97_float);
	@lshPlayAnimation(var_96_float, var_97_float);
	@Trace("start: " + var_96_float);
	@Trace("end: " + var_97_float);
}


void func_419(bool var_8_bool)
{
	var_8_bool = true;
}


void func_512(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_47_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_47_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_47_float;
}


void func_421(bool var_18_bool, object var_19_object)
{
	cvector var_29_cvector;
	var_19_object->GetPosition(var_29_cvector);
	float var_28_float;
	var_19_object->GetEyesHeight(var_28_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	SetByIndex(var_29_cvector, 1) = (var_36_float + var_28_float);
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	@GetEyesHeight(var_28_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (var_37_float + var_28_float);
	cvector var_31_cvector = var_29_cvector - var_30_cvector;
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (float)0;
	var_40_float = sqrt(var_31_cvector | var_31_cvector);
	var_31_cvector /= var_40_float;
	cvector var_32_cvector = -var_31_cvector;
	cvector var_43_cvector;
	func_512(var_43_cvector, (var_32_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_33_cvector = ((var_31_cvector * 70) + (var_43_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_35_bool;
	@IsOverrideActive(var_35_bool);
	if(var_35_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_30_cvector + var_33_cvector), var_32_cvector);
	var_56_float = GetByIndex(var_33_cvector, 0);
	var_57_float = GetByIndex(var_33_cvector, 2);
	@Rotate(var_56_float, var_57_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
}


void func_522(int var_79_int, string var_80_string)
{
	int var_82_int;
	@GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
}


// @pe
void func_141(object var_2_object, string var_89_string)
{
	bool var_90_bool;
	func_566(var_90_bool);
	if(!var_90_bool) //@nz
		return 0;
	if(var_89_string == var_2_object)
		return 0;
	string var_93_string;
	func_481(var_93_string);
	var_2_object = var_93_string;
}


// @pe
void func_527(void)
{
	@SetVariable("ood11Klara1", 1);
}


void func_562(int var_59_int)
{
	var_59_int = 2865;
}


void func_499(void)
{
	bool var_9_bool;
	func_566(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_564(string var_60_string)
{
	var_60_string = "ui/NPC_Klara.png";
}


// @pe
void func_533(bool var_77_bool)
{
	int var_79_int;
	func_522(var_79_int, "ood11Klara1");
	if(var_79_int == 0) {
		var_77_bool = true;
		return 0;
	}
	var_77_bool = false;
}


void func_566(bool var_90_bool)
{
	var_90_bool = true;
}


void func_506(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_477(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_70_object, object var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_77_bool;
		func_533(var_1_object);
		if(var_77_bool != 0) {
			object var_85_object; object var_86_object;
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_527();
			func_141(var_71_object, "Neutral");
			var_0_object->SetMessage(14350); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14351, 15575, 15574); //@t
		} else {
					func_141(var_71_object, "Neutral");
					var_0_object->SetMessage(14514); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14515, -1, 15754); //@t
		}
	}
	for(;;) {
		bool var_108_bool;
		func_566(var_108_bool);
		if(var_108_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_481(var_2_object);
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


