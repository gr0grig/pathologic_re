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
			func_684();
			if(var_12_bool == 31833) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_746();
			}
			if(var_11_object == 31832) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(530466); //@t
				var_0_object->ClearReplies(); //@t
				bool var_36_bool;
				func_752(var_1_object);
				if(var_36_bool != 0)
					var_0_object->AddReply(530467, 32813, 31833); //@t
				var_0_object->AddReply(530470, -1, 31836); //@t
				return 0;
			}
			if(var_11_object == 32813) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(531463); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531468, 32819, 32818); //@t
				var_0_object->AddReply(531464, 31834, 32814); //@t
				var_0_object->AddReply(531465, 32816, 32815); //@t
				return 0;
			}
			if(var_11_object == 32816) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(531466); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531467, 32819, 32817); //@t
				return 0;
			}
			if(var_11_object == 32819) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(531469); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531470, -1, 32820); //@t
				return 0;
			}
			if(var_11_object == 31834) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(530468); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530469, -1, 31835); //@t
				var_0_object->AddReply(531471, -1, 32822); //@t
				return 0;
			}
			var_3_string = true;
			bool var_87_bool;
			func_744(var_87_bool);
			if(var_87_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa0";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_318((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_462(var_10_bool, var_11_object);
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
			func_343(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_462(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_395(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_691(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_424(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_673(var_4_bool);
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
	func_575(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_738(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_736(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_740(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_742(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_764(var_77_int);
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
		var_133_bool = !var_25_bool; //@nz
		if(var_133_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_134_object;
	var_16_object = var_134_object;
	func_643();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_643(void)
{
	bool var_136_bool;
	@CameraSwitchToNormal();
	bool var_137_bool;
	func_744(var_137_bool);
	if(var_137_bool != 0) {
	} else {
		@HasAnimationTrack(var_136_bool, "head");
		if(var_136_bool == 0) goto Label_659;
		@UnlookAsync("head");
	}
Label_659:
	
}


// @pe
void func_137(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_744(var_94_bool);
	if(!var_94_bool) //@nz
		return 0;
	if(var_93_string == var_2_object)
		return 0;
	string var_97_string; bool var_98_bool;
	var_93_string = var_97_string;
	if(var_93_string == "")
		var_98_bool = false;
	else
		var_98_bool = true;
	func_667(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_395(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_397(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_570(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_476();
	if(!false) //@nz
		@KillTimer(10);
}


void func_660(string var_122_string)
{
	float var_125_float; float var_126_float;
	@lshGetAnimTimes(var_122_string, var_125_float, var_126_float);
	@lshPlayAnimation(var_125_float, var_126_float, false);
}


void func_667(string var_97_string, bool var_98_bool)
{
	float var_103_float; float var_104_float;
	@lshGetAnimTimes(var_97_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float, var_98_bool);
}


void func_673(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_424(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_562(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_555(bool var_70_bool)
{
	var_70_bool = true;
}


void func_684(void)
{
	bool var_14_bool;
	func_744(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_557(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_562(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_691(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_697(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_570(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_318(float var_11_float, float var_12_float)
{
	
Label_319:
	for(;;) {
		bool var_15_bool;
		func_570(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_327;
		@Hold();
	}
	
Label_327:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_397(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_319;
}
EMIT "Return(); Pop(2)";


void func_575(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_697(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_744(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_637;
		@LookAsyncCamera("head");
	}
Label_637:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_707(int var_108_int, string var_109_string)
{
	int var_111_int;
	@GetVariable(var_109_string, var_111_int);
	var_111_int = var_108_int;
}


void func_712(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_87_object, "Neutral");
		var_0_object->SetMessage(530466); //@t
		var_0_object->ClearReplies(); //@t
		bool var_106_bool;
		func_752(var_86_object);
		if(var_106_bool != 0)
			var_0_object->AddReply(530467, 32813, 31833); //@t
		var_0_object->AddReply(530470, -1, 31836); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_120_bool;
	func_744(var_120_bool);
	if(var_120_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_660(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_136;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_136:
		return 0;

	}
	
}


// @pe
void func_462(object var_2_object, string var_3_string)
{
	func_557();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_719(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_712(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_343(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_395(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_691(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_476(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_570(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_719(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_570(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_523;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_712(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_552;
				}
			} else if(var_37_int != 0) {
				goto Label_552;
			}
			}
					bool var_70_bool;
					func_555(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_547;
			}
		}
	Label_552:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_547:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_736(int var_74_int)
{
	var_74_int = 515597;
}


void func_738(int var_73_int)
{
	var_73_int = 514841;
}


void func_740(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png";
}


void func_742(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png";
}


void func_744(bool var_68_bool)
{
	var_68_bool = false;
}


// @pe
void func_746(void)
{
	@SetVariable("oob10Officer1", 1);
}


// @pe
void func_752(bool var_106_bool)
{
	int var_108_int;
	func_707(var_108_int, "oob10Officer1");
	if(var_108_int == 0) {
		var_106_bool = true;
		return 0;
	}
	var_106_bool = false;
}


void func_764(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x30b";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


