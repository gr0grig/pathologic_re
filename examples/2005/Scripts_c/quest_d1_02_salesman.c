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
			func_759();
			if(var_11_object == 34201) {
				bool var_17_bool = false;
				bool var_18_bool;
				func_827(var_1_object);
				if(!var_18_bool) { //@nz
					bool var_27_bool;
					func_839(var_1_object);
					if(var_27_bool != 0)
						var_17_bool = true;
				}
				if(var_17_bool != 0) {
					object var_33_object; object var_34_object;
					var_33_object = var_1_object;
					var_34_object = var_0_object;
					func_821();
					func_167(var_12_bool, "Neutral");
					var_0_object->SetMessage(532726); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(532727, 34279, 34202); //@t
					var_0_object->AddReply(532802, 34282, 34278); //@t
					return 0;
				}
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(532809); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532810, -1, 34287); //@t
				return 0;
			}
			if(var_11_object == 34279) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(532803); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532805, 34282, 34281); //@t
				var_0_object->AddReply(532804, 34577, 34280); //@t
				return 0;
			}
			if(var_11_object == 34577) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(533066); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533067, 34580, 34578); //@t
				var_0_object->AddReply(533068, -1, 34579); //@t
				return 0;
			}
			if(var_11_object == 34580) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(533069); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533070, 34282, 34581); //@t
				return 0;
			}
			if(var_11_object == 34282) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(532806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532808, 34288, 34285); //@t
				var_0_object->AddReply(532807, -1, 34284); //@t
				return 0;
			}
			if(var_11_object == 34288) {
				func_167(var_12_bool, "Neutral");
				var_0_object->SetMessage(532811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532812, -1, 34289); //@t
				var_0_object->AddReply(532813, -1, 34290); //@t
				return 0;
			}
			var_3_string = true;
			bool var_108_bool;
			func_795(var_108_bool);
			if(var_108_bool != 0)
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
		func_393((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_537(var_10_bool, var_11_object);
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
			func_418(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_537(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_470(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_766(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_499(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_748(var_4_bool);
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
	func_650(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_789(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_787(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_791(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_793(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_851(var_77_int);
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
		var_150_bool = !var_25_bool; //@nz
		if(var_150_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_151_object;
	var_16_object = var_151_object;
	func_718();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_772(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_645(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_393(float var_11_float, float var_12_float)
{
	
Label_394:
	for(;;) {
		bool var_15_bool;
		func_645(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_402;
		@Hold();
	}
	
Label_402:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_472(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_394;
}
EMIT "Return(); Pop(2)";


void func_650(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_772(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_795(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_712;
		@LookAsyncCamera("head");
	}
Label_712:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_782(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


void func_787(int var_74_int)
{
	var_74_int = 531557;
}


void func_789(int var_73_int)
{
	var_73_int = 531556;
}


void func_791(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png";
}


void func_793(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png";
}


// @pe
void func_537(object var_2_object, string var_3_string)
{
	func_632();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_795(bool var_68_bool)
{
	var_68_bool = false;
}


void func_797(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_418(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_470(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_766(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_804(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_797(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


// @pe
void func_167(object var_2_object, string var_113_string)
{
	bool var_114_bool;
	func_795(var_114_bool);
	if(!var_114_bool) //@nz
		return 0;
	if(var_113_string == var_2_object)
		return 0;
	string var_117_string; bool var_118_bool;
	var_113_string = var_117_string;
	if(var_113_string == "")
		var_118_bool = false;
	else
		var_118_bool = true;
	func_742(var_117_string, var_118_bool);
	var_2_object = var_113_string;
	
}


void func_551(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_645(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_804(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_645(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_598;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_797(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_627;
				}
			} else if(var_37_int != 0) {
				goto Label_627;
			}
			}
					bool var_70_bool;
					func_630(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_622;
			}
		}
	Label_627:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_622:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


// @pe
void func_821(void)
{
	@SetVariable("ood1SalesmanLaska1", 1);
}


// @pe
void func_827(bool var_94_bool)
{
	int var_96_int;
	func_782(var_96_int, "d1q02");
	if(var_96_int == 1000)
		var_94_bool = true;
	var_94_bool = false;
}


// @pe
void func_839(bool var_103_bool)
{
	int var_105_int;
	func_782(var_105_int, "ood1SalesmanLaska1");
	if(var_105_int == 0) {
		var_103_bool = true;
		return 0;
	}
	var_103_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool = false;
		bool var_94_bool;
		func_827(var_1_object);
		if(!var_94_bool) { //@nz
			bool var_103_bool;
			func_839(var_1_object);
			if(var_103_bool != 0)
				var_93_bool = true;
		}
		if(var_93_bool != 0) {
			object var_109_object; object var_110_object;
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_821();
			func_167(var_87_object, "Neutral");
			var_0_object->SetMessage(532726); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(532727, 34279, 34202); //@t
			var_0_object->AddReply(532802, 34282, 34278); //@t
		} else {
					func_167(var_87_object, "Neutral");
					var_0_object->SetMessage(532809); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(532810, -1, 34287); //@t
		}
	}
	for(;;) {
		bool var_132_bool;
		func_795(var_132_bool);
		if(var_132_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_735(var_2_object);
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


void func_718(void)
{
	bool var_153_bool;
	@CameraSwitchToNormal();
	bool var_154_bool;
	func_795(var_154_bool);
	if(var_154_bool != 0) {
	} else {
		@HasAnimationTrack(var_153_bool, "head");
		if(var_153_bool == 0) goto Label_734;
		@UnlookAsync("head");
	}
Label_734:
	
}


void func_851(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x362";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_470(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_472(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_645(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_551();
	if(!false) //@nz
		@KillTimer(10);
}


void func_735(string var_134_string)
{
	float var_137_float; float var_138_float;
	@lshGetAnimTimes(var_134_string, var_137_float, var_138_float);
	@lshPlayAnimation(var_137_float, var_138_float, false);
}


void func_742(string var_117_string, bool var_118_bool)
{
	float var_123_float; float var_124_float;
	@lshGetAnimTimes(var_117_string, var_123_float, var_124_float);
	@lshPlayAnimation(var_123_float, var_124_float, var_118_bool);
}


void func_748(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_499(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_637(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_630(bool var_70_bool)
{
	var_70_bool = true;
}


void func_759(void)
{
	bool var_14_bool;
	func_795(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_632(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_637(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_766(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


