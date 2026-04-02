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
			func_859();
			if(var_11_object == 24122) {
				bool var_17_bool;
				func_947(var_1_object);
				if(var_17_bool != 0) {
					object var_25_object; object var_26_object;
					var_25_object = var_1_object;
					var_26_object = var_0_object;
					func_928();
					object var_29_object; object var_30_object;
					var_29_object = var_1_object;
					var_30_object = var_0_object;
					func_934();
					object var_41_object; object var_42_object;
					var_41_object = var_1_object;
					var_42_object = var_0_object;
					func_941();
					func_167(var_12_bool, "Neutral");
					var_0_object->SetMessage(522931); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522932, 24124, 24123); //@t
					return 0;
				}
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(523192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523193, -1, 24396); //@t
				var_0_object->AddReply(523194, -1, 24397); //@t
				return 0;
			}
			if(var_11_object == 24124) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(522933); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522934, 24126, 24125); //@t
				var_0_object->AddReply(522956, 24148, 24147); //@t
				return 0;
			}
			if(var_11_object == 24148) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(522957); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522958, 24128, 24149); //@t
				return 0;
			}
			if(var_11_object == 24126) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(522935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522936, 24128, 24127); //@t
				var_0_object->AddReply(522955, 24128, 24146); //@t
				return 0;
			}
			if(var_11_object == 24128) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(522937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522938, 24130, 24129); //@t
				return 0;
			}
			if(var_11_object == 24130) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(522939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522940, 24132, 24131); //@t
				var_0_object->AddReply(522946, 24138, 24137); //@t
				return 0;
			}
			if(var_11_object == 24138) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(522947); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522948, 24134, 24139); //@t
				var_0_object->AddReply(522949, 24141, 24140); //@t
				return 0;
			}
			if(var_11_object == 24141) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(522950); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522951, 24134, 24142); //@t
				var_0_object->AddReply(522952, 24144, 24143); //@t
				return 0;
			}
			if(var_11_object == 24144) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(522953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522954, 24134, 24145); //@t
				return 0;
			}
			if(var_11_object == 24132) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(522941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522942, 24134, 24133); //@t
				var_0_object->AddReply(522945, -1, 24136); //@t
				return 0;
			}
			if(var_11_object == 24134) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(522943); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522944, -1, 24135); //@t
				return 0;
			}
			var_3_string = true;
			bool var_157_bool;
			func_984(var_157_bool);
			if(var_157_bool != 0)
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
		func_493((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_637(var_10_bool, var_11_object);
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
			func_518(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_637(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_570(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_866(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_599(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_848(var_4_bool);
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
	func_750(var_26_bool, var_27_object, 130.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_978(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_976(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_980(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_982(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_959(var_77_int);
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
		var_158_bool = !var_25_bool; //@nz
		if(var_158_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_159_object;
	var_16_object = var_159_object;
	func_818();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_518(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_570(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_866(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_904(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_651(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_745(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_911(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_745(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_698;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_904(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_727;
				}
			} else if(var_37_int != 0) {
				goto Label_727;
			}
			}
					bool var_70_bool;
					func_730(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_722;
			}
		}
	Label_727:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_722:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_911(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_904(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


// @pe
void func_928(void)
{
	@SetVariable("oob12TBirdmask1", 1);
}


// @pe
void func_934(void)
{
	func_887("itheater@door1", false);
}


// @pe
void func_167(object var_2_object, string var_121_string)
{
	bool var_122_bool;
	func_984(var_122_bool);
	if(!var_122_bool) //@nz
		return 0;
	if(var_121_string == var_2_object)
		return 0;
	string var_125_string; bool var_126_bool;
	var_121_string = var_125_string;
	if(var_121_string == "")
		var_126_bool = false;
	else
		var_126_bool = true;
	func_842(var_125_string, var_126_bool);
	var_2_object = var_121_string;
	
}


// @pe
void func_941(void)
{
	@SetVariable("b12q01TheaterIsVisited", 1);
}


void func_818(void)
{
	bool var_161_bool;
	@CameraSwitchToNormal();
	bool var_162_bool;
	func_984(var_162_bool);
	if(var_162_bool != 0) {
	} else {
		@HasAnimationTrack(var_161_bool, "head");
		if(var_161_bool == 0) goto Label_834;
		@UnlookAsync("head");
	}
Label_834:
	
}


// @pe
void func_947(bool var_93_bool)
{
	int var_95_int;
	func_882(var_95_int, "oob12TBirdmask1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


void func_570(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_572(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_745(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_651();
	if(!false) //@nz
		@KillTimer(10);
}


void func_959(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x3ce";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_835(string var_139_string)
{
	float var_142_float; float var_143_float;
	@lshGetAnimTimes(var_139_string, var_142_float, var_143_float);
	@lshPlayAnimation(var_142_float, var_143_float, false);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_947(var_1_object);
		if(var_93_bool != 0) {
			object var_101_object; object var_102_object;
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_928();
			object var_105_object; object var_106_object;
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_934();
			object var_117_object; object var_118_object;
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_941();
			func_167(var_87_object, "Neutral");
			var_0_object->SetMessage(522931); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(522932, 24124, 24123); //@t
		} else {
					func_167(var_87_object, "Neutral");
					var_0_object->SetMessage(523192); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523193, -1, 24396); //@t
					var_0_object->AddReply(523194, -1, 24397); //@t
		}
	}
	for(;;) {
		bool var_137_bool;
		func_984(var_137_bool);
		if(var_137_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_835(var_2_object);
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
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_842(string var_125_string, bool var_126_bool)
{
	float var_131_float; float var_132_float;
	@lshGetAnimTimes(var_125_string, var_131_float, var_132_float);
	@lshPlayAnimation(var_131_float, var_132_float, var_126_bool);
}


void func_976(int var_74_int)
{
	var_74_int = 515571;
}


void func_848(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_978(int var_73_int)
{
	var_73_int = 504029;
}


void func_980(string var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
}


void func_982(string var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
}


void func_599(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_737(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_984(bool var_68_bool)
{
	var_68_bool = false;
}


void func_730(bool var_70_bool)
{
	var_70_bool = true;
}


void func_859(void)
{
	bool var_14_bool;
	func_984(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_732(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_737(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_866(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_872(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_745(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_493(float var_11_float, float var_12_float)
{
	
Label_494:
	for(;;) {
		bool var_15_bool;
		func_745(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_502;
		@Hold();
	}
	
Label_502:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_572(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_494;
}
EMIT "Return(); Pop(2)";


void func_750(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_872(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_984(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_812;
		@LookAsyncCamera("head");
	}
Label_812:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_882(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_887(string var_107_string, bool var_108_bool)
{
	object var_110_object;
	@FindActor(var_110_object, var_107_string);
	if(!var_110_object) //@nz
		@Trace(("Door " + var_107_string) + " not found");
	else
		var_110_object->SetProperty("locked", var_108_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_637(object var_2_object, string var_3_string)
{
	func_732();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


